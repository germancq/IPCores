#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : key_schedule_test.py
# Author            : German C.Quiveu <germancq@dte.us.es>
# Date              : 05.03.2025
# Last Modified Date: 05.03.2025
# Last Modified By  : German C.Quiveu <germancq@dte.us.es>

import os
import random
import sys

import clefia
import cocotb
import numpy as np
from cocotb.clock import Clock
from cocotb.regression import TestFactory
from cocotb.triggers import FallingEdge, RisingEdge, Timer

CLK_PERIOD = 20


def setup_dut(dut, key):
    print("setup block cipher")
    cocotb.fork(Clock(dut.clk, CLK_PERIOD).start())
    dut.rst.value = 0
    dut.key.value = key


async def rst_function_test(dut):
    print("rst function")
    dut.rst.value = 1
    await n_cycles_clock(dut, 1)
    assert (
        dut.current_state.value == dut.IDLE.value
    ), f"ERROR STATE IN IDLE, STATE={dut.current_state.value}"
    await n_cycles_clock(dut, 5)

    assert (
        dut.current_state.value == dut.IDLE.value
    ), f"ERROR STATE IN IDLE, STATE={dut.current_state.value}"

    assert (
        dut.dout_rounds_counter.value == 0
    ), f"ERROR STATE IN IDLE, dout_rounds_counter={dut.current_state.value}, should be 0"

    dut.rst.value = 0


async def gfn_test(dut, expected_l_value):
    print("wait for gfn test")
    await n_cycles_clock(dut, 1)
    assert (
        dut.current_state.value == dut.WAIT_FOR_GFN.value
    ), f"ERROR STATE IN WAIT_FOR_GFN, STATE={dut.current_state.value}"

    print(dut.gfn4_end_signal.value)
    print(dut.gfn8_end_signal.value)
    while dut.gfn4_end_signal.value == 0 or dut.gfn8_end_signal == 0:
        print(hex(dut.gfn_inst_8.dout.dout_rounds_counter.value))
        print(hex(dut.gfn_inst.dout_rounds_counter.value))
        await n_cycles_clock(dut, 1)

    print(dut.gfn4_end_signal.value)
    print(dut.gfn8_end_signal.value)
    for i in range(0, 4):

        assert hex(dut.LL_din[i].value) == hex(
            expected_l_value[i]
        ), f"ERROR in WAIT_FOR_GFN, LL values incorrect, expected in LL{i} = {hex(expected_l_value[i])}, calculated = {hex(dut.LL_din[i].value)}"
        if dut.KEY_LEN.value != 128:
            assert hex(dut.LR_din[i].value) == hex(
                expected_l_value[4 + i]
            ), f"ERROR in WAIT_FOR_GFN, LR values incorrect, expected in LR{i} = {hex(expected_l_value[4+i])}, calculated = {hex(dut.LR_din[i].value)}"


