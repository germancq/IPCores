#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : add_constant_test.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 28.03.2025
# Last Modified Date: 28.03.2025
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>
import os
import random
import sys

import cocotb
import numpy as np
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.triggers import FallingEdge, RisingEdge, Timer

import photon


def setup(dut, in_state, round_value):
    rows, colums = in_state.shape
    cont = 0
    for i in range(0, rows):
        for j in range(0, colums):
            dut.in_state[cont] = in_state[i][j]
            cont = cont + 1
    dut.round_value.value = round_value


@cocotb.test()
async def test(dut, index=0):

    bit_cell = dut.BIT_CELL.value
    dim = dut.DIM.value
    t = dut.T_SIZE.value

    n = 80
    r_in = 20
    r_out = 16

    if t == 144:
        n = 128
        r_in = 16
        r_out = 16
    elif t == 196:
        n = 160
        r_in = 36
        r_out = 36
    elif t == 256:
        n = 224
        r_in = 32
        r_out = 32

    if bit_cell == 8:
        n = 256
        r_in = 32
        r_out = 32

    photon_sw = photon.PHOTON(n, r_in, r_out)

    test_state = np.zeros((dim, dim), dtype=np.uint8)

    row, columns = test_state.shape
    for i in range(0, row):
        for j in range(0, columns):
            test_state[i][j] = random.getrandbits(bit_cell)

    for i in range(0, 12):
        expected_result = photon_sw.add_constant(i, test_state)
        setup(dut, test_state, i)
        await Timer(10, units="ns")
        for n_rows in range(0, row):
            for n_col in range(0, columns):
                assert hex(dut.out_state[(dim * n_rows) + n_col].value) == hex(
                    expected_result[n_rows][n_col]
                ), f"ERROR, EXPECTED value should be {hex(expected_result[n_rows][n_col])}at row = {n_rows} and col={n_col}, however hdl value is {hex(dut.out_state[(dim*n_rows)+n_col].value)}"


n = 0x10
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
