#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : speck_round_function_test.py
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


@cocotb.test()
async def test(dut, index=0):

    N = dut.N.value
    M = 3
    if N == 16:
        M = 4

    speck_cipher_sw = speck.SPECK(2 * N, M * N)
    x_generated = random.getrandbits(N)
    y_generated = random.getrandbits(N)
    rk_generated = random.getrandbits(N)

    dut.x.value = x_generated
    dut.y.value = y_generated
    dut.rk.value = rk_generated

    await Timer(10, units="ns")

    expected_x1, expected_y1 = speck_cipher_sw.feistel_sub0(
        x_generated, y_generated, rk_generated
    )

    expected_x2, expected_y2 = speck_cipher_sw.feistel_sub1(expected_y1, expected_x1)

    print(
        "rk = {}, x={} , y={}".format(
            hex(rk_generated), hex(x_generated), hex(y_generated)
        )
    )

    assert (
        dut.x1.value == expected_x1
    ), f"ERROR with x1, with N = {N}, expected_value = {hex(expected_x1)} and calculated = {hex(dut.x1.value)}"

    assert (
        dut.y1.value == expected_y1
    ), f"ERROR with y1, with N = {N}, expected_value = {hex(expected_y1)} and calculated = {hex(dut.y1.value)}"

    assert (
        dut.x_new.value == expected_x2
    ), f"ERROR with x2, with N = {N}, expected_value = {hex(expected_x2)} and calculated = {hex(dut.x_new.value)}"

    assert (
        dut.y_new.value == expected_y2
    ), f"ERROR with y2, with N = {N}, expected_value = {hex(expected_y2)} and calculated = {hex(dut.y_new.value)}"


n = 0x15
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
