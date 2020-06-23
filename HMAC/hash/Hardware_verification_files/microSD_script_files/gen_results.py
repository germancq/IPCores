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


BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD
RESULTS_OFFSET = 0x0

N_candidates =        [88,128,160,224,256]
r_candidates =        [8,8,16,16,16]
c_candidates =        [80,128,160,224,256]
R_candidates =        [45,70,90,120,140]

OPTION_HASH = 4

N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]

INPUT_WIDTH = 64
KEY_WIDTH = 64

def create_fields(sheet1):
    sheet1.write(0,1,'msg')
    sheet1.write(0,2,'key')
    sheet1.write(0,3,'digest')
    sheet1.write(0,4,'expected_value')
    sheet1.write(0,5,'error')
    sheet1.write(0,6,'HW_time_ns')

def read_params_from_sd(block_n,micro_sd):
    micro_sd.seek(BLOCK_SIZE*block_n)
    signature = int.from_bytes(micro_sd.read(4),byteorder='big')
    param_0 = int.from_bytes(micro_sd.read(int(INPUT_WIDTH/8)),byteorder='little')
    param_1 = int.from_bytes(micro_sd.read(int(KEY_WIDTH/8)),byteorder='little')
    expected_result = int.from_bytes(micro_sd.read(int(N/8)),byteorder='little')
    

    
    result = int.from_bytes(micro_sd.read(int(N/8)),byteorder='little')
    exec_time = int.from_bytes(micro_sd.read(8),byteorder='little')
    #print(hex(result))
    
    return (signature,
            param_0,
            param_1,
            result,
            expected_result,
            exec_time)


def write_params(sheet1, params , i):

    text = params[1]
    print(hex(text))
    key = params[2]
    print(hex(key))
    result = params[3]
    hw_time = int(calculated_time_in_ns(params[5]))
    print("*************************")
    print(hex(result))
    print(hex(params[4]))
    print("*************************")
    
    sheet1.write(i,1,hex(text))
    sheet1.write(i,2,hex(key))
    sheet1.write(i,3,hex(result))
    sheet1.write(i,4,hex(params[4]))
    sheet1.write(i,5,hex(1))
    sheet1.write(i,6,int(hw_time))

    
    return i+1


def calculated_time_in_ns(time_units,base_clk=100):
    clk_counter = base_clk#get_clk_speed_from_factor(div_clk)
    return time_units * (1000/(clk_counter))
    

def gen_calc(micro_sd):
    wb = xlwt.Workbook()
    sheet1 = wb.add_sheet("Hoja_1")
    create_fields(sheet1)
    valid_signature = 1
    i = 1
    while valid_signature == 1 :
        params = read_params_from_sd(NUM_BLOCK_TEST+i-1,micro_sd)
        #print(params[0])
        if params[0] != SIGNATURE:
            break
        i = write_params(sheet1,params,i)


    wb.save('results_new.xls')

def main():
    with open(sys.argv[1],"rb") as micro_sd:
        gen_calc(micro_sd)


if __name__ == "__main__":
    main()
