'''
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-07-09 22:00:58
 # @ Modified by: Your name
 # @ Modified time: 2020-07-09 22:01:03
 # @ Description:
 '''


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
sys.path.append(home+'/gitProjects/IPCores/HMAC/hash_iter/python_code')
import hmac_spongent_iter

N_candidates =        [88,128,160,224,256]
r_candidates =        [8,8,16,16,16]
c_candidates =        [80,128,160,224,256]
R_candidates =        [45,70,90,120,140]

OPTION_HASH = 4

N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]

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


def setup_function(dut,key):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst = 0
    dut.key = key
    dut.data_ready = 0
    #dut.start_hash = 0


@cocotb.coroutine
def rst_function_test(dut):
    dut.rst = 1
    yield n_cycles_clock(dut,20)
    
    if(dut.hash_impl.rst != 1):
        raise TestFailure("""Error in reset, wrong value = {0}, expected value = {1}""".format(hex(int(dut.hash_impl.rst.value)),hex(1))) 


@cocotb.coroutine
def execution_test(dut,msg,len_msg,hmac_impl):
    dut.rst = 0
    

    mask = 0xFFFF
    if(r == 8):
        mask = 0xFF

    n = int(len_msg / r)
    j = 0
    spongent_state = 0

    data_chunk = (msg >> (r*(n-1))) & mask
    dut.feed_data = data_chunk
    '''
    print('-------------------------------------------------')
    print(hex(dut.Si.value))
    #Si phase
    for k in range(0,int(N/r)):
        dut.data_ready = 1    
        yield n_cycles_clock(dut,1)
        dut.data_ready = 0
        #yield n_cycles_clock(dut,1)

        while(dut.current_state != 0x1):
            yield n_cycles_clock(dut,1)

        print(int(dut.counter_n_o.value))
        yield n_cycles_clock(dut,1)
       
        print(hex(dut.feed_data_hash.value)) 
        #yield n_cycles_clock(dut,1)

        #while(dut.hash_impl.busy != 0):
        #    yield n_cycles_clock(dut,1)   

        print(hex(dut.hash_impl.state.value))

    while(dut.current_state != 4):
        yield n_cycles_clock(dut,1)

    print('-------------------------------------')
    print(hex(dut.hash_impl.state.value))    
    print(hex(hmac_impl.spongent_state))
    print('-------------------------------------')    
    yield n_cycles_clock(dut,2)
    hmac_impl.feed_data(data_chunk)
    while(dut.current_state != 5):
        yield n_cycles_clock(dut,1)
    '''
    for i in range (0,n):
        j = j+1
        data_chunk = (msg >> (r*(n-i-1))) & mask
        dut.feed_data = data_chunk
        dut.data_ready = 1    
        yield n_cycles_clock(dut,1)
        dut.data_ready = 0
        yield n_cycles_clock(dut,1)
        print(i)
        #print(hex(dut.state.value))

        #while(dut.current_state != 0xf):
        #    yield n_cycles_clock(dut,1) 
        #print(hex(data_chunk))
        #print(hex(dut.feed_data_hash.value)) 
           
          
        while(dut.busy == 1):
            yield n_cycles_clock(dut,1) 

        

        hmac_impl.feed_data(data_chunk)   
        #print('-------------------------------------')
        #print(hex(dut.hash_impl.state.value))    
        #print(hex(hmac_impl.spongent_state))
        #print('-------------------------------------')  
        

    print('msg send it')        
    expected_result = hmac_impl.stop_feed()

    dut.stop_feed = 1
    
    yield n_cycles_clock(dut,1) 

    dut.stop_feed = 0

    while(dut.current_state == 0xE):
        yield n_cycles_clock(dut,1) 


    #print('first_hash_done') 
    #print(hex(dut.hash_impl.digest.value))
    #print(hex(dut.hash_result.value))
    #print(hex(dut.reg_hash_result_o.value))
    if(dut.digest != hmac_impl.h_1):
        raise TestFailure("""Error in digest first value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.digest.value)),hex(hmac_impl.h_1))) 


    while(dut.end_hmac == 0):
        #print(hex(dut.current_state.value))
        #print(int(dut.counter_n_o.value))
        yield n_cycles_clock(dut,1)

    yield n_cycles_clock(dut,1)    

        
    
    #print(hex(dut.hash_impl.digest.value))
    #print(hex(dut.hash_result.value))
    #print(hex(dut.reg_hash_result_o.value))
    if(dut.digest != expected_result):
        raise TestFailure("""Error in digest value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.digest.value)),hex(expected_result)))            

@cocotb.coroutine
def n_cycles_clock(dut,n):
    for _ in range(0,n):
        yield RisingEdge(dut.clk)
        yield FallingEdge(dut.clk) 

        
@cocotb.coroutine
def run_test(dut,msg=0):
    key = random.randint(0,(2**24)-1)
    msg = random.randint(0,(2**24)-1)
    #print(hex(msg))
    hmac_impl = hmac_spongent_iter.HMAC_Spongent_iter(key,N,c,r,R)
    hmac_impl.begin_hmac()
    setup_function(dut,key) 
    yield rst_function_test(dut)    
    yield execution_test(dut,msg,64,hmac_impl)  

             
n = 10
factory = TestFactory(run_test)

factory.add_option("msg", np.random.randint(low=1,high=(2**8)-1,size=n))
factory.generate_tests() 