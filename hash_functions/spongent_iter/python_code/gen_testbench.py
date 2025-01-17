'''
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-06-29 14:00:10
 # @ Modified by: Your name
 # @ Modified time: 2020-06-29 14:00:15
 # @ Description:
 '''



import sys
import os
import itertools
import allpairspy
import math
import numpy as np

import spongent_iter
from pwd import getpwnam  
import grp
import random
import os
home = os.getenv("HOME")

abs_path_file_to_hash = home + "/gitProjects/IPCores/hash_functions/spongent_iter/files/example.txt"


username = "germancq"
groupname = "germancq"

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0#0x00100000
SIGNATURE = 0xAABBCCDD

N_candidates = [88,128,160,224,256]
r_candidates = [8,8,16,16,16]
c_candidates = [80,128,160,224,256]
R_candidates = [45,70,90,120,140]

OPTION_HASH = 0
SIZE_FEED_DATA_BYTES = 1*1024


N = N_candidates[OPTION_HASH]
r = r_candidates[OPTION_HASH]
c = c_candidates[OPTION_HASH]
R = R_candidates[OPTION_HASH]


def create_microsd_vectors(micro_sd,VIOstorage_file,num,e):
    
    zero = 0
    counter_errors = 0
    next_block = NUM_BLOCK_TEST
    for i in range(0,num):

        size = SIZE_FEED_DATA_BYTES#random.randint(1000,4000)
        if((size & 0x1) == 1):
            size = size + 1  
        spongent_impl = spongent_iter.Spongent(N,c,r,R)
        expected_value = 0
        spongent_state = 0

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
            spongent_state = spongent_impl.feed_data(data_feed,spongent_state)
            if(k % int(512/int(r/8)) == 0):
                print(k)
                print(hex(block_to_write))
                micro_sd.seek(BLOCK_SIZE*(block_to_write))
                micro_sd.write(zero.to_bytes(512, byteorder='big'))
                micro_sd.seek(BLOCK_SIZE*(block_to_write))
                j = j+1
                block_to_write = current_block+j+1

            micro_sd.write(data_feed.to_bytes((int(r/8)),byteorder='big'))

            feed_data_string = '{:04x}'.format(data_feed)
            if(r == 8):
                feed_data_string = '{:02x}'.format(data_feed)
            
            VIOstorage_file.write("""{0}\n""".format(feed_data_string))
                    
        expected_value = spongent_impl.squeezing_phase(spongent_state)

        
        print(hex(expected_value))
        print('------------------------------')
        percent = random.randint(1,100)
        if(percent < e):
            expected_value = expected_value + 1
            counter_errors = counter_errors + 1

        expected_value_string = '{:22x}'.format(expected_value)
        if (N == 128):
            expected_value_string = '{:32x}'.format(expected_value)
        elif(N == 160):
            expected_value_string = '{:40x}'.format(expected_value)
        elif(N == 224):
            expected_value_string = '{:54x}'.format(expected_value)
        elif(N == 256):
            expected_value_string = '{:64x}'.format(expected_value)

        VIOstorage_file.write("""expected result {0}\n""".format(expected_value_string))

       

        #clear block
        micro_sd.seek(BLOCK_SIZE*current_block)
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        

        micro_sd.seek(BLOCK_SIZE*current_block)
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
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
            param1 : microsd file path
            param2 : VIO feed data file path
            param3 : N numero tests
            param4 : e , percent of create wrong test

    '''
    try:
        with(open(sys.argv[1],"rb+")) as micro_sd:
            micro_sd.close()
    except:
        with(open(sys.argv[1],"wb+")) as micro_sd:
            micro_sd.close()
    try:
        with(open(sys.argv[2],"rb+")) as VIOstorage_file:
            VIOstorage_file.close()
    except:
        with(open(sys.argv[2],"wb+")) as VIOstorage_file:
            VIOstorage_file.close()

    with(open(sys.argv[2],"w")) as VIOstorage_file:        
        with open(sys.argv[1],"rb+") as micro_sd:
            num = int(sys.argv[3])
            e = int(sys.argv[4])
            print(create_microsd_vectors(micro_sd,VIOstorage_file,num,e))


if __name__ == "__main__":
    main()