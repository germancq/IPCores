'''
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-03-21 00:04:35
 # @ Modified by: Your name
 # @ Modified time: 2020-03-21 00:04:41
 # @ Description:
 '''

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

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

def create_microsd_vectors(micro_sd,N):
    #storage_file.write(int(N).to_bytes(4,byteorder='big'))
    zero = 0
    counter_errors = 0
    j=0
    salt_len_gen = 64
    if(salt_len < salt_len_gen):
        salt_len_gen = salt_len

    up_len_gen = 64
    if(user_password_len < up_len_gen):
        up_len_gen = user_password_len
    for i in range(0,N):
        
        salt = np.random.randint(0,2**(salt_len_gen-1)-1,1,dtype=np.int64)
        user_password = np.random.randint(0,2**(up_len_gen-1)-1,1,dtype=np.int64)
        count = random.randint(1000,10000)
        
        

        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j=j+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(salt[0]).to_bytes(int(salt_len/8), byteorder='little'))
        micro_sd.write(int(user_password[0]).to_bytes(int(user_password_len/8), byteorder='little'))
        micro_sd.write(int(count).to_bytes(4, byteorder='little'))
        micro_sd.write(int(zero).to_bytes(int(N/8),byteorder='little'))
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

    
    with open(sys.argv[1],"rb+") as micro_sd:
        N = int(sys.argv[2])
        print(create_microsd_vectors(micro_sd,N))
    

if __name__ == "__main__":
    main()