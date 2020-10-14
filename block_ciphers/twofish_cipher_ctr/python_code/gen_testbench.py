'''
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-03-17 12:54:50
 # @ Modified by: Your name
 # @ Modified time: 2020-03-17 12:54:59
 # @ Description:
 '''

import sys
import os
import itertools
import allpairspy
import math
import random
import numpy as np
from pwd import getpwnam  
import grp
import twofish_ctr

home = os.getenv("HOME")

abs_path_file_storage = home + "/gitProjects/IPCores/block_ciphers/twofish_cipher_ctr/python_code/test_cases.HEX"

username = "germancq"
groupname = "germancq"

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
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

def create_microsd_vectors(micro_sd,storage_file,N,e):
    storage_file.seek(0)
    #storage_file.write(int(N).to_bytes(4,byteorder='big'))
    zero = 0
    counter_errors = 0
    j=0
    k=0
    for i in range(0,N):
        

        key = random.randint(0,2**31)
        iv = random.randint(0,2**31)
        n_blocks = random.randint(5,10)

        twofish_SW = twofish_ctr.Twofish(key,iv)

        storage_file.write(n_blocks.to_bytes(4, byteorder='little')) 
        storage_file.write(int(key).to_bytes(16, byteorder='little')) 
        storage_file.write(int(iv).to_bytes(16, byteorder='little')) 

         #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+k))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+k))
        k=k+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(iv).to_bytes(16, byteorder='little'))
        micro_sd.write(int(key).to_bytes(16, byteorder='little'))
        micro_sd.write(n_blocks.to_bytes(4,byteorder='little'))


        
        for j in range(0,n_blocks):
            plaintext = random.randint(0,2**31)
            ciphertext = twofish_SW.encryption_decryption(plaintext,j)
            storage_file.write(int(plaintext).to_bytes(16, byteorder='little'))
            storage_file.write(int(ciphertext).to_bytes(16, byteorder='little'))
            

            micro_sd.write(int(plaintext).to_bytes(16, byteorder='little'))
            micro_sd.write(int(ciphertext).to_bytes(16, byteorder='little'))
        

        



    #clear block
    micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+k))
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
            N = int(sys.argv[2])
            e = int(sys.argv[3])
            print(create_microsd_vectors(micro_sd,storage_file,N,e))
    

if __name__ == "__main__":
    main()
