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


BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

def create_microsd_vectors(micro_sd,N):
    #storage_file.write(int(N).to_bytes(4,byteorder='big'))
    zero = 0
    counter_errors = 0
    j=0
    for i in range(0,N):
        
        salt = np.random.randint(0,2**63-1,1,dtype=np.int64)
        count = random.randint(1000,10000)
        user_password = random.randint(0,(2**32)-1)
        

        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j=j+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(salt[0]).to_bytes(8, byteorder='little'))
        micro_sd.write(int(count).to_bytes(4, byteorder='little'))
        micro_sd.write(int(user_password).to_bytes(4, byteorder='little'))
        micro_sd.write(int(zero).to_bytes(16,byteorder='little'))



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