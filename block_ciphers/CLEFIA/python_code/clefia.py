'''
 # @ Author: German Cano Quiveu, germancq
 # @ Create Time: 2023-11-30 11:48:41
 # @ Modified by: German Cano Quiveu, germancq
 # @ Modified time: 2023-11-30 11:49:01
 # @ Description:
 '''
import galois_arithmetic
import numpy as np
import math


SS = np.array([
    [0xe,0x6,0xc,0xa,0x8,0x7,0x2,0xf,0xb,0x1,0x4,0x0,0x5,0x9,0xd,0x3],
    [0x6,0x4,0x0,0xd,0x2,0xb,0xa,0x3,0x9,0xc,0xe,0xf,0x8,0x7,0x5,0x1],
    [0xb,0x8,0x5,0xe,0xa,0x6,0x4,0xc,0xf,0x7,0x2,0x3,0x1,0x0,0xd,0x9],
    [0xa,0x2,0x6,0xd,0x3,0x4,0x5,0xe,0x0,0x7,0x8,0x9,0xb,0xf,0xc,0x1]])

MS_f = np.array([
    [0,0,0,1,1,0,0,0],
    [0,1,0,1,0,0,0,1],
    [0,0,0,0,0,0,0,1],
    [0,0,0,0,0,1,1,0],
    [0,1,1,0,0,1,0,1],
    [0,1,0,1,1,1,0,0],
    [0,1,1,0,0,0,0,0],
    [1,0,0,0,0,0,0,1]
])

MS_g = np.array([
    [0,0,0,0,1,0,1,0],
    [0,1,0,0,0,0,0,1],
    [0,1,0,1,1,0,0,0],
    [0,0,1,0,0,0,0,0],
    [0,0,1,1,0,0,0,0],
    [0,0,0,0,0,0,1,0],
    [1,0,0,1,0,0,0,0],
    [0,1,0,0,0,1,0,0]
])

M0 = np.array([
    [1, 2, 4, 6],
    [2, 1, 6, 4],
    [4, 6, 1, 2],
    [6, 4, 2, 1]
])

M1 = np.array([
    [1, 8, 2, 10],
    [8, 1, 10, 2],
    [2, 10, 1, 8],
    [10, 2, 8, 1]
])

