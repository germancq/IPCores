import importlib
import math
import os
import random
import sys
import time

import cocotb
import hmac_spongent
import numpy as np
import spongent
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.result import ReturnValue, TestFailure
from cocotb.triggers import FallingEdge, RisingEdge, Timer

# N_candidates = [88, 128, 160, 224, 256]
# r_candidates = [8, 8, 16, 16, 16]
# c_candidates = [80, 128, 160, 224, 256]
# R_candidates = [45, 70, 90, 120, 140]
#
# OPTION_HASH = 4
#
# dut.N.value = N_candidates[OPTION_HASH]
# dut.r.value = r_candidates[OPTION_HASH]
# dut.c.value = c_candidates[OPTION_HASH]
# dut.R.value = R_candidates[OPTION_HASH]

# dut.INPUT_WIDTH.value = 64
# dut.KEY_WIDTH.value = 64


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


def setup_function(dut, key, msg):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.msg.value = msg
    dut.key.value = key
    dut.rst.value = 0


async def rst_function_test(dut):
    dut.rst.value = 1
    await n_cycles_clock(dut, 20)

    '''
    if(dut.ipad.value != hmac_impl.ipad):
        raise TestFailure("""Error in reset ipad value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.ipad.value)),hex(hmac_impl.ipad)))

    if(dut.opad.value != hmac_impl.opad):
        raise TestFailure("""Error in reset opad value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.opad.value)),hex(hmac_impl.opad)))

    if(dut.Si.value != hmac_impl.S_i):
        raise TestFailure("""Error in reset S_i value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.Si.value)),hex(hmac_impl.S_i)))

    if(dut.So.value != hmac_impl.S_o):
        raise TestFailure("""Error in reset opad value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.S_o.value)),hex(hmac_impl.S_o)))
    '''
    if dut.hash_1.rst != 1:
        raise TestFailure(
            """Error in reset hash_1 value, wrong value = {0}, expected value = {1}""".format(
                hex(int(dut.hash_1.rst.value)), hex(1)
            )
        )

    if dut.end_hash_0.value != 0:
        raise TestFailure(
            """Error in reset end_hash_0 value, wrong value = {0}, expected value = {1}""".format(
                hex(int(dut.end_hash_0.rst.value)), hex(0)
            )
        )


async def hmac_test(dut, expected_result):
    dut.rst.value = 0
    await n_cycles_clock(dut, 1)

    i = 0
    '''
    while(dut.end_hash_0.value == 0):
        i = i+1
        await n_cycles_clock(dut,1)

    await n_cycles_clock(dut,1)
    

    if(dut.hash_output_0.value != hmac_impl.h_1):
        raise TestFailure("""Error in hmac_test first hash value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.hash_output_0.value)),hex(hmac_impl.h_1)))
    '''
    while dut.end_hmac.value == 0:
        i = i + 1
        await n_cycles_clock(dut, 1)

    if dut.digest.value != expected_result:
        raise TestFailure(
            """Error in hmac_test digest value, wrong value = {0}, expected value = {1}""".format(
                hex(int(dut.digest.value)), hex(expected_result)
            )
        )

    print(i)


async def n_cycles_clock(dut, n):
    for _ in range(0, n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)


async def run_test(dut, index=0):
    len_data = int(
        (dut.N.value + dut.INPUT_WIDTH.value + dut.KEY_WIDTH.value) / 8)

    msg = random.randint(0, (2**24) - 1)
    key = random.randint(0, (2**24) - 1)
    hmac_impl = hmac_spongent.HMAC_Spongent(
        key, dut.N.value, dut.c.value, dut.r.value, dut.R.value
    )
    expected_result = hmac_impl.generate_MAC(msg, 64)

    setup_function(dut, key, msg)
    await rst_function_test(dut)
    await hmac_test(dut, expected_result)


n = 5
factory = TestFactory(run_test)

# array de 10 int aleatorios entre 0 y 31
factory.add_option("index", range(0, n))
factory.generate_tests()
