# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    twofish_ctr_test.py                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 12:20:30 by germancq          #+#    #+#              #
#    Updated: 2020/10/14 16:36:35 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import cocotb
import numpy as np
import time
import random
import math
from cocotb.triggers import Timer,RisingEdge, FallingEdge
from cocotb.regression import TestFactory
from cocotb.result import TestFailure, ReturnValue
from cocotb.clock import Clock


import os
home = os.getenv("HOME")
abs_path_file_storage = home + "/gitProjects/IPCores/block_ciphers/twofish_cipher_ctr/python_code/test_cases.HEX"

CLK_PERIOD = 20 # 50 MHz

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


def setup_function(dut,key,IV,text_input,num_block):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.key = key 
    dut.IV = IV
    dut.text_input = text_input
    dut.block_number = num_block
    dut.rst = 1

@cocotb.coroutine
def rst_function_test(dut):
    
    dut.rst = 1
    
    yield n_cycles_clock(dut,10)

    
    if(dut.R_i[0] != 0) :
        raise TestFailure("""Error R0 in rst, wrong_value = {0}""".format(hex(int(dut.R_i[0].value))))
    if(dut.R_i[1] != 0) :
        raise TestFailure("""Error R1 in rst, wrong_value = {0}""".format(hex(int(dut.R_i[1].value))))
    if(dut.R_i[2] != 0) :
        raise TestFailure("""Error R2 in rst, wrong_value = {0}""".format(hex(int(dut.R_i[2].value))))
    if(dut.R_i[3] != 0) :
        raise TestFailure("""Error R3 in rst, wrong_value = {0}""".format(hex(int(dut.R_i[3].value))))

    
    
    
    if(dut.counter_out != 0) :
        raise TestFailure("""Error counter in rst encrypt, wrong_value = {0}""".format(hex(int(dut.counter_out.value))))

    dut.rst = 0    
    


@cocotb.coroutine
def enc_dec_test(dut,block_number,text_input,expected_value) :

    dut.text_input = text_input
    dut.block_number = block_number

    print("VERILOG_VALUES")
    while dut.end_signal == 0 :
        if(dut.current_state == 3):
            '''
            print('//////////////////////////')
            print(int(dut.counter_out.value))
            print(int(dut.stage_impl.i.value))
            print(hex(int(dut.stage_impl.R0.value))) 
            print(hex(int(dut.stage_impl.R1.value)))
            print(hex(int(dut.stage_impl.R2.value))) 
            print(hex(int(dut.stage_impl.R3.value))) 
            print(hex(int(dut.R0.value))) 
            print(hex(int(dut.R1.value)))
            print(hex(int(dut.R2.value))) 
            print(hex(int(dut.R3.value))) 
            print('//////////////////////////')
            '''
        yield n_cycles_clock(dut,1)


    print(hex(int(dut.text_output.value)))
    if(dut.text_output != expected_value) :
        raise TestFailure("""Error enc_test,wrong value = {0}, expected value is {1}""".format(hex(int(dut.text_output.value)),hex(expected_value)))

@cocotb.coroutine
def n_cycles_clock(dut,n):
    for i in range(0,n):
        yield RisingEdge(dut.clk)
        yield FallingEdge(dut.clk)    


@cocotb.coroutine
def run_test(dut, index = 0):

    with(open(abs_path_file_storage,"rb+")) as storage_file:

        storage_file.seek(0)
        i = 0
        n_blocks = int.from_bytes(storage_file.read(4),byteorder='little')
        while(n_blocks != 0):
    
            key = int.from_bytes(storage_file.read(16),byteorder='little')
            iv = int.from_bytes(storage_file.read(16),byteorder='little')

            print(hex(key))
            print(hex(iv))

            setup_function(dut,key,iv,0,0)
            yield rst_function_test(dut)

            for j in range(0,n_blocks):
                print(j)
                plaintext = int.from_bytes(storage_file.read(16),byteorder='little')
                ciphertext = int.from_bytes(storage_file.read(16),byteorder='little')

                if(index == 0):
                    yield enc_dec_test(dut,j,plaintext,ciphertext)
                else:
                    yield enc_dec_test(dut,j,ciphertext,plaintext)    

                yield rst_function_test(dut)    

            n_blocks = int.from_bytes(storage_file.read(4),byteorder='little')


n = 2
factory = TestFactory(run_test)

factory.add_option("index",range(0,n)) #array de 10 int aleatorios entre 0 y 31
factory.generate_tests()        