async def step2_1_test(dut, clefia_sw, blk_i, rk, counter_value):
    print("step 2.1")
    await n_cycles_clock(dut, 1)
    assert (
        dut.current_state.value == dut.STEP_2_1.value
    ), f"ERROR STATE IN STEP_2_1, STATE={dut.current_state.value}"
    expected_f0_x_input_0 = blk_i[0]
    expected_f0_rk_input_0 = rk[(int(dut.d.value / 2)) * counter_value]
    expected_f0_output_0 = clefia_sw.F0(expected_f0_rk_input_0, expected_f0_x_input_0)[
        0
    ]
    expected_next_T1 = clefia_sw.galois8.add(blk_i[1], expected_f0_output_0)
    blk_i[1] = expected_next_T1

    expected_f1_x_input_0 = blk_i[2]
    expected_f1_rk_input_0 = rk[((int(dut.d.value / 2)) * counter_value) + 1]
    expected_f1_output_0 = clefia_sw.F1(expected_f1_rk_input_0, expected_f1_x_input_0)[
        0
    ]
    expected_next_T3 = clefia_sw.galois8.add(blk_i[3], expected_f1_output_0)
    blk_i[3] = expected_next_T3

    assert hex(dut.f0_x_input[0].value) == hex(
        expected_f0_x_input_0
    ), f"ERROR IN STEP_2_1 f0_x_input expected = {hex(expected_f0_x_input_0)}, calculated = {hex(dut.f0_x_input[0].value)}"
    assert hex(dut.f0_rk_input[0].value) == hex(
        expected_f0_rk_input_0
    ), f"ERROR IN STEP_2_1 f0_rk_input expected = {hex(expected_f0_rk_input_0)}, calculated = {hex(dut.f0_rk_input[0].value)}"
    assert hex(dut.f0_y_output[0].value) == hex(
        expected_f0_output_0
    ), f"ERROR IN STEP_2_1 f0_y_output expected = {hex(expected_f0_output_0)}, calculated = {hex(dut.f0_y_output[0].value)}"
    assert hex(dut.T_din[1].value) == hex(
        expected_next_T1
    ), f"ERROR IN STEP_2_1 T1 expected = {hex(expected_next_T1)}, calculated = {hex(dut.T_din[1].value)}"

    assert hex(dut.f1_x_input[0].value) == hex(
        expected_f1_x_input_0
    ), f"ERROR IN STEP_2_1 f1_x_input expected = {hex(expected_f1_x_input_0)}, calculated = {hex(dut.f1_x_input[0].value)}"
    assert hex(dut.f1_rk_input[0].value) == hex(
        expected_f1_rk_input_0
    ), f"ERROR IN STEP_2_1 f1_rk_input expected = {hex(expected_f1_rk_input_0)}, calculated = {hex(dut.f1_rk_input[0].value)}"
    assert hex(dut.f1_y_output[0].value) == hex(
        expected_f1_output_0
    ), f"ERROR IN STEP_2_1 f1_y_output expected = {hex(expected_f1_output_0)}, calculated = {hex(dut.f1_y_output[0].value)}"
    assert hex(dut.T_din[3].value) == hex(
        expected_next_T3
    ), f"ERROR IN STEP_2_1 T3 expected = {hex(expected_next_T3)}, calculated = {hex(dut.T_din[3].value)}"

    if dut.d.value == 8:
        expected_f0_x_input_1 = blk_i[4]
        expected_f0_rk_input_1 = rk[((int(dut.d.value / 2)) * counter_value) + 2]
        expected_f0_output_1 = clefia_sw.F0(
            expected_f0_rk_input_1, expected_f0_x_input_1
        )[0]
        expected_next_T5 = clefia_sw.galois8.add(blk_i[5], expected_f0_output_1)
        blk_i[5] = expected_next_T5

        expected_f1_x_input_1 = blk_i[6]
        expected_f1_rk_input_1 = rk[((int(dut.d.value / 2)) * counter_value) + 3]
        expected_f1_output_1 = clefia_sw.F1(
            expected_f1_rk_input_1, expected_f1_x_input_1
        )[0]
        expected_next_T7 = clefia_sw.galois8.add(blk_i[7], expected_f1_output_1)
        blk_i[7] = expected_next_T7

        assert hex(dut.f0_x_input[1].value) == hex(
            expected_f0_x_input_1
        ), f"ERROR IN STEP_2_1 f0_x_input expected = {hex(expected_f0_x_input_1)}, calculated = {hex(dut.f0_x_input[1].value)}"
        assert hex(dut.f0_rk_input[1].value) == hex(
            expected_f0_rk_input_1
        ), f"ERROR IN STEP_2_1 f0_rk_input expected = {hex(expected_f0_rk_input_1)}, calculated = {hex(dut.f0_rk_input[1].value)}"
        assert hex(dut.f0_y_output[1].value) == hex(
            expected_f0_output_1
        ), f"ERROR IN STEP_2_1 f0_y_output expected = {hex(expected_f0_output_1)}, calculated = {hex(dut.f0_y_output[1].value)}"
        assert hex(dut.T_din[5].value) == hex(
            expected_next_T5
        ), f"ERROR IN STEP_2_1 T5 expected = {hex(expected_next_T5)}, calculated = {hex(dut.T_din[5].value)}"

        assert hex(dut.f1_x_input[1].value) == hex(
            expected_f1_x_input_1
        ), f"ERROR IN STEP_2_1 f1_x_input expected = {hex(expected_f1_x_input_1)}, calculated = {hex(dut.f1_x_input[1].value)}"
        assert hex(dut.f1_rk_input[1].value) == hex(
            expected_f1_rk_input_1
        ), f"ERROR IN STEP_2_1 f1_rk_input expected = {hex(expected_f1_rk_input_1)}, calculated = {hex(dut.f1_rk_input[1].value)}"
        assert hex(dut.f1_y_output[1].value) == hex(
            expected_f1_output_1
        ), f"ERROR IN STEP_2_1 f1_y_output expected = {hex(expected_f1_output_1)}, calculated = {hex(dut.f1_y_output[1].value)}"
        assert hex(dut.T_din[7].value) == hex(
            expected_next_T7
        ), f"ERROR IN STEP_2_1 T7 expected = {hex(expected_next_T7)}, calculated = {hex(dut.T_din[7].value)}"

    return blk_i


