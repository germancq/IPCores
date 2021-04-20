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

def create_fields(sheet1):
    sheet1.write(0,1,'text')
    sheet1.write(0,2,'key')
    sheet1.write(0,3,'enc_dec')
    sheet1.write(0,4,'ciphertext')
    sheet1.write(0,5,'expected_value')
    sheet1.write(0,6,'error')
    sheet1.write(0,7,'IPCUT_execution_time_ns')
    sheet1.write(0,8,'setup_read_microSD_time_ns')
    sheet1.write(0,9,'exec_read_microSD_time_ns')
    sheet1.write(0,10,'read_microSD_total_time_ns')
    sheet1.write(0,11,'write_microSD_time_ns')
    sheet1.write(0,12,'total_time_ns')

def read_params_from_sd(block_n,micro_sd):
    micro_sd.seek(BLOCK_SIZE*block_n)
    signature = int.from_bytes(micro_sd.read(4),byteorder='big')
    param_0 = int.from_bytes(micro_sd.read(8),byteorder='little')
    param_1 = int.from_bytes(micro_sd.read(10),byteorder='little')
    param_2 = int.from_bytes(micro_sd.read(1),byteorder='little')
    expected_result = int.from_bytes(micro_sd.read(8),byteorder='little')
    

    
    result = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time = int.from_bytes(micro_sd.read(8),byteorder='little')
    setup_read_time = int.from_bytes(micro_sd.read(4),byteorder='little')
    read_time = int.from_bytes(micro_sd.read(4),byteorder='little')
    write_time = int.from_bytes(micro_sd.read(4),byteorder='little')
    total_time = int.from_bytes(micro_sd.read(4),byteorder='little')
    #print(hex(result))
    
    return (signature,
            param_0,
            param_1,
            param_2,
            result,
            expected_result,
            exec_time,
            setup_read_time,
            read_time,
            write_time,
            total_time)


def write_params(sheet1, params , i):

    text = params[1]
    #print(hex(text))
    key = params[2]
    #print(hex(key))
    enc_dec = params[3]
    result = params[4]
    hw_time = int(calculated_time_in_ns(params[6]))
    setup_rd_time = int(calculated_time_in_ns(params[7]))
    exec_rd_time = int(calculated_time_in_ns(params[8]))
    rd_time = setup_rd_time + exec_rd_time
    wr_time = int(calculated_time_in_ns(params[9]))
    total_time = int(calculated_time_in_ns(params[10]))
    print("*************************")
    for j in range(0,11):
        print(hex(params[j]))
    print("*************************")
    error = 0
    if(params[5] != result) :
        error = 1
    
    sheet1.write(i,1,hex(text))
    sheet1.write(i,2,hex(key))
    sheet1.write(i,3,hex(enc_dec))
    sheet1.write(i,4,hex(result))
    sheet1.write(i,5,hex(params[5]))
    sheet1.write(i,6,hex(error))
    sheet1.write(i,7,int(hw_time))
    sheet1.write(i,8,int(setup_rd_time))
    sheet1.write(i,9,int(exec_rd_time))
    sheet1.write(i,10,int(rd_time))
    sheet1.write(i,11,int(wr_time))
    sheet1.write(i,12,int(total_time))
    
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


    wb.save('results_100_detailed.xls')

def main():
    with open(sys.argv[1],"rb") as micro_sd:
        gen_calc(micro_sd)


if __name__ == "__main__":
    main()
