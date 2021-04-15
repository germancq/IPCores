# @Author: German Cano Quiveu <germancq>
# @Date:   2021-04-12T15:26:26+01:00
# @Email:  germancq@dte.us.es
# @Filename: gen_results.py
# @Last modified by:   germancq

import sys
import os
import itertools
import xlwt
import time
import math


BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00000000
SIGNATURE = 0xAABBCCDD
RESULTS_OFFSET = 0x0


N_candidates =        [88,128,160,224,256]
r_candidates =        [8,8,16,16,16]
c_candidates =        [80,128,160,224,256]
R_candidates =        [45,70,90,120,140]

OPTION_HASH = 0

N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]

def create_fields(sheet1):
    sheet1.write(0,0,'size_feed_data')
    sheet1.write(0,1,'hash')
    sheet1.write(0,2,'expected_value')
    sheet1.write(0,3,'error')
    sheet1.write(0,4,'HW_time_ns')

def read_params_from_sd(block_n,micro_sd):
    n = int(math.ceil(N/8))
    micro_sd.seek(BLOCK_SIZE*block_n)
    signature = int.from_bytes(micro_sd.read(4),byteorder='big')
    next_block = int.from_bytes(micro_sd.read(4),byteorder='little')
    size_feed_data = int.from_bytes(micro_sd.read(8),byteorder='little')
    expected_result = int.from_bytes(micro_sd.read(n),byteorder='little')
    

    
    result = int.from_bytes(micro_sd.read(n),byteorder='little')
    exec_time = int.from_bytes(micro_sd.read(8),byteorder='little')
    #print(hex(result))
    
    return (signature,
            next_block,
            size_feed_data,
            result,
            expected_result,
            exec_time)


def write_params(sheet1, params , i, j):

    next_block = params[1]
    #print(hex(text))
    size_feed_data = params[2]
    #print(hex(key))
    result = params[3]
    hw_time = int(calculated_time_in_ns(params[5]))
    print("*************************")
    for k in range(0,6):
        print(hex(params[k]))
    print("*************************")
    error = 0
    if(params[4] != result) :
        error = 1
    else :
        sheet1.write(j,0,hex(size_feed_data))
        sheet1.write(j,1,hex(result))
        sheet1.write(j,2,hex(params[4]))
        sheet1.write(j,3,hex(error))
        sheet1.write(j,4,int(hw_time))

    
    return next_block+1


def calculated_time_in_ns(time_units,base_clk=100):
    clk_counter = base_clk#get_clk_speed_from_factor(div_clk)
    return time_units * (1000/(clk_counter))
    

def gen_calc(micro_sd):
    wb = xlwt.Workbook()
    sheet1 = wb.add_sheet("Hoja_1")
    create_fields(sheet1)
    valid_signature = 1
    i = 1
    j = 1
    while valid_signature == 1 :
        params = read_params_from_sd(NUM_BLOCK_TEST+i-1,micro_sd)
        #print(params[0])
        if params[0] != SIGNATURE:
            break
        i = write_params(sheet1,params,i,j)
        j = j+1


    wb.save('results_spongent88_100_64kB.xls')

def main():
    with open(sys.argv[1],"rb") as micro_sd:
        gen_calc(micro_sd)


if __name__ == "__main__":
    main()
