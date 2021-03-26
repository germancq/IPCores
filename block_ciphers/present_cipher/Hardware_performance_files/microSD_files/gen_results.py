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

TOTAL_TIME_125 = 0
TOTAL_TIME_140 = 0
TOTAL_TIME_187 = 0
TOTAL_TIME_225 = 0
TOTAL_TIME_281 = 0
TOTAL_TIME_375 = 0
TOTAL_TIME_450 = 0

def create_fields(sheet1):
    sheet1.write(0,1,'text')
    sheet1.write(0,2,'key')
    sheet1.write(0,3,'enc_dec')
    sheet1.write(0,4,'expected_value')

    sheet1.write(0,5,'ciphertext_125MHz')
    sheet1.write(0,6,'error_125MHz')
    sheet1.write(0,7,'HW_time_ns_125Mhz')

    sheet1.write(0,8,'ciphertext_140.625MHz')
    sheet1.write(0,9,'error_140.625MHz')
    sheet1.write(0,10,'HW_time_ns_140.625Mhz')

    sheet1.write(0,11,'ciphertext_187.500MHz')
    sheet1.write(0,12,'error_187.500MHz')
    sheet1.write(0,13,'HW_time_ns_187.500Mhz')

    sheet1.write(0,14,'ciphertext_225MHz')
    sheet1.write(0,15,'error_225MHz')
    sheet1.write(0,16,'HW_time_ns_225Mhz')

    sheet1.write(0,17,'ciphertext_281.25MHz')
    sheet1.write(0,18,'error_281.25MHz')
    sheet1.write(0,19,'HW_time_ns_281.25Mhz')

    sheet1.write(0,20,'ciphertext_375MHz')
    sheet1.write(0,21,'error_375MHz')
    sheet1.write(0,22,'HW_time_ns_375Mhz')
    
    sheet1.write(0,23,'ciphertext_450MHz')
    sheet1.write(0,24,'error_450MHz')
    sheet1.write(0,25,'HW_time_ns_450Mhz')

def read_params_from_sd(block_n,micro_sd):
    micro_sd.seek(BLOCK_SIZE*block_n)
    signature = int.from_bytes(micro_sd.read(4),byteorder='big')
    param_0 = int.from_bytes(micro_sd.read(8),byteorder='little')
    param_1 = int.from_bytes(micro_sd.read(10),byteorder='little')
    param_2 = int.from_bytes(micro_sd.read(1),byteorder='little')
    expected_result = int.from_bytes(micro_sd.read(8),byteorder='little')
    
    
    
    
    result_125 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_125 = int.from_bytes(micro_sd.read(8),byteorder='little')

    result_140 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_140 = int.from_bytes(micro_sd.read(8),byteorder='little')

    result_187 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_187 = int.from_bytes(micro_sd.read(8),byteorder='little')

    result_225 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_225 = int.from_bytes(micro_sd.read(8),byteorder='little')

    result_281 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_281 = int.from_bytes(micro_sd.read(8),byteorder='little')

    result_375 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_375 = int.from_bytes(micro_sd.read(8),byteorder='little')

    result_450 = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time_450 = int.from_bytes(micro_sd.read(8),byteorder='little')
    
    
    #print(hex(result))
    
    return (signature,
            param_0,
            param_1,
            param_2,
            result_125,
            result_140,
            result_187,
            result_225,
            result_281,
            result_375,
            result_450,
            expected_result,
            exec_time_125,
            exec_time_140,
            exec_time_187,
            exec_time_225,
            exec_time_281,
            exec_time_375,
            exec_time_450)


