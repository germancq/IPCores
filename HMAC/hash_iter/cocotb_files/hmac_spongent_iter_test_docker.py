import importlib
import math
import os
import random
import sys
import time

import cocotb
import hmac_spongent_iter
import numpy as np
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.result import ReturnValue, TestFailure
from cocotb.triggers import FallingEdge, RisingEdge, Timer

# N_candidates =        [88,128,160,224,256]
# r_candidates =        [8,8,16,16,16]
# c_candidates =        [80,128,160,224,256]
# R_candidates =        [45,70,90,120,140]
#
# OPTION_HASH = 4
#
# dut.N.value = N_candidates[OPTION_HASH]
# dut.r.value = r_candidates[OPTION_HASH]
# dut.c.value = c_candidates[OPTION_HASH]
# dut.R.value = R_candidates[OPTION_HASH]

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


def setup_function(dut, key):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst.value = 0
    dut.key.value = key
    dut.data_ready.value = 0
    # dut.start_hash.value = 0


async def rst_function_test(dut):
    dut.rst.value = 1
    await n_cycles_clock(dut, 20)

    if dut.hash_impl.rst.value != 1:
        raise TestFailure(
            """Error in reset, wrong value = {0}, expected value = {1}""".format(
                hex(int(dut.hash_impl.rst.value)), hex(1)
            )
        )


async def execution_test(dut, msg, len_msg, hmac_impl):
    dut.rst.value = 0

    mask = 0xFFFF
    print("execution_test begin")
    if dut.r.value == 8:
        mask = 0xFF

    n = int(len_msg / dut.r.value)
    j = 0

    data_chunk = (msg >> (dut.r.value * (n - 1))) & mask
    dut.feed_data.value = data_chunk
    for i in range(0, n):
        j = j + 1
        data_chunk = (msg >> (dut.r.value * (n - i - 1))) & mask
        dut.feed_data.value = data_chunk
        dut.data_ready.value = 1
        await n_cycles_clock(dut, 1)
        dut.data_ready.value = 0
        await n_cycles_clock(dut, 1)
        print(i)
        print(dut.current_state.value)

        while dut.busy.value == 1:
            await n_cycles_clock(dut, 1)

        hmac_impl.feed_data(data_chunk)
        print("-------------------------------------")
        print(hex(dut.hash_impl.state.value))
        print(hex(hmac_impl.spongent_state))
        print("-------------------------------------")

    print("msg send it")
    expected_result = hmac_impl.stop_feed()

    dut.stop_feed.value = 1

    await n_cycles_clock(dut, 1)

    dut.stop_feed.value = 0

    while dut.current_state.value == 0xE:
        await n_cycles_clock(dut, 1)

    # print('first_hash_done')
    # print(hex(dut.hash_impl.digest.value))
    # print(hex(dut.hash_result.value))
    # print(hex(dut.reg_hash_result_o.value))
    if dut.digest.value != hmac_impl.h_1:
        raise TestFailure(
            """Error in digest first value, wrong value = {0}, expected value = {1}""".format(
                hex(int(dut.digest.value)), hex(hmac_impl.h_1)
            )
        )

    while dut.end_hmac.value == 0:
        # print(hex(dut.current_state.value))
        # print(int(dut.counter_n_o.value))
        await n_cycles_clock(dut, 1)

    # await n_cycles_clock(dut,1)

    # print(hex(dut.hash_impl.digest.value))
    # print(hex(dut.hash_result.value))
    # print(hex(dut.reg_hash_result_o.value))
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
    key = random.randint(0, (2**24) - 1)
    msg = random.randint(0, (2**24) - 1)
    print(hex(msg))
    hmac_impl = hmac_spongent_iter.HMAC_Spongent_iter(
        key, dut.N.value, dut.c.value, dut.r.value, dut.R.value
    )
    hmac_impl.begin_hmac()
    setup_function(dut, key)
    await rst_function_test(dut)
    await execution_test(dut, msg, 64, hmac_impl)


C = 10
factory = TestFactory(run_test)

factory.add_option("msg", np.random.randint(low=1, high=(2**8) - 1, size=C))
factory.generate_tests()
