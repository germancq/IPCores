'''
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-03-17 16:43:12
 # @ Modified by: Your name
 # @ Modified time: 2020-03-17 16:43:17
 # @ Description:
 '''

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
    sheet1.write(0,1,'iv')
    sheet1.write(0,2,'key')
    sheet1.write(0,3,'expected_value')
    sheet1.write(0,4,'ciphertext_100MHz')
    sheet1.write(0,5,'error_100MHz')
    sheet1.write(0,6,'HW_time_ns_100Mhz')
    sheet1.write(0,7,'ciphertext_200MHz')
    sheet1.write(0,8,'error_200MHz')
    sheet1.write(0,9,'HW_time_ns_200Mhz')
    sheet1.write(0,10,'ciphertext_400MHz')
    sheet1.write(0,11,'error_400MHz')
    sheet1.write(0,12,'HW_time_ns_400Mhz')

def read_params_from_sd(block_n,micro_sd):
    micro_sd.seek(BLOCK_SIZE*block_n)
    signature = int.from_bytes(micro_sd.read(4),byteorder='big')
    param_0 = int.from_bytes(micro_sd.read(10),byteorder='little')
    param_1 = int.from_bytes(micro_sd.read(10),byteorder='little')
    expected_result = int.from_bytes(micro_sd.read(8),byteorder='little')
    
    
    
    
    result_100 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_100 = int.from_bytes(micro_sd.read(8),byteorder='little')
    result_200 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_200 = int.from_bytes(micro_sd.read(8),byteorder='little')
    result_400 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_400 = int.from_bytes(micro_sd.read(8),byteorder='little')
    #print(hex(result))
    
    return (signature,
            param_0,
            param_1,
            result_100,
            result_200,
            result_400,
            expected_result,
            exec_time_100,
            exec_time_200,
            exec_time_400)


def write_params(sheet1, params , i):

    iv = params[1]
    key = params[2]
    result_100 = params[3]
    result_200 = params[4]
    result_400 = params[5]
    hw_time_100 = int(calculated_time_in_ns(params[7],100))
    hw_time_200 = int(calculated_time_in_ns(params[8],100))
    hw_time_400 = int(calculated_time_in_ns(params[9],100))
    print('/////////////////////////')
    print(hex(params[3]))
    print(hex(params[4]))
    print(hex(params[5]))
    print(hex(params[7]))
    print(hex(params[8]))
    print(hex(params[9]))
    print('/////////////////////////')
    error_100 = 0
    error_200 = 0
    error_400 = 0

    if(result_100 != params[6]):
        error_100 = 1

    if(result_200 != params[6]):
        error_200 = 1

    if(result_400 != params[6]):
        error_400 = 1        
    
    sheet1.write(i,1,hex(iv))
    sheet1.write(i,2,hex(key))
    sheet1.write(i,3,hex(params[6]))
    sheet1.write(i,4,hex(result_100))
    sheet1.write(i,5,hex(error_100))
    sheet1.write(i,6,hw_time_100)
    sheet1.write(i,7,hex(result_200))
    sheet1.write(i,8,hex(error_200))
    sheet1.write(i,9,hw_time_200)
    sheet1.write(i,10,hex(result_400))
    sheet1.write(i,11,hex(error_400))
    sheet1.write(i,12,hw_time_400)

    
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
