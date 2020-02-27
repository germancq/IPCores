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
sys.path.append('/home/germancq/gitProjects/examples_cryptography/python')
import present

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

def create_fields(sheet1):
    sheet1.write(0,1,'text')
    sheet1.write(0,2,'key')
    sheet1.write(0,3,'enc_dec')
    sheet1.write(0,4,'ciphertext')
    sheet1.write(0,5,'expected_enc_value')
    sheet1.write(0,6,'expected_dec_value')
    sheet1.write(0,7,'error')
    sheet1.write(0,8,'HW_time')
    sheet1.write(0,9,'SW_enc_time')
    sheet1.write(0,10,'SW_dec_time')

def read_params_from_sd(block_n,micro_sd):
    micro_sd.seek(BLOCK_SIZE*block_n)
    signature = int.from_bytes(micro_sd.read(4),byteorder='big')
    n_iter = int.from_bytes(micro_sd.read(1),byteorder='big')
    param_0 = int.from_bytes(micro_sd.read(8),byteorder='little')
    param_1 = int.from_bytes(micro_sd.read(10),byteorder='little')
    param_2 = int.from_bytes(micro_sd.read(1),byteorder='little')
    
    #micro_sd.seek((BLOCK_SIZE*block_n) + RESULTS_OFFSET)
    if n_iter == 0 :
        n_iter = 1
    
    result = int.from_bytes(micro_sd.read(8),byteorder='little')
    exec_time = int.from_bytes(micro_sd.read(4),byteorder='little')
    #print(hex(result))
    
    return (signature,
            param_0,
            param_1,
            param_2,
            result,
            exec_time)


def write_params(sheet1, params , i):

    text = params[1]
    key = params[2]
    enc_dec = params[3]
    result = params[4]
    start_prep_time = time.time()
    present_SW = present.Present(key)
    end_prep_time = time.time()
    strat_enc_time = time.time()
    expected_enc_value = present_SW.encrypt(text)
    end_enc_time = time.time()
    start_dec_time = time.time()
    expected_dec_value = present_SW.decrypt(text) 
    end_dec_time = time.time()
    print("*************************")
    print(hex(result))
    print(hex(expected_enc_value))
    print(hex(expected_dec_value))
    print("*************************")
    error = 0
    if(enc_dec) :
        if(expected_dec_value != result) :
            error = 1
    else :   
        if(expected_enc_value != result) :
            error = 1 
    
    prep_time = end_prep_time - start_prep_time
    enc_time = prep_time + (end_enc_time - strat_enc_time)
    dec_time = prep_time + (end_dec_time - start_dec_time)

    sheet1.write(i,1,hex(text))
    sheet1.write(i,2,hex(key))
    sheet1.write(i,3,hex(enc_dec))
    sheet1.write(i,4,hex(result))
    sheet1.write(i,5,hex(expected_enc_value))
    sheet1.write(i,6,hex(expected_dec_value))
    sheet1.write(i,7,hex(error))
    sheet1.write(i,9,hex(enc_time))
    sheet1.write(i,10,hex(dec_time))
    
    return i+1

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


    wb.save('results.xls')

def main():
    with open(sys.argv[1],"rb") as micro_sd:
        gen_calc(micro_sd)


if __name__ == "__main__":
    main()
