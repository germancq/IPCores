#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : ascon_encrypt_test.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date      ,       : 21.10.2025
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
    print("initial_state_test")
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

    check_state(dut, ascon_sw)


async def xor_key_state_test(dut, ascon_sw):
    print("xor_key_state_test")
    await n_cycles_clock(dut, 1)
    assert (
        dut.current_state.value == dut.XOR_KEY.value
    ), f"ERROR STATE IN XOR_KEY, STATE={dut.current_state.value}"

    print(hex(ascon_sw.key_0))
    print(hex(dut.key_0.value))
    print(hex(ascon_sw.key_1))
    print(hex(dut.key_1.value))
    ascon_sw.state_array[4] = ascon_sw.state_array[4] ^ ascon_sw.key_0
    ascon_sw.state_array[3] = ascon_sw.state_array[3] ^ ascon_sw.key_1

    await n_cycles_clock(dut, 1)

    check_state(dut, ascon_sw)


async def associated_data_test(dut, ascon_sw):
    print("associated_data_test")
    assert (
        dut.current_state.value == dut.ASSOCIATED_DATA.value
    ), f"ERROR STATE IN ASSOCIATED_DATA, STATE={dut.current_state.value}"

    a_data_endian = ascon_sw.parse(dut.a_data.value, 8)
    a_data_reord = 0
    i = 0
    for a_d in a_data_endian:
        a_data_reord = (a_d << (8 * i)) + a_data_reord
        i = i + 1

    assert (
        dut.a_data_reord.value == a_data_reord
    ), f"ERROR reording a_data, expected={hex(a_data_reord)} calculated = {hex(dut.a_data_reord.value)}"

    associated_data = ascon_sw.parse(a_data_reord, 128)
    len_a_data = len(associated_data)
    associated_data[len_a_data - 1] = ascon_sw.pad(associated_data[len_a_data - 1], 128)
    for a in associated_data:
        ascon_sw.state_array[0] = ascon_sw.state_array[0] ^ a
        print(hex(a))
        print(hex(ascon_sw.state_array[0]))

    print(hex(dut.aux_var.value))
    print(hex(dut.state_ascon_dout[0].value))

    await n_cycles_clock(dut, 1)
    check_state(dut, ascon_sw)

    ascon_sw.ascon_permutation(dut.b.value)
    await permutation_b_test(dut)

    check_state(dut, ascon_sw)


async def permutation_a_test(dut):
    while dut.current_state.value != dut.ASCON_PERMUTATION_A_2:
        await n_cycles_clock(dut, 1)


async def permutation_b_test(dut):
    while dut.current_state.value != dut.ASCON_PERMUTATION_B_2:
        await n_cycles_clock(dut, 1)


def check_state(dut, ascon_sw):
    for i in range(0, 5):
        assert (
            dut.state_ascon_dout[i].value == ascon_sw.state_array[i]
        ), f"ERROR in state {i} on state_test, expected = {hex(ascon_sw.state_array[i])}, calculated = {hex(dut.state_ascon_dout[i].value)}"


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
    await xor_key_state_test(dut, ascon_sw)
    await associated_data_test(dut, ascon_sw)


n = 0x4
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
