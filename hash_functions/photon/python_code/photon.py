#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : photon.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 19.03.2025
# Last Modified Date: 19.03.2025
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>

import math

import galois_arithmetic
import numpy as np

np.set_printoptions(formatter={"int": hex})

RC = [1, 3, 7, 14, 13, 11, 6, 12, 9, 2, 5, 10]
IC_100 = [0, 1, 3, 6, 4]
IC_144 = [0, 1, 3, 7, 6, 4]
IC_196 = [0, 1, 2, 5, 3, 6, 4]
IC_256 = [0, 1, 3, 7, 15, 14, 12, 8]
IC_288 = [0, 1, 3, 7, 6, 4]
IC = {100: IC_100, 144: IC_144, 196: IC_196, 256: IC_256, 288: IC_288}

MDS_100 = [
    [1, 2, 9, 9, 2],
    [2, 5, 3, 8, 13],
    [13, 11, 10, 12, 1],
    [1, 15, 2, 3, 14],
    [14, 14, 8, 5, 12],
]
MDS_144 = [
    [1, 2, 8, 5, 8, 2],
    [2, 5, 1, 2, 6, 12],
    [12, 9, 15, 8, 8, 13],
    [13, 5, 11, 3, 10, 1],
    [1, 15, 13, 14, 11, 8],
    [8, 2, 3, 3, 2, 8],
]
MDS_196 = [
    [1, 4, 6, 1, 1, 6, 4],
    [4, 2, 15, 2, 5, 10, 5],
    [5, 3, 15, 10, 7, 8, 13],
    [13, 4, 11, 2, 7, 15, 9],
    [9, 15, 7, 2, 11, 4, 13],
    [13, 8, 7, 10, 15, 3, 5],
    [5, 10, 5, 2, 15, 2, 4],
]
MDS_256 = [
    [2, 4, 2, 11, 2, 8, 5, 6],
    [12, 9, 8, 13, 7, 7, 5, 2],
    [4, 4, 13, 13, 9, 4, 13, 9],
    [1, 6, 5, 1, 12, 13, 15, 14],
    [15, 12, 9, 13, 14, 5, 14, 13],
    [9, 14, 5, 15, 4, 12, 9, 6],
    [12, 2, 2, 10, 3, 1, 1, 14],
    [15, 1, 13, 10, 5, 10, 2, 3],
]
MDS_288 = [
    [2, 3, 1, 2, 1, 4],
    [8, 14, 7, 9, 6, 17],
    [34, 59, 31, 37, 24, 66],
    [132, 228, 121, 155, 103, 11],
    [22, 153, 239, 111, 144, 75],
    [150, 203, 210, 121, 36, 167],
]
MDS_COEFF = {100: MDS_100, 144: MDS_144,
             196: MDS_196, 256: MDS_256, 288: MDS_288}

POL_PRESENT = (1 << 4) + (1 << 1) + 1
POL_AES = (1 << 8) + (1 << 4) + (1 << 3) + (1 << 1) + 1


dimension_matrix = {100: 5, 144: 6, 196: 7, 256: 8, 288: 6}


