import importlib
import math
import os
import random
import sys
import time

import cocotb
import LFSR
import numpy as np
import spongent_iter
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.result import ReturnValue, TestFailure
from cocotb.triggers import FallingEdge, RisingEdge, Timer

# N_candidates = [88, 128, 160, 224, 256]
# r_candidates = [8, 8, 16, 16, 16]
# c_candidates = [80, 128, 160, 224, 256]
# R_candidates = [45, 70, 90, 120, 140]

# OPTION_HASH = 0
#
# dut.N = N_candidates[OPTION_HASH]
# dut.r.value = r_candidates[OPTION_HASH]
# dut.c.value = c_candidates[OPTION_HASH]
# dut.R.value = R_candidates[OPTION_HASH]

SIZE = 64 * 1024

CLK_PERIOD = 20  # 50 MHz

# the keyword await
#   Testbenches built using Cocotb use coroutines.
#   While the coroutine is executing the simulation is paused.
#   The coroutine uses the await keyword
#   to pass control of execution back to
#   the simulator and simulation time can advance again.
#
#   await return when the 'Trigger' is resolve
#
#   Coroutines may also await a list of triggers
#   to indicate that execution should resume if any of them fires


def setup_function(dut):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst.value = 0
    dut.data_ready.value = 0
    # dut.start_hash.value = 0


async def rst_function_test(dut):
    dut.rst.value = 1
    await n_cycles_clock(dut, 20)

    if dut.permutation_impl.rst.value != 1:
        raise TestFailure(
            """Error in reset, wrong value = {0}, expected value = {1}""".format(
                hex(int(dut.permutation_impl.rst.value)), hex(1)
            )
        )


async def execution_test(dut, msg, len_msg, spongent_impl):
    dut.rst.value = 0

    # prepare data
    print(hex(dut.last_padded_data.value))
    mask = 0xFFFF
    padding = 0x8000
    if dut.r.value == 8:
        mask = 0xFF
        padding = 0x80

    n = int(len_msg / dut.r.value)
    j = 0
    spongent_state = 0
    for i in range(0, n):
        j = j + 1
        data_chunk = (msg >> (dut.r.value * (j - i - 1))) & mask
        dut.data_input.value = data_chunk
        dut.data_ready.value = 1
        await n_cycles_clock(dut, 1)
        dut.data_ready.value = 0
        await n_cycles_clock(dut, 1)
        print(i)
        print(hex(dut.state.value))

        while dut.busy.value == 1:
            await n_cycles_clock(dut, 1)
        spongent_state = spongent_impl.feed_data(data_chunk, spongent_state)

        print("-------------------------------------")
        print(hex(dut.state.value))
        print(hex(spongent_state))
        print("-------------------------------------")

    print("msg send it")

    dut.start_hash.value = 1

    await n_cycles_clock(dut, 1)

    dut.start_hash.value = 0

    while dut.end_hash.value == 0:
        await n_cycles_clock(dut, 1)

    expected_result = spongent_impl.squeezing_phase(spongent_state)

    if dut.digest.value != expected_result:
        raise TestFailure(
            """Error in digest value, wrong value = {0}, expected value = {1}""".format(
                hex(int(dut.digest.value)), hex(expected_result)
            )
        )


async def n_cycles_clock(dut, n):
    for _ in range(0, n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)


async def run_test(dut, msg=0):
    msg = random.randint(0, (2**24) - 1)
    # print(hex(msg))
    spongent_impl = spongent_iter.Spongent(
        dut.N.value, dut.c.value, dut.r.value, dut.R.value
    )

    setup_function(dut)
    await rst_function_test(dut)
    await execution_test(dut, msg, SIZE, spongent_impl)


n = 5
factory = TestFactory(run_test)

factory.add_option("msg", np.random.randint(low=1, high=(2**8) - 1, size=n))
factory.generate_tests()
