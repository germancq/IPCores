// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(data_input,7,0);
    VL_IN8(data_ready,0,0);
    VL_IN8(start_hash,0,0);
    VL_OUT8(busy,0,0);
    VL_OUT8(end_hash,0,0);
    VL_OUTW(digest,127,0,4);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ spongent_iter__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__rst;
        CData/*7:0*/ spongent_iter__DOT__data_input;
        CData/*0:0*/ spongent_iter__DOT__data_ready;
        CData/*0:0*/ spongent_iter__DOT__start_hash;
        CData/*0:0*/ spongent_iter__DOT__busy;
        CData/*0:0*/ spongent_iter__DOT__end_hash;
        CData/*0:0*/ spongent_iter__DOT__rst_lCounter;
        CData/*0:0*/ spongent_iter__DOT__shift_lCounter;
        CData/*6:0*/ spongent_iter__DOT__lCounter_state;
        CData/*0:0*/ spongent_iter__DOT__rst_permutation;
        CData/*0:0*/ spongent_iter__DOT__end_permutation;
        CData/*0:0*/ spongent_iter__DOT__rst_squezzing;
        CData/*0:0*/ spongent_iter__DOT__rst_permutation_from_squezzing;
        CData/*0:0*/ spongent_iter__DOT__end_squeezing;
        CData/*0:0*/ spongent_iter__DOT__rst_permutation_from_absorb;
        CData/*0:0*/ spongent_iter__DOT__begin_squeezing;
        CData/*0:0*/ spongent_iter__DOT__last_block;
        CData/*7:0*/ spongent_iter__DOT__last_padded_data;
        CData/*3:0*/ spongent_iter__DOT__current_state;
        CData/*3:0*/ spongent_iter__DOT__next_state;
        CData/*0:0*/ spongent_iter__DOT__lCounter__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__lCounter__DOT__rst;
        CData/*0:0*/ spongent_iter__DOT__lCounter__DOT__shift;
        CData/*7:0*/ spongent_iter__DOT__lCounter__DOT__feedback_coeff;
        CData/*6:0*/ spongent_iter__DOT__lCounter__DOT__initial_state;
        CData/*6:0*/ spongent_iter__DOT__lCounter__DOT__state;
        CData/*6:0*/ spongent_iter__DOT__lCounter__DOT__state_reg;
        CData/*0:0*/ spongent_iter__DOT__lCounter__DOT__bit_xored;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__rst;
        CData/*6:0*/ spongent_iter__DOT__permutation_impl__DOT__lCounter_state;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__rst_lCounter;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__shift_lCounter;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__end_permutation;
        CData/*6:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_o;
        CData/*6:0*/ spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__down;
        CData/*6:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__din;
        CData/*6:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__din;
    };
    struct {
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__22__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__22__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__23__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__23__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__24__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__24__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__25__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__25__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__26__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__26__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__27__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__27__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__28__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__28__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__29__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__29__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__30__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__30__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__31__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__31__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__32__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__32__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__33__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__33__KET____DOT__s_box_i__DOT__dout;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__rst;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__end_permutation;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing;
        CData/*4:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up;
        CData/*7:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk;
        CData/*1:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__current_state;
        CData/*1:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__next_state;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down;
        CData/*4:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din;
        CData/*4:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
        WData/*127:0*/ spongent_iter__DOT__digest[4];
    };
    struct {
        WData/*135:0*/ spongent_iter__DOT__permutation_state[5];
        WData/*135:0*/ spongent_iter__DOT__permutation_initial_state[5];
        WData/*135:0*/ spongent_iter__DOT__permutation_initial_state_from_squezzing[5];
        WData/*135:0*/ spongent_iter__DOT__permutation_initial_state_from_absorb[5];
        WData/*135:0*/ spongent_iter__DOT__state[5];
        WData/*135:0*/ spongent_iter__DOT__standart_initial_state_from_absorb[5];
        WData/*135:0*/ spongent_iter__DOT__last_initial_state_from_absorb[5];
        WData/*135:0*/ spongent_iter__DOT__permutation_impl__DOT__initial_state[5];
        WData/*135:0*/ spongent_iter__DOT__permutation_impl__DOT__state[5];
        WData/*135:0*/ spongent_iter__DOT__permutation_impl__DOT__state_reg[5];
        WData/*135:0*/ spongent_iter__DOT__permutation_impl__DOT__state_S_box[5];
        WData/*135:0*/ spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[5];
        WData/*135:0*/ spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[5];
        WData/*135:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[5];
        WData/*135:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[5];
        WData/*127:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__result[4];
        WData/*135:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__state[5];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
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
    CData/*3:0*/ __Vtableidx25;
    CData/*3:0*/ __Vtableidx26;
    CData/*3:0*/ __Vtableidx27;
    CData/*3:0*/ __Vtableidx28;
    CData/*3:0*/ __Vtableidx29;
    CData/*3:0*/ __Vtableidx30;
    CData/*3:0*/ __Vtableidx31;
    CData/*3:0*/ __Vtableidx32;
    CData/*3:0*/ __Vtableidx33;
    CData/*3:0*/ __Vtableidx34;
    CData/*3:0*/ __Vtableidx35;
    CData/*0:0*/ __Vclklast__TOP__clk;
    static CData/*3:0*/ __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable23_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__22__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable24_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__23__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable25_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__24__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable26_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__25__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable27_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__26__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable28_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__27__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable29_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__28__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable30_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__29__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable31_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__30__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable32_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__31__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable33_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__32__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable34_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__33__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*1:0*/ __Vtable35_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[16];
    static CData/*0:0*/ __Vtable35_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[16];
    static CData/*0:0*/ __Vtable35_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
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
    void eval();
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
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
