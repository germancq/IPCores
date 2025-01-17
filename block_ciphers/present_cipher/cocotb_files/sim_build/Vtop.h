// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated_heavy.h"
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
    VL_OUT8(end_key_generation,0,0);
    VL_IN8(enc_dec,0,0);
    VL_IN8(rq_data,0,0);
    VL_OUT8(end_signal,0,0);
    VL_INW(key,79,0,3);
    VL_IN64(block_i,63,0);
    VL_OUT64(block_o,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ present__DOT__clk;
        CData/*0:0*/ present__DOT__rst;
        CData/*0:0*/ present__DOT__end_key_generation;
        CData/*0:0*/ present__DOT__enc_dec;
        CData/*0:0*/ present__DOT__rq_data;
        CData/*0:0*/ present__DOT__end_signal;
        CData/*4:0*/ present__DOT__key_index;
        CData/*4:0*/ present__DOT__key_index_enc;
        CData/*4:0*/ present__DOT__key_index_dec;
        CData/*0:0*/ present__DOT__end_enc;
        CData/*0:0*/ present__DOT__end_dec;
        CData/*0:0*/ present__DOT__start_enc;
        CData/*0:0*/ present__DOT__start_dec;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__clk;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__rst;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__end_signal;
        CData/*4:0*/ present__DOT__key_sch_impl__DOT__key_index;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__key_register_cl;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__key_register_w;
        CData/*4:0*/ present__DOT__key_sch_impl__DOT__counter_output;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__counter_up;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__r_w;
        CData/*4:0*/ present__DOT__key_sch_impl__DOT__mem_addr;
        CData/*3:0*/ present__DOT__key_sch_impl__DOT__s_box_output;
        CData/*2:0*/ present__DOT__key_sch_impl__DOT__current_state;
        CData/*2:0*/ present__DOT__key_sch_impl__DOT__next_state;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__key_register__DOT__clk;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__key_register__DOT__cl;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__key_register__DOT__w;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__counter_impl__DOT__down;
        CData/*4:0*/ present__DOT__key_sch_impl__DOT__counter_impl__DOT__din;
        CData/*4:0*/ present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__memory_impl__DOT__clk;
        CData/*0:0*/ present__DOT__key_sch_impl__DOT__memory_impl__DOT__r_w;
        CData/*4:0*/ present__DOT__key_sch_impl__DOT__memory_impl__DOT__addr;
        CData/*3:0*/ present__DOT__key_sch_impl__DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__key_sch_impl__DOT__sbox__DOT__dout;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__clk;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__rst;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__start_signal;
        CData/*4:0*/ present__DOT__present_enc_impl__DOT__key_index;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__end_signal;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__counter_up;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__register_w;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__down;
        CData/*4:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__din;
        CData/*4:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__block_register__DOT__clk;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__block_register__DOT__cl;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__block_register__DOT__w;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout;
    };
    struct {
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__clk;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__rst;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__start_signal;
        CData/*4:0*/ present__DOT__present_dec_impl__DOT__key_index;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__end_signal;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__counter_down;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__register_w;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__counter_impl__DOT__down;
        CData/*4:0*/ present__DOT__present_dec_impl__DOT__counter_impl__DOT__din;
        CData/*4:0*/ present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__block_register__DOT__clk;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__block_register__DOT__cl;
        CData/*0:0*/ present__DOT__present_dec_impl__DOT__block_register__DOT__w;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout;
    };
    struct {
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din;
        CData/*3:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout;
        CData/*0:0*/ present__DOT__result__DOT__clk;
        CData/*0:0*/ present__DOT__result__DOT__cl;
        CData/*0:0*/ present__DOT__result__DOT__w;
        CData/*0:0*/ present__DOT__reg_end_signal__DOT__clk;
        CData/*0:0*/ present__DOT__reg_end_signal__DOT__cl;
        CData/*0:0*/ present__DOT__reg_end_signal__DOT__w;
        CData/*0:0*/ present__DOT__reg_end_signal__DOT__din;
        CData/*0:0*/ present__DOT__reg_end_signal__DOT__dout;
        VlWide<3>/*79:0*/ present__DOT__key;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key_register_input;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key_register_output;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key_register__DOT__din;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key_register__DOT__dout;
        QData/*63:0*/ present__DOT__block_i;
        QData/*63:0*/ present__DOT__block_o;
        QData/*63:0*/ present__DOT__roundkey;
        QData/*63:0*/ present__DOT__enc_o;
        QData/*63:0*/ present__DOT__dec_o;
        QData/*63:0*/ present__DOT__block_o_logic;
        QData/*63:0*/ present__DOT__key_sch_impl__DOT__roundkey;
        QData/*63:0*/ present__DOT__key_sch_impl__DOT__memory_impl__DOT__din;
        QData/*63:0*/ present__DOT__key_sch_impl__DOT__memory_impl__DOT__dout;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__text;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__roundkey;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__result;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__block_o;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__register_output;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__block_i;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__block_register__DOT__din;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__block_register__DOT__dout;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_i;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__key_i;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__din;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__din;
        QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__text;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__roundkey;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__result;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__block_o;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__register_output;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__block_i;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__block_register__DOT__din;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__block_register__DOT__dout;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_i;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__key_i;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_o;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__s_box_o;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__din;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout;
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__din;
    };
    struct {
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout;
        QData/*63:0*/ present__DOT__result__DOT__din;
        QData/*63:0*/ present__DOT__result__DOT__dout;
        VlUnpacked<QData/*63:0*/, 32> present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ present__DOT____Vcellinp__present_enc_impl__rst;
    CData/*0:0*/ present__DOT____Vcellinp__result__w;
    CData/*0:0*/ present__DOT____Vcellinp__result__cl;
    CData/*0:0*/ present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst;
    CData/*0:0*/ present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst;
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
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din;
    QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable1_present__DOT__key_sch_impl__DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable2_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable3_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable4_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable5_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable6_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable7_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable8_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable9_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable10_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable11_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable12_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable13_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable14_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable15_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable16_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable17_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable18_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable19_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable20_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable21_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable22_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable23_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable24_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable25_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable26_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable27_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable28_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable29_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable30_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable31_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable32_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout;
    static VlUnpacked<CData/*3:0*/, 16> __Vtable33_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    enum _IDatapresent__DOT__key_sch_impl__DOT__key_register__DOT__DATA_WIDTH { present__DOT__key_sch_impl__DOT__key_register__DOT__DATA_WIDTH = 0x50U};
    static const IData var_present__DOT__key_sch_impl__DOT__key_register__DOT__DATA_WIDTH;
    enum _IDatapresent__DOT__key_sch_impl__DOT__counter_impl__DOT__DATA_WIDTH { present__DOT__key_sch_impl__DOT__counter_impl__DOT__DATA_WIDTH = 5U};
    static const IData var_present__DOT__key_sch_impl__DOT__counter_impl__DOT__DATA_WIDTH;
    enum _IDatapresent__DOT__key_sch_impl__DOT__memory_impl__DOT__ADDR { present__DOT__key_sch_impl__DOT__memory_impl__DOT__ADDR = 5U};
    static const IData var_present__DOT__key_sch_impl__DOT__memory_impl__DOT__ADDR;
    enum _IDatapresent__DOT__key_sch_impl__DOT__memory_impl__DOT__DATA_WIDTH { present__DOT__key_sch_impl__DOT__memory_impl__DOT__DATA_WIDTH = 0x40U};
    static const IData var_present__DOT__key_sch_impl__DOT__memory_impl__DOT__DATA_WIDTH;
    enum _IDatapresent__DOT__present_enc_impl__DOT__counter_impl__DOT__DATA_WIDTH { present__DOT__present_enc_impl__DOT__counter_impl__DOT__DATA_WIDTH = 5U};
    static const IData var_present__DOT__present_enc_impl__DOT__counter_impl__DOT__DATA_WIDTH;
    enum _IDatapresent__DOT__present_enc_impl__DOT__block_register__DOT__DATA_WIDTH { present__DOT__present_enc_impl__DOT__block_register__DOT__DATA_WIDTH = 0x40U};
    static const IData var_present__DOT__present_enc_impl__DOT__block_register__DOT__DATA_WIDTH;
    enum _IDatapresent__DOT__present_dec_impl__DOT__counter_impl__DOT__DATA_WIDTH { present__DOT__present_dec_impl__DOT__counter_impl__DOT__DATA_WIDTH = 5U};
    static const IData var_present__DOT__present_dec_impl__DOT__counter_impl__DOT__DATA_WIDTH;
    enum _IDatapresent__DOT__present_dec_impl__DOT__block_register__DOT__DATA_WIDTH { present__DOT__present_dec_impl__DOT__block_register__DOT__DATA_WIDTH = 0x40U};
    static const IData var_present__DOT__present_dec_impl__DOT__block_register__DOT__DATA_WIDTH;
    enum _IDatapresent__DOT__result__DOT__DATA_WIDTH { present__DOT__result__DOT__DATA_WIDTH = 0x40U};
    static const IData var_present__DOT__result__DOT__DATA_WIDTH;
    enum _IDatapresent__DOT__reg_end_signal__DOT__DATA_WIDTH { present__DOT__reg_end_signal__DOT__DATA_WIDTH = 1U};
    static const IData var_present__DOT__reg_end_signal__DOT__DATA_WIDTH;
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(VerilatedContext* contextp, const char* name = "TOP");
    Vtop(const char* name = "TOP")
      : Vtop(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
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
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vtop__Syms* __restrict vlSymsp);
  private:
    static void _ctor_var_reset(Vtop* self) VL_ATTR_COLD;
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
    static void _settle__TOP__6(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