S_box_present = [
    0xC,
    0x5,
    0x6,
    0xB,
    0x9,
    0x0,
    0xA,
    0xD,
    0x3,
    0xE,
    0xF,
    0x8,
    0x4,
    0x7,
    0x1,
    0x2,
]
S_box_aes = [
    0x63,
    0x7C,
    0x77,
    0x7B,
    0xF2,
    0x6B,
    0x6F,
    0xC5,
    0x30,
    0x01,
    0x67,
    0x2B,
    0xFE,
    0xD7,
    0xAB,
    0x76,
    0xCA,
    0x82,
    0xC9,
    0x7D,
    0xFA,
    0x59,
    0x47,
    0xF0,
    0xAD,
    0xD4,
    0xA2,
    0xAF,
    0x9C,
    0xA4,
    0x72,
    0xC0,
    0xB7,
    0xFD,
    0x93,
    0x26,
    0x36,
    0x3F,
    0xF7,
    0xCC,
    0x34,
    0xA5,
    0xE5,
    0xF1,
    0x71,
    0xD8,
    0x31,
    0x15,
    0x04,
    0xC7,
    0x23,
    0xC3,
    0x18,
    0x96,
    0x05,
    0x9A,
    0x07,
    0x12,
    0x80,
    0xE2,
    0xEB,
    0x27,
    0xB2,
    0x75,
    0x09,
    0x83,
    0x2C,
    0x1A,
    0x1B,
    0x6E,
    0x5A,
    0xA0,
    0x52,
    0x3B,
    0xD6,
    0xB3,
    0x29,
    0xE3,
    0x2F,
    0x84,
    0x53,
    0xD1,
    0x00,
    0xED,
    0x20,
    0xFC,
    0xB1,
    0x5B,
    0x6A,
    0xCB,
    0xBE,
    0x39,
    0x4A,
    0x4C,
    0x58,
    0xCF,
    0xD0,
    0xEF,
    0xAA,
    0xFB,
    0x43,
    0x4D,
    0x33,
    0x85,
    0x45,
    0xF9,
    0x02,
    0x7F,
    0x50,
    0x3C,
    0x9F,
    0xA8,
    0x51,
    0xA3,
    0x40,
    0x8F,
    0x92,
    0x9D,
    0x38,
    0xF5,
    0xBC,
    0xB6,
    0xDA,
    0x21,
    0x10,
    0xFF,
    0xF3,
    0xD2,
    0xCD,
    0x0C,
    0x13,
    0xEC,
    0x5F,
    0x97,
    0x44,
    0x17,
    0xC4,
    0xA7,
    0x7E,
    0x3D,
    0x64,
    0x5D,
    0x19,
    0x73,
    0x60,
    0x81,
    0x4F,
    0xDC,
    0x22,
    0x2A,
    0x90,
    0x88,
    0x46,
    0xEE,
    0xB8,
    0x14,
    0xDE,
    0x5E,
    0x0B,
    0xDB,
    0xE0,
    0x32,
    0x3A,
    0x0A,
    0x49,
    0x06,
    0x24,
    0x5C,
    0xC2,
    0xD3,
    0xAC,
    0x62,
    0x91,
    0x95,
    0xE4,
    0x79,
    0xE7,
    0xC8,
    0x37,
    0x6D,
    0x8D,
    0xD5,
    0x4E,
    0xA9,
    0x6C,
    0x56,
    0xF4,
    0xEA,
    0x65,
    0x7A,
    0xAE,
    0x08,
    0xBA,
    0x78,
    0x25,
    0x2E,
    0x1C,
    0xA6,
    0xB4,
    0xC6,
    0xE8,
    0xDD,
    0x74,
    0x1F,
    0x4B,
    0xBD,
    0x8B,
    0x8A,
    0x70,
    0x3E,
    0xB5,
    0x66,
    0x48,
    0x03,
    0xF6,
    0x0E,
    0x61,
    0x35,
    0x57,
    0xB9,
    0x86,
    0xC1,
    0x1D,
    0x9E,
    0xE1,
    0xF8,
    0x98,
    0x11,
    0x69,
    0xD9,
    0x8E,
    0x94,
    0x9B,
    0x1E,
    0x87,
    0xE9,
    0xCE,
    0x55,
    0x28,
    0xDF,
    0x8C,
    0xA1,
    0x89,
    0x0D,
    0xBF,
    0xE6,
    0x42,
    0x68,
    0x41,
    0x99,
    0x2D,
    0x0F,
    0xB0,
    0x54,
    0xBB,
    0x16,
]


