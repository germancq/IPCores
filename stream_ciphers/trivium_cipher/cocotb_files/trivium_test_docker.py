import importlib
import random
import sys
import time

import cocotb
import numpy as np
import trivium
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.result import ReturnValue, TestFailure
from cocotb.triggers import FallingEdge, RisingEdge, Timer

sys.path.append(
    "/home/germancq/gitProjects/IPCores/stream_ciphers/trivium_cipher/python_code"
)

CLK_PERIOD = 20  # 50 MHz
KEY_LEN = 80
IV_LEN = 80


def bitArray_to_int_value(bitarray):
    value = 0
    for i in range(0, len(bitarray)):
        value = value + (2**i) * bitarray[i]

    return value


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


def setup_function(dut, key, iv):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst.value = 0
    dut.en.value = 0
    dut.key.value = key
    dut.iv.value = iv


async def rst_function_test(dut, key, iv, trivium_SW):
    dut.rst.value = 1
    key_1 = hex(key).rstrip("L")  # HEX
    IV_1 = hex(iv).rstrip("L")  # HEX
    trivium_SW.rst()
    trivium_SW.Initialization(key_1, IV_1)

    await n_cycles_clock(dut, 10)

    if dut.dout_A != bitArray_to_int_value(trivium_SW.A):
        raise TestFailure(
            """Error rst,wrong dout_A value = {0}, expected value is {1}""".format(
                hex(int(dut.dout_A.value)), hex(
                    bitArray_to_int_value(trivium_SW.A))
            )
        )

    if dut.dout_B != bitArray_to_int_value(trivium_SW.B):
        raise TestFailure(
            """Error rst,wrong dout_A value = {0}, expected value is {1}""".format(
                hex(int(dut.dout_A.value)), hex(
                    bitArray_to_int_value(trivium_SW.B))
            )
        )

    if dut.dout_C != bitArray_to_int_value(trivium_SW.C):
        raise TestFailure(
            """Error rst,wrong dout_A value = {0}, expected value is {1}""".format(
                hex(int(dut.dout_A.value)), hex(
                    bitArray_to_int_value(trivium_SW.C))
            )
        )

    if dut.counter_out != 0x0:
        raise TestFailure(
            """Error warm_up,wrong counter value = {0}""".format(
                hex(int(dut.counter_out.value))
            )
        )

    dut.rst.value = 0


async def warm_up_phase_test(dut, trivium_SW):
    dut.rst.value = 0
    dut.en.value = 0

    for i in range(0, 1152):

        if dut.counter_out != i:
            raise TestFailure(
                """Error warm_up,wrong counter value = {0}""".format(
                    hex(int(dut.counter_out.value))
                )
            )

        if dut.warm_up_complete != 0:
            raise TestFailure(
                """Error warm_up,wrong warm_up_complete value = {0}""".format(
                    hex(int(dut.warm_up_complete.value))
                )
            )

        if dut.dout_A != bitArray_to_int_value(trivium_SW.A):
            raise TestFailure(
                """Error warm_up,wrong dout_A value = {0}, expected value is {1} at iteration {2}""".format(
                    hex(int(dut.dout_A.value)),
                    hex(bitArray_to_int_value(trivium_SW.A)),
                    i,
                )
            )

        if dut.dout_B != bitArray_to_int_value(trivium_SW.B):
            raise TestFailure(
                """Error warm_up,wrong dout_B value = {0}, expected value is {1} at iteration {2}""".format(
                    hex(int(dut.dout_B.value)),
                    hex(bitArray_to_int_value(trivium_SW.B)),
                    i,
                )
            )

        if dut.dout_C != bitArray_to_int_value(trivium_SW.C):
            raise TestFailure(
                """Error warm_up,wrong dout_C value = {0}, expected value is {1} at iteration {2}""".format(
                    hex(int(dut.dout_C.value)),
                    hex(bitArray_to_int_value(trivium_SW.C)),
                    i,
                )
            )

        await n_cycles_clock(dut, 1)

        dout_a = int(dut.dout_A.value)
        expected_values = trivium_SW.step()

    if dut.warm_up_complete != 1:
        raise TestFailure(
            """Error warm_up,wrong warm_up_complete value = {0}""".format(
                hex(int(dut.warm_up_complete.value))
            )
        )


async def key_stream_generation_test(dut, trivium_SW):
    dut.rst.value = 0
    dut.en.value = 1
    expected_output = trivium_SW.gen_keystream(128)
    # print(expected_output)
    # print(expected_output[0])
    for i in range(0, 128):
        if dut.key_stream != expected_output[i]:
            raise TestFailure(
                """Error warm_up,wrong key_stream value = {0}, expected value is {1}  at iteration {2}""".format(
                    hex(int(dut.key_stream.value)), expected_output[i], i
                )
            )
        await n_cycles_clock(dut, 1)


async def n_cycles_clock(dut, n):
    for i in range(0, n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)


async def run_test(dut, key=0, iv=0):
    key = random.randbytes(KEY_LEN)
    iv = random.randbytes(IV_LEN)
    trivium_SW = trivium.Trivium()

    setup_function(dut, key, iv)

    await rst_function_test(dut, key, iv, trivium_SW)
    print("trivium rst completed")
    await warm_up_phase_test(dut, trivium_SW)
    await key_stream_generation_test(dut, trivium_SW)


n = 10
factory = TestFactory(run_test)
factory.add_option(
    "key", np.random.randint(low=0, high=(2**8) - 1, size=n)
)  # array de 10 int aleatorios entre 0 y 31
factory.add_option("iv", np.random.randint(low=0, high=(2**8) - 1, size=n))
factory.generate_tests()
