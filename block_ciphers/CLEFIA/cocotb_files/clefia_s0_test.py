import os
import random
import sys

import clefia
import cocotb
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.triggers import FallingEdge, RisingEdge, Timer


def setup_block_cipher(dut, x):
    dut.x.value = x


@cocotb.test()
async def test(dut, index=0):

    x = random.getrandbits(8)

    clefia_sw = clefia.CLEFIA()
    expected_result = clefia_sw.S0(x)
    setup_block_cipher(dut, x)
    await Timer(10, units="ns")

    print(hex(x))
    print(hex(dut.y.value))
    print(hex(expected_result))
    assert hex(dut.y.value) == hex(
        expected_result
    ), f"ERROR, EXPECTED value should be {hex(expected_result)}, however hdl value is {hex(dut.y.value)}"


n = 10
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
