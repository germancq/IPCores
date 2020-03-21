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

import keyDerivationFunction
from pwd import getpwnam  
import grp
import random

abs_path_file_storage = "/home/germancq/gitProjects/IPCores/KDF/KDF_spongent/python_code/test_cases.HEX"

username = "germancq"
groupname = "germancq"

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

N_candidates =        [88,128,160,224,256]
r_candidates =        [8,8,16,16,16]
c_candidates =        [80,128,160,224,256]
R_candidates =        [45,70,90,120,140]
salt_len_candidates = [24,64,64,96,128]
up_len_candidates =   [32,32,64,96,96]

OPTION_HASH = 4

N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]
salt_len = salt_len_candidates[OPTION_HASH]
user_password_len = up_len_candidates[OPTION_HASH]

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



def create_microsd_vectors(micro_sd,storage_file,num,e):
    storage_file.seek(0)
    #storage_file.write(int(N).to_bytes(4,byteorder='big'))
    zero = 0
    counter_errors = 0
    salt_len_gen = 64
    if(salt_len < salt_len_gen):
        salt_len_gen = salt_len

    up_len_gen = 64
    if(user_password_len < up_len_gen):
        up_len_gen = user_password_len    

    j=0
    for i in range(0,num):
        
        

        salt = np.random.randint(0,2**(salt_len_gen-1)-1,1,dtype=np.int64)
        user_password = np.random.randint(0,2**(up_len_gen-1)-1,1,dtype=np.int64)
        count = random.randint(10,(2**5)-1)
        kdf_impl = keyDerivationFunction.KDF(count,int(salt[0]),int(user_password[0]),N,c,r,R,salt_len,user_password_len)   
        expected_value = kdf_impl.generate_derivate_key()

        percent = random.randint(1,100)
        if(percent < e):
            expected_value = expected_value + 1
            counter_errors = counter_errors + 1

        storage_file.write(int(salt[0]).to_bytes(int(salt_len/8), byteorder='little'))   
        storage_file.write(int(user_password[0]).to_bytes(int(user_password_len/8), byteorder='little'))   
        storage_file.write(int(count).to_bytes(4, byteorder='little'))   
        storage_file.write(expected_value.to_bytes(int(N/8), byteorder='little'))    
    


        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j=j+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(salt[0]).to_bytes(int(salt_len/8), byteorder='little'))
        micro_sd.write(int(user_password[0]).to_bytes(int(user_password_len/8), byteorder='little'))
        micro_sd.write(int(count).to_bytes(4, byteorder='little'))
        micro_sd.write(int(expected_value).to_bytes(int(N/8),byteorder='little'))
        print("///////////////////////")



    #clear block
    micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
    micro_sd.write(zero.to_bytes(512, byteorder='big'))



    return counter_errors

def main():
    '''
        parameters
            param1 : microsd path
            param2 : N numero tests
            param3 : e , percent of create wrong test
    '''
    try:
        with(open(abs_path_file_storage,"rb+")) as storage_file:
            storage_file.close()
    except:
        with(open(abs_path_file_storage,"wb+")) as storage_file:
            storage_file.close()

    uid = getpwnam(username).pw_uid   
    gid = grp.getgrnam(groupname)[2]   
    os.chown(abs_path_file_storage,uid,gid)

    with(open(abs_path_file_storage,"rb+")) as storage_file:
        with open(sys.argv[1],"rb+") as micro_sd:
            num = int(sys.argv[2])
            e = int(sys.argv[3])
            print(create_microsd_vectors(micro_sd,storage_file,num,e))
    

if __name__ == "__main__":
    main()