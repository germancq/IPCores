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
import present

home = os.getenv("HOME")

abs_path_file_storage = home + "/gitProjects/IPCores/block_ciphers/present_cipher/python_code/test_cases.HEX"
abs_path_VIOfile_storage = home + "/test_cases_VIO_generated.txt"

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

def create_microsd_vectors(micro_sd,storage_file,VIOstorage_file,N,e):
    storage_file.seek(0)
    #storage_file.write(int(N).to_bytes(4,byteorder='big'))
    zero = 0
    counter_errors = 0
    j=0
    for i in range(0,N):
        

        key = np.random.randint(0,2**63-1,1,dtype=np.int64)
        text = np.random.randint(0,2**63-1,1,dtype=np.int64)
        present_SW = present.Present(int(key[0]))
        expected_enc_value = present_SW.encrypt(int(text[0]))
        expected_dec_value = present_SW.decrypt(int(text[0]))

        percent = random.randint(1,100)
        if(percent < e):
            expected_enc_value = expected_enc_value + 1
            expected_dec_value = expected_dec_value + 1
            counter_errors = counter_errors + 1

        storage_file.write(int(key[0]).to_bytes(10, byteorder='little'))   
        storage_file.write(int(text[0]).to_bytes(8, byteorder='little'))   
        storage_file.write(expected_enc_value.to_bytes(8, byteorder='little'))   
        storage_file.write(expected_dec_value.to_bytes(8, byteorder='little'))    

        key_string = '{:020x}'.format(int(key[0]))
        text_string = '{:016x}'.format(int(text[0]))
        expected_enc_value_string = '{:016x}'.format(expected_enc_value)
        expected_dec_value_string = '{:016x}'.format(expected_dec_value)

        VIOstorage_file.write("""{0} {1} 0 {2}\n""".format(key_string,text_string,expected_enc_value_string))
        VIOstorage_file.write("""{0} {1} 1 {2}\n""".format(key_string,text_string,expected_dec_value_string))

        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))

        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j=j+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(text[0]).to_bytes(8, byteorder='little'))
        micro_sd.write(int(key[0]).to_bytes(10, byteorder='little'))
        micro_sd.write(int(0).to_bytes(1, byteorder='little'))#enc
        micro_sd.write(int(expected_enc_value).to_bytes(8,byteorder='little'))

        #clear block
        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        micro_sd.write(zero.to_bytes(512, byteorder='big'))


        micro_sd.seek(BLOCK_SIZE*(NUM_BLOCK_TEST+j))
        j = j+1
        micro_sd.write(SIGNATURE.to_bytes(4, byteorder='big'))
        micro_sd.write(int(text[0]).to_bytes(8, byteorder='little'))
        micro_sd.write(int(key[0]).to_bytes(10, byteorder='little'))
        micro_sd.write(int(1).to_bytes(1, byteorder='little'))#enc
        micro_sd.write(int(expected_dec_value).to_bytes(8,byteorder='little'))


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

    try:
        with(open(abs_path_VIOfile_storage,"rb+")) as VIOstorage_file:
            VIOstorage_file.close()
    except:
        with(open(abs_path_VIOfile_storage,"wb+")) as VIOstorage_file:
            VIOstorage_file.close()        

    uid = getpwnam(username).pw_uid   
    gid = grp.getgrnam(groupname)[2]   
    os.chown(abs_path_file_storage,uid,gid)
    os.chown(abs_path_VIOfile_storage,uid,gid)

    with(open(abs_path_file_storage,"rb+")) as storage_file:
        with(open(abs_path_VIOfile_storage,"w")) as VIOstorage_file:
            with open(sys.argv[1],"rb+") as micro_sd:
                N = int(sys.argv[2])
                e = int(sys.argv[3])
                print(create_microsd_vectors(micro_sd,storage_file,VIOstorage_file,N,e))
    

if __name__ == "__main__":
    main()
