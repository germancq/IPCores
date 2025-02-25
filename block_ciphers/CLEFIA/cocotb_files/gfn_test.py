#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : gfn_test.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 25.02.2025
# Last Modified Date: 25.02.2025
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


def setup_block_cipher(dut, blk_i, rk):
    print("setup block cipher")
    # cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst.value = 0
    for i in range(0, dut.d.value):
        aux = random.getrandbits(32)
        dut.block_i[i].value = aux
        blk_i[i] = aux

    for i in range(0, int(dut.d.value / 2) * dut.r.value):
        aux = random.getrandbits(32)
        dut.round_keys[i].value = aux
        rk[i] = aux


async def rst_function_test(dut):
    print("rst function")
    dut.rst.value = 1
    print("ciclos_reloj")
    await n_cycles_clock(dut, 1)
    print("check 1")
    assert (
        dut.current_state.value == dut.STEP_1.value
    ), f"ERROR STATE IN STEP_1, STATE={dut.current_state.value}"
    await n_cycles_clock(dut, 10)
    print("check 2")

    assert (
        dut.current_state.value == dut.STEP_1.value
    ), f"ERROR STATE IN STEP_1, STATE={dut.current_state.value}"

    print("check 3")
    assert (
        dut.dout_rounds_counter.value == 0
    ), f"ERROR STATE IN STEP_1, dout_rounds_counter={dut.current_state.value}, should be 0"

    for i in range(0, dut.d.value):
        print(i)
        assert (
            dut.T_dout[i].value == dut.block_i[i].value
        ), f"ERROR in STEP 1, T values incorrect"

    dut.rst.value = 0


async def n_cycles_clock(dut, n):
    for i in range(0, n):
        print("a")
        dut.clk.value = 0
        await Timer(int(CLK_PERIOD / 2), units="ns")
        print("b")
        dut.clk.value = 1
        await Timer(int(CLK_PERIOD / 2), units="ns")


@cocotb.test()
async def test(dut, index=0):

    blk_i = np.zeros(dut.d.value, dtype=np.uint32)
    rk = np.zeros(int(dut.d.value / 2) * dut.r.value, dtype=np.uint32)
    setup_block_cipher(dut, blk_i, rk)

    await rst_function_test(dut)
    print("final")
    print(blk_i)


n = 10
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
