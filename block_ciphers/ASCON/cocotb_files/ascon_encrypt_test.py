#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : ascon_encrypt_test.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 21.10.2025
# Last Modified Date: 21.10.2025
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>

import os
import random
import sys

import ascon_aead
import cocotb
import numpy as np
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.triggers import FallingEdge, RisingEdge, Timer

CLK_PERIOD = 20


def setup_dut(dut, key, nonce, plaintext, a_data):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD, "ns").start())
    dut.rst.value = 0
    dut.start.value = 0
    dut.key.value = key
    dut.nonce.value = nonce
    dut.plaintext.value = plaintext
    dut.a_data.value = a_data


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


async def initial_state_test(dut, ascon_sw):
    dut.rst.value = 0
    await n_cycles_clock(dut, 5)
    assert (
        dut.current_state.value == dut.IDLE.value
    ), f"ERROR STATE IN RST, STATE={dut.current_state.value}"
    dut.start.value = 1
    await n_cycles_clock(dut, 1)
    assert (
        dut.current_state.value == dut.INITIAL_STATE.value
    ), f"ERROR STATE IN INITIAL_STATE, STATE={dut.current_state.value}"

    await permutation_a_test(dut)

    ascon_sw.get_initial_state()
    ascon_sw.ascon_permutation(dut.a.value)

    for i in range(0, 5):
        assert (
            dut.state_ascon_dout[i].value == ascon_sw.state_array[i]
        ), f"ERROR in state {i} on initial_state_test, expected = {hex(ascon_sw.state_array[i])}, calculated = {hex(dut.state_ascon_dout[i].value)}"


async def permutation_a_test(dut):
    while dut.current_state.value != dut.ASCON_PERMUTATION_A_2:
        await n_cycles_clock(dut, 1)


async def n_cycles_clock(dut, n):
    for i in range(0, n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)


@cocotb.test()
async def test(dut, index=0):

    # plaintext = random.getrandbits(dut.rate.value * 8)
    # key = random.getrandbits(dut.k.value)
    # nonce = random.getrandbits(128)
    # a_data = random.getrandbits(dut.a_len.value)
    plaintext = 0x6173636F6E
    key = 0x54B6A187FB0A1C64925C66F205FBA5BF
    nonce = 0xC7B7C0CECF7DE4C7A11453474216B1A3
    a_data = 0x4153434F4E

    ascon_sw = ascon_aead.ASCON_AEAD(key, nonce)

    setup_dut(dut, key, nonce, plaintext, a_data)
    await rst_function_test(dut)
    await initial_state_test(dut, ascon_sw)


n = 0x4
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
