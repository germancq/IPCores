#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : clefia_test.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 10.03.2025
# Last Modified Date: 10.03.2025
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>
import os
import random
import sys

import clefia
import cocotb
import numpy as np
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.triggers import FallingEdge, RisingEdge, Timer

CLK_PERIOD = 20


def setup_dut(dut, key, plaintext):
    print("setup block cipher")
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst.value = 0
    dut.key.value = key
    dut.block_i.value = plaintext
    dut.rq_data = 1


async def n_cycles_clock(dut, n):
    for i in range(0, n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)


@cocotb.test()
async def test(dut, index=0):

    clefia_sw = clefia.CLEFIA()
    key = random.getrandbits(dut.KEY_LEN.value)
    plaintext = random.getrandbits(128)

    key = 0xFFEEDDCCBBAA99887766554433221100
    plaintext = 0x000102030405060708090A0B0C0D0E0F

    setup_dut(dut, key, plaintext)

    expected_wk, expected_rk = clefia_sw.key_schedule(key, dut.KEY_LEN.value)
    expected_result = clefia_sw.encrypt(plaintext, expected_wk, expected_rk)

    while dut.end_key_generation.value == 0:
        print("waiting for key_schedule")
        await n_cycles_clock(dut, 1)

    await n_cycles_clock(dut, 1)
    dut.rq_data.value = 0

    while dut.end_signal.value == 0:
        print("waiting for encrypt")
        await n_cycles_clock(dut, 1)

    await n_cycles_clock(dut, 1)
    print(hex(dut.enc_block_i[0].value))
    print(hex(dut.enc_block_i[1].value))
    print(hex(dut.enc_block_i[2].value))
    print(hex(dut.enc_block_i[3].value))
    print(hex(dut.result_enc[0].value))
    print(hex(dut.result_enc[1].value))
    print(hex(dut.result_enc[2].value))
    print(hex(dut.result_enc[3].value))
    assert hex(dut.block_o.value) == hex(
        expected_result
    ), f"ERROR IN RESULT expected={hex(expected_result)} calculated={hex(dut.block_o.value)}"


n = 10
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
