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


import os
home = os.getenv("HOME")

import sys
sys.path.append(home + '/gitProjects/IPCores/block_ciphers/LEA/python_code')
import LEA


CLK_PERIOD = 20
KEY_LEN = 128
ROUNDS = 24

def setup_block_cipher(dut,key,plaintext):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.key.value = key
    dut.rst.value = 0
    dut.block_i.value = plaintext
    dut.rq_data.value = 0

async def rst_function_test(dut):
    dut.rst.value = 1
    await n_cycles_clock(dut,1)
    assert dut.key_sch.current_state.value == dut.key_sch.IDLE.value, f"KEY_SCH ERROR STATE IN IDLE, STATE={dut.key_sch.current_state.value}"
    await n_cycles_clock(dut,10)
    assert dut.key_sch.current_state.value == dut.key_sch.IDLE.value, f"KEY_SCH ERROR STATE IN IDLE, STATE={dut.key_sch.current_state.value}"
    dut.rst.value = 0


async def round_keys_test(dut):
    #check each T iteration
    lea = LEA.LEA(dut.key.value) # implementacion python
    lea.gen_roundKeys()

    for round in range(0,ROUNDS):
        await n_cycles_clock(dut,1)
        #check round state
        assert dut.key_sch.current_state.value == dut.key_sch.CHECK_ROUND.value, f"KEY_SCH ERROR, EXPECTED STATE CHECK_ROUND, STATE={dut.key_sch.current_state.value}"
        #check counter 
        assert ((ROUNDS) - dut.key_sch.rk_counter_dout.value) == round, f"ERROR in KEY_SCH with the round counter it should be {round}, however it is {(ROUNDS) - dut.key_sch.rk_counter_dout.value}"

        #check T's values
        for i in range(0,int(KEY_LEN/32)):
            assert lea.T[round][i] == dut.key_sch.T_dout[i].value, f"ERROR in ROUND {round} T{i} should be: {hex(lea.T[round][i])}, however it is {hex(dut.key_sch.T_dout[i].value)}"

        await n_cycles_clock(dut,1)
        #calculate T step 
        assert dut.key_sch.current_state.value == dut.key_sch.CALCULATE_T_STEP1.value, f"KEY_SCH ERROR, EXPECTED STATE CALCULATE_T_STEP1, STATE={dut.key_sch.current_state.value}"

        await n_cycles_clock(dut,1)
        #calculate T step 2
        assert dut.key_sch.current_state.value == dut.key_sch.CALCULATE_T_STEP2.value, f"KEY_SCH ERROR, EXPECTED STATE CALCULATE_T_STEP2, STATE={dut.key_sch.current_state.value}"

        await n_cycles_clock(dut,1)
        #store rk
        assert dut.key_sch.current_state.value == dut.key_sch.STORE_RK.value, f"KEY_SCH ERROR, EXPECTED STATE STORE_RK, STATE={dut.key_sch.current_state.value}"
        #check roundkey
        assert lea.roundkeys[round] == dut.key_sch.roundkeys_din.value, f"ERROR GENERATING ROUNDKEYS, RK[{round}] should be {hex(lea.roundkeys[round])}, however it is {hex(dut.key_sch.roundkeys_din.value)}"

        assert round == dut.key_sch.roundkeys_addr.value,f"ERROR GENERATING ROUNDKEYS, RK_addr should be {round}, however it is {int(dut.key_sch.roundkeys_addr.value)}"

        await n_cycles_clock(dut,1)
        #update_counter
        assert dut.key_sch.current_state.value == dut.key_sch.UPDATE_COUNTER.value, f"KEY_SCH ERROR, EXPECTED STATE UPDATE_COUNTER, STATE={dut.key_sch.current_state.value}"

async def n_cycles_clock(dut,n):
    for i in range(0,n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)



@cocotb.test()
async def testLUA(dut):
    setup_block_cipher(dut,0x0f1e2d3c4b5a69788796a5b4c3d2e1f0,0x101112131415161718191a1b1c1d1e1f)
    await rst_function_test(dut)
    await round_keys_test(dut)