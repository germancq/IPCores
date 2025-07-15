#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : speck.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 02.07.2025
# Last Modified Date: 02.07.2025
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>

T = {
    16: {4: 22},
    24: {3: 22, 4: 23},
    32: {3: 26, 4: 27},
    48: {2: 28, 3: 29},
    64: {2: 32, 3: 33, 4: 34},
}


class SPECK:

    def __init__(self, N, M):
        self.n = int(N / 2)
        self.m = int(M / self.n)
        self.key_len = M
        self.alfa = 8
        self.beta = 3
        self.roundkeys = []
        self.l_keys = []
        self.T = T[self.n][self.m]
        if self.n == 16:
            self.alfa = 7
            self.beta = 2

    def rol(self, size, x, i):
        if i == 0:
            return x
        else:
            out = ((x << 1) + (x >> (size - 1))) % (2**size)
            return self.rol(size, out, i - 1)

    def ror(self, size, x, i):
        if i == 0:
            return x
        else:
            lsb = x & 0x1
            out = (x >> 1) + (lsb << (size - 1))
            return self.ror(size, out, i - 1)

    def encrypt(self, plaintext):
        y = plaintext & ((2**self.n) - 1)
        x = (plaintext >> self.n) & ((2**self.n) - 1)

        for i in range(0, self.T):
            print(i)
            print(hex(x))
            print(hex(y))
            x, y = self.round_function(x, y, self.roundkeys[i])

        return (x << (self.n)) + y

    def round_function(self, x, y, rk):
        x1, y1 = self.feistel_sub0(x, y, rk)
        print("feistel sub0 results are x1 = {} , y1 = {} ".format(hex(x1), hex(y1)))
        x2, y2 = self.feistel_sub1(y1, x1)
        print("feistel sub1 results are x2 = {} , y2 = {} ".format(hex(x2), hex(y2)))
        return x2, y2

    def feistel_sub0(self, x, y, rk):
        new_x = y
        new_y = rk ^ ((y + self.ror(self.n, x, self.alfa)) % (2**self.n))
        return (new_y, new_x)

    def feistel_sub1(self, x, y):
        new_x = y
        new_y = y ^ self.rol(self.n, x, self.beta)
        return (new_x, new_y)

    def key_schedule(self, key):
        for i in range(0, self.T):
            self.roundkeys.insert(i, 0)
            self.l_keys.insert(i, 0)
        for i in range(0, self.m):
            self.l_keys.insert(i, 0)

        self.roundkeys[0] = key & ((2 ** (self.n)) - 1)

        for i in range(0, self.m - 1):
            sub_key = (key >> ((self.n) * (i + 1))) & ((2 ** (self.n)) - 1)
            self.l_keys[i] = sub_key

        for i in range(0, self.T - 1):
            # print("---------------------")
            # print("rk[{}] is {}".format(i, hex(self.roundkeys[i])))
            # print("l[{}] is {}".format(i, hex(self.l_keys[i])))
            # print(
            #     "ror of l[{}] is {}".format(
            #         i, hex(self.ror(self.n, self.l_keys[i], self.alfa))
            #     )
            # )
            l_aux = i ^ (
                (self.roundkeys[i] +
                 self.ror(self.n, self.l_keys[i], self.alfa))
                % (2**self.n)
            )
            # print("l_aux is {}".format(hex(l_aux)))

            self.l_keys[i + self.m - 1] = l_aux

            k_aux = (
                self.rol(self.n, self.roundkeys[i], self.beta)
                ^ self.l_keys[i + self.m - 1]
            )

            self.roundkeys[i + 1] = k_aux
            # print("-----------------------")


if __name__ == "__main__":
    print("SPECK")
    speck = SPECK(64, 96)
    speck.key_schedule(0x131211100B0A090803020100)
    for rk in speck.roundkeys:
        print(hex(rk))
    result = speck.encrypt(0x74614620736E6165)
    print(hex(result))
