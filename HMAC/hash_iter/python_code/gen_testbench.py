'''
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-07-10 12:52:40
 # @ Modified by: Your name
 # @ Modified time: 2020-07-10 12:52:52
 # @ Description:
 '''




import sys
import os
import itertools
import allpairspy
import math
import numpy as np

import hmac_spongent_iter
from pwd import getpwnam  
import grp
import random
import os


username = "germancq"
groupname = "germancq"

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

N_candidates = [88,128,160,224,256]
r_candidates = [8,8,16,16,16]
c_candidates = [80,128,160,224,256]
R_candidates = [45,70,90,120,140]

OPTION_HASH = 4


N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]


def create_microsd_vectors(micro_sd,num,e):
    
    zero = 0
    counter_errors = 0
    next_block = NUM_BLOCK_TEST
    for i in range(0,num):
        key = random.randint(0,2**30)
        size = random.randint(1000,4000)
        if((size & 0x1) == 1):
            size = size + 1  
        hmac_impl = hmac_spongent_iter.HMAC_Spongent_iter(key,N,c,r,R)
        hmac_impl.begin_hmac()
        expected_value = 0

        n_blocks = int(math.ceil(size/BLOCK_SIZE))
        print(n_blocks)
        current_block = next_block
        next_block = current_block + n_blocks + 1

        j = 0
        print('------------------------------')
        print(i)

        block_to_write = current_block+j+1
        for k in range (0,int(size/int(r/8))):
            data_feed = random.randint(0,255*(int(r/8))) 
            #print(hex(data_feed))
            hmac_impl.feed_data(data_feed)
            if(k % int(512/int(r/8)) == 0):
                print(k)
                print(hex(block_to_write))
                micro_sd.seek(BLOCK_SIZE*(block_to_write))
                micro_sd.write(zero.to_bytes(512, byteorder='big'))
                micro_sd.seek(BLOCK_SIZE*(block_to_write))
                j = j+1
                block_to_write = current_block+j+1

            micro_sd.write(data_feed.to_bytes((int(r/8)),byteorder='big'))
            
                    
        expected_value = hmac_impl.stop_feed()

        
        print(hex(expected_value))
        print('------------------------------')
        percent = random.randint(1,100)
        if(percent < e):
            expected_value = expected_value + 1
            counter_errors = counter_errors + 1


        #clear block
        micro_sd.seek(BLOCK_SIZE*current_block)
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        

        micro_sd.seek(BLOCK_SIZE*current_block)
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(key.to_bytes(8, byteorder='little'))
        micro_sd.write(next_block.to_bytes(4, byteorder='little'))
        micro_sd.write(size.to_bytes(8, byteorder='little'))
        micro_sd.write(int(expected_value).to_bytes(int(N/8),byteorder='little')
        )



    #clear block
    micro_sd.seek(BLOCK_SIZE*(next_block))
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
        num = int(sys.argv[2])
        e = int(sys.argv[3])
        print(create_microsd_vectors(micro_sd,num,e))


if __name__ == "__main__":
    main()