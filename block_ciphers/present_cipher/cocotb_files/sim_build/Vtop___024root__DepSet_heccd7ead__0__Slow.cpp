// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__down = 0U;
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__din = 0U;
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__down = 0U;
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__din = 0U;
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__up = 0U;
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__din = 0x1fU;
    vlSelf->present__DOT__reg_end_signal__DOT__din = 1U;
}

extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_h443e93db_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_h6344a0bd_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Init
    QData/*63:0*/ present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din;
    QData/*63:0*/ present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din;
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
    // Body
    vlSelf->present__DOT__enc_dec = vlSelf->enc_dec;
    vlSelf->present__DOT__rq_data = vlSelf->rq_data;
    vlSelf->present__DOT__key[0U] = vlSelf->key[0U];
    vlSelf->present__DOT__key[1U] = vlSelf->key[1U];
    vlSelf->present__DOT__key[2U] = vlSelf->key[2U];
    vlSelf->present__DOT__block_i = vlSelf->block_i;
    vlSelf->present__DOT__rst = vlSelf->rst;
    vlSelf->present__DOT__clk = vlSelf->clk;
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_cl = 0U;
    vlSelf->present__DOT____Vcellinp__result__cl = 
        ((IData)(vlSelf->rst) | (IData)(vlSelf->rq_data));
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_w = 0U;
    if ((4U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state)))) {
                vlSelf->present__DOT__key_sch_impl__DOT__key_register_w = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
        vlSelf->present__DOT__key_sch_impl__DOT__key_register_w = 1U;
    } else if ((1U & (~ (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state)))) {
        vlSelf->present__DOT__key_sch_impl__DOT__key_register_w = 1U;
    }
    vlSelf->present__DOT__key_sch_impl__DOT__counter_up = 0U;
    if ((1U & (~ ((IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state)))) {
                vlSelf->present__DOT__key_sch_impl__DOT__counter_up = 1U;
            }
        }
        vlSelf->present__DOT__key_sch_impl__DOT__r_w = 0U;
        if ((1U & (~ ((IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
                vlSelf->present__DOT__key_sch_impl__DOT__r_w = 1U;
            }
        }
    } else {
        vlSelf->present__DOT__key_sch_impl__DOT__r_w = 0U;
    }
    vlSelf->present__DOT__block_o = vlSelf->present__DOT__result__DOT__dout;
    vlSelf->present__DOT__end_signal = vlSelf->present__DOT__reg_end_signal__DOT__dout;
    vlSelf->present__DOT__end_enc = vlSelf->present__DOT__present_enc_impl__DOT__end_signal;
    vlSelf->present__DOT__end_dec = vlSelf->present__DOT__present_dec_impl__DOT__end_signal;
    vlSelf->present__DOT__key_sch_impl__DOT__counter_output 
        = vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U] 
        = vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U];
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[1U] 
        = vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U];
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U] 
        = vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U];
    vlSelf->present__DOT__key_sch_impl__DOT__end_signal = 0U;
    if ((4U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
                vlSelf->present__DOT__key_sch_impl__DOT__end_signal = 1U;
            }
        }
    }
    vlSelf->present__DOT__present_enc_impl__DOT__register_output 
        = vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__dout;
    vlSelf->present__DOT__present_dec_impl__DOT__register_output 
        = vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__dout;
    vlSelf->present__DOT__key_sch_impl__DOT__roundkey 
        = vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__dout;
    vlSelf->present__DOT__start_enc = (1U & (~ (IData)(vlSelf->enc_dec)));
    vlSelf->present__DOT__start_dec = vlSelf->enc_dec;
    vlSelf->present__DOT__present_enc_impl__DOT__key_index 
        = vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
    vlSelf->present__DOT__present_dec_impl__DOT__key_index 
        = vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout;
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__up 
        = vlSelf->present__DOT__present_enc_impl__DOT__counter_up;
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__down 
        = vlSelf->present__DOT__present_dec_impl__DOT__counter_down;
    vlSelf->present__DOT__key_sch_impl__DOT__key[0U] 
        = vlSelf->present__DOT__key[0U];
    vlSelf->present__DOT__key_sch_impl__DOT__key[1U] 
        = vlSelf->present__DOT__key[1U];
    vlSelf->present__DOT__key_sch_impl__DOT__key[2U] 
        = vlSelf->present__DOT__key[2U];
    vlSelf->present__DOT__present_enc_impl__DOT__text 
        = vlSelf->present__DOT__block_i;
    vlSelf->present__DOT__present_dec_impl__DOT__text 
        = vlSelf->present__DOT__block_i;
    vlSelf->present__DOT__key_sch_impl__DOT__rst = vlSelf->present__DOT__rst;
    vlSelf->present__DOT__result__DOT__clk = vlSelf->present__DOT__clk;
    vlSelf->present__DOT__reg_end_signal__DOT__clk 
        = vlSelf->present__DOT__clk;
    vlSelf->present__DOT__present_enc_impl__DOT__clk 
        = vlSelf->present__DOT__clk;
    vlSelf->present__DOT__present_dec_impl__DOT__clk 
        = vlSelf->present__DOT__clk;
    vlSelf->present__DOT__key_sch_impl__DOT__clk = vlSelf->present__DOT__clk;
    vlSelf->present__DOT__result__DOT__cl = vlSelf->present__DOT____Vcellinp__result__cl;
    vlSelf->present__DOT__reg_end_signal__DOT__cl = vlSelf->present__DOT____Vcellinp__result__cl;
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__w 
        = vlSelf->present__DOT__key_sch_impl__DOT__key_register_w;
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__up 
        = vlSelf->present__DOT__key_sch_impl__DOT__counter_up;
    vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__r_w 
        = vlSelf->present__DOT__key_sch_impl__DOT__r_w;
    vlSelf->block_o = vlSelf->present__DOT__block_o;
    vlSelf->end_signal = vlSelf->present__DOT__end_signal;
    vlSelf->present__DOT____Vcellinp__result__w = ((IData)(vlSelf->present__DOT__end_enc) 
                                                   | (IData)(vlSelf->present__DOT__end_dec));
    vlSelf->present__DOT__key_sch_impl__DOT__next_state 
        = vlSelf->present__DOT__key_sch_impl__DOT__current_state;
    if ((4U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state)))) {
                vlSelf->present__DOT__key_sch_impl__DOT__next_state = 1U;
            }
        }
    } else {
        vlSelf->present__DOT__key_sch_impl__DOT__next_state 
            = ((2U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))
                ? ((1U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))
                    ? 4U : 3U) : ((1U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))
                                   ? ((0x1fU == (IData)(vlSelf->present__DOT__key_sch_impl__DOT__counter_output))
                                       ? 5U : 2U) : 1U));
    }
    vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__din 
        = (((QData)((IData)(vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[
                            (((IData)(0x3fU) + (IData)(0x10U)) 
                             >> 5U)])) << ((0U == 0x10U)
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (IData)(0x10U)))) 
           | (((0U == 0x10U) ? 0ULL : ((QData)((IData)(
                                                       vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[
                                                       (((IData)(0x1fU) 
                                                         + (IData)(0x10U)) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (IData)(0x10U)))) 
              | ((QData)((IData)(vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                 >> 0x10U)));
    vlSelf->present__DOT__key_sch_impl__DOT__sbox__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[
                                         (((IData)(3U) 
                                           + (IData)(0x4cU)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(0xcU)))) 
                   | (vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U] 
                      >> 0xcU)));
    __Vtableidx1 = (0xfU & (vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U] 
                            >> 0xcU));
    vlSelf->present__DOT__key_sch_impl__DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx1];
    vlSelf->present__DOT__end_key_generation = vlSelf->present__DOT__key_sch_impl__DOT__end_signal;
    vlSelf->present__DOT__roundkey = vlSelf->present__DOT__key_sch_impl__DOT__roundkey;
    vlSelf->present__DOT__present_enc_impl__DOT__start_signal 
        = vlSelf->present__DOT__start_enc;
    vlSelf->present__DOT__present_dec_impl__DOT__start_signal 
        = vlSelf->present__DOT__start_dec;
    vlSelf->present__DOT__present_enc_impl__DOT__register_w 
        = (0U < (IData)(vlSelf->present__DOT__present_enc_impl__DOT__key_index));
    vlSelf->present__DOT__key_index_enc = vlSelf->present__DOT__present_enc_impl__DOT__key_index;
    vlSelf->present__DOT__present_enc_impl__DOT__block_i 
        = ((2U > (IData)(vlSelf->present__DOT__present_enc_impl__DOT__key_index))
            ? vlSelf->block_i : vlSelf->present__DOT__present_enc_impl__DOT__register_output);
    vlSelf->present__DOT__present_dec_impl__DOT__register_w 
        = (0x1fU > (IData)(vlSelf->present__DOT__present_dec_impl__DOT__key_index));
    vlSelf->present__DOT__key_index_dec = vlSelf->present__DOT__present_dec_impl__DOT__key_index;
    vlSelf->present__DOT__present_dec_impl__DOT__block_i 
        = ((0x1dU < (IData)(vlSelf->present__DOT__present_dec_impl__DOT__key_index))
            ? vlSelf->block_i : vlSelf->present__DOT__present_dec_impl__DOT__register_output);
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__rst 
        = vlSelf->present__DOT__key_sch_impl__DOT__rst;
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__clk 
        = vlSelf->present__DOT__present_enc_impl__DOT__clk;
    vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__clk 
        = vlSelf->present__DOT__present_enc_impl__DOT__clk;
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__clk 
        = vlSelf->present__DOT__present_dec_impl__DOT__clk;
    vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__clk 
        = vlSelf->present__DOT__present_dec_impl__DOT__clk;
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__clk 
        = vlSelf->present__DOT__key_sch_impl__DOT__clk;
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__clk 
        = vlSelf->present__DOT__key_sch_impl__DOT__clk;
    vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__clk 
        = vlSelf->present__DOT__key_sch_impl__DOT__clk;
    vlSelf->present__DOT__result__DOT__w = vlSelf->present__DOT____Vcellinp__result__w;
    vlSelf->present__DOT__reg_end_signal__DOT__w = vlSelf->present__DOT____Vcellinp__result__w;
    vlSelf->present__DOT__key_sch_impl__DOT__s_box_output 
        = vlSelf->present__DOT__key_sch_impl__DOT__sbox__DOT__dout;
    vlSelf->end_key_generation = vlSelf->present__DOT__end_key_generation;
    vlSelf->present__DOT____Vcellinp__present_enc_impl__rst 
        = (1U & ((~ (IData)(vlSelf->present__DOT__end_key_generation)) 
                 | (IData)(vlSelf->rq_data)));
    vlSelf->present__DOT__present_enc_impl__DOT__roundkey 
        = vlSelf->present__DOT__roundkey;
    vlSelf->present__DOT__present_dec_impl__DOT__roundkey 
        = vlSelf->present__DOT__roundkey;
    vlSelf->present__DOT__present_enc_impl__DOT__result 
        = (vlSelf->present__DOT__present_enc_impl__DOT__register_output 
           ^ vlSelf->present__DOT__roundkey);
    vlSelf->present__DOT__present_dec_impl__DOT__result 
        = (vlSelf->present__DOT__present_dec_impl__DOT__register_output 
           ^ vlSelf->present__DOT__roundkey);
    vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__w 
        = vlSelf->present__DOT__present_enc_impl__DOT__register_w;
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_i 
        = vlSelf->present__DOT__present_enc_impl__DOT__block_i;
    present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
        = (vlSelf->present__DOT__present_enc_impl__DOT__block_i 
           ^ vlSelf->present__DOT__roundkey);
    vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__w 
        = vlSelf->present__DOT__present_dec_impl__DOT__register_w;
    vlSelf->present__DOT__key_index = ((IData)(vlSelf->enc_dec)
                                        ? (IData)(vlSelf->present__DOT__key_index_dec)
                                        : (IData)(vlSelf->present__DOT__key_index_enc));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_i 
        = vlSelf->present__DOT__present_dec_impl__DOT__block_i;
    present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
        = (vlSelf->present__DOT__present_dec_impl__DOT__block_i 
           ^ vlSelf->present__DOT__roundkey);
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[0U] = 0U;
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[1U] = 0U;
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[2U] = 0U;
    if ((4U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state)))) {
                vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[0U] 
                    = (((IData)((0xfffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                     >> 0x14U))))) 
                        << 0x14U) | ((0xf8000U & ((0xffff8000U 
                                                   & vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U]) 
                                                  ^ 
                                                  ((IData)(vlSelf->present__DOT__key_sch_impl__DOT__counter_output) 
                                                   << 0xfU))) 
                                     | (0x7fffU & vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U])));
                vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[1U] 
                    = (((IData)((0xfffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                     >> 0x14U))))) 
                        >> 0xcU) | ((IData)(((0xfffffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                     << 0xcU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                       >> 0x14U)))) 
                                             >> 0x20U)) 
                                    << 0x14U));
                vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[2U] 
                    = ((IData)(((0xfffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                     >> 0x14U)))) 
                                >> 0x20U)) >> 0xcU);
            }
        }
    } else if ((2U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state))) {
            vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[0U] 
                = vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U];
            vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[1U] 
                = vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[1U];
            vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[2U] 
                = (((IData)(vlSelf->present__DOT__key_sch_impl__DOT__s_box_output) 
                    << 0xcU) | (0xfffU & vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U]));
        } else {
            vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[0U] 
                = (IData)((0x1fffffffffffffffULL & 
                           (((QData)((IData)(vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                             << 0x2dU) | (((QData)((IData)(
                                                           vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                           << 0xdU) 
                                          | ((QData)((IData)(
                                                             vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                             >> 0x13U)))));
            vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[1U] 
                = ((vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U] 
                    << 0x1dU) | (IData)(((0x1fffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                              << 0x2dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                   >> 0x13U)))) 
                                         >> 0x20U)));
            vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[2U] 
                = (0xffffU & (vlSelf->present__DOT__key_sch_impl__DOT__key_register_output[0U] 
                              >> 3U));
        }
    } else if ((1U & (~ (IData)(vlSelf->present__DOT__key_sch_impl__DOT__current_state)))) {
        vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[0U] 
            = vlSelf->key[0U];
        vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[1U] 
            = vlSelf->key[1U];
        vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[2U] 
            = vlSelf->key[2U];
    }
    vlSelf->present__DOT__present_enc_impl__DOT__rst 
        = vlSelf->present__DOT____Vcellinp__present_enc_impl__rst;
    vlSelf->present__DOT__present_dec_impl__DOT__rst 
        = vlSelf->present__DOT____Vcellinp__present_enc_impl__rst;
    vlSelf->present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst 
        = (1U & ((~ (IData)(vlSelf->present__DOT__start_enc)) 
                 | (IData)(vlSelf->present__DOT____Vcellinp__present_enc_impl__rst)));
    vlSelf->present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst 
        = (1U & ((~ (IData)(vlSelf->present__DOT__start_dec)) 
                 | (IData)(vlSelf->present__DOT____Vcellinp__present_enc_impl__rst)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__key_i 
        = vlSelf->present__DOT__present_enc_impl__DOT__roundkey;
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__key_i 
        = vlSelf->present__DOT__present_dec_impl__DOT__roundkey;
    vlSelf->present__DOT__enc_o = vlSelf->present__DOT__present_enc_impl__DOT__result;
    vlSelf->present__DOT__dec_o = vlSelf->present__DOT__present_dec_impl__DOT__result;
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__din 
        = present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din;
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 4U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 8U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0xcU)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x10U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x14U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x18U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x1cU)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x20U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x24U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x28U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x2cU)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x30U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x34U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x38U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x3cU)));
    __Vtableidx2 = (0xfU & (IData)(present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx2];
    __Vtableidx3 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 4U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx3];
    __Vtableidx4 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 8U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx4];
    __Vtableidx5 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0xcU)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx5];
    __Vtableidx6 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0x10U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx6];
    __Vtableidx7 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0x14U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx7];
    __Vtableidx8 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0x18U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx8];
    __Vtableidx9 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0x1cU)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx9];
    __Vtableidx10 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x20U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx10];
    __Vtableidx11 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x24U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx11];
    __Vtableidx12 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x28U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx12];
    __Vtableidx13 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x2cU)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx13];
    __Vtableidx14 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x30U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx14];
    __Vtableidx15 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x34U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx15];
    __Vtableidx16 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x38U)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx16];
    __Vtableidx17 = (0xfU & (IData)((present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x3cU)));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx17];
    vlSelf->present__DOT__key_sch_impl__DOT__key_index 
        = vlSelf->present__DOT__key_index;
    vlSelf->present__DOT__key_sch_impl__DOT__mem_addr 
        = ((IData)(vlSelf->present__DOT__key_sch_impl__DOT__end_signal)
            ? (IData)(vlSelf->present__DOT__key_index)
            : (IData)(vlSelf->present__DOT__key_sch_impl__DOT__counter_output));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__din 
        = present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din;
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffffeULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | (IData)((IData)((1U & (IData)(present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din)))));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffffffefULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 1U))))) 
              << 4U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffeffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 2U))))) 
              << 8U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffffefffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 3U))))) 
              << 0xcU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffeffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 4U))))) 
              << 0x10U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffefffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 5U))))) 
              << 0x14U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffeffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 6U))))) 
              << 0x18U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffefffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 7U))))) 
              << 0x1cU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffeffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 8U))))) 
              << 0x20U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffefffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 9U))))) 
              << 0x24U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffeffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0xaU))))) 
              << 0x28U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffefffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0xbU))))) 
              << 0x2cU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffeffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0xcU))))) 
              << 0x30U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffefffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0xdU))))) 
              << 0x34U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfeffffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0xeU))))) 
              << 0x38U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xefffffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0xfU))))) 
              << 0x3cU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffffdULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x10U))))) 
              << 1U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffffffdfULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x11U))))) 
              << 5U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffdffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x12U))))) 
              << 9U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffffdfffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x13U))))) 
              << 0xdU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffdffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x14U))))) 
              << 0x11U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffdfffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x15U))))) 
              << 0x15U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffdffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x16U))))) 
              << 0x19U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffdfffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x17U))))) 
              << 0x1dU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffdffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x18U))))) 
              << 0x21U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffdfffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x19U))))) 
              << 0x25U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffdffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x1aU))))) 
              << 0x29U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffdfffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x1bU))))) 
              << 0x2dU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffdffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x1cU))))) 
              << 0x31U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffdfffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x1dU))))) 
              << 0x35U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfdffffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x1eU))))) 
              << 0x39U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xdfffffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x1fU))))) 
              << 0x3dU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffffbULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x20U))))) 
              << 2U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffffffbfULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x21U))))) 
              << 6U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffbffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x22U))))) 
              << 0xaU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffffbfffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x23U))))) 
              << 0xeU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffbffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x24U))))) 
              << 0x12U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffbfffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x25U))))) 
              << 0x16U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffbffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x26U))))) 
              << 0x1aU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffbfffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x27U))))) 
              << 0x1eU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffbffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x28U))))) 
              << 0x22U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffbfffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x29U))))) 
              << 0x26U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffbffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x2aU))))) 
              << 0x2aU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffbfffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x2bU))))) 
              << 0x2eU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffbffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x2cU))))) 
              << 0x32U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffbfffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x2dU))))) 
              << 0x36U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfbffffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x2eU))))) 
              << 0x3aU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xbfffffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x2fU))))) 
              << 0x3eU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffff7ULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x30U))))) 
              << 3U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffffff7fULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x31U))))) 
              << 7U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffff7ffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x32U))))) 
              << 0xbU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffff7fffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x33U))))) 
              << 0xfU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffff7ffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x34U))))) 
              << 0x13U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffff7fffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x35U))))) 
              << 0x17U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffff7ffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x36U))))) 
              << 0x1bU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffff7fffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x37U))))) 
              << 0x1fU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffff7ffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x38U))))) 
              << 0x23U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffff7fffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x39U))))) 
              << 0x27U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffff7ffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x3aU))))) 
              << 0x2bU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffff7fffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x3bU))))) 
              << 0x2fU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfff7ffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x3cU))))) 
              << 0x33U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xff7fffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x3dU))))) 
              << 0x37U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0xf7ffffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x3eU))))) 
              << 0x3bU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
        = ((0x7fffffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                             >> 0x3fU))))) 
              << 0x3fU));
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__din[0U] 
        = vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[0U];
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__din[1U] 
        = vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[1U];
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__din[2U] 
        = vlSelf->present__DOT__key_sch_impl__DOT__key_register_input[2U];
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__rst 
        = vlSelf->present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst;
    vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__cl 
        = vlSelf->present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst;
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__rst 
        = vlSelf->present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst;
    vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__cl 
        = vlSelf->present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst;
    vlSelf->present__DOT__block_o_logic = ((IData)(vlSelf->enc_dec)
                                            ? vlSelf->present__DOT__dec_o
                                            : vlSelf->present__DOT__enc_o);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffffffffffff0000ULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | (IData)((IData)((((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout) 
                               << 0xcU) | (((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout) 
                                            << 8U) 
                                           | (((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout) 
                                               << 4U) 
                                              | (IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout)))))));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffffffff0000ffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)((((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout) 
                                << 0xcU) | (((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout)))))) 
              << 0x10U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffff0000ffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)((((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout) 
                                << 0xcU) | (((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout)))))) 
              << 0x20U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffffffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)((((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout) 
                                << 0xcU) | (((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout)))))) 
              << 0x30U));
    vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__addr 
        = vlSelf->present__DOT__key_sch_impl__DOT__mem_addr;
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
        = vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout;
    vlSelf->present__DOT__result__DOT__din = vlSelf->present__DOT__block_o_logic;
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
        = vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout;
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__din 
        = vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o;
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 4U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 8U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0xcU)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x10U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x14U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x18U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x1cU)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x20U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x24U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x28U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x2cU)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x30U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x34U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x38U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                           >> 0x3cU)));
    __Vtableidx18 = (0xfU & (IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx18];
    __Vtableidx19 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 4U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx19];
    __Vtableidx20 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 8U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx20];
    __Vtableidx21 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0xcU)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx21];
    __Vtableidx22 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x10U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx22];
    __Vtableidx23 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x14U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx23];
    __Vtableidx24 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x18U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx24];
    __Vtableidx25 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x1cU)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx25];
    __Vtableidx26 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x20U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx26];
    __Vtableidx27 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x24U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx27];
    __Vtableidx28 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x28U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx28];
    __Vtableidx29 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x2cU)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx29];
    __Vtableidx30 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x30U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx30];
    __Vtableidx31 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x34U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx31];
    __Vtableidx32 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x38U)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx32];
    __Vtableidx33 = (0xfU & (IData)((vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                     >> 0x3cU)));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h6344a0bd_0[__Vtableidx33];
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__din 
        = vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o;
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffff8ULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                              >> 8U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                             >> 4U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o)))))));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffffffc7ULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x14U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x10U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0xcU))))))) 
              << 3U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffe3fULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x20U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x1cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x18U))))))) 
              << 6U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffff1ffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x2cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x28U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x24U))))))) 
              << 9U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffff8fffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x38U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x34U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x30U))))))) 
              << 0xcU));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffc7fffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 5U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x3cU))))))) 
              << 0xfU));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffe3ffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x11U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0xdU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 9U))))))) 
              << 0x12U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffff1fffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x19U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x15U))))))) 
              << 0x15U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffff8ffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x29U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x25U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x21U))))))) 
              << 0x18U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffc7ffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x35U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x31U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x2dU))))))) 
              << 0x1bU));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffe3fffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 2U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x3dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x39U))))))) 
              << 0x1eU));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffff1ffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0xeU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0xaU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 6U))))))) 
              << 0x21U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffff8fffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x1aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x16U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x12U))))))) 
              << 0x24U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffc7fffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x26U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x22U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x1eU))))))) 
              << 0x27U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffe3ffffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x32U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x2eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x2aU))))))) 
              << 0x2aU));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffff1fffffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x3eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x3aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x36U))))))) 
              << 0x2dU));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfff8ffffffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0xbU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 7U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 3U))))))) 
              << 0x30U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffc7ffffffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x17U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x13U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0xfU))))))) 
              << 0x33U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfe3fffffffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x23U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x1bU))))))) 
              << 0x36U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xf1ffffffffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x2fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x2bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x27U))))))) 
              << 0x39U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0x8fffffffffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x3bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x37U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x33U))))))) 
              << 0x3cU));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0x7fffffffffffffffULL & vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3fU))))) 
              << 0x3fU));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffffffffffff0000ULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout) 
           | (IData)((IData)((((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout) 
                               << 0xcU) | (((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout) 
                                            << 8U) 
                                           | (((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout) 
                                               << 4U) 
                                              | (IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout)))))));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffffffff0000ffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)((((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout) 
                                << 0xcU) | (((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout)))))) 
              << 0x10U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffff0000ffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)((((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout) 
                                << 0xcU) | (((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout)))))) 
              << 0x20U));
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffffffffffffULL & vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)((((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout) 
                                << 0xcU) | (((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout)))))) 
              << 0x30U));
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o 
        = vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout;
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__s_box_o 
        = vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout;
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o 
        = vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o;
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_o 
        = vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__s_box_o;
    vlSelf->present__DOT__present_enc_impl__DOT__block_o 
        = vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o;
    vlSelf->present__DOT__present_dec_impl__DOT__block_o 
        = vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_o;
    vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__din 
        = vlSelf->present__DOT__present_enc_impl__DOT__block_o;
    vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__din 
        = vlSelf->present__DOT__present_dec_impl__DOT__block_o;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__6\n"); );
    // Body
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__cl 
        = vlSelf->present__DOT__key_sch_impl__DOT__key_register_cl;
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__cl 
        = vlSelf->present__DOT__key_sch_impl__DOT__key_register_cl;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    Vtop___024root___settle__TOP__6(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->end_key_generation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->key);
    vlSelf->block_i = VL_RAND_RESET_Q(64);
    vlSelf->block_o = VL_RAND_RESET_Q(64);
    vlSelf->enc_dec = VL_RAND_RESET_I(1);
    vlSelf->rq_data = VL_RAND_RESET_I(1);
    vlSelf->end_signal = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__end_key_generation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->present__DOT__key);
    vlSelf->present__DOT__block_i = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__block_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__enc_dec = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__rq_data = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__end_signal = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_index = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__key_index_enc = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__key_index_dec = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__roundkey = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__enc_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__dec_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__block_o_logic = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__end_enc = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__end_dec = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__start_enc = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__start_dec = VL_RAND_RESET_I(1);
    vlSelf->present__DOT____Vcellinp__present_enc_impl__rst = VL_RAND_RESET_I(1);
    vlSelf->present__DOT____Vcellinp__result__w = VL_RAND_RESET_I(1);
    vlSelf->present__DOT____Vcellinp__result__cl = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->present__DOT__key_sch_impl__DOT__key);
    vlSelf->present__DOT__key_sch_impl__DOT__end_signal = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__key_index = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__key_sch_impl__DOT__roundkey = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_cl = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__key_register_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->present__DOT__key_sch_impl__DOT__key_register_input);
    VL_RAND_RESET_W(80, vlSelf->present__DOT__key_sch_impl__DOT__key_register_output);
    vlSelf->present__DOT__key_sch_impl__DOT__counter_output = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__key_sch_impl__DOT__counter_up = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__r_w = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__mem_addr = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__key_sch_impl__DOT__s_box_output = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__key_sch_impl__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->present__DOT__key_sch_impl__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__cl = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__din);
    VL_RAND_RESET_W(80, vlSelf->present__DOT__key_sch_impl__DOT__key_register__DOT__dout);
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__r_w = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__addr = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__din = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__dout = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->present__DOT__key_sch_impl__DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__key_sch_impl__DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__start_signal = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__text = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__roundkey = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__key_index = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__present_enc_impl__DOT__result = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__end_signal = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__counter_up = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__block_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__register_output = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__register_w = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__block_i = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__cl = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__w = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__din = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__block_register__DOT__dout = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_i = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__key_i = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__din = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__din = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__start_signal = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__text = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__roundkey = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__key_index = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__present_dec_impl__DOT__result = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__end_signal = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__counter_down = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__block_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__register_output = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__register_w = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__block_i = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(5);
    vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__cl = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__w = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__din = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__block_register__DOT__dout = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_i = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__key_i = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__s_box_o = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__din = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__din = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->present__DOT__result__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__result__DOT__cl = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__result__DOT__w = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__result__DOT__din = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__result__DOT__dout = VL_RAND_RESET_Q(64);
    vlSelf->present__DOT__reg_end_signal__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__reg_end_signal__DOT__cl = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__reg_end_signal__DOT__w = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__reg_end_signal__DOT__din = VL_RAND_RESET_I(1);
    vlSelf->present__DOT__reg_end_signal__DOT__dout = VL_RAND_RESET_I(1);
}
