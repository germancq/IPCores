# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    spongent_hash_bbt_test.py                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/18 17:52:50 by germancq          #+#    #+#              #
#    Updated: 2021/05/27 18:04:37 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import cocotb
import numpy as np
import time
import random
import math
import re
from cocotb.triggers import Timer,RisingEdge, FallingEdge,ClockCycles
from cocotb.regression import TestFactory
from cocotb.result import TestFailure, ReturnValue
from cocotb.clock import Clock

import importlib
import sys
import os
home = os.getenv("HOME")
sys.path.append(home+'/gitProjects/IPCores/hash_functions/spongent_iter/python_code')
import LFSR
import spongent_iter

data_file_str = home + "/gitProjects/IPCores/hash_functions/spongent_iter/files/VIO_inputTests_1kB_88_1000_0"

N_candidates =        [88,128,160,224,256]
r_candidates =        [8,8,16,16,16]
c_candidates =        [80,128,160,224,256]
R_candidates =        [45,70,90,120,140]

OPTION_HASH = 0

N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]

SIZE = 1*1024

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


def setup_function(dut):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst = 0
    dut.data_ready = 0
    #dut.start_hash = 0


@cocotb.coroutine
def rst_function_test(dut):
    dut.rst = 1
    yield n_cycles_clock(dut,20)
    if(dut.permutation_impl.rst != 1):
        raise TestFailure("""Error in reset, wrong value = {0}, expected value = {1}""".format(hex(int(dut.permutation_impl.rst.value)),hex(1))) 


@cocotb.coroutine
def execution_test(dut,len_msg,data_file):
    dut.rst = 0
    
    for i in range (0,len_msg):
        #print(i)
        line = data_file.readline().strip()
        #print(line)
        
        
        dut.data_input = int(line,16)
        dut.data_ready = 1    
        yield n_cycles_clock(dut,1)
        dut.data_ready = 0
        yield n_cycles_clock(dut,1)
        #print(i)
        #print(hex(dut.state.value))
        
        while(dut.busy == 1):
            yield n_cycles_clock(dut,1) 
         
        '''  
        print('-------------------------------------')
        print(hex(dut.state.value))    
        print(hex(spongent_state))
        print('-------------------------------------')
        '''
    #print('msg send it')        

    dut.start_hash = 1
    
    yield n_cycles_clock(dut,1) 

    dut.start_hash = 0

    while(dut.end_hash == 0):
            yield n_cycles_clock(dut,1)

    r_line = data_file.readline().strip()  
    print(r_line)
    expected_result_chunks=re.split("\s+",r_line)
    expected_result = int(expected_result_chunks[2],16)

    if(dut.digest != expected_result):
        raise TestFailure("""Error in digest value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.digest.value)),hex(expected_result)))            

@cocotb.coroutine
def n_cycles_clock(dut,n):
    for i in range(0,n):
        yield RisingEdge(dut.clk)
        yield FallingEdge(dut.clk)

        
@cocotb.coroutine
def run_test(dut,index=0):

    data_file = open(data_file_str,"rt")
    #3 bytes por dato en 88 y 128
    #38 bytes en el ultimo resultado en 88
    
    #offset = (3 * SIZE) + 39
    #data_file.seek(index*offset)
    for _ in range(index*(SIZE+1)):
        next(data_file)
    
    setup_function(dut) 
    yield rst_function_test(dut)    
    yield execution_test(dut,SIZE,data_file)  
    data_file.close()
             
n = 1000
factory = TestFactory(run_test)

factory.add_option("index",range(0,n))
factory.generate_tests() 