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
from cocotb.regression import TestFactory

import random

import os
home = os.getenv("HOME")
abs_path_file_storage = home + "/gitProjects/IPCores/block_ciphers/LEA/python_code/test_cases.HEX"

import sys
sys.path.append(home + '/gitProjects/IPCores/block_ciphers/LEA/python_code')
import LEA


CLK_PERIOD = 20
KEY_LEN = 128
ROUNDS = 24
KEY_128 = 0x0f1e2d3c4b5a69788796a5b4c3d2e1f0
KEY_192 = 0x0f1e2d3c4b5a69788796a5b4c3d2e1f0f0e1d2c3b4a59687
KEY_256 = 0x0f1e2d3c4b5a69788796a5b4c3d2e1f0f0e1d2c3b4a5968778695a4b3c2d1e0f
INPUT_128 = 0x101112131415161718191a1b1c1d1e1f
INPUT_192 = 0x202122232425262728292a2b2c2d2e2f
INPUT_256 = 0x303132333435363738393a3b3c3d3e3f


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

        print(round)
        print(hex(dut.key_sch.T_dout[0].value))
        #check T's values
        for i in range(0,int(KEY_LEN/32)):
            assert lea.T[round][i] == dut.key_sch.T_dout[i].value, f"ERROR in ROUND {round} T{i} should be: {hex(lea.T[round][i])}, however it is {hex(dut.key_sch.T_dout[i].value)}"

        await n_cycles_clock(dut,1)
        #calculate T step 
        assert dut.key_sch.current_state.value == dut.key_sch.CALCULATE_T_STEP1.value, f"KEY_SCH ERROR, EXPECTED STATE CALCULATE_T_STEP1, STATE={dut.key_sch.current_state.value}"
        print(hex(dut.key_sch.T_dout[0].value))

        await n_cycles_clock(dut,1)
        #calculate T step 2
        assert dut.key_sch.current_state.value == dut.key_sch.CALCULATE_T_STEP2.value, f"KEY_SCH ERROR, EXPECTED STATE CALCULATE_T_STEP2, STATE={dut.key_sch.current_state.value}"
        print(hex(dut.key_sch.T_dout[0].value))

        await n_cycles_clock(dut,1)
        #store rk
        assert dut.key_sch.current_state.value == dut.key_sch.STORE_RK.value, f"KEY_SCH ERROR, EXPECTED STATE STORE_RK, STATE={dut.key_sch.current_state.value}"


        #check roundkey
        assert lea.roundkeys[round] == dut.key_sch.roundkeys_din.value, f"ERROR GENERATING ROUNDKEYS, RK[{round}] should be {hex(lea.roundkeys[round])}, however it is {hex(dut.key_sch.roundkeys_din.value)}"

        assert round == dut.key_sch.roundkeys_addr.value,f"ERROR GENERATING ROUNDKEYS, RK_addr should be {round}, however it is {int(dut.key_sch.roundkeys_addr.value)}"


        await n_cycles_clock(dut,1)

        #update_counter
        assert dut.key_sch.current_state.value == dut.key_sch.UPDATE_COUNTER.value, f"KEY_SCH ERROR, EXPECTED STATE UPDATE_COUNTER, STATE={dut.key_sch.current_state.value}"

    await n_cycles_clock(dut,2)

    assert dut.key_sch.current_state.value == dut.key_sch.END_STATE.value, f"KEY_SCH ERROR, EXPECTED STATE END_STATE, STATE={dut.key_sch.current_state.value}"