class PHOTON:

    def __init__(self, n, r_in, r_out):
        self.n = n
        self.r_in = r_in
        self.r_out = r_out
        self.t = n + r_in

        bit_cell = 4
        if self.t == 288:
            bit_cell = 8

        self.bit_cell = bit_cell

        self.gf = galois_arithmetic.GaloisField(bit_cell)

        dim = int(math.sqrt(int(self.t / bit_cell)))
        print(n)
        print(bit_cell)
        print(dim)

        self.dim = dim
        state = np.zeros((dim, dim), dtype=np.uint8)

        if self.t == 288:
            state[self.dim - 1, self.dim - 1] = self.r_out
            state[self.dim - 1, self.dim - 2] = self.r_in
            state[self.dim - 1, self.dim - 3] = int(self.n / 4)
        else:
            state[self.dim - 1, self.dim - 1 - 0] = self.r_out & 0xF
            state[self.dim - 1, self.dim - 1 - 1] = self.r_out >> 4
            state[self.dim - 1, self.dim - 1 - 2] = self.r_in & 0xF
            state[self.dim - 1, self.dim - 1 - 3] = self.r_in >> 4
            state[self.dim - 1, self.dim - 1 - 4] = int(self.n / 4) & 0xF
            if self.t == 100:
                state[self.dim - 2, self.dim - 1 - 0] = int(self.n / 4) >> 4
            else:
                state[self.dim - 1, self.dim - 1 - 5] = int(self.n / 4) >> 4

        self.state = state

    def padding_input(self, message, len_msg=0):
        print(hex(message))
        # padding message with 1
        message = message << 1
        message = message | 0x1
        print(hex(message))
        # fill with zeros until r multiple
        bit_len_msg = len_msg + 1

        print(bit_len_msg)
        n = bit_len_msg % self.r_in
        print(n)
        print(self.r_in - n)
        padding_message = message << (self.r_in - n)
        print(hex(padding_message))
        return padding_message

    def get_message_blocks(self, padding_message, len_msg=0):
        # obtain l message blocks m 0...m l-1
        bit_len = len_msg + 1 + (self.r_in - ((len_msg + 1) % self.r_in))
        num_blocks = int(bit_len / self.r_in)
        print(num_blocks)
        mask = 0
        for i in range(0, self.r_in):
            mask = mask << 1
            mask = mask | 0x1

        m = []
        print(hex(padding_message))
        for i in range(0, num_blocks):
            print(i)
            message_part = padding_message >> (i * self.r_in)
            print(hex(message_part))
            message_part = message_part & mask
            m.insert(num_blocks - i - 1, message_part)

        m = np.array(m)

        print(m)
        return m

    def initialization_phase(self, message, len_msg=0):
        padding_message = self.padding_input(message, len_msg)
        message_blocks = self.get_message_blocks(padding_message, len_msg)
        self.message_blocks = message_blocks

    def absorbing_phase(self):

        print("absorbing_phase")
        self.absorbing_values = []
        aux_array = np.zeros((self.dim, self.dim), dtype=np.uint8)

        mask = 0
        for i in range(0, self.bit_cell):
            mask = mask << 1
            mask = mask | 0x1

        for i in range(0, len(self.message_blocks)):
            block_i = self.message_blocks[i]

            lim = int(self.r_in / self.bit_cell)
            for j in range(0, lim):
                value = (block_i >> ((lim - j - 1) * self.bit_cell)) & mask
                # value = block_i >> (j * self.bit_cell) & mask
                aux_array[math.floor(j / self.dim)][j % self.dim] = value
                print(value)

            print(aux_array)
            self.state = self.state ^ aux_array

            self.state = self.permutation(self.state)
            print(self.state)

            self.absorbing_values.insert(i, self.state)

    def squezzing_phase(self):
        print("squezzing_phase")
        print(self.state)
        result = 0

        self.squezzing_values = []

        num_iterations = math.ceil(self.n / self.r_out)
        print(num_iterations)

        lim = int(self.r_out / self.bit_cell)

        sum = 0

        for i in range(0, num_iterations):
            self.squezzing_values.insert(i, self.state)

            self.state = self.permutation(self.state)

        print(self.squezzing_values)

        for i in range(0, len(self.squezzing_values)):
            value = self.squezzing_values[i]
            print(value)
            print(hex(result))
            for j in range(0, lim):
                if sum == int(self.n / self.bit_cell):
                    break
                sum = sum + 1
                print(hex(value[math.floor(j / self.dim)][j % self.dim]))
                result = int(
                    (int(result) << self.bit_cell)
                    | int(value[math.floor(j / self.dim)][j % self.dim])
                )
                print(hex(result))

        print(hex(result))
        return result

    def permutation(self, value):
        matrix_state = value
        for i in range(0, 12):
            print(i)
            matrix_state = self.add_constant(i, matrix_state)
            matrix_state = self.sub_cells(matrix_state)
            matrix_state = self.shift_rows(matrix_state)
            matrix_state = self.mix_columns_serial(matrix_state)
        return matrix_state

    def add_constant(self, round_value, matrix_state):
        print("add_constant")
        print(matrix_state)
        result = np.copy(matrix_state)
        rc_value = RC[round_value]
        ic_array = IC.get(self.t)

        for i in range(0, self.dim):
            ic_value = ic_array[i]
            value = result[i, 0]
            result[i, 0] = value ^ rc_value ^ ic_value

        print(result)
        return result

    def sub_cells(self, matrix_state):
        print("sub_cells")
        print(matrix_state)
        result = np.copy(matrix_state)

        for i in range(0, result.shape[0]):
            for j in range(0, result.shape[1]):
                if self.t == 288:
                    result[i, j] = S_box_aes[result[i, j]]
                else:
                    result[i, j] = S_box_present[result[i, j]]

        print(result)
        return result

    def shift_rows(self, matrix_state):
        print("shift_rows")
        result = np.copy(matrix_state)
        for i in range(1, self.dim):
            result[i] = np.roll(result[i], -i)
        print(result)
        return result

    def mix_columns_serial(self, matrix_state):
        print("mix_columns_serial")
        result = np.copy(matrix_state)
        result = np.transpose(result)
        mds = np.array(MDS_COEFF.get(self.t))
        p_a = POL_PRESENT
        if self.t == 288:
            p_a = POL_AES

        print(result)
        for i in range(0, self.dim):
            column = np.atleast_2d(result[i]).T
            a = self.gf.matrix_multiplication(mds, column, p_a)
            result[i] = np.transpose(a)
        result = np.transpose(result)
        print(result)
        return result


if __name__ == "__main__":
    hash_sw = PHOTON(80, 20, 16)

    message = 0x121212
    len_msg = 24
    hash_sw.initialization_phase(message, len_msg)
    print(hash_sw.message_blocks)
    hash_sw.absorbing_phase()
    hash_sw.squezzing_phase()