class CLEFIA:

    def __init__(self):
        self.galois16 = galois_arithmetic.GaloisField(16)
        self.galois8 = galois_arithmetic.GaloisField(8)
        self.galois4 = galois_arithmetic.GaloisField(4)
        

    def encrypt(self,):
        pass

    def key_schedule(self):
        pass


    def generate_constants(self,IV,l):
        T = np.zeros(l,dtype=np.uint32)
        CON = np.zeros(2*l,dtype=np.uint32)
        
        P = 0xb7e1
        Q = 0x243f

        p = (1<<16) + (1<<15) + (1<<13) + (1<<11) + (1<<5) + (1<<4) + 1
        p_a = np.array([1,1,0,1,0,1,0,0,0,0,0,1,1,0,0,0,1])

        T[0] = IV
        a = np.array([1,0])
        b = self.galois16.inverse_mul(a,p_a)
        #print(b)
        c = 0
        for j in range(0,16):
            c = c + int(b[15-j]*math.pow(2,j))

        #print(hex(c))

        for i in range(0,l-1):
            #print(i)
            T_neg = ~T[i] & 0xFFFF
            CON[2*i] = (self.galois16.add(T[i],P)<<16) + self.ROL(T_neg,1,16)
            #print(hex(CON[2*i]))
            CON[(2*i)+1] = (self.galois16.add(T_neg,Q)<<16) + self.ROL(T[i],8,16)
            #print(hex(CON[(2*i)+1]))
            T[i+1] = self.galois16.multiplication(T[i],c,p)
            #print(hex(T[i+1]))
        
        return T,CON


    def doubleSwap(self,x):
        x0 = x & 0x7F
        x1 = (x>>7) & 0x1FFFFFFFFFFFFFF
        x2 = (x>>(57+7)) & 0x1FFFFFFFFFFFFFF
        x3 = (x>>(57+7+57)) & 0x7F

        y = (x2<<(57+7+7)) + (x0<<(57+7)) + (x3<<57) + x1
        return y


    def GFN(self,d,r,x,rk_a):
        T_a = np.zeros(d,dtype=np.uint32)
        for i in range(0,d):
            T_a[i] = (x>>32*i) & 0xFFFFFFFF

        for i in range(0,r):
            for j in range(0,int(d/2)):
                T_a[j+1] = self.galois8(T_a[j+1],self.F1(rk((int(d/2)*i)+j),T_a[j]))
            
            T_a = np.roll(T_a,-1)

        return T_a

    def F0(self,rk,x):
        T_a = np.zeros((4,1),dtype=np.uint32)
        T = self.galois8.add(rk,x)
        
        T_n = np.zeros(4,dtype=np.uint32)
        for i in range(0,4):
            T_n[i] = int((T>>(8*i)) & 0xFF)
            if(i%2):
                T_n[i] = self.S0(T_n[i])
            else:
                T_n[i] = self.S1(T_n[i])
            T_a[i][0] = T_n[i]
            

        p = (1<<8) + (1<<4) + (1<<3) + (1<<2) + 1
        y = self.galois8.matrix_multiplication(M0,T_a,p)
        return y

    def F1(self,rk,x):
        T_a = np.zeros((4,1),dtype=np.uint32)
        T = self.galois8.add(rk,x)
        
        T_n = np.zeros(4,dtype=np.uint32)
        for i in range(0,4):
            T_n[i] = (T>>(8*i)) & 0xFF
            if(i%2):
                T_n[i] = self.S1(T_n[i])
            else:
                T_n[i] = self.S0(T_n[i])

            T_a[i][0] = T_n[i]

        p = (1<<8) + (1<<4) + (1<<3) + (1<<2) + 1
        y = self.galois8.matrix_multiplication(M1,T_a,p)
        return y

    def S0(self,x):
        x1 = x & 0xf
        x0 = (x >> 4) & 0xf

        p = (1<<4) + (1<<1) + 1 #z4 + z + 1

        t0 = SS[0][x0]
        t1 = SS[1][x1]

        m0 = self.galois4.multiplication(2,t1,p)
        u0 = self.galois4.add(t0,m0)
        m1 = self.galois4.multiplication(2,t0,p)
        u1 = self.galois4.add(t1,m1)

        y0 = SS[2][u0]
        y1 = SS[3][u1]

        return (y0<<4) + y1

    def S1(self,x):
        p = (1<<8) + (1<<4) + (1<<3) + (1<<2) + 1
        p_array = np.array([1,0,0,0,1,1,1,0,1])# 
        
        x_a = np.zeros((8,1),dtype=np.uint32)
        for i in range(0,8):
            x_a[7-i] = (x>>i) & 0x01

        f = self.f_S1(x_a,p)
        f_inverse = self.galois8.inverse_mul(np.reshape(np.transpose(f),8),p_array)
        #print(f)
        #print(f_inverse)
        padding = 8 - np.shape(f_inverse)[0]
        zero_padding = np.zeros(padding,dtype=np.uint)
        f_inverse = np.append(zero_padding,f_inverse)
        f_inverse = np.atleast_2d(f_inverse).T
        S1_array = self.g_S1(f_inverse,p)
        S1 = 0
        for i in range(0,8):
            S1 = S1 + (S1_array[7-i][0] * int(math.pow(2,i)))

        
        return S1


    def f_S1(self,x,p):
        k = np.array([0,0,0,1,1,1,1,0])#0x1e

        r = self.galois8.matrix_multiplication(MS_f,x,p)
        return self.galois8.matrix_add(r,k)
        
       

    def g_S1(self,x,p):
        k = np.array([0,1,1,0,1,0,0,1])#0x69

        r = self.galois8.matrix_multiplication(MS_g,x,p)
        return self.galois8.matrix_add(r,k)
        

    def ROL(self,x,i,len_bits):
        j = len_bits - i
        return ((x<<i) | (x>>j)) & (2**len_bits - 1) 

    def ROR(self,x,i,len_bits):
        j = len_bits - i
        return ((x>>i) | (x<<j)) & (2**len_bits - 1) 


if __name__ == "__main__":
    cipher = CLEFIA()
    '''
    a = np.array([1,0,0,0,1,1,0,1,1],dtype=np.uint32)
    b = np.array([1,0,1,0,0,1,1],dtype=np.uint32)
    q = np.zeros((9),dtype=np.uint32)
    gf = galois_arithmetic.GaloisField(8)
    #q,r = gf.polynomial_long_division(a,b,q)

    #print(q)
    #print(r)

    q,s,t,r = gf.polynomial_extended_euclidean_algorithm(a,b)
    print(q)
    print(s)
    print(t)
    print(r)

    print(gf.inverse_mul(b,a))
    '''
    #a = 0x00010203
   # rk = 0xf3e6cef9
    #cipher.F0(rk,a)
   # b  = 0x08090a0b
   # rk = 0x8df75e38
   #cipher.F1(rk,b)

    cipher.generate_constants(0x428a,30)

    #print(hex(cipher.S0(0x10)))
    #print(hex(cipher.S1(0x10)))