async def enc_test(dut,expected_test_result):

    lea = LEA.LEA(dut.key.value) # implementacion python
    lea.gen_roundKeys()
    expected_result = lea.encrypt(dut.block_i.value.value)

    assert dut.enc_impl.current_state.value == dut.enc_impl.IDLE.value, f"ENC ERROR, EXPECTED STATE IDLE, STATE={dut.enc_impl.current_state.value}"

    await n_cycles_clock(dut,10)

    assert dut.enc_impl.current_state.value == dut.enc_impl.IDLE.value, f"ENC ERROR, EXPECTED STATE IDLE, STATE={dut.enc_impl.current_state.value}"

    dut.rq_data.value = 1

    

    for round in range(0,ROUNDS):
        await n_cycles_clock(dut,1)

        assert dut.enc_impl.current_state.value == dut.enc_impl.CHECK_ROUNDS.value, f"ENC ERROR, EXPECTED STATE CHECK_ROUNDS, STATE={dut.enc_impl.current_state.value}"

        #check counter 
        assert ((ROUNDS) - dut.enc_impl.rk_counter_dout.value) == round, f"ERROR in ENC with the round counter it should be {round}, however it is {(ROUNDS) - dut.enc_impl.rk_counter_dout.value}"

        print(round)
        #check X's values
        for i in range(0,4):
            assert lea.X[round][i] == dut.enc_impl.X_dout[i].value, f"ERROR in ROUND {round} X{i} should be: {hex(lea.X[round][i])}, however it is {hex(dut.enc_impl.X_dout[i].value)}"


        print(hex(dut.enc_impl.X_dout[i].value))
        await n_cycles_clock(dut,1)
        

        assert dut.enc_impl.current_state.value == dut.enc_impl.CALCULATE_X_1.value, f"ENC ERROR, EXPECTED STATE CALCULATE_X_1, STATE={dut.enc_impl.current_state.value}"

        await n_cycles_clock(dut,1)

        assert dut.enc_impl.current_state.value == dut.enc_impl.CALCULATE_X_2.value, f"ENC ERROR, EXPECTED STATE CALCULATE_X_2, STATE={dut.enc_impl.current_state.value}"
       
        await n_cycles_clock(dut,1)

        assert dut.enc_impl.current_state.value == dut.enc_impl.UPDATE_ROUNDS.value, f"ENC ERROR, EXPECTED STATE UPDATE_ROUNDS, STATE={dut.enc_impl.current_state.value}"

    await n_cycles_clock(dut,2)

    assert dut.enc_impl.current_state.value == dut.enc_impl.END_STATE.value, f"ENC ERROR, EXPECTED STATE END_STATE, STATE={dut.enc_impl.current_state.value}"

    assert expected_result == dut.enc_impl.result.value, f"ENC ERROR, WRONG RESULT, expected = {hex(expected_result)}, however it is {hex(dut.enc_impl.result.value)}"

    assert expected_test_result == dut.enc_impl.result.value, f"ENC ERROR, WRONG TEST RESULT, expected = {hex(expected_result)}, however it is {hex(dut.enc_impl.result.value)}"


async def n_cycles_clock(dut,n):
    for i in range(0,n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)



@cocotb.test()
async def testLUA(dut, index=0):
    global KEY_LEN
    global ROUNDS



    KEY_LEN = 128
    ROUNDS = 24
    BLOCK_LEN = 128
    
    BYTES_PER_TEST = (2*(int(BLOCK_LEN/8))) + int(KEY_LEN/8)

    with(open(abs_path_file_storage,"rb+")) as storage_file:
        storage_file.seek(index*BYTES_PER_TEST)
        key = KEY_128#int.from_bytes(storage_file.read(int(KEY_LEN/8)),byteorder='little')
        input = INPUT_128#int.from_bytes(storage_file.read(int(BLOCK_LEN/8)),byteorder='little')
        expected_result = int.from_bytes(storage_file.read(int(BLOCK_LEN/8)),byteorder='little')

        print(hex(key))

        setup_block_cipher(dut,key,input)
        await rst_function_test(dut)
        await round_keys_test(dut)
        await enc_test(dut,expected_result)

        '''
        for i in range(0,50):
            key = random.getrandbits(KEY_LEN)
            input = random.getrandbits(128)

            print(f"key is = {hex(key)}")

            setup_block_cipher(dut,key,input)
            await rst_function_test(dut)
            await round_keys_test(dut)
            await enc_test(dut)
        '''


n = 5
factory = TestFactory(testLUA)

factory.add_option("index",range(0,n))
factory.generate_tests()