# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    present_test.py                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 14:13:14 by germancq          #+#    #+#              #
#    Updated: 2020/02/18 12:37:37 by germancq         ###   ########.fr        #
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
abs_path_file_storage = "/home/germancq/gitProjects/IPCores/block_ciphers/present_cipher/python_code/test_cases.HEX"



import importlib
import sys
sys.path.append('/home/germancq/gitProjects/IPCores/block_ciphers/present_cipher/python_code')
import present

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


def setup_function(dut, key, plaintext):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst = 0
    dut.key = key
    dut.block_i = plaintext
    dut.enc_dec = 0
   
    

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
        
    print(i)    
    #yield n_cycles_clock(dut,1)
            
    if(dut.end_key_generation != 1):
        raise TestFailure("""Error generate_round_keys,wrong end_signal value = {0}, expected value is {1}""".format(hex(int(dut.end_key_generation.value)),1))
             

@cocotb.coroutine
def enc_test(dut,expected_enc_value) :
    
    i = 0
    while dut.end_enc.value == 0 :
        '''
        print('//////////////////////////')
        print(int(dut.key_index.value))
        print(int(dut.present_enc_impl.key_index.value))
        print(hex(int(dut.roundkey.value))) 
        print(hex(int(dut.present_enc_impl.roundkey.value)))
        print(hex(int(dut.present_enc_impl.block_i.value))) 
        print(hex(int(dut.present_enc_impl.block_o.value))) 
        
        
        print('//////////////////////////')
        '''
        yield n_cycles_clock(dut,1)
        i=i+1

    print(i)    
    
    yield n_cycles_clock(dut,100)

    print(hex(int(dut.block_o.value)))
    print(hex(int(expected_enc_value)))
    if(dut.block_o != expected_enc_value) :
            raise TestFailure("""Error enc_test,wrong value = {0}, expected value is {1}""".format(hex(int(dut.block_o.value)),hex(expected_enc_value)))
    
    
    
       
@cocotb.coroutine
def dec_test(dut,expected_dec_value) :
    
    i = 0
    dut.enc_dec = 1    
    print(int(dut.present_dec_impl.key_index.value))
    while dut.end_dec.value == 0 :
        '''
        print('***********************')
        print(int(dut.key_index.value))
        print(int(dut.present_dec_impl.key_index.value))
        print(hex(int(dut.roundkey.value))) 
        print(hex(int(dut.present_dec_impl.roundkey.value)))
        print(hex(int(dut.present_dec_impl.block_i.value))) 
        print(hex(int(dut.present_dec_impl.block_o.value))) 
        
        
        print('*************************')
        '''
        yield n_cycles_clock(dut,1)
        
        
    
    yield n_cycles_clock(dut,100)

    print(hex(int(dut.block_o.value)))
    print(hex(int(expected_dec_value)))
    if(dut.block_o != expected_dec_value) :
            raise TestFailure("""Error dec_test,wrong value = {0}, expected value is {1}""".format(hex(int(dut.block_o.value)),hex(expected_dec_value)))
   

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
        storage_file.seek((index*34))
        key = int.from_bytes(storage_file.read(10),byteorder='little')
        text = int.from_bytes(storage_file.read(8),byteorder='little')
        expected_enc_value = int.from_bytes(storage_file.read(8),byteorder='little')
        expected_dec_value = int.from_bytes(storage_file.read(8),byteorder='little')
        setup_function(dut,key,text)
        
        yield rst_function_test(dut)
        yield generate_round_keys(dut)
        yield enc_test(dut,expected_enc_value)
        yield rst_function_test(dut)
        yield generate_round_keys(dut)
        yield dec_test(dut,expected_dec_value)



n = 400
factory = TestFactory(run_test)

factory.add_option("index",range(0,n)) #array de 10 int aleatorios entre 0 y 31
factory.generate_tests()