async def step2_2_test(dut, clefia_sw, blk_i):
    print("step 2.2")
    await n_cycles_clock(dut, 1)
    assert (
        dut.current_state.value == dut.STEP_2_2.value
    ), f"ERROR STATE IN STEP_2_2, STATE={dut.current_state.value}"
    blk_i = np.roll(blk_i, -1)
    for i in range(0, dut.d.value):
        print(i)
        print(hex(blk_i[i]))
        print(hex(dut.T_din[i].value))
    for i in range(0, dut.d.value):
        assert hex(dut.T_din[i].value) == hex(
            blk_i[i]
        ), f"ERROR in STEP 2.2, T values incorrect, expected = {hex(blk_i[i])} calculated = {dut.T_din[i].value}"
    return blk_i


async def step3_test(dut, expected_result):
    print("step 3")
    await n_cycles_clock(dut, 1)
    assert (
        dut.current_state.value == dut.STEP_3.value
    ), f"ERROR STATE IN STEP_3 STATE={dut.current_state.value}"
    for i in range(0, dut.d.value):
        print(dut.T_dout[i].value)
        print(dut.block_o[i].value)
    for i in range(0, dut.d.value):
        assert hex(dut.block_o[i].value) == hex(
            expected_result[i]
        ), f"ERROR in STEP 3, T values incorrect"


async def n_cycles_clock(dut, n):
    for i in range(0, n):
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)


