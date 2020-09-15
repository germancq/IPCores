# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    present_ctr_test.py                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/04 12:27:39 by germancq          #+#    #+#              #
#    Updated: 2020/09/15 17:49:14 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import cocotb
import numpy as np
import time
import random
from cocotb.triggers import Timer,RisingEdge, FallingEdge
from cocotb.regression import TestFactory
from cocotb.result import TestFailure, ReturnValue
from cocotb.clock import Clock

import os
home = os.getenv("HOME")
abs_path_file_storage = home + "/gitProjects/IPCores/block_ciphers/present_cipher_ctr/python_code/test_cases.HEX"



import importlib
import sys
sys.path.append(home + '/gitProjects/IPCores/block_ciphers/present_cipher_ctr/python_code')
import present_ctr

CLK_PERIOD = 20 # 50 MHz
SIGNATURE = 0xAABBCCDD

#the keyword yield
#   Testbenches built using Cocotb use coroutines.
#   While the coroutine is executing the simulation is paused.
#   The coroutine uses the yield keyword
#   to pass control of execution back to
#   the simulator and simulation time can advance again.
#
#   yield return when the 'Trigger' is resolve
#
#   Coroutines may also yield a list of triggers
#   to indicate that execution should resume if any of them fires


def setup_function(dut,key,IV,block_i,num_block):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst = 0
    dut.key = key
    dut.IV = IV
    dut.block_i = block_i
    dut.block_number = num_block

@cocotb.coroutine
def rst_function_test(dut):
    dut.rst = 1
    
    yield n_cycles_clock(dut,10)

    dut.rst = 0    


@cocotb.coroutine
def generate_round_keys(dut) :
    dut.rst = 0
    i = 0
    while dut.end_key_generation.value == 0 :
        i = i+1
        yield n_cycles_clock(dut,1)
        
    #print(i)    
    #yield n_cycles_clock(dut,1)
            
    if(dut.end_key_generation != 1):
        raise TestFailure("""Error generate_round_keys,wrong end_signal value = {0}, expected value is {1}""".format(hex(int(dut.end_key_generation.value)),1))


@cocotb.coroutine
def enc_dec_test(dut,num_block,text,expected_value,IV,key):
    
    i = 0
    dut.block_i = text
    dut.block_number = num_block

    present_SW = present_ctr.Present_CTR(key,IV)

    expected_result = present_SW.encryption_decryption(text,num_block)

    
    while dut.end_signal.value == 0 :
        '''
        print('//////////////////////////')
        print(int(dut.key_index_enc.value))
        print(int(dut.present_enc_impl.key_index.value))
        
        print(hex(int(dut.roundkey.value))) 
        print(hex(int(dut.present_enc_impl.roundkey.value)))
        print(hex(int(present_SW.round_keys[int(dut.key_index_enc.value)])))
        
        print(hex(int(dut.present_enc_impl.block_i.value))) 
        print(hex(int(dut.present_enc_impl.block_o.value))) 
        
        
        print('//////////////////////////')
        '''
        yield n_cycles_clock(dut,1)
        i=i+1

    #print(i)    
    
    yield n_cycles_clock(dut,100)
    print('//////////////////////////')
    print(hex(int(dut.block_o.value)))
    print(hex(int(expected_result)))
    print(hex(text))
    print(hex(expected_value))
    print('//////////////////////////')
    if(dut.block_o != expected_value) :
            raise TestFailure("""Error enc_dec_test,wrong value = {0}, expected value is {1}""".format(hex(int(dut.block_o.value)),hex(expected_value)))



@cocotb.coroutine
def n_cycles_clock(dut,n):
    for i in range(0,n):
        yield RisingEdge(dut.clk)
        yield FallingEdge(dut.clk)    

@cocotb.coroutine
def run_test(dut, index = 0):

    with(open(abs_path_file_storage,"rb+")) as storage_file:
        
        #key = 0x0
        #text = 0x0
        storage_file.seek(0)
        i = 0
        n_blocks = int.from_bytes(storage_file.read(4),byteorder='little')
        while(n_blocks != 0):
            
            key = int.from_bytes(storage_file.read(10),byteorder='little')
            IV = int.from_bytes(storage_file.read(8),byteorder='little')
            print(hex(key))
            print(hex(IV))
            

            
            
            setup_function(dut,key,IV,0,0)
            yield rst_function_test(dut)
            yield generate_round_keys(dut)
            for j in range (0,n_blocks):
                print(j)
                plaintext = int.from_bytes(storage_file.read(8),byteorder='little')
                ciphertext = int.from_bytes(storage_file.read(8),byteorder='little')
                if(index == 0):
                    yield enc_dec_test(dut,j,plaintext,ciphertext,IV,key)
                else:
                    yield enc_dec_test(dut,j,ciphertext,plaintext,IV,key)


            n_blocks = int.from_bytes(storage_file.read(4),byteorder='little')


n = 2
factory = TestFactory(run_test)

factory.add_option("index",range(0,n)) #array de 10 int aleatorios entre 0 y 31
factory.generate_tests()