'''
 # @ Author: German Cano Quiveu, germancq
 # @ Create Time: 2023-05-16 14:02:16
 # @ Modified by: German Cano Quiveu, germancq
 # @ Modified time: 2023-05-16 14:02:19
 # @ Description:
 '''

import cocotb
from cocotb.triggers import Timer,RisingEdge, FallingEdge
from cocotb.clock import Clock


CLK_PERIOD = 20
KEY_LEN = 128


def setup_block_cipher(dut,key,plaintext):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.key = key
    dut.rst = 0
    dut.block_i = plaintext
    dut.rq_data = 0

async def rst_function_test(dut):
    dut.rst = 1
    await n_cycles_clock(dut,1)
    assert dut.impl.current_state != 0, "KEY_SCH ERROR STATE IN RST"
    await n_cycles_clock(dut,10)
    assert dut.impl.current_state != 0, "KEY_SCH ERROR STATE IN RST"
    dut.rst = 0


#async def round_keys_test(dut):
    #check each T iteration
    #lea = LEA(dut.key)

async def n_cycles_clock(dut,n):
    for i in range(0,n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)