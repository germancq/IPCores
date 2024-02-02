'''
 # @ Author: German Cano Quiveu, germancq
 # @ Create Time: 2023-11-30 11:48:41
 # @ Modified by: German Cano Quiveu, germancq
 # @ Modified time: 2023-11-30 11:49:01
 # @ Description:
 '''
import galois_arithmetic
import numpy as np


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

class CLEFIA:

    def __init__(self):
        self.galois8 = galois_arithmetic.GaloisField(8)
        self.galois4 = galois_arithmetic.GaloisField(4)
        

    def GFN(self,d,r):
        pass

    def F0(self,rk,x):
        T = self.galois.add(rk,x)
        T_n = np.zeros(4)
        for i in range(0,4):
            T_n[i] = (T>>(8*i)) & 0xFF
        T_n[0] =  self.S0(T_n[0])


    def F1(self):
        pass

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
        
        x_a = np.zeros((8,1),dtype=np.uint32)
        for i in range(0,8):
            x_a[7-i] = (x>>i) & 0x01

        f = self.f_S1(x_a,p)
        #f_inverse = 
        print(f)
        return self.g_S1(f,p)


    def f_S1(self,x,p):
        k = np.array([0,0,0,1,1,1,1,0])#0x1e

        r = self.galois8.matrix_multiplication(MS_f,x,p)
        return self.galois8.matrix_add(r,k)
        
       

    def g_S1(self,x,p):
        k = np.array([0,1,1,0,1,0,0,1])#0x69

        r = self.galois8.matrix_multiplication(MS_g,x,p)
        return self.galois8.matrix_add(r,k)
        



if __name__ == "__main__":
    cipher = CLEFIA()
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

    #print(hex(cipher.S0(0x00)))
    #print(hex(cipher.S1(0x00)))