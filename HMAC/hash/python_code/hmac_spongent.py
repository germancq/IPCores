'''
 # @ Author: German Cano Quiveu, germancq@dte.us.es
 # @ Create Time: 2020-06-18 21:20:12
 # @ Modified by: Your name
 # @ Modified time: 2020-06-18 21:20:51
 # @ Description:
 '''

import os
import sys
home = os.getenv("HOME")
sys.path.append(home + '/gitProjects/IPCores/hash_functions/spongent/python_code')
import spongent

class HMAC_Sponegnt:

    def __init__(self,key,n,c,r,R):
        self.key = key
        self.n = n
        self.hash_function = spongent.Spongent(n,c,r,R)
        self.ipad = self.generate_bit_pattern('00110110',n)
        self.opad = self.generate_bit_pattern('01011100',n)

    def generate_bit_pattern(self,pattern,len) :
        #pattern is a bit string of 8 bits
        str_result = ''
        number_steps = int(len/8)

        for i in range(0,number_steps):
            str_result = str_result + pattern

        return int(str_result, 2)    

    def generate_MAC(self,x_i,len_x_i):
        S_i = self.ipad ^ self.key
        hash_input_1 = (S_i<<len_x_i) | x_i
        len_hash_input_1 = len_x_i + self.n
        h_1 = self.hash_function.generate_hash(hash_input_1,len_hash_input_1)
        S_o = self.opad ^ self.key
        hash_input_2 = (S_o<<self.n) |  h_1
        len_hash_input_2 = 2 * (self.n)
        return self.hash_function.generate_hash(hash_input_2,len_hash_input_2)



if __name__ == "__main__":
    print()    
    key = 0x1122334455667788
    msg = 0x1122334455667788
    hmac_impl = HMAC_Sponegnt(key,88,80,8,45)
    result = hmac_impl.generate_MAC(msg,64)
    print(hex(result))