#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : photon.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 19.03.2025
# Last Modified Date: 19.03.2025
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>

import math

import numpy as np

RC = [1, 3, 7, 14, 13, 11, 6, 12, 9, 2, 5, 10]
IC_100 = [0, 1, 3, 6, 4]
IC_144 = [0, 1, 3, 7, 6, 4]
IC_196 = [0, 1, 2, 5, 3, 6, 4]
IC_256 = [0, 1, 3, 7, 15, 14, 12, 8]
IC_288 = [0, 1, 3, 7, 6, 4]
IC = {100: IC_100, 144: IC_144, 196: IC_196, 256: IC_256, 288: IC_288}

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


class Photon:

    def __init__(self, n, r_in, r_out):
        self.n = n
        self.r_in = r_in
        self.r_out = r_out
        self.t = n + r_in

        iv = (int(self.n / 4) << 16) + (self.r_in << 8) + (self.r_out)
        self.state = iv

    def padding_input(self, message, len_msg=0):
        # padding message with 1
        message = message << 1
        message = message | 0x1
        # fill with zeros until r multiple
        bit_len_msg = len_msg + 1
        if len_msg == 0:
            bit_len_msg = math.floor(math.log2(message)) + 1

        n = bit_len_msg % self.r_in
        padding_message = message << (self.r_in - n)
        return padding_message

    def get_message_blocks(self, padding_message):
        # obtain l message blocks m 0...m l-1
        bit_len = math.floor(math.log2(padding_message)) + 1
        num_blocks = int(bit_len / self.r_in)
        mask = 0
        for i in range(0, self.r_in):
            mask = mask << 1
            mask = mask | 0x1

        m = []
        for i in range(0, num_blocks):
            message_part = padding_message >> (i * self.r_in)
            message_part = message_part & mask
            m.insert(i, message_part)

        return m

    def initialization_phase(self, message, len_msg=0):
        padding_message = self.padding_input(message, len_msg)
        message_blocks = self.get_message_blocks(padding_message)
        self.message_blocks = message_blocks

    def absorbing_phase(self):

        self.absorbing_values = []

        for i in range(0, len(self.message_blocks)):
            block_i = self.message_blocks[i]

            self.state = (self.state) ^ (block_i << self.n)

            self.state = self.permutation(self.state)

            self.absorbing_values.insert(i, self.state)

    def squezzing_phase(self):
        result = 0

        self.squezzing_values = []

        num_iterations = math.ceil(self.n / self.r_out)

        for i in range(0, num_iterations):
            value = self.state >> (self.t - self.r_out)

            self.squezzing_values.insert(i, value)

            self.state = self.permutation(value)

        for i in range(0, len(self.squezzing_values)):
            result = (result << self.r_out) | self.squezzing_values[
                len(self.squezzing_values) - i - 1
            ]

    def permutation(self, value):
        matrix_state = self.get_matrix_state(value)
        for i in (0, 12):
            matrix_state = self.add_constant(i, matrix_state)

    def get_matrix_state(self, state):
        # dimension except for 288
        # math.sqrt(int(self.n / 4))
        dim = dimension_matrix.get(self.n, 0)
        matrix_state = np.zeros((dim, dim), dtype=np.uint8)

        bit_cells = 4
        mask = 0xF
        if self.n == 288:
            bit_cells = 8
            mask = 0xFF

        value = state
        for i in range(0, dim):
            value = value >> (bit_cells * dim * i)
            for j in range(0, dim):
                value = value >> (bit_cells * j)
                value = value & mask
                matrix_state[i, j] = value

        return matrix_state

    def add_constant(self, round_value, matrix_state):
        result = np.copy(matrix_state)
        rc_value = RC[round_value]
        dim = dimension_matrix.get(self.n, 0)

        for i in range(0, dim):
            ic_value = IC.get(self.n, i)
            value = result[i, 0]
            result[i, 0] = value ^ rc_value ^ ic_value

        return result

    def sub_cells(self, matrix_state):
        result = np.copy(matrix_state)

        for i in range(0, result.shape[0]):
            for j in range(0, result.shape[1]):
                if self.n == 288:
                    result[i, j] = S_box_aes[result[i, j]]
                else:
                    result[i, j] = S_box_present[result[i, j]]

        return result

    def shift_rows(self, matrix_state):
        result = np.copy(matrix_state)
