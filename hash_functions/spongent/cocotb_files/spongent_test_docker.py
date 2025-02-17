import importlib
import math
import random
import sys
import time

import cocotb
import LFSR
import numpy as np
import spongent
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.result import ReturnValue, TestFailure
from cocotb.triggers import FallingEdge, RisingEdge, Timer

sys.path.append(
    '/home/germancq/gitProjects/IPCores/hash_functions/spongent/python_code')

CLK_PERIOD = 20  # 50 MHz

# the keyword await
#   Testbenches built using Cocotb use coroutines.
#   While the coroutine is executing the simulation is paused.
#   The coroutine uses the await keyword
#   to pass control of execution back to
#   the simulator and simulation time can advance again.
#
#   await return when the 'Trigger' is resolve
#
#   Coroutines may also await a list of triggers
#   to indicate that execution should resume if any of them fires


def setup_function(dut, msg):
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
     dut.msg.value = msg
     dut.rst.value = 0


async def rst_function_test(dut, expected_padded_msg):
     dut.rst.value = 1
    await n_cycles_clock(dut,20)
    
    if(dut.permutation_impl.rst.value != 1):
        raise TestFailure("""Error in reset, wrong value = {0}, expected value = {1}""".format(hex(int(dut.permutation_impl.rst.value)),hex(1))) 

    

    if( dut.padded_msg.value != expected_padded_msg):
        raise TestFailure("""Error in padded_msg, wrong value = {0}, expected value = {1}""".format(hex(int(dut.padded_msg.value)),hex(expected_padded_msg))) 


async def absorbing_test(dut,expected_state,spongent_impl):
     dut.rst.value = 0

    if(dut.absorbing_phase_impl.permutation_initial_state.value != spongent_impl.absorbing_before_p_states[0]):
        raise TestFailure("""Error in absorbing initial state, wrong value = {0}, expected value = {1}""".format(hex(int(dut.absorbing_phase_impl.permutation_initial_state.value)),hex(spongent_impl.absorbing_before_p_states[0]))) 
    
    i = 0
    print(int(dut.absorbing_phase_impl.DATA_WIDTH_PADDED))

    while ( dut.end_absorbing.value == 0):
        if(dut.absorbing_phase_impl.end_permutation.value == 1):
            
            

            await n_cycles_clock(dut,1)
            
            if(dut.absorbing_phase_impl.absorbing_state.value != spongent_impl.absorbing_after_p_states[i]):
                 raise TestFailure("""Error in absorbing after permutation state, wrong value = {0}, expected value = {1} at {2}""".format(hex(int(dut.absorbing_phase_impl.absorbing_state.value)),hex(spongent_impl.absorbing_after_p_states[i]),i)) 

            i = i+1    
            
        await n_cycles_clock(dut,1)

    if( dut.absorbing_state.value != expected_state):
        raise TestFailure("""Error in absorbing state, wrong value = {0}, expected value = {1}""".format(hex(int(dut.absorbing_state.value)),hex(expected_state))) 


async def squeezing_test(dut,spongent_impl,expected_result):


    if(dut.squeezing_phase_impl.result.value != spongent_impl.squeezing_results[0]):
        raise TestFailure("""Error in squeezing initial state, wrong value = {0}, expected value = {1}""".format(hex(int(dut.squeezing_phase_impl.result.value)),hex(spongent_impl.squeezing_results[0]))) 

    i = 0
    
    while(dut.squeezing_phase_impl.end_squeezing.value == 0):
        if(dut.squeezing_phase_impl.end_permutation.value == 1):

            print(hex(int(dut.squeezing_phase_impl.counter_o.value)))
            await n_cycles_clock(dut,1)
            print(hex(int(dut.squeezing_phase_impl.state.value)))
            
            
            if(dut.squeezing_phase_impl.state.value != spongent_impl.squeezing_states[i]):
                raise TestFailure("""Error in squeezing state, wrong value = {0}, expected value = {1} at {2}""".format(hex(int(dut.squeezing_phase_impl.state.value)),hex(spongent_impl.squeezing_states[i]),i)) 

            if(dut.squeezing_phase_impl.result.value != spongent_impl.squeezing_results[i]):
                raise TestFailure("""Error in squeezing result, wrong value = {0}, expected value = {1} at {2}""".format(hex(int(dut.squeezing_phase_impl.result.value)),hex(spongent_impl.squeezing_results[i]),i)) 
            
            i = i+1
        
        await n_cycles_clock(dut,1)    


    if(dut.squeezing_phase_impl.result.value != expected_result):
        raise TestFailure("""Error in Hash, wrong value = {0}, expected value = {1}""".format(hex(int(dut.squeezing_phase_impl.result.value)),hex(expected_result)))

        
    

async def n_cycles_clock(dut,n):
    for _ in range(0,n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk) 

        
async def run_test(dut,msg=0):
    msg = random.randint(0,(2**24)-1)
    print(hex(msg))
    spongent_impl = spongent.Spongent(256,256,16,140)
    spongent_impl.initialization_phase(msg,64)
    expected_padded_msg = spongent_impl.padded_msg
    expected_state = spongent_impl.absorbing_phase()
    expected_result = spongent_impl.squeezing_phase(expected_state)
    setup_function(dut,msg) 
    await rst_function_test(dut,expected_padded_msg)    
    await absorbing_test(dut,expected_state,spongent_impl)  
    await squeezing_test(dut,spongent_impl,expected_result)

             
n = 10
factory = TestFactory(run_test)

factory.add_option("msg", np.random.randint(low=1,high=(2**8)-1,size=n))
factory.generate_tests() 

