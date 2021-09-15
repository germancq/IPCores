// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(end_key_generation,0,0);
        VL_IN8(enc_dec,0,0);
        VL_IN8(rq_data,0,0);
        VL_OUT8(end_signal,0,0);
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
        CData/*0:0*/ present__DOT____Vcellinp__present_enc_impl__rst;
        CData/*0:0*/ present__DOT____Vcellinp__result__w;
        CData/*0:0*/ present__DOT____Vcellinp__result__cl;
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
        CData/*0:0*/ present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__register_w;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__down;
        CData/*4:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__din;
        CData/*4:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ present__DOT__present_enc_impl__DOT__block_register__DOT__clk;
    };
    struct {
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
        CData/*0:0*/ present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst;
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
    };
    struct {
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
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_INW(key,79,0,3);
        VlWide<3>/*79:0*/ present__DOT__key;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key_register_input;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key_register_output;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key_register__DOT__din;
        VlWide<3>/*79:0*/ present__DOT__key_sch_impl__DOT__key_register__DOT__dout;
        VL_IN64(block_i,63,0);
        VL_OUT64(block_o,63,0);
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
    };
    struct {
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
        QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout;
        QData/*63:0*/ present__DOT__result__DOT__din;
        QData/*63:0*/ present__DOT__result__DOT__dout;
        VlUnpacked<QData/*63:0*/, 32> present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr IData/*31:0*/ present__DOT__key_sch_impl__DOT__key_register__DOT__DATA_WIDTH = 0x00000050U;
    static constexpr IData/*31:0*/ present__DOT__key_sch_impl__DOT__counter_impl__DOT__DATA_WIDTH = 5U;
    static constexpr IData/*31:0*/ present__DOT__key_sch_impl__DOT__memory_impl__DOT__ADDR = 5U;
    static constexpr IData/*31:0*/ present__DOT__key_sch_impl__DOT__memory_impl__DOT__DATA_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ present__DOT__present_enc_impl__DOT__counter_impl__DOT__DATA_WIDTH = 5U;
    static constexpr IData/*31:0*/ present__DOT__present_enc_impl__DOT__block_register__DOT__DATA_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ present__DOT__present_dec_impl__DOT__counter_impl__DOT__DATA_WIDTH = 5U;
    static constexpr IData/*31:0*/ present__DOT__present_dec_impl__DOT__block_register__DOT__DATA_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ present__DOT__result__DOT__DATA_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ present__DOT__reg_end_signal__DOT__DATA_WIDTH = 1U;

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
