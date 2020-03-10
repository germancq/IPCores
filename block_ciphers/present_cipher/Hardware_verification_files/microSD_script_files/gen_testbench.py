# @Author: German Cano Quiveu <germancq>
# @Date:   2019-03-06T19:26:17+01:00
# @Email:  germancq@dte.us.es
# @Filename: gen_testbench.py
# @Last modified by:   germancq
# @Last modified time: 2019-04-05T13:40:59+02:00

import sys
import os
import itertools
import allpairspy
import math
import numpy as np


abs_path_file_storage = "/home/germancq/gitProjects/IPCores/block_ciphers/present_cipher/Hardware_verification_files/microSD_script_files/test_cases.HEX"

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
NUMBER_ITER = 1
SIGNATURE = 0xAABBCCDD

'''
def gen_all_posibilities(micro_sd):



    parameters = [
        np.random.randint(0,2**63-1,20,dtype=np.int64), #input_1 values
        np.random.randint(0,2**63-1,20,dtype=np.int64), #input_2 values
        range(0,1+1)
    ]
    total_posibilities = 1
    modulo_op = []
    for i in range(0,len(parameters)):
        total_posibilities = total_posibilities * len(parameters[i])
        modulo_op.insert(i,total_posibilities)
    print(total_posibilities)
    j = 0
    zero = 0
    for n in range (0, total_posibilities):
        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))


        pairs = create_posibility(n,parameters,modulo_op)
        print(pairs)
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j = j+1
        
        key_high_16_bits = np.random.randint(0,2**15 -1)

        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(NUMBER_ITER.to_bytes(1, byteorder='big'))
        
        micro_sd.write(int(pairs[0]).to_bytes(8, byteorder='little'))#text
        micro_sd.write(int(pairs[1]).to_bytes(10, byteorder='little'))#key
        micro_sd.write(pairs[2].to_bytes(1, byteorder='little'))#enc_dec

        micro_sd.write(zero.to_bytes(4, byteorder='big'))

    #last block with no signature
    micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
    micro_sd.write(zero.to_bytes(512, byteorder='big'))


def create_posibility(n,parameters,modulo_op):
    result = []
    for i in range(0,len(parameters)):
        x = n % modulo_op[i]
        long = len(parameters[i])
        factor_div = math.floor(modulo_op[i] / long)

        if(x != 0):
            element = math.floor(x / factor_div)
        else:
            element = 0

        result.append(parameters[i][element])
    return result

'''

def create_microsd_vectors(micro_sd,storage_file):
    n_cases = int.from_bytes(storage_file.read(4),byteorder='little')
    zero = 0
    j=0
    print(n_cases)
    for i in range(0,n_cases):
        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))


        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j=j+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(NUMBER_ITER.to_bytes(1, byteorder='big'))
        key = int.from_bytes(storage_file.read(10),byteorder='little')
        text = int.from_bytes(storage_file.read(8),byteorder='little')
        expected_enc = int.from_bytes(storage_file.read(8),byteorder='little')
        expected_dec = int.from_bytes(storage_file.read(8),byteorder='little')

        micro_sd.write(int(text).to_bytes(8, byteorder='little'))#text
        micro_sd.write(int(key).to_bytes(10, byteorder='little'))#key
        micro_sd.write(int(0).to_bytes(1, byteorder='little'))#enc
        micro_sd.write(int(expected_enc).to_bytes(8,byteorder='little'))

        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))


        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j = j+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(NUMBER_ITER.to_bytes(1, byteorder='big'))
        micro_sd.write(int(text).to_bytes(8, byteorder='little'))#text
        micro_sd.write(int(key).to_bytes(10, byteorder='little'))#key
        micro_sd.write(int(1).to_bytes(1, byteorder='little'))#enc
        micro_sd.write(int(expected_dec).to_bytes(8,byteorder='little'))



def main():
    with(open(abs_path_file_storage,"rb+")) as storage_file:
        with open(sys.argv[1],"rb+") as micro_sd:
            create_microsd_vectors(micro_sd,storage_file)
    

if __name__ == "__main__":
    main()
