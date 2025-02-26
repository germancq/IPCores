#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : gen_con_test.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 26.02.2025
# Last Modified Date: 26.02.2025
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>
import os
import random
import sys

import clefia
import cocotb
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.triggers import FallingEdge, RisingEdge, Timer


@cocotb.test()
async def test(dut, index=0):

    clefia_sw = clefia.CLEFIA()
    iv = 0x428A
    l = 30
    if dut.KEY_LEN.value == 192:
        iv = 0x7137
        l = 42
    if dut.KEY_LEN.value == 256:
        iv = 0xB5C0
        l = 46
    expected_result = clefia_sw.generate_constants(iv, l)[1]
    await Timer(10, units="ns")

    for i in range(0, dut.NUMBER_CON):

        assert hex(dut.CON[i].value) == hex(
            expected_result[i]
        ), f"ERROR, EXPECTED value should be {hex(expected_result[i])}, however hdl value is {hex(dut.CON[i].value)}"


n = 0x1
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
