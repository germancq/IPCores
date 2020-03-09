# @Author: German Cano Quiveu <germancq>
# @Date:   2019-03-06T19:26:26+01:00
# @Email:  germancq@dte.us.es
# @Filename: gen_results.py
# @Last modified by:   germancq
# @Last modified time: 2019-04-05T12:31:49+02:00

import sys
import os
import itertools
import xlwt
import time

import importlib
sys.path.append('/home/germancq/gitProjects/IPCores/hash_functions/spongent/python_code')
import spongent

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

N_candidates = [88,128,160,224,256]
r_candidates = [8,8,16,16,16]
c_candidates = [80,128,160,224,256]
R_candidates = [45,70,90,120,140]

DATA_WIDTH = 64

OPTION_HASH = 3

N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]

C = 0x1234567812345678

def create_fields(sheet1):
    sheet1.write(0,1,'text')
    sheet1.write(0,2,'hash')
    sheet1.write(0,3,'expected_hash')
    sheet1.write(0,4,'error')
    sheet1.write(0,6,'HW_time_ns')
    sheet1.write(0,7,'SW_time_ns')

def read_params_from_sd(block_n,micro_sd):
    micro_sd.seek(BLOCK_SIZE*block_n)
    signature = int.from_bytes(micro_sd.read(4),byteorder='big')
    n_iter = int.from_bytes(micro_sd.read(1),byteorder='big')
    param_0 = int.from_bytes(micro_sd.read(8),byteorder='little')

    if n_iter == 0 :
        n_iter = 1
    
    result = int.from_bytes(micro_sd.read(int(N/8)),byteorder='little')
    exec_time = int.from_bytes(micro_sd.read(8),byteorder='little')
    print("exec_time:")
    print(hex(exec_time))
    
    return (signature,
            param_0,
            result,
            exec_time)


def write_params(sheet1, params , i):

    msg = params[1]
    result = params[2]
    hw_time = int(calculated_time_in_ns(params[3]))
    
    start_sw_time = time.time_ns()
    spongent_impl = spongent.Spongent(N,c,r,R)
    expected_hash = spongent_impl.generate_hash(msg,DATA_WIDTH) 
    end_sw_time = time.time_ns()
    
    
    print(hex(params[3]))
    print(hex(expected_hash))
    print(hex(result))

    sw_time = end_sw_time - start_sw_time
    
    error = 0
    if(expected_hash != result) :
        error = 1


    sheet1.write(i,1,hex(msg))
    sheet1.write(i,2,hex(result))
    sheet1.write(i,3,hex(expected_hash))
    sheet1.write(i,4,hex(error))
    sheet1.write(i,6,int(hw_time))
    sheet1.write(i,7,int(sw_time))
    
    
    return i+1



def calculated_time_in_ns(time_units,base_clk=100):
    clk_counter = base_clk
    return time_units * (1000/(clk_counter))
        

def gen_calc(micro_sd):
    wb = xlwt.Workbook()
    sheet1 = wb.add_sheet("Hoja_1")
    create_fields(sheet1)
    valid_signature = 1
    i = 1
    while valid_signature == 1 :
        params = read_params_from_sd(NUM_BLOCK_TEST+i-1,micro_sd)
        print(i)
        if params[0] != SIGNATURE:
            break
        i = write_params(sheet1,params,i)


    wb.save('results_224.xls')

def main():
    with open(sys.argv[1],"rb") as micro_sd:
        
        gen_calc(micro_sd)


if __name__ == "__main__":
    main()
