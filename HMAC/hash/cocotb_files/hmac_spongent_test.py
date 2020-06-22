'''
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-06-22 21:52:45
 # @ Modified by: Your name
 # @ Modified time: 2020-06-22 21:52:50
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
sys.path.append(home+'/gitProjects/IPCores/hash_functions/spongent/python_code')
import spongent
sys.path.append(home+'/gitProjects/IPCores/HMAC/hash/python_code')
import hmac_spongent


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


def setup_function(dut,key,msg):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.msg = msg
    dut.key = key
    dut.rst = 0  


@cocotb.coroutine
def rst_function_test(dut,hmac_impl):
    dut.rst = 1
    yield n_cycles_clock(dut,20)


    if(dut.ipad != hmac_impl.ipad):
        raise TestFailure("""Error in reset ipad value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.ipad.value)),hex(hmac_impl.ipad)))

    if(dut.opad != hmac_impl.opad):
        raise TestFailure("""Error in reset opad value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.opad.value)),hex(hmac_impl.opad)))

    if(dut.Si != hmac_impl.S_i):
        raise TestFailure("""Error in reset S_i value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.Si.value)),hex(hmac_impl.S_i)))

    if(dut.So != hmac_impl.S_o):
        raise TestFailure("""Error in reset opad value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.S_o.value)),hex(hmac_impl.S_o)))

    if(dut.hash_1.rst != 1):
        raise TestFailure("""Error in reset hash_1 value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.hash_1.rst.value)),hex(1)))

    if(dut.end_hash_0 != 0):
        raise TestFailure("""Error in reset end_hash_0 value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.end_hash_0.rst.value)),hex(0)))


@cocotb.coroutine
def hmac_test(dut,expected_result,hmac_impl):
    dut.rst = 0
    yield n_cycles_clock(dut,1)

    i = 0
    '''
    while(dut.end_hash_0 == 0):
        i = i+1
        yield n_cycles_clock(dut,1)

    yield n_cycles_clock(dut,1)
    

    if(dut.hash_output_0 != hmac_impl.h_1):
        raise TestFailure("""Error in hmac_test first hash value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.hash_output_0.value)),hex(hmac_impl.h_1)))
    '''
    while(dut.end_hmac == 0):
        i = i+1
        yield n_cycles_clock(dut,1)

    if(dut.digest != expected_result):
        raise TestFailure("""Error in hmac_test digest value, wrong value = {0}, expected value = {1}""".format(hex(int(dut.digest.value)),hex(expected_result)))    

    print(i)

@cocotb.coroutine
def n_cycles_clock(dut,n):
    for _ in range(0,n):
        yield RisingEdge(dut.clk)
        yield FallingEdge(dut.clk) 


@cocotb.coroutine
def run_test(dut,msg=0,key=0):
    msg = random.randint(0,(2**24)-1) 
    key = random.randint(0,(2**24)-1)
    hmac_impl = hmac_spongent.HMAC_Sponegnt(key,N,c,r,R)
    expected_result = hmac_impl.generate_MAC(msg,64)
    setup_function(dut,key,msg) 
    yield rst_function_test(dut,hmac_impl) 
    yield hmac_test(dut,expected_result,hmac_impl)

          


n = 2
factory = TestFactory(run_test)

factory.add_option("msg", np.random.randint(low=1,high=(2**8)-1,size=n))
factory.add_option("key", np.random.randint(low=1,high=(2**8)-1,size=n))
factory.generate_tests() 