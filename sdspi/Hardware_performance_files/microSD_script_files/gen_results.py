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

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
RESULTS_OFFSET = 0xC
SIGNATURE = 0xAABBCCDD

def create_fields(sheet1):
    sheet1.write(0,1,'n_blocks')
    sheet1.write(0,2,'cmd18')
    sheet1.write(0,3,'spi_clk (100MHz)')
    sheet1.write(0,4,'spi_clk (200MHz)')
    sheet1.write(0,5,'spi_clk (400MHz)')
    sheet1.write(0,6,'100Mhz time ns')
    sheet1.write(0,7,'200Mhz time ns')
    sheet1.write(0,8,'400Mhz time ns')
    sheet1.write(0,9,'100Mhz error')
    sheet1.write(0,10,'200Mhz error')
    sheet1.write(0,11,'400Mhz error')
   

def read_params_from_sd(sheet,block_n,micro_sd):
    micro_sd.seek(BLOCK_SIZE*block_n)
    signature = int.from_bytes(micro_sd.read(4),byteorder='big')
    if(signature != SIGNATURE) :
        return 0
    
    n_blocks = int.from_bytes(micro_sd.read(4),byteorder='little')
    sclk_speed = int.from_bytes(micro_sd.read(1),byteorder='little')
    cmd18 = int.from_bytes(micro_sd.read(1),byteorder='little')
    error_100 = int.from_bytes(micro_sd.read(1),byteorder='little')
    time_100 = int.from_bytes(micro_sd.read(8),byteorder='little')
    error_200 = int.from_bytes(micro_sd.read(1),byteorder='little')
    time_200 = int.from_bytes(micro_sd.read(8),byteorder='little')
    error_400 = int.from_bytes(micro_sd.read(1),byteorder='little')
    time_400 = int.from_bytes(micro_sd.read(8),byteorder='little')
    
    
    return (signature,
            n_blocks,
            sclk_speed,
            cmd18,
            error_100,
            time_100,
            error_200,
            time_200,
            error_400,
            time_400)

def get_clk_speed_from_factor(n, base_clk=100):
    return (base_clk / (2**(n+1)))


def calculated_time_in_ns(time_units,base_clk=100):
    clk_counter = base_clk#get_clk_speed_from_factor(div_clk)
    return time_units * (1000/(clk_counter))
    

def write_params(sheet1, params , i):

    sheet1.write(i,1,params[1])
    sheet1.write(i,2,params[3])
    sclk_speed_100 = get_clk_speed_from_factor(params[2],100)
    sclk_speed_200 = get_clk_speed_from_factor(params[2],200)
    sclk_speed_400 = get_clk_speed_from_factor(params[2],400)
    sheet1.write(i,3,sclk_speed_100)
    sheet1.write(i,4,sclk_speed_200)
    sheet1.write(i,5,sclk_speed_400)
    time_100 = calculated_time_in_ns(params[5],100)
    time_200 = calculated_time_in_ns(params[7],100)
    time_400 = calculated_time_in_ns(params[9],100)
    sheet1.write(i,6,time_100)
    sheet1.write(i,7,time_200)
    sheet1.write(i,8,time_400)
    sheet1.write(i,9,params[4])
    sheet1.write(i,10,params[6])
    sheet1.write(i,11,params[8])
    return i+1

def gen_calc(micro_sd):
    wb = xlwt.Workbook()
    sheet1 = wb.add_sheet("Hoja 1")
    create_fields(sheet1)
    valid_signature = 1
    i = 1
    while valid_signature == 1 :
        params = read_params_from_sd(sheet1,NUM_BLOCK_TEST+i-1,micro_sd)
        #print(params[0])
        if params == 0:
            valid_signature = 0
            break
        i = write_params(sheet1,params,i)


    wb.save('results.xls')

def main():
    with open(sys.argv[1],"rb") as micro_sd:
        gen_calc(micro_sd)


if __name__ == "__main__":
    main()
