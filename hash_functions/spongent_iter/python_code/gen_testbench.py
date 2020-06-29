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
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

N_candidates = [88,128,160,224,256]
r_candidates = [8,8,16,16,16]
c_candidates = [80,128,160,224,256]
R_candidates = [45,70,90,120,140]

OPTION_HASH = 0


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
   

def create_microsd_vectors(micro_sd,example_file,num,e):
    
    #storage_file.write(int(N).to_bytes(4,byteorder='big'))
    zero = 0
    counter_errors = 0
    next_block = NUM_BLOCK_TEST
    for i in range(0,num):
        example_file.seek(0)
        size = random.randint(764,16400)
        example_file.write(os.urandom(size))
        example_file.seek(0)
        spongent_impl = spongent_iter.Spongent(N,c,r,R)
        expected_value = 0
        spongent_state = 0
        for k in range (0,size):
            data_feed = int.from_bytes(example_file.read(r),byteorder='big')
            spongent_state = spongent_impl.feed_data(data_feed,spongent_state)
        expected_value = spongent_impl.squeezing_phase(spongent_state)

        
        print(hex(expected_value))
        percent = random.randint(1,100)
        if(percent < e):
            expected_value = expected_value + 1
            counter_errors = counter_errors + 1


        #clear block
        micro_sd.seek(BLOCK_SIZE*(next_block))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))


        micro_sd.seek(BLOCK_SIZE*(next_block))
        next_block = next_block + int(math.ceil(size/BLOCK_SIZE))
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
            param1 : microsd path
            param2 : N numero tests
            param3 : e , percent of create wrong test
    '''
    try:
        with(open(abs_path_file_to_hash,"rb+")) as hash_file:
            hash_file.close()
    except:
        with(open(abs_path_file_to_hash,"wb+")) as hash_file:
            hash_file.close()

    uid = getpwnam(username).pw_uid   
    gid = grp.getgrnam(groupname)[2]
    os.chown(abs_path_file_to_hash,uid,gid)

    with(open(abs_path_file_to_hash,"rb+")) as hash_file:
        with open(sys.argv[1],"rb+") as micro_sd:
            num = int(sys.argv[2])
            e = int(sys.argv[3])
            print(create_microsd_vectors(micro_sd,hash_file,num,e))


if __name__ == "__main__":
    main()