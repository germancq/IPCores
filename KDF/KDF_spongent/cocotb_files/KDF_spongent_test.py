# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    KDF_test.py                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 16:38:46 by germancq          #+#    #+#              #
#    Updated: 2019/10/17 17:04:18 by germancq         ###   ########.fr        #
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
abs_path_file_storage = "/home/germancq/gitProjects/IPCores/KDF/KDF_spongent/python_code/test_cases.HEX"

home = os.getenv("HOME")
import sys
sys.path.append(home+'/gitProjects/IPCores/KDF/KDF_spongent/python_code')
import keyDerivationFunction


salt_len_candidates = [24,64,64,96,128]
up_len_candidates =   [32,32,64,96,96]

N_candidates =        [88,128,160,224,256]
r_candidates =        [8,8,16,16,16]
c_candidates =        [80,128,160,224,256]
R_candidates =        [45,70,90,120,140]

OPTION_HASH = 1

N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]


N = N_candidates[OPTION_HASH]
salt_len = salt_len_candidates[OPTION_HASH]
user_password_len = up_len_candidates[OPTION_HASH]

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


def setup_function(dut, salt, count, user_password):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst = 0
    dut.salt = salt
    dut.count = count
    dut.user_password = user_password

    
   
    

@cocotb.coroutine
def rst_function_test(dut,first_value):
    dut.rst = 1
    
    
    yield n_cycles_clock(dut,10)
    
    if(dut.key_derivated != 0):
        raise TestFailure("""Error rst hash_output,wrong hash value = {0}, expected value is {1}""".format(hex(int(dut.key_derivated.value)),0))

    if(dut.end_signal != 0):
        raise TestFailure("""Error rst end_signal,wrong end_signal value = {0}, expected value is {1}""".format(hex(int(dut.end_signal.value)),0))

    if(dut.counter_output != 0):
        raise TestFailure("""Error rst counter_output,wrong counter_output value = {0}, expected value is {1}""".format(hex(int(dut.counter_output.value)),0))

    if(dut.hash_input != first_value):
        raise TestFailure("""Error rst hash_input,wrong hash_input value = {0}, expected value is {1}""".format(hex(int(dut.hash_input.value)),hex(first_value)))
    
    dut.rst = 0




@cocotb.coroutine
def kdf_test(dut,expected_value) :
    
    i = 0
    while dut.end_signal.value == 0 :
        #print(int(dut.current_state.value))
        
        if(dut.hash_end_signal.value ):
            
            print('++++++++++++++++++++++++')
            #print(i)
            print(int(dut.counter_output))
            print(hex(int(dut.hash_input.value)))
            print(hex(int(dut.hash_output.value)))
            print(hex(int(dut.register_output.value)))
            
            
            print('++++++++++++++++++++++++++')
            
        #i = i+1
        
        yield n_cycles_clock(dut,1)
        
        
    
    print(hex(expected_value))
    if(dut.key_derivated != expected_value) :
            raise TestFailure("""Error kdf,wrong value = {0}, expected value is {1}""".format(hex(int(dut.key_derivated.value)),hex(expected_value)))
    
    
       


@cocotb.coroutine
def n_cycles_clock(dut,n):
    for i in range(0,n):
        yield RisingEdge(dut.clk)
        yield FallingEdge(dut.clk)



@cocotb.coroutine
def run_test(dut, index = 0):
    
    sum_ = 4 + int(salt_len/8) + int(user_password_len/8) + int(N/8)
    with(open(abs_path_file_storage,"rb+")) as storage_file:

        
        storage_file.seek(index*sum_)
        '''
        salt = int.from_bytes(storage_file.read(int(salt_len/8)),byteorder='little')
        user_password = int.from_bytes(storage_file.read(int(user_password_len/8)),byteorder='little')
        count = int.from_bytes(storage_file.read(4),byteorder='little')

        expected_value = int.from_bytes(storage_file.read(int(N/8)),byteorder='little')
        print(count)
        '''
        salt = np.random.randint(0,2**(64-1)-1,1,dtype=np.int64)
        user_password = np.random.randint(0,2**(64-1)-1,1,dtype=np.int64)
        count = random.randint(10,(2**5)-1)
        kdf_impl = keyDerivationFunction.KDF(count,int(salt[0]),int(user_password[0]),N,c,r,R,64,80)   
        expected_value = kdf_impl.generate_derivate_key()

        first_value = (int(user_password[0]) << (32+64)) + (int(salt[0]) << 32) + count

        print(hex(count))
        print(hex(int(salt[0])))
        print(hex(int(user_password[0])))
        print(hex(first_value))

        setup_function(dut,int(salt[0]),count,int(user_password[0]))
        
        yield rst_function_test(dut,first_value)
        yield kdf_test(dut,expected_value)




n = 25
factory = TestFactory(run_test)

factory.add_option("index",range(0,n)) #array de 10 int aleatorios entre 0 y 31
factory.generate_tests()
