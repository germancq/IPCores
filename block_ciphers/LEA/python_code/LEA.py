'''
 # @ Author: German Cano Quiveu, germancq
 # @ Create Time: 2023-04-21 13:21:45
 # @ Modified by: German Cano Quiveu, germancq
 # @ Modified time: 2023-04-21 13:21:49
 # @ Description:
 '''

RK_cte = [0xc3efe9db,0x44626b02,0x79e27c8a,0x78df30ec,0x715ea49e,0xc785da0a,0xe04ef22a,0xe5c40957]

class LEA:

    def gen_roundKeys(Key):
        
        roundkeys = []

        #print(hex(i_mod4))
        T0 = 0xFFFFFFFF - (Key & 0xFFFFFFFF) #input ordering in LEA see Table1 from paper
        #print(hex(Key0))
        T1 = 0xFFFFFFFF - ((Key>>32) & 0xFFFFFFFF)
        #print(hex(Key1))
        T2 = 0xFFFFFFFF - ((Key>>64) & 0xFFFFFFFF)
        #print(hex(Key2))
        T3 = 0xFFFFFFFF - ((Key>>96) & 0xFFFFFFFF)
        #print(hex(Key3))
        
        for i in range(0,15):
            #print(hex(i))
            i_mod4 = i%4
            

            T0 = (T0 + LEA.rol(RK_cte[i_mod4],32,i))%(2**32)
            
            T0 = LEA.rol(T0,32,1)
            T1 = (T1 + LEA.rol(RK_cte[i_mod4],32,i+1))%(2**32)
            T1 = LEA.rol(T1,32,3)
            T2 = (T2 + LEA.rol(RK_cte[i_mod4],32,i+2))%(2**32)
            T2 = LEA.rol(T2,32,6)
            T3 = (T3 + LEA.rol(RK_cte[i_mod4],32,i+3))%(2**32)
            T3 = LEA.rol(T3,32,11)

            T0 = T0 & 0xFFFFFFFF
            
            T1 = T1 & 0xFFFFFFFF
            #print(hex(T1))
            T2 = T2 & 0xFFFFFFFF
            #print(hex(T2))
            T3 = T3 & 0xFFFFFFFF
            #print(hex(T3))
            roundkey=(T0<<160) + (T1<<128) + (T2<<96) + (T1<<64) + (T3<<32) + T1
            roundkeys.insert(i,roundkey)

        return roundkeys

    def rol(input,size,n):
            if n==0:
                return input
            else:
                out = ((input << 1) + (input>>(size-1)))%(2**size)
                return LEA.rol(out,size,n-1)

if __name__ == "__main__":
    #for i in range(0,6):
    RK = LEA.gen_roundKeys(0x0f1e2d3c4b5a69788796a5b4c3d2e1f0)
    print(hex(RK[6]))