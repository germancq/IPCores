'''
 # @ Author: German Cano Quiveu, germancq
 # @ Create Time: 2023-04-21 13:21:45
 # @ Modified by: German Cano Quiveu, germancq
 # @ Modified time: 2023-04-21 13:21:49
 # @ Description:
 '''

RK_cte = [0xc3efe9db,0x44626b02,0x79e27c8a,0x78df30ec,0x715ea49e,0xc785da0a,0xe04ef22a,0xe5c40957]

class LEA:

    def __init__(self,key):
         self.Key = key
         len_192 = 1 if (key >> 128) > 0 else 0
         len_256 = 1 if (key >> 192) > 0 else 0
         self.len_error = 1 if (key >> 256) > 0 else 0
         self.len_128 = 1 if (len_192 == 0 and self.len_error == 0) else 0
         self.len_192 = 1 if (len_192 == 1 and len_256 == 0 and self.len_error == 0) else 0
         self.len_256 = 1 if (len_256 == 1 and self.len_error == 0) else 0

         self.gen_roundKeys()


    def order_word(word):
        
        word = word & 0xFFFFFFFF
        return (((word>>0) & 0xFF)<<24) + (((word>>8) & 0xFF)<<16) + (((word>>16) & 0xFF)<<8) + ((word>>24) & 0xFF)

    def gen_roundKeys(self):
        
        self.roundkeys = []
        self.T = []

        T0 = LEA.order_word(self.Key>>(self.len_128*96 + self.len_192*160 + self.len_256*224)) #input ordering in LEA see Table1 from paper
        
        T1 = LEA.order_word(self.Key>>(self.len_128*64 + self.len_192*128 + self.len_256*192)) # 64, 128, 192
        T2 = LEA.order_word(self.Key>>(self.len_128*32 + self.len_192*96 + self.len_256*160)) # 32, 96,  160
        T3 = LEA.order_word(self.Key>>(self.len_192*64 + self.len_256*128)) # 0,  64,  128
        T4 = LEA.order_word(self.Key>>(self.len_192*32 + self.len_256*96)) #     32,  96
        T5 = LEA.order_word(self.Key>>(self.len_256*64)) #     0,   64
        T6 = LEA.order_word(self.Key>>32)
        T7 = LEA.order_word(self.Key) 
        
        self.T.insert(0,[T0,T1,T2,T3,T4,T5,T6,T7])
        #self.T.insert(1,T1)
        #self.T.insert(2,T2)
        #self.T.insert(3,T3)
        #self.T.insert(4,T4)
        #self.T.insert(5,T5)
        #self.T.insert(6,T6)
        #self.T.insert(7,T7)
        

        if self.len_128:
            self.roundkeys128()
        elif self.len_192:
            self.roundkeys192()
        elif self.len_256:
            self.roundkeys256()
        else:
            print("ERROR KEY LEN")
        

        #return roundkeys


    def roundkeys128(self):
        index = [1,3,6,11,13,17]
        for i in range(0,24):
            i_mod4 = i%4
            
            self.T.insert(i+1,[0]*24)
            for j in range (0,4):
                self.T[i+1][j] = (self.T[i][j] + LEA.rol(RK_cte[i_mod4],32,i+j))%(2**32)  
                self.T[i+1][j] = LEA.rol(self.T[i][j],32,index[j])
                self.T[i+1][j] = self.T[i][j] & 0xFFFFFFFF

            roundkey=(self.T[i+1][0]<<160) + (self.T[i+1][1]<<128) + (self.T[i+1][2]<<96) + (self.T[i+1][1]<<64) + (self.T[i+1][3]<<32) + self.T,[i+1][1]
            self.roundkeys.insert(i,roundkey)

    
    def roundkeys192(self):
        index = [1,3,6,11,13,17]
        for i in range(0,28):
            i_mod6 = i%6
            
            for j in range (0,6):
                self.T[j] = (self.T[j] + LEA.rol(RK_cte[i_mod6],32,i+j))%(2**32)  
                self.T[j] = LEA.rol(self.T[j],32,index[j])
                self.T[j] = self.T[j] & 0xFFFFFFFF

            

            roundkey=(self.T[0]<<160) + (self.T[1]<<128) + (self.T[2]<<96) + (self.T[3]<<64) + (self.T[4]<<32) + self.T[5]
            self.roundkeys.insert(i,roundkey)

    def roundkeys256(self):
        index = [1,3,6,11,13,17]
        for i in range(0,32):
            i_mod8 = i%6
            T_index = (6*i)
            
            for j in range (0,6):
                self.T[(T_index+j)%8] = (self.T[(T_index+j)%8] + LEA.rol(RK_cte[i_mod8],32,i+j))%(2**32)  
                self.T[j] = LEA.rol(self.T[(T_index+j)%8],32,index[(T_index+j)%8])
                self.T[(T_index+j)%8] = self.T[(T_index+j)%8] & 0xFFFFFFFF

            

            roundkey=(self.T[(T_index+0)%8]<<160) + (self.T[(T_index+1)%8]<<128) + (self.T[(T_index+2)%8]<<96) + (self.T[(T_index+3)%8]<<64) + (self.T[(T_index+4)%8]<<32) + self.T[(T_index+5)%8]
            self.roundkeys.insert(i,roundkey)

    
    def encrypt(self,plaintext):
        print(hex(plaintext))
        X0 = LEA.order_word(plaintext>>96) #input ordering in LEA see Table1 from paper
        #print(hex(X0))
        X1 = LEA.order_word(plaintext>>64)
        #print(hex(X1))
        X2 = LEA.order_word(plaintext>>32)
       # print(hex(X2))
        X3 = LEA.order_word(plaintext)
        #print(hex(X3))

        rounds = 24

        if self.len_192:
            rounds = 28

        if self.len_256:
            rounds = 32


        print(hex((X0<<96) + (X1<<64) + (X2<<32) + X3 ))
        for i in range (0,rounds):
            X0_prev = X0
            X1_prev = X1
            X2_prev = X2
            X3_prev = X3
            
            X0 = (X0_prev ^ ((self.roundkeys[i] >> 160) & 0xFFFFFFFF)) + (X1_prev ^ ((self.roundkeys[i] >> 128) & 0xFFFFFFFF)) 
            X0 = X0 % (2**32)
            X0 = LEA.rol(X0,32,9)

            X1 = (X1_prev ^ ((self.roundkeys[i] >> 96) & 0xFFFFFFFF)) + (X2_prev ^ ((self.roundkeys[i] >> 64) & 0xFFFFFFFF)) 
            X1 = X1 % (2**32)
            X1 = LEA.ror(X1,32,5)

            X2 = (X2_prev ^ ((self.roundkeys[i] >> 32) & 0xFFFFFFFF)) + (X3_prev ^ ((self.roundkeys[i] >> 0) & 0xFFFFFFFF)) 
            X2 = X2 % (2**32)
            X2 = LEA.ror(X2,32,3)

            X3 = X0_prev

            print(hex((X0<<96) + (X1<<64) + (X2<<32) + X3 ))

        X0 = LEA.order_word(X0)
        X1 = LEA.order_word(X1)
        X2 = LEA.order_word(X2)
        X3 = LEA.order_word(X3)
        return (X0<<96) + (X1<<64) + (X2<<32) + X3


    def rol(input,size,n):
            if n==0:
                return input
            else:
                out = ((input << 1) + (input>>(size-1)))%(2**size)
                return LEA.rol(out,size,n-1)
            
    def ror(input,size,n):
            if n==0:
                return input
            else:
                lsb = input & 0x1
                out = ((input >> 1) + (lsb<<(size-1)))
                return LEA.ror(out,size,n-1)

if __name__ == "__main__":
    #for i in range(0,6):
    #RK = LEA.gen_roundKeys(0x0f1e2d3c4b5a69788796a5b4c3d2e1f0)
    #print(hex(RK[6]))
    lea = LEA(0x0f1e2d3c4b5a69788796a5b4c3d2e1f0)
    print(hex(lea.roundkeys[0]))
    print(hex(lea.roundkeys[1]))
    print(hex(lea.roundkeys[2]))
    print(hex(lea.encrypt(0x101112131415161718191a1b1c1d1e1f)))