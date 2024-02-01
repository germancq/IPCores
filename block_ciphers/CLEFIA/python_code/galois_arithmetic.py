'''
 # @ Author: German Cano Quiveu, germancq
 # @ Create Time: 2023-11-30 11:52:21
 # @ Modified by: German Cano Quiveu, germancq
 # @ Modified time: 2023-11-30 11:52:25
 # @ Description:
 '''

import math
import numpy as np

class GaloisField:

    def __init__(self,n):
        #GF(2^n)
        self.n = n
        pass

    def inverse_mul(self,x,p):
        pass

    def polynomial_extended_euclidean_algorithm(a,b):
        #a y b son arrays
        r0 = a
        r1 = b
        s0 = 1
        s1 = 0
        t0 = 0
        t1 = 1

        


    def scalar_by_matrix(self,M1,k,p):
        rows_a, cols_a = M1.shape



        result = np.zeros((rows_a,cols_a),dtype=np.uint32)
        for i in range(0,rows_a):
            for j in range(0,cols_a):
                print(M1[i][j])
                result[i][j] = self.multiplication(M1[i][j],k,p)

        print('scalar by matrix')
        print(result)
        return result

    def matrix_add(self,A,B):
        try:
            rows_a,cols_a = np.shape(A)
        except ValueError as e:
            rows_a = np.shape(A)[0]
            cols_a = 1

        try:
            rows_b,cols_b = np.shape(B)
        except ValueError:
            rows_b = np.shape(B)[0]
            cols_b = 1

        if(rows_a != rows_b or cols_a != cols_b):
            return -1
        
        result = np.zeros((rows_a,cols_a),dtype=np.uint32)
        for i in range(0,rows_a):
            for j in range(0,cols_a):
                a = A[i]
                b = B[i]
                
                if(cols_a != 1):
                    a = A[i][j]
                
                if(cols_b != 1):
                    b = B[i][j]

                result[i][j] = self.add(a,b)

        return result

    def matrix_multiplication(self,A,B,p):

        try:
            rows_a,cols_a = np.shape(A)
        except ValueError as e:
            rows_a = np.shape(A)[0]
            cols_a = 1

        try:
            rows_b,cols_b = np.shape(B)
        except ValueError:
            rows_b = np.shape(B)[0]
            cols_b = 1

        print(rows_b)
        print(cols_a)
        if(cols_a != rows_b):
            #error
            return -1
        
        print('matrix mult')
        print(A)
        print(B)
        result = np.zeros((rows_a,cols_b),dtype=np.uint32)

        for i in range(0,rows_a):
            for j in range(0,cols_b):
                print('get_cij')
                result[i][j] = self.get_c_ij(A,B,p,cols_a,cols_b,i,j)
                

        print(result)
        print('end matrix mult')
        return result
    

    def get_c_ij(self,A,B,p,cols_a,cols_b,i,j):
        result = 0
        for n in range(0,cols_a):
            a = A[i]
            b = B[n]
            
            if(cols_a != 1):
                a = A[i][n]
            
            if(cols_b != 1):
                b = B[n][j]
                    
            m = self.multiplication(a,b,p)
            
            print('mult')
            print(a)
            print(b)
            print(m)
            print('-------------------')
            
            result = self.add(m,result)

        return result

    '''
    def matrix_multiplication(self,M1,M2,p):
        rows_a = len(M1)
        rows_b = len(M2) # == colums_a
        colums_a = rows_b
        colums_b = rows_a
        if(type(M2[0]) is list) : 
            colums_b = len(M2[0])
        
        result = []
        

        for i in range(0,rows_a) :
            result.append([])
            for j in range(0,colums_b) :    
                result[i].append(0)
                for k in range(0,rows_b):
                    a_1 = result[i][j]

                    if(colums_b > 1):
                        a_3 = M2[k][j]
                    else :
                        a_3 = M2[k]

                    if(colums_a > 1) :
                        a_2 = M1[i][k]   
                    else :
                        a_2 = M1[k]
                        
                    #result[i][j] = (a_1 + (a_2 * a_3))
                    gf_1 = self.galois_multiplication(a_2,a_3,p)
                    
                    print("==========================")
                    print(i)
                    print(j)
                    print(hex(a_2))
                    print(hex(a_3))
                    print(hex(gf_1))
                    print(hex(a_1))
                    print("==========================")
                    
                    result[i][j] = self.galois_add(a_1,gf_1)

        return result
    '''
    def add(self,a,b) :
        return a ^ b
    
    def multiplication(self,a,b,p):
        t = 0
        for i in range(0,self.n):
            mask = 0x1 << i
            bit_b = b & mask
            b_i = 0 if bit_b == 0 else 1
            r = b_i*(a<<i)
            t = self.add(t,r)

        return self.reduced_polinomial(t,p)
    
    def reduced_polinomial(self,a,p):
        n = math.ceil(math.log(p,2))
        n = n - 1
        t = a
        for i in range((self.n*2)-1, self.n -1, -1 ):
            mask = 0x1 << i
            bit_t = t & mask
            t_i = 0 if bit_t == 0 else 1
            if(t_i):
                m = int(i-n)
                t = self.add(p<<m, t)

        return t