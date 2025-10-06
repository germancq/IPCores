#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : speck_key_schedule_test.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 06.10.2025
# Last Modified Date: 06.10.2025
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>

import os
import random
import sys

import cocotb
import numpy as np
import speck
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.triggers import FallingEdge, RisingEdge, Timer

CLK_PERIOD = 20


def setup_dut(dut, key):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD, "ns").start())
    dut.rst.value = 0
    dut.start.value = 0
    dut.key.value = key


async def rst_function_test(dut):
    dut.rst.value = 1
    await n_cycles_clock(dut, 1)
    assert (
        dut.current_state.value == dut.IDLE.value
    ), f"ERROR STATE IN RST, STATE={dut.current_state.value}"
    await n_cycles_clock(dut, 10)
    assert (
        dut.current_state.value == dut.IDLE.value
    ), f"ERROR STATE IN RST, STATE={dut.current_state.value}"

    assert dut.rk_counter_dout.value == 0, f"ERROR IDLE in counter"
    for i in range(0, dut.T.value):
        assert dut.round_keys[i].value == 0, f"ERROR RST in round key {i}"


async def preambule_test(dut, speck_sw, key):
    # preambule in speck_sw
    for i in range(0, speck_sw.T):
        speck_sw.roundkeys.insert(i, 0)
        speck_sw.l_keys.insert(i, 0)
    for i in range(0, speck_sw.m):
        speck_sw.l_keys.insert(i, 0)

    speck_sw.roundkeys[0] = key & ((2 ** (speck_sw.n)) - 1)

    for i in range(0, speck_sw.m - 1):
        sub_key = (key >> ((speck_sw.n) * (i + 1))) & ((2 ** (speck_sw.n)) - 1)
        speck_sw.l_keys[i] = sub_key
    ############################################

    dut.rst.value = 0
    await n_cycles_clock(dut, 1)
    assert (
        dut.current_state.value == dut.IDLE.value
    ), f"ERROR STATE IN RST, STATE={dut.current_state.value}"

    dut.start.value = 1
    await n_cycles_clock(dut, 1)

    assert (
        dut.round_keys[0].value == speck_sw.roundkeys[0]
    ), f"ERROR IN PREAMBULE, rk0 expected = {hex(speck_sw.roundkeys[0])} calculated = {hex(dut.round_keys[0].value)}"

    for i in range(0, dut.M.value - 1):
        assert (
            dut.l_keys_dout[i].value == speck_sw.l_keys[i]
        ), f"ERROR in l_keys{i}, expected = {hex(speck_sw.l_keys[i])}, calculated = {hex(dut.l_keys_dout[i].value)} "


async def key_schedule_loop_test(dut, speck_sw):

    i = 0

    while True:
        ######################################
        l_aux = i ^ (
            (
                speck_sw.roundkeys[i]
                + speck_sw.ror(speck_sw.n, speck_sw.l_keys[i], speck_sw.alfa)
            )
            % (2**speck_sw.n)
        )
        # print("l_aux is {}".format(hex(l_aux)))

        speck_sw.l_keys[i + speck_sw.m - 1] = l_aux

        k_aux = (
            speck_sw.rol(speck_sw.n, speck_sw.roundkeys[i], speck_sw.beta)
            ^ speck_sw.l_keys[i + speck_sw.m - 1]
        )

        speck_sw.roundkeys[i + 1] = k_aux
        ###############################################
        print("ciclo {}".format(i))

        assert (
            dut.current_state.value == dut.CALC_AUX.value
        ), f"ERROR STATE IN CALC_AUX, STATE={dut.current_state.value}"

        await n_cycles_clock(dut, 1)

        assert (
            dut.l_keys_dout[i + dut.M.value - 1].value == l_aux
        ), f"ERROR IN L_AUX, expected = {hex(l_aux)}, calculated = {hex(dut.l_keys_dout[i + dut.M.value - 1])}"

        assert (
            dut.current_state.value == dut.CALC_RK.value
        ), f"ERROR STATE IN CALC_RK, STATE={dut.current_state.value}"

        await n_cycles_clock(dut, 1)

        assert (
            dut.round_keys[i + 1].value == k_aux
        ), f"ERROR IN RK, expected = {hex(k_aux)}, calculated = {hex(dut.round_keys[i+1])}"

        assert (
            dut.current_state.value == dut.UPDATE_COUNTER.value
        ), f"ERROR STATE IN UPDATE_COUNTER, STATE={dut.current_state.value}"

        if i == dut.T.value - 2:
            return

        i = i + 1

        await n_cycles_clock(dut, 1)


async def end_state_function_test(dut, speck_sw):
    await n_cycles_clock(dut, 1)

    assert (
        dut.current_state.value == dut.END_STATE.value
    ), f"ERROR STATE IN END, STATE={dut.current_state.value}"

    assert dut.end_signal.value == 1, f"ERROR in end_round signal"

    for i in range(0, dut.T.value):
        assert (
            dut.round_keys[i].value == speck_sw.roundkeys[i]
        ), f"ERROR in RK{i}, expected = {hex(speck_sw.roundkeys[i])}, calculated = {hex(dut.round_keys[i].value)} "


async def n_cycles_clock(dut, n):
    for i in range(0, n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)


@cocotb.test()
async def test(dut, index=0):
    N = dut.N.value
    M = dut.M.value
    T = dut.T.value

    key = random.getrandbits(M * N)
    plaintext = random.getrandbits(2 * N)
    speck_cipher_sw = speck.SPECK(2 * N, M * N)

    setup_dut(dut, key)

    await rst_function_test(dut)
    await preambule_test(dut, speck_cipher_sw, key)
    await key_schedule_loop_test(dut, speck_cipher_sw)

    speck_cipher_sw_2 = speck.SPECK(2 * N, M * N)
    speck_cipher_sw_2.key_schedule(key)

    await end_state_function_test(dut, speck_cipher_sw_2)


num = 0x15
factory = TestFactory(test)

factory.add_option("index", range(0, num))
factory.generate_tests()
