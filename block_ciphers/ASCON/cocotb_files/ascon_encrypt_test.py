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


def setup_dut(dut):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD, "ns").start())
    dut.rst.value = 0


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


async def n_cycles_clock(dut, n):
    for i in range(0, n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)


@cocotb.test()
async def test(dut, index=0):

    setup_dut(dut)
    await rst_function_test(dut)


n = 0x40
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
