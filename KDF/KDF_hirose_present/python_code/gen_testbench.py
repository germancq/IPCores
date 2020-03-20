'''
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-03-20 22:10:49
 # @ Modified by: Your name
 # @ Modified time: 2020-03-20 22:10:51
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

abs_path_file_storage = "/home/germancq/gitProjects/IPCores/KDF/KDF_hirose_present/python_code/test_cases.HEX"

username = "germancq"
groupname = "germancq"

BLOCK_SIZE = 512
NUM_BLOCK_TEST = 0x00100000
SIGNATURE = 0xAABBCCDD

def create_microsd_vectors(micro_sd,storage_file,N,e):
    storage_file.seek(0)
    #storage_file.write(int(N).to_bytes(4,byteorder='big'))
    zero = 0
    counter_errors = 0
    j=0
    for i in range(0,N):
        
        salt = np.random.randint(0,2**63-1,1,dtype=np.int64)
        count = random.randint(10,(2**5)-1)
        user_password = random.randint(0,(2**32)-1)
        kdf_impl = keyDerivationFunction.KDF(count,int(salt[0]),user_password)   
        expected_value = kdf_impl.generate_derivate_key()
        print(i)
        print(hex(expected_value))

        percent = random.randint(1,100)
        if(percent < e):
            expected_value = expected_value + 1
            counter_errors = counter_errors + 1
  
        storage_file.write(int(salt[0]).to_bytes(8, byteorder='little'))   
        storage_file.write(int(count).to_bytes(4, byteorder='little'))   
        storage_file.write(int(user_password).to_bytes(4, byteorder='little'))   
        storage_file.write(expected_value.to_bytes(16, byteorder='little'))    


        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j=j+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(salt[0]).to_bytes(8, byteorder='little'))
        micro_sd.write(int(count).to_bytes(4, byteorder='little'))
        micro_sd.write(int(user_password).to_bytes(4, byteorder='little'))
        micro_sd.write(int(expected_value).to_bytes(16,byteorder='little'))



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
            N = int(sys.argv[2])
            e = int(sys.argv[3])
            print(create_microsd_vectors(micro_sd,storage_file,N,e))
    

if __name__ == "__main__":
    main()