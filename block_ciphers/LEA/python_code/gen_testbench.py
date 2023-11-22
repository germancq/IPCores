'''
 # @ Author: German Cano Quiveu, germancq
 # @ Create Time: 2023-11-16 16:17:32
 # @ Modified by: German Cano Quiveu, germancq
 # @ Modified time: 2023-11-16 16:17:50
 # @ Description:
 '''

import sys
import os
import itertools
import math
import numpy as np
import time
import LEA
from pwd import getpwnam  
import grp
import random
import os

home = os.getenv("HOME")

abs_path_file_storage = home + "/gitProjects/IPCores/block_ciphers/LEA/python_code/test_cases.HEX"

username = "germancq"
groupname = "germancq"

KEY_LEN = 128
BLOCK_LEN = 128
SD_BLOCK_SIZE = 512
BEGIN_BLOCK_IN_SD_CARD = 0#0x00100000
SIGNATURE = 0xAABBCCDD



def create_microsd_vectors(micro_sd,storage_file,num):
    storage_file.seek(0)
    
    for i in range(0,num):
        key = random.getrandbits(KEY_LEN)
        block_i = random.getrandbits(BLOCK_LEN)

        LEA_SW = LEA.LEA(key)
        expected_result = LEA_SW.encrypt(block_i)

        storage_file.write(int(key).to_bytes(int(KEY_LEN/8), byteorder='little'))
        storage_file.write(int(block_i).to_bytes(int(BLOCK_LEN/8), byteorder='little'))
        storage_file.write(int(expected_result).to_bytes(int(BLOCK_LEN/8),byteorder='little'))
        
        micro_sd.seek(SD_BLOCK_SIZE*(BEGIN_BLOCK_IN_SD_CARD+i))
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(key).to_bytes(int(KEY_LEN/8), byteorder='little'))
        micro_sd.write(int(block_i).to_bytes(int(BLOCK_LEN/8),byteorder='little'))
        micro_sd.write(int(expected_result).to_bytes(int(BLOCK_LEN/8),byteorder='little'))

    micro_sd.seek(SD_BLOCK_SIZE*(BEGIN_BLOCK_IN_SD_CARD+num))
    micro_sd.write(int(0).to_bytes(4,byteorder='little'))



def main():
    '''
        parameters
            param1 : microsd path
            param2 : N numero tests
            param3 : e , percent of create wrong test (optinal, to be implemented)
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
            print(create_microsd_vectors(micro_sd,storage_file,N))
    


if __name__ == "__main__":
    start = time.time()
    main()
    end = time.time()
    print(end - start)