# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gen_testbench.py                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: germancq <germancq@dte.us.es>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/04 12:40:15 by germancq          #+#    #+#              #
#    Updated: 2020/09/04 13:10:10 by germancq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys
import os
import itertools
import allpairspy
import math
import numpy as np
import time
import present_ctr
from pwd import getpwnam  
import grp
import random
import os

home = os.getenv("HOME")

abs_path_file_storage = home + "/gitProjects/IPCores/block_ciphers/present_cipher_ctr/python_code/test_cases.HEX"

username = "germancq"
groupname = "germancq"

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

def create_microsd_vectors(micro_sd,storage_file,num,e):
    
    storage_file.seek(0)
    zero = 0
    counter_errors = 0
    k = 0
    

    for i in range(0,num):
        
        key = np.random.randint(0,2**63-1,1,dtype=np.int64)
        IV = np.random.randint(0,2**63-1,1,dtype=np.int64)
        
        n_blocks = random.randint(5,10)

        present_SW = present_ctr.Present_CTR(key[0],IV[0])

        storage_file.write(n_blocks.to_bytes(4,byteorder='little'))
        storage_file.write(int(key[0]).to_bytes(10, byteorder='little'))  
        storage_file.write(int(IV[0]).to_bytes(8, byteorder='little'))  

        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+k))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+k))
        k=k+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(IV[0]).to_bytes(8, byteorder='little'))
        micro_sd.write(int(key[0]).to_bytes(10, byteorder='little'))
        micro_sd.write(n_blocks.to_bytes(4,byteorder='little'))

        microsd_blocks_ciphered = math.ceil((n_blocks*64)/BLOCK_SIZE)
               
        k = k+1
        l = 0
        for j in range(0,n_blocks):
            text = np.random.randint(0,2**63-1,1,dtype=np.int64)
            plaintext = text[0]
            ciphertext = present_SW.encryption_decryption(plaintext,j)
            storage_file.write(int(plaintext).to_bytes(8, byteorder='little'))
            storage_file.write(int(ciphertext).to_bytes(8, byteorder='little'))
            if(l % 512 == 0):
                k = k+1
                micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+k))
                micro_sd.write(zero.to_bytes(512, byteorder='big'))

            micro_sd.write(int(plaintext).to_bytes(8, byteorder='little'))
            micro_sd.write(int(ciphertext).to_bytes(8, byteorder='little'))
            l = l+16

        
    #clear block
    k = k+1
    micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+k))
    micro_sd.write(zero.to_bytes(512, byteorder='big'))
        
       

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
    start = time.time()
    main()
    end = time.time()
    print(end - start)