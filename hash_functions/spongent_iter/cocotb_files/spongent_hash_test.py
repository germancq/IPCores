# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    spongent_hash_test.py                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/18 17:52:50 by germancq          #+#    #+#              #
#    Updated: 2021/04/15 12:40:02 by germancq         ###   ########.fr        #
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

import importlib
import sys
import os
home = os.getenv("HOME")
sys.path.append(home+'/gitProjects/IPCores/hash_functions/spongent_iter/python_code')
import LFSR
import spongent_iter

N_candidates =        [88,128,160,224,256]
r_candidates =        [8,8,16,16,16]
c_candidates =        [80,128,160,224,256]
R_candidates =        [45,70,90,120,140]

OPTION_HASH = 1

N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]

SIZE = 2*1024

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
def execution_test(dut,msg,len_msg,spongent_impl):
    dut.rst = 0
    
    #prepare data
    print(hex(dut.last_padded_data.value))
    mask = 0xFFFF
    padding = 0x8000
    if(r == 8):
        mask = 0xFF
        padding = 0x80

    n = int(len_msg / r)
    j = 0
    spongent_state = 0
    for i in range (0,n):
        j = j+1
        data_chunk = (msg >> (r*(j-i-1))) & mask
        dut.data_input = data_chunk
        dut.data_ready = 1    
        yield n_cycles_clock(dut,1)
        dut.data_ready = 0
        yield n_cycles_clock(dut,1)
        #print(i)
        #print(hex(dut.state.value))
        
        while(dut.busy == 1):
            yield n_cycles_clock(dut,1) 
        spongent_state = spongent_impl.feed_data(data_chunk,spongent_state)  
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

        
    expected_result = spongent_impl.squeezing_phase(spongent_state)

    if(dut.digest != expected_result):
        raise TestFailure("""Error in digest value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.digest.value)),hex(expected_result)))            

@cocotb.coroutine
def n_cycles_clock(dut,n):
    for _ in range(0,n):
        yield RisingEdge(dut.clk)
        yield FallingEdge(dut.clk) 

        
@cocotb.coroutine
def run_test(dut,msg=0):
    msg = random.randint(0,(2**24)-1)
    #print(hex(msg))
    spongent_impl = spongent_iter.Spongent(N,c,r,R)
    
    setup_function(dut) 
    yield rst_function_test(dut)    
    yield execution_test(dut,msg,SIZE,spongent_impl)  

             
n = 100
factory = TestFactory(run_test)

factory.add_option("msg", np.random.randint(low=1,high=(2**8)-1,size=n))
factory.generate_tests() 