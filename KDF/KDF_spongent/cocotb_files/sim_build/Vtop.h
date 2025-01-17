// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(end_signal,0,0);
    VL_IN(count,31,0);
    VL_INW(user_password,79,0,3);
    VL_OUTW(key_derivated,87,0,3);
    VL_IN64(salt,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ KDF_spongent__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__rst;
        CData/*0:0*/ KDF_spongent__DOT__end_signal;
        CData/*0:0*/ KDF_spongent__DOT__hash_end_signal;
        CData/*0:0*/ KDF_spongent__DOT__rst_hash;
        CData/*0:0*/ KDF_spongent__DOT__counter_up;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__rst;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__end_hash;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__rst_lCounter;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__shift_lCounter;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__lCounter_state;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__end_permutation;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__rst_permutation;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__end_absorbing;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__rst_permutation_from_absorb;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__rst_permutation_from_squezzing;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__lCounter__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__lCounter__DOT__rst;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__lCounter__DOT__shift;
        CData/*6:0*/ KDF_spongent__DOT__hash_impl__DOT__lCounter__DOT__feedback_coeff;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__lCounter__DOT__initial_state;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__lCounter__DOT__state;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__lCounter__DOT__state_reg;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__lCounter__DOT__bit_xored;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__rst;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__lCounter_state;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__rst_lCounter;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__shift_lCounter;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__end_permutation;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__counter_o;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__reverse_lCounter;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__counter_impl__DOT__down;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__counter_impl__DOT__din;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__din;
    };
    struct {
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__rst;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__end_permutation;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__rst_permutation;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__end_absorbing;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__counter_o;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__counter_up;
        CData/*7:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__msg_chunk;
        CData/*1:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__current_state;
        CData/*1:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__next_state;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__down;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__din;
        CData/*5:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__rst;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__end_permutation;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__rst_permutation;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__end_squeezing;
        CData/*4:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__counter_o;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__counter_up;
        CData/*7:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__result_chunk;
        CData/*1:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__current_state;
        CData/*1:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__next_state;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down;
        CData/*4:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din;
        CData/*4:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ KDF_spongent__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ KDF_spongent__DOT__counter_impl__DOT__up;
        CData/*0:0*/ KDF_spongent__DOT__counter_impl__DOT__down;
        CData/*0:0*/ KDF_spongent__DOT__register_data__DOT__clk;
        CData/*0:0*/ KDF_spongent__DOT__register_data__DOT__cl;
        CData/*0:0*/ KDF_spongent__DOT__register_data__DOT__w;
        IData/*31:0*/ KDF_spongent__DOT__count;
        WData/*79:0*/ KDF_spongent__DOT__user_password[3];
        WData/*87:0*/ KDF_spongent__DOT__key_derivated[3];
        WData/*175:0*/ KDF_spongent__DOT__hash_input[6];
        WData/*87:0*/ KDF_spongent__DOT__hash_output[3];
        IData/*31:0*/ KDF_spongent__DOT__counter_output;
    };
    struct {
        WData/*87:0*/ KDF_spongent__DOT__register_output[3];
        WData/*175:0*/ KDF_spongent__DOT__hash_impl__DOT__msg[6];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__hash[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_initial_state[3];
        WData/*183:0*/ KDF_spongent__DOT__hash_impl__DOT__padded_msg[6];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_initial_state_from_absorb[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_initial_state_from_squezzing[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__initial_state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__state_reg[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__state_S_box[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[3];
        WData/*183:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__padded_msg[6];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__permutation_state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__permutation_initial_state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__absorbing_state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__permutation_state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__permutation_initial_state[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__result[3];
        WData/*87:0*/ KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__state[3];
        IData/*31:0*/ KDF_spongent__DOT__counter_impl__DOT__din;
        IData/*31:0*/ KDF_spongent__DOT__counter_impl__DOT__dout;
        WData/*87:0*/ KDF_spongent__DOT__register_data__DOT__din[3];
        WData/*87:0*/ KDF_spongent__DOT__register_data__DOT__dout[3];
        QData/*63:0*/ KDF_spongent__DOT__salt;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ KDF_spongent__DOT____Vcellinp__hash_impl__rst;
    CData/*0:0*/ KDF_spongent__DOT____Vcellinp__counter_impl__up;
    CData/*0:0*/ KDF_spongent__DOT__hash_impl__DOT____Vcellinp__squeezing_phase_impl__rst;
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    CData/*3:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    CData/*3:0*/ __Vtableidx7;
    CData/*3:0*/ __Vtableidx8;
    CData/*3:0*/ __Vtableidx9;
    CData/*3:0*/ __Vtableidx10;
    CData/*3:0*/ __Vtableidx11;
    CData/*3:0*/ __Vtableidx12;
    CData/*3:0*/ __Vtableidx13;
    CData/*3:0*/ __Vtableidx14;
    CData/*3:0*/ __Vtableidx15;
    CData/*3:0*/ __Vtableidx16;
    CData/*3:0*/ __Vtableidx17;
    CData/*3:0*/ __Vtableidx18;
    CData/*3:0*/ __Vtableidx19;
    CData/*3:0*/ __Vtableidx20;
    CData/*3:0*/ __Vtableidx21;
    CData/*3:0*/ __Vtableidx22;
    CData/*3:0*/ __Vtableidx23;
    CData/*3:0*/ __Vtableidx24;
    CData/*0:0*/ __Vclklast__TOP__clk;
    static CData/*3:0*/ __Vtable1_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable2_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable3_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable4_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable5_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable6_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable7_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable8_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable9_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable10_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable11_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable12_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable13_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable14_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable15_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable16_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable17_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable18_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable19_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable20_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable21_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable22_KDF_spongent__DOT__hash_impl__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*1:0*/ __Vtable23_KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__next_state[16];
    static CData/*0:0*/ __Vtable23_KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__rst_permutation[16];
    static CData/*0:0*/ __Vtable23_KDF_spongent__DOT__hash_impl__DOT__absorbing_phase_impl__DOT__counter_up[16];
    static CData/*1:0*/ __Vtable24_KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__next_state[16];
    static CData/*0:0*/ __Vtable24_KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__rst_permutation[16];
    static CData/*0:0*/ __Vtable24_KDF_spongent__DOT__hash_impl__DOT__squeezing_phase_impl__DOT__counter_up[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