@cocotb.test()
async def test(dut, index=0):

    clefia_sw = clefia.CLEFIA()
    key = random.getrandbits(dut.KEY_LEN.value)
    expected_rk = clefia_sw.key_schedule(key, dut.KEY_LEN.value)

    await Timer(20, units="ns")

    setup_dut(dut, key)
    await rst_function_test(dut)

    key_a = np.zeros(int(dut.KEY_LEN.value / 32), dtype=np.uint32)
    keyL_a = np.zeros(4, dtype=np.uint32)
    keyR_a = np.zeros(4, dtype=np.uint32)
    L_left = np.zeros(4, dtype=np.uint32)
    L_right = np.zeros(4, dtype=np.uint32)
    for i in range(0, int(dut.KEY_LEN.value / 32)):
        key_a[int(dut.KEY_LEN.value / 32) - 1 - i] = key >> (i * 32) & 0xFFFFFFFF
        print(hex(key_a[int(dut.KEY_LEN.value / 32) - 1 - i]))
    # key 128-bits
    print(key_a)
    for i in range(0, 4):
        keyL_a[i] = key_a[i]

    if dut.KEY_LEN.value != 128:
        for i in range(0, 2):
            keyR_a[i] = key_a[i + 4]
        keyR_a[2] = key_a[6] if dut.KEY_LEN.value == 256 else ~key_a[0]
        keyR_a[3] = key_a[7] if dut.KEY_LEN.value == 256 else ~key_a[1]

    WK = np.zeros(4, dtype=np.uint32)
    RK = np.zeros(36, dtype=np.uint32)
    if dut.KEY_LEN.value == 192:
        RK = np.zeros(44, dtype=np.uint32)
    if dut.KEY_LEN.value == 256:
        RK = np.zeros(52, dtype=np.uint32)

    T_a, CON = clefia_sw.generate_constants(0x428A, 30)
    if dut.KEY_LEN.value == 192:
        T_a, CON = clefia_sw.generate_constants(0x7137, 42)
    if dut.KEY_LEN.value == 256:
        T_a, CON = clefia_sw.generate_constants(0xB5C0, 46)
    L = clefia_sw.GFN(4, 12, key_a, CON[0:24])

    if dut.KEY_LEN.value != 128:
        L = clefia_sw.GFN(8, 10, np.concatenate((keyL_a, keyR_a)), CON[0:40])
        for i in range(0, 4):
            L_left[i] = L[i]
            L_right[i] = L[i + 4]
            WK[i] = keyR_a[i] ^ keyL_a[i]
    else:
        WK = np.copy(key_a)

    #############TESTBENCH COCOTB####################
    await gfn_test(dut, L)

    #################################################
    # print(hex(L[0]))
    # print(hex(L[1]))
    # print(hex(L[2]))
    # print(hex(L[3]))
    print(key_a)
    print(WK)
    print(keyL_a)
    print(keyR_a)
    print(L_left)
    print(L_right)

    # print(hex(CON[58]))
    # print(hex(CON[59]))

    T = np.zeros(4, dtype=np.uint32)
    L_aux = np.zeros(4, dtype=np.uint32)
    K_aux = np.zeros(4, dtype=np.uint32)
    index = 8
    cte_index = 24
    if dut.KEY_LEN.value != 128:
        index = 10 if dut.KEY_LEN.value == 192 else 12
        cte_index = 40

    for i in range(0, index + 1):

        if dut.KEY_LEN.value == 128:
            L_aux = np.copy(L)
            K_aux = np.copy(WK)
        else:
            if i % 4 < 2:
                L_aux = np.copy(L_left)
                K_aux = np.copy(keyR_a)
            else:
                L_aux = np.copy(L_right)
                K_aux = np.copy(keyL_a)

        for j in range(0, 4):
            c = CON[cte_index + (4 * i) + j]
            print(
                "L_aux[{}] ^ c = {} ^ {} = {} ".format(
                    j, hex(L_aux[j]), hex(c), hex(L_aux[j] ^ c)
                )
            )
            T[j] = c ^ L_aux[j]
            if i % 2 != 0:
                print(
                    "T[{}] ^ K_aux[{}] = {} ^ {} = {} ".format(
                        j, j, hex(T[j]), hex(K_aux[j]), hex(T[j] ^ K_aux[j])
                    )
                )
                T[j] = T[j] ^ K_aux[j]

        # print(L)
        L = clefia_sw.doubleSwap(L)
        if i % 4 < 2:
            L_left = clefia_sw.doubleSwap(L_left)
        else:
            L_right = clefia_sw.doubleSwap(L_right)

        # print(L)
        for j in range(0, 4):
            RK[(4 * i) + j] = T[j]
            print("RK[{}] = {}".format((4 * i) + j, hex(T[j])))


n = 10
factory = TestFactory(test)

factory.add_option("index", range(0, n))
factory.generate_tests()
