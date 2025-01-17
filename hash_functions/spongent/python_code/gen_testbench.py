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

import spongent
from pwd import getpwnam  
import grp
import random

abs_path_file_storage = "/home/germancq/gitProjects/IPCores/hash_functions/spongent/python_code/test_cases.HEX"

username = "germancq"
groupname = "germancq"

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

N_candidates = [88,128,160,224,256]
r_candidates = [8,8,16,16,16]
c_candidates = [80,128,160,224,256]
R_candidates = [45,70,90,120,140]

OPTION_HASH = 0
DATA_WIDTH = 64

N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]

'''
def gen_all_posibilities(micro_sd):



    parameters = [
        np.random.randint(0,2**63-1,400,dtype=np.int64), #input_1 values
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
        
        #pairs[0] = 0
        #pairs[1] = 0        

        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(NUMBER_ITER.to_bytes(1, byteorder='big'))
        
        micro_sd.write(int(pairs[0]).to_bytes(8, byteorder='little'))#text
        
        

        

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



def create_microsd_vectors(micro_sd,VIOstorage_file,storage_file,num,e):
    storage_file.seek(0)
    #storage_file.write(int(N).to_bytes(4,byteorder='big'))
    zero = 0
    counter_errors = 0

    j=0
    for i in range(0,num):
        
        text = np.random.randint(0,2**63-1,1,dtype=np.int64)
        spongent_impl = spongent.Spongent(N,c,r,R)
        expected_value = spongent_impl.generate_hash(int(text[0]),DATA_WIDTH) 
        print(hex(int(text[0])))
        print(hex(expected_value))
        percent = random.randint(1,100)
        if(percent < e):
            expected_value = expected_value + 1
            counter_errors = counter_errors + 1

        text_string = '{0:0{1}x}'.format(int(text[0]),16)
        expected_value_string = '{:022x}'.format(expected_value)
        if (N == 128):
            expected_value_string = '{:032x}'.format(expected_value)
        elif(N == 160):
            expected_value_string = '{:040x}'.format(expected_value)
        elif(N == 224):
            expected_value_string = '{:054x}'.format(expected_value)
        elif(N == 256):
            expected_value_string = '{:064x}'.format(expected_value)
        VIOstorage_file.write("""{0} {1}\n""".format(text_string,expected_value_string))

        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j=j+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(text[0]).to_bytes(8, byteorder='little'))
        micro_sd.write(int(expected_value).to_bytes(int(N/8),byteorder='little'))



    #clear block
    micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
    micro_sd.write(zero.to_bytes(512, byteorder='big'))



    return counter_errors

def main():
    '''
        parameters
            param1 : microsd path
            param2 : VIO path
            param3 : N numero tests
            param4 : e , percent of create wrong test
    '''
    try:
        with(open(abs_path_file_storage,"rb+")) as storage_file:
            storage_file.close()
    except:
        with(open(abs_path_file_storage,"wb+")) as storage_file:
            storage_file.close()

    try:
        with(open(sys.argv[2],"rb+")) as VIOstorage_file:
            VIOstorage_file.close()
    except:
        with(open(sys.argv[2],"wb+")) as VIOstorage_file:
            VIOstorage_file.close()

    uid = getpwnam(username).pw_uid   
    gid = grp.getgrnam(groupname)[2]   
    os.chown(abs_path_file_storage,uid,gid)
    os.chown(sys.argv[2],uid,gid)

    with(open(abs_path_file_storage,"rb+")) as storage_file:
        with(open(sys.argv[2],"w")) as VIOstorage_file:
            with open(sys.argv[1],"rb+") as micro_sd:
                num = int(sys.argv[3])
                e = int(sys.argv[4])
                print(create_microsd_vectors(micro_sd,VIOstorage_file,storage_file,num,e))
    

if __name__ == "__main__":
    main()