def write_params(sheet1, params , i):
    global TOTAL_TIME_125 
    global TOTAL_TIME_140 
    global TOTAL_TIME_187 
    global TOTAL_TIME_225 
    global TOTAL_TIME_281 
    global TOTAL_TIME_375 
    global TOTAL_TIME_450 


    text = params[1]
    key = params[2]
    enc_dec = params[3]
    result_125 = params[4]
    result_140 = params[5]
    result_187 = params[6]
    result_225 = params[7]
    result_281 = params[8]
    result_375 = params[9]
    result_450 = params[10]
    hw_time_125 = int(calculated_time_in_ns(params[12],100))
    hw_time_140 = int(calculated_time_in_ns(params[13],100))
    hw_time_187 = int(calculated_time_in_ns(params[14],100))
    hw_time_225 = int(calculated_time_in_ns(params[15],100))
    hw_time_281 = int(calculated_time_in_ns(params[16],100))
    hw_time_375 = int(calculated_time_in_ns(params[17],100))
    hw_time_450 = int(calculated_time_in_ns(params[18],100))
    error_125 = 0
    error_140 = 0
    error_187 = 0
    error_225 = 0
    error_281 = 0
    error_375 = 0
    error_450 = 0

    if(result_125 != params[11]):
        error_125 = 1

    if(result_140 != params[11]):
        error_140 = 1

    if(result_187 != params[11]):
        error_187 = 1

    if(result_225 != params[11]):
        error_225 = 1

    if(result_281 != params[11]):
        error_281 = 1

    if(result_375 != params[11]):
        error_375 = 1  

    if(result_450 != params[11]):
        error_450 = 1 
    
    sheet1.write(i,1,hex(text))
    sheet1.write(i,2,hex(key))
    sheet1.write(i,3,hex(enc_dec))
    sheet1.write(i,4,hex(params[11]))

    sheet1.write(i,5,hex(result_125))
    sheet1.write(i,6,hex(error_125))
    sheet1.write(i,7,hw_time_125)

    sheet1.write(i,8,hex(result_140))
    sheet1.write(i,9,hex(error_140))
    sheet1.write(i,10,hw_time_140)

    sheet1.write(i,11,hex(result_187))
    sheet1.write(i,12,hex(error_187))
    sheet1.write(i,13,hw_time_187)

    sheet1.write(i,14,hex(result_225))
    sheet1.write(i,15,hex(error_225))
    sheet1.write(i,16,hw_time_225)

    sheet1.write(i,17,hex(result_281))
    sheet1.write(i,18,hex(error_281))
    sheet1.write(i,19,hw_time_281)

    sheet1.write(i,20,hex(result_375))
    sheet1.write(i,21,hex(error_375))
    sheet1.write(i,22,hw_time_375)

    sheet1.write(i,23,hex(result_450))
    sheet1.write(i,24,hex(error_450))
    sheet1.write(i,25,hw_time_450)

    TOTAL_TIME_125 = TOTAL_TIME_125 + hw_time_125
    TOTAL_TIME_140 = TOTAL_TIME_140 + hw_time_140
    TOTAL_TIME_187 = TOTAL_TIME_187 + hw_time_187
    TOTAL_TIME_225 = TOTAL_TIME_225 + hw_time_225
    TOTAL_TIME_281 = TOTAL_TIME_281 + hw_time_281
    TOTAL_TIME_375 = TOTAL_TIME_375 + hw_time_375
    TOTAL_TIME_450 = TOTAL_TIME_450 + hw_time_450
    
    return i+1


def calculated_time_in_ns(time_units,base_clk=100):
    clk_counter = base_clk#get_clk_speed_from_factor(div_clk)
    return time_units * (1000/(clk_counter))
    

def gen_calc(micro_sd):
    global TOTAL_TIME_125 
    global TOTAL_TIME_140 
    global TOTAL_TIME_187 
    global TOTAL_TIME_225 
    global TOTAL_TIME_281 
    global TOTAL_TIME_375 
    global TOTAL_TIME_450

    TOTAL_TIME_125 = 0
    TOTAL_TIME_140 = 0
    TOTAL_TIME_187 = 0
    TOTAL_TIME_225 = 0
    TOTAL_TIME_281 = 0
    TOTAL_TIME_375 = 0
    TOTAL_TIME_450 = 0

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


    wb.save('results_new2.xls')

    print('RESULTS')
    print(TOTAL_TIME_125)
    print(TOTAL_TIME_140)
    print(TOTAL_TIME_187)
    print(TOTAL_TIME_225)
    print(TOTAL_TIME_281)
    print(TOTAL_TIME_375)
    print(TOTAL_TIME_450)

def main():
    with open(sys.argv[1],"rb") as micro_sd:
        gen_calc(micro_sd)


if __name__ == "__main__":
    main()
