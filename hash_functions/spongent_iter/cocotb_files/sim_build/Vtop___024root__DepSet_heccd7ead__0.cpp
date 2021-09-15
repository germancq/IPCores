// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->spongent_iter__DOT__rst = vlSelf->rst;
    vlSelf->spongent_iter__DOT__data_input = vlSelf->data_input;
    vlSelf->spongent_iter__DOT__data_ready = vlSelf->data_ready;
    vlSelf->spongent_iter__DOT__start_hash = vlSelf->start_hash;
    vlSelf->spongent_iter__DOT__clk = vlSelf->clk;
    vlSelf->spongent_iter__DOT__lCounter__DOT__clk 
        = vlSelf->spongent_iter__DOT__clk;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__clk 
        = vlSelf->spongent_iter__DOT__clk;
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__clk 
        = vlSelf->spongent_iter__DOT__clk;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__clk 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__clk;
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__clk;
}

extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_hc65bc2ee_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_ha2fcfec0_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hf7e4e592_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h6e68bb58_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Init
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
    CData/*5:0*/ __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg;
    VlWide<3>/*87:0*/ __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg;
    CData/*5:0*/ __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
    CData/*4:0*/ __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    VlWide<3>/*95:0*/ __Vtemp_hfd25834a__0;
    VlWide<3>/*95:0*/ __Vtemp_he17a1b70__0;
    VlWide<3>/*95:0*/ __Vtemp_he17a1b70__1;
    VlWide<3>/*95:0*/ __Vtemp_h8c6d60e2__0;
    VlWide<3>/*95:0*/ __Vtemp_ha35006e1__0;
    VlWide<3>/*95:0*/ __Vtemp_h69817a03__0;
    VlWide<3>/*95:0*/ __Vtemp_h8c6d60e2__1;
    VlWide<3>/*95:0*/ __Vtemp_ha35006e1__1;
    VlWide<3>/*95:0*/ __Vtemp_hc730081c__0;
    VlWide<3>/*95:0*/ __Vtemp_h0171d0b4__0;
    // Body
    __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg 
        = vlSelf->spongent_iter__DOT__lCounter__DOT__state_reg;
    __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
    __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U];
    __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U];
    __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U];
    if (vlSelf->spongent_iter__DOT__rst_lCounter) {
        __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg = 5U;
    } else if (vlSelf->spongent_iter__DOT__shift_lCounter) {
        __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg 
            = ((0x3eU & ((IData)(vlSelf->spongent_iter__DOT__lCounter__DOT__state_reg) 
                         << 1U)) | (IData)(vlSelf->spongent_iter__DOT__lCounter__DOT__bit_xored));
    }
    if ((0U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        vlSelf->spongent_iter__DOT__begin_squeezing = 0U;
        vlSelf->spongent_iter__DOT__state[0U] = 0U;
        vlSelf->spongent_iter__DOT__state[1U] = 0U;
        vlSelf->spongent_iter__DOT__state[2U] = 0U;
    } else if ((1U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
            if ((3U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                if (vlSelf->spongent_iter__DOT__last_block) {
                    vlSelf->spongent_iter__DOT__begin_squeezing = 1U;
                }
            }
        }
        if ((2U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
            if (vlSelf->spongent_iter__DOT__end_permutation) {
                vlSelf->spongent_iter__DOT__state[0U] 
                    = vlSelf->spongent_iter__DOT__permutation_state[0U];
                vlSelf->spongent_iter__DOT__state[1U] 
                    = vlSelf->spongent_iter__DOT__permutation_state[1U];
                vlSelf->spongent_iter__DOT__state[2U] 
                    = vlSelf->spongent_iter__DOT__permutation_state[2U];
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state))) {
            if (vlSelf->spongent_iter__DOT__end_permutation) {
                VL_SHIFTL_WWI(88,88,32, __Vtemp_hfd25834a__0, vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result, 8U);
                VL_EXTEND_WI(88,8, __Vtemp_he17a1b70__0, (IData)(vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk));
                vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result[0U] 
                    = (__Vtemp_hfd25834a__0[0U] | __Vtemp_he17a1b70__0[0U]);
                vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result[1U] 
                    = (__Vtemp_hfd25834a__0[1U] | __Vtemp_he17a1b70__0[1U]);
                vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result[2U] 
                    = (0xffffffU & (__Vtemp_hfd25834a__0[2U] 
                                    | __Vtemp_he17a1b70__0[2U]));
                vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__state[0U] 
                    = vlSelf->spongent_iter__DOT__permutation_state[0U];
                vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__state[1U] 
                    = vlSelf->spongent_iter__DOT__permutation_state[1U];
                vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__state[2U] 
                    = vlSelf->spongent_iter__DOT__permutation_state[2U];
            }
        } else {
            VL_EXTEND_WI(88,8, __Vtemp_he17a1b70__1, (IData)(vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk));
            vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result[0U] 
                = __Vtemp_he17a1b70__1[0U];
            vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result[1U] 
                = __Vtemp_he17a1b70__1[1U];
            vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result[2U] 
                = __Vtemp_he17a1b70__1[2U];
            vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__state[0U] 
                = vlSelf->spongent_iter__DOT__permutation_state[0U];
            vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__state[1U] 
                = vlSelf->spongent_iter__DOT__permutation_state[1U];
            vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__state[2U] 
                = vlSelf->spongent_iter__DOT__permutation_state[2U];
        }
    }
    if (vlSelf->spongent_iter__DOT__rst_squezzing) {
        __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout = 0U;
    } else if (vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up) {
        __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout)));
    }
    if (vlSelf->spongent_iter__DOT__rst_permutation) {
        __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout = 0U;
        __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
            = vlSelf->spongent_iter__DOT__permutation_initial_state[0U];
        __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
            = vlSelf->spongent_iter__DOT__permutation_initial_state[1U];
        __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
            = vlSelf->spongent_iter__DOT__permutation_initial_state[2U];
    } else {
        if ((1U & (~ (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__end_permutation)))) {
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout)));
        }
        if (((~ (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__end_permutation)) 
             & (0U == (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_o)))) {
            VL_EXTEND_WI(88,6, __Vtemp_h8c6d60e2__0, (IData)(vlSelf->spongent_iter__DOT__lCounter_state));
            VL_EXTEND_WI(88,6, __Vtemp_ha35006e1__0, (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter));
            VL_SHIFTL_WWI(88,88,32, __Vtemp_h69817a03__0, __Vtemp_ha35006e1__0, 0x52U);
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                = ((vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                    ^ __Vtemp_h8c6d60e2__0[0U]) ^ __Vtemp_h69817a03__0[0U]);
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                = ((vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                    ^ __Vtemp_h8c6d60e2__0[1U]) ^ __Vtemp_h69817a03__0[1U]);
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                = (0xffffffU & ((vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                 ^ __Vtemp_h8c6d60e2__0[2U]) 
                                ^ __Vtemp_h69817a03__0[2U]));
        } else if ((1U & (~ (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__end_permutation)))) {
            VL_EXTEND_WI(88,6, __Vtemp_h8c6d60e2__1, (IData)(vlSelf->spongent_iter__DOT__lCounter_state));
            VL_EXTEND_WI(88,6, __Vtemp_ha35006e1__1, (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter));
            VL_SHIFTL_WWI(88,88,32, __Vtemp_hc730081c__0, __Vtemp_ha35006e1__1, 0x52U);
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                = ((vlSelf->spongent_iter__DOT__permutation_impl__DOT__state[0U] 
                    ^ __Vtemp_h8c6d60e2__1[0U]) ^ __Vtemp_hc730081c__0[0U]);
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                = ((vlSelf->spongent_iter__DOT__permutation_impl__DOT__state[1U] 
                    ^ __Vtemp_h8c6d60e2__1[1U]) ^ __Vtemp_hc730081c__0[1U]);
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                = (0xffffffU & ((vlSelf->spongent_iter__DOT__permutation_impl__DOT__state[2U] 
                                 ^ __Vtemp_h8c6d60e2__1[2U]) 
                                ^ __Vtemp_hc730081c__0[2U]));
        }
    }
    vlSelf->spongent_iter__DOT__lCounter__DOT__state_reg 
        = __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg;
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
        = __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
        = __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
        = __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U];
    vlSelf->spongent_iter__DOT__lCounter__DOT__bit_xored 
        = (1U & VL_REDXOR_32((0x30U & (IData)(vlSelf->spongent_iter__DOT__lCounter__DOT__state_reg))));
    vlSelf->spongent_iter__DOT__lCounter__DOT__state 
        = vlSelf->spongent_iter__DOT__lCounter__DOT__state_reg;
    if ((0U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        vlSelf->spongent_iter__DOT__last_block = 0U;
    } else if ((1U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
            if ((3U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                if (vlSelf->start_hash) {
                    vlSelf->spongent_iter__DOT__last_block = 1U;
                }
            }
        }
    }
    VL_EXTEND_WI(88,8, __Vtemp_h0171d0b4__0, (IData)(vlSelf->spongent_iter__DOT__last_padded_data));
    vlSelf->spongent_iter__DOT__last_initial_state_from_absorb[0U] 
        = (__Vtemp_h0171d0b4__0[0U] ^ vlSelf->spongent_iter__DOT__state[0U]);
    vlSelf->spongent_iter__DOT__last_initial_state_from_absorb[1U] 
        = (__Vtemp_h0171d0b4__0[1U] ^ vlSelf->spongent_iter__DOT__state[1U]);
    vlSelf->spongent_iter__DOT__last_initial_state_from_absorb[2U] 
        = (__Vtemp_h0171d0b4__0[2U] ^ vlSelf->spongent_iter__DOT__state[2U]);
    vlSelf->spongent_iter__DOT__digest[0U] = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result[0U];
    vlSelf->spongent_iter__DOT__digest[1U] = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result[1U];
    vlSelf->spongent_iter__DOT__digest[2U] = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result[2U];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U] 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__state[0U];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U] 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__state[1U];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U] 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__state[2U];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state 
        = ((IData)(vlSelf->spongent_iter__DOT__rst_squezzing)
            ? 0U : (IData)(vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__next_state));
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_o 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                       (((IData)(3U) 
                                         + (IData)(0U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(0U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 4U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                       (((IData)(3U) 
                                         + (IData)(4U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(4U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 4U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 8U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                       (((IData)(3U) 
                                         + (IData)(8U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(8U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 8U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                         (((IData)(3U) 
                                           + (IData)(0xcU)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(0xcU)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0xcU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x10U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x10U)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x10U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x10U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x14U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x14U)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x14U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x14U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x18U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x18U)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x18U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x18U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x1cU) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x1cU)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x1cU)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x1cU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                       (((IData)(3U) 
                                         + (IData)(0x20U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(0U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 4U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                       (((IData)(3U) 
                                         + (IData)(0x24U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(4U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 4U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 8U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                       (((IData)(3U) 
                                         + (IData)(0x28U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(8U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 8U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                         (((IData)(3U) 
                                           + (IData)(0x2cU)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(0xcU)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0xcU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x10U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x30U)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x10U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x10U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x14U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x34U)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x14U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x14U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x18U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x38U)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x18U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x18U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x1cU) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x3cU)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x1cU)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x1cU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                       (((IData)(3U) 
                                         + (IData)(0x40U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(0U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 4U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                       (((IData)(3U) 
                                         + (IData)(0x44U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(4U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 4U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 8U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                       (((IData)(3U) 
                                         + (IData)(0x48U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(8U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 8U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                         (((IData)(3U) 
                                           + (IData)(0x4cU)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(0xcU)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0xcU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x10U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x50U)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x10U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0x10U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x14U) ? 0U : (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[
                                          (((IData)(3U) 
                                            + (IData)(0x54U)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x14U)))) 
                   | (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0x14U)));
    __Vtableidx21 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                             >> 0x10U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx21];
    __Vtableidx22 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                             >> 0x14U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx22];
    __Vtableidx1 = (0xfU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U]);
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx1];
    __Vtableidx2 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                            >> 4U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx2];
    __Vtableidx3 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                            >> 8U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx3];
    __Vtableidx4 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                            >> 0xcU));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx4];
    __Vtableidx5 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                            >> 0x10U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx5];
    __Vtableidx6 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                            >> 0x14U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx6];
    __Vtableidx7 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                            >> 0x18U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx7];
    __Vtableidx8 = (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                    >> 0x1cU);
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx8];
    __Vtableidx9 = (0xfU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U]);
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx9];
    __Vtableidx10 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                             >> 4U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx10];
    __Vtableidx11 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                             >> 8U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx11];
    __Vtableidx12 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                             >> 0xcU));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx12];
    __Vtableidx13 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                             >> 0x10U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx13];
    __Vtableidx14 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                             >> 0x14U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx14];
    __Vtableidx15 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                             >> 0x18U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx15];
    __Vtableidx16 = (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                     >> 0x1cU);
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx16];
    __Vtableidx17 = (0xfU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U]);
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx17];
    __Vtableidx18 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                             >> 4U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx18];
    __Vtableidx19 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                             >> 8U));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx19];
    __Vtableidx20 = (0xfU & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                             >> 0xcU));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout 
        = Vtop__ConstPool__TABLE_hc65bc2ee_0[__Vtableidx20];
    vlSelf->spongent_iter__DOT__lCounter_state = vlSelf->spongent_iter__DOT__lCounter__DOT__state;
    vlSelf->digest[0U] = vlSelf->spongent_iter__DOT__digest[0U];
    vlSelf->digest[1U] = vlSelf->spongent_iter__DOT__digest[1U];
    vlSelf->digest[2U] = vlSelf->spongent_iter__DOT__digest[2U];
    vlSelf->spongent_iter__DOT__permutation_initial_state_from_squezzing[0U] 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U];
    vlSelf->spongent_iter__DOT__permutation_initial_state_from_squezzing[1U] 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U];
    vlSelf->spongent_iter__DOT__permutation_initial_state_from_squezzing[2U] 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing 
        = ((0xaU <= (IData)(vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__end_permutation 
        = ((0x2dU == (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_o))
            ? 1U : 0U);
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xff0000U & (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout) 
                            << 0x14U) | ((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout) 
                                         << 0x10U))));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xffff0000U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout) 
               << 0xcU) | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout) 
                            << 8U) | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout) 
                                       << 4U) | (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout)))));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xffff0000U & (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout) 
                              << 0x1cU) | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout) 
                                            << 0x18U) 
                                           | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout) 
                                                 << 0x10U))))));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xffff0000U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout) 
               << 0xcU) | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout) 
                            << 8U) | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout) 
                                       << 4U) | (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout)))));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xffff0000U & (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout) 
                              << 0x1cU) | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout) 
                                            << 0x18U) 
                                           | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout) 
                                                 << 0x10U))))));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xff0000U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xffffffU & (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout) 
                            << 0xcU) | (((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout) 
                                         << 8U) | (
                                                   ((IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout))))));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__lCounter_state 
        = vlSelf->spongent_iter__DOT__lCounter_state;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x38U & (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | ((4U & ((IData)(vlSelf->spongent_iter__DOT__lCounter_state) 
                     >> 1U)) | ((2U & ((IData)(vlSelf->spongent_iter__DOT__lCounter_state) 
                                       >> 3U)) | (1U 
                                                  & ((IData)(vlSelf->spongent_iter__DOT__lCounter_state) 
                                                     >> 5U)))));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((7U & (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | ((0x20U & ((IData)(vlSelf->spongent_iter__DOT__lCounter_state) 
                        << 5U)) | ((0x10U & ((IData)(vlSelf->spongent_iter__DOT__lCounter_state) 
                                             << 3U)) 
                                   | (8U & ((IData)(vlSelf->spongent_iter__DOT__lCounter_state) 
                                            << 1U)))));
    vlSelf->spongent_iter__DOT__current_state = ((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : (IData)(vlSelf->spongent_iter__DOT__next_state));
    vlSelf->spongent_iter__DOT__end_squeezing = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__up 
        = (1U & (~ (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__end_permutation)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__shift_lCounter 
        = (1U & (~ (IData)(vlSelf->spongent_iter__DOT__permutation_impl__DOT__end_permutation)));
    vlSelf->spongent_iter__DOT__end_permutation = vlSelf->spongent_iter__DOT__permutation_impl__DOT__end_permutation;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[0U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[1U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[2U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffffeU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (1U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffbfffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x400000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                           << 0x15U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffefffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x1000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 0xaU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffffbU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (4U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 1U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffffdU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (2U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 3U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xff7fffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x800000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                           << 0x12U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffdfffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x2000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 7U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffff7U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (8U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 4U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffffbU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (4U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 6U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfeffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x1000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 0xfU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffbfffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x4000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 4U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffffefU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x10U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 7U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffff7U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (8U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 9U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfdffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x2000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 0xcU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffff7fffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x8000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 1U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffffdfU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x20U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xaU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffffefU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x10U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xcU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfbffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x4000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 9U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffeffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x10000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 2U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffffbfU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x40U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xdU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffffdfU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x20U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xfU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xf7ffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x8000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 6U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffdffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x20000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 5U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffff7fU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x80U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0x10U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffffbfU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x40U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0x12U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xefffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x10000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                             << 3U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffbffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x40000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 8U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffeffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x100U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                        >> 0x13U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffff7fU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x80U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0x15U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xdfffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x20000000U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfff7ffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x80000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 0xbU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffdffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x200U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                        >> 0x16U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffeffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x100U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 8U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xbfffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x40000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                             << 0x1dU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffefffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x100000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 0x12U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffbffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x400U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 7U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffdffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x200U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 5U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0x7fffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x80000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                             << 0x1aU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffdfffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x200000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 0xfU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfff7ffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x800U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 4U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffbffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x400U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 2U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffffeU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (1U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 9U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffbfffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x400000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 0xcU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffefffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x1000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         << 1U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffff7ffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x800U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        >> 1U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffffdU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (2U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 0xcU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xff7fffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x800000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 9U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffdfffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x2000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 2U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffefffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x1000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 4U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffffbU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (4U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 0xfU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfeffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x1000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                            << 6U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffbfffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x4000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 5U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffdfffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x2000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 7U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffff7U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (8U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 0x12U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfdffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x2000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                            << 3U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xff7fffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x8000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 8U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffbfffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x4000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 0xaU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffffefU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x10U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                       >> 0x15U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfbffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x4000000U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfeffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x10000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                          >> 0xbU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffff7fffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x8000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 0xdU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffffdfU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x20U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                       >> 0x18U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xf7ffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x8000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                            >> 3U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfdffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x20000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                          >> 0xeU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffeffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x10000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0x10U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffffbfU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x40U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                       << 5U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xefffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x10000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x1aU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfbffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x40000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xfU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffdffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x20000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xdU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffff7fU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x80U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                       << 2U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xdfffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x20000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x17U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xf7ffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x80000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xcU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffbffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x40000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xaU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffeffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x100U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 1U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xbfffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x40000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x14U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xefffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x100000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 9U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfff7ffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x80000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 7U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffdffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x200U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 4U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0x7fffffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x80000000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x11U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xdfffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x200000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 6U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffefffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x100000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 4U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffbffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x400U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 7U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffffeU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (1U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                    >> 0x12U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xbfffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x400000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 3U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffdfffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x200000U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 1U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffff7ffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x800U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 0xaU)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffffdU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (2U & (vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                    >> 0x15U)));
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0x7fffffU & vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x800000U & vlSelf->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]));
    vlSelf->spongent_iter__DOT__shift_lCounter = vlSelf->spongent_iter__DOT__permutation_impl__DOT__shift_lCounter;
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__end_permutation 
        = vlSelf->spongent_iter__DOT__end_permutation;
    __Vtableidx23 = (((IData)(vlSelf->spongent_iter__DOT__end_permutation) 
                      << 3U) | (((IData)(vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing) 
                                 << 2U) | (IData)(vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state)));
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__next_state 
        = Vtop__ConstPool__TABLE_ha2fcfec0_0[__Vtableidx23];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation 
        = Vtop__ConstPool__TABLE_hf7e4e592_0[__Vtableidx23];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up 
        = Vtop__ConstPool__TABLE_h6e68bb58_0[__Vtableidx23];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state[0U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state[1U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__state[2U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U];
    vlSelf->spongent_iter__DOT__busy = 1U;
    if ((0U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        vlSelf->spongent_iter__DOT__busy = 0U;
    } else if ((1U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
            if ((3U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                vlSelf->spongent_iter__DOT__busy = 0U;
            } else if ((4U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                if ((5U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                    vlSelf->spongent_iter__DOT__busy = 0U;
                }
            }
        }
    }
    vlSelf->spongent_iter__DOT__end_hash = 0U;
    if ((0U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                if ((3U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                    if ((4U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                        if ((5U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                            vlSelf->spongent_iter__DOT__end_hash = 1U;
                        }
                    }
                    vlSelf->spongent_iter__DOT__rst_squezzing = 1U;
                    if ((4U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                        vlSelf->spongent_iter__DOT__rst_squezzing = 0U;
                    } else if ((5U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                        vlSelf->spongent_iter__DOT__rst_squezzing = 0U;
                    }
                } else {
                    vlSelf->spongent_iter__DOT__rst_squezzing = 1U;
                }
            } else {
                vlSelf->spongent_iter__DOT__rst_squezzing = 1U;
            }
        } else {
            vlSelf->spongent_iter__DOT__rst_squezzing = 1U;
        }
    } else {
        vlSelf->spongent_iter__DOT__rst_squezzing = 1U;
    }
    vlSelf->spongent_iter__DOT__lCounter__DOT__shift 
        = vlSelf->spongent_iter__DOT__shift_lCounter;
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up;
    vlSelf->spongent_iter__DOT__rst_permutation_from_squezzing 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation;
    vlSelf->spongent_iter__DOT__permutation_state[0U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__state[0U];
    vlSelf->spongent_iter__DOT__permutation_state[1U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__state[1U];
    vlSelf->spongent_iter__DOT__permutation_state[2U] 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__state[2U];
    vlSelf->busy = vlSelf->spongent_iter__DOT__busy;
    vlSelf->end_hash = vlSelf->spongent_iter__DOT__end_hash;
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__rst 
        = vlSelf->spongent_iter__DOT__rst_squezzing;
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[0U] 
        = vlSelf->spongent_iter__DOT__permutation_state[0U];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[1U] 
        = vlSelf->spongent_iter__DOT__permutation_state[1U];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[2U] 
        = vlSelf->spongent_iter__DOT__permutation_state[2U];
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk 
        = (0xffU & vlSelf->spongent_iter__DOT__permutation_state[0U]);
    vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlSelf->spongent_iter__DOT__squeezing_phase_impl__DOT__rst;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h261f6ecd__0;
    // Body
    VL_EXTEND_WI(88,8, __Vtemp_h261f6ecd__0, (IData)(vlSelf->data_input));
    vlSelf->spongent_iter__DOT__standart_initial_state_from_absorb[0U] 
        = (__Vtemp_h261f6ecd__0[0U] ^ vlSelf->spongent_iter__DOT__state[0U]);
    vlSelf->spongent_iter__DOT__standart_initial_state_from_absorb[1U] 
        = (__Vtemp_h261f6ecd__0[1U] ^ vlSelf->spongent_iter__DOT__state[1U]);
    vlSelf->spongent_iter__DOT__standart_initial_state_from_absorb[2U] 
        = (__Vtemp_h261f6ecd__0[2U] ^ vlSelf->spongent_iter__DOT__state[2U]);
    vlSelf->spongent_iter__DOT__next_state = vlSelf->spongent_iter__DOT__current_state;
    if ((0U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        if (vlSelf->data_ready) {
            vlSelf->spongent_iter__DOT__next_state = 1U;
        }
        vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
        vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
    } else if ((1U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        if ((1U & ((~ (IData)(vlSelf->data_ready)) 
                   | (IData)(vlSelf->start_hash)))) {
            vlSelf->spongent_iter__DOT__next_state = 2U;
            vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
            vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
        } else {
            vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
        }
    } else if ((2U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        if (vlSelf->spongent_iter__DOT__end_permutation) {
            vlSelf->spongent_iter__DOT__next_state = 3U;
        }
        vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
        vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 0U;
    } else if ((3U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
        if (vlSelf->spongent_iter__DOT__last_block) {
            vlSelf->spongent_iter__DOT__next_state = 6U;
        } else if (((IData)(vlSelf->data_ready) | (IData)(vlSelf->start_hash))) {
            vlSelf->spongent_iter__DOT__next_state = 1U;
        }
        vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
        vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 0U;
    } else {
        if ((4U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
            if (vlSelf->spongent_iter__DOT__end_squeezing) {
                vlSelf->spongent_iter__DOT__next_state = 5U;
            }
        } else if ((5U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
            if ((6U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                vlSelf->spongent_iter__DOT__next_state = 4U;
            }
        }
        vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
        if ((4U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
            if ((5U != (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                if ((6U == (IData)(vlSelf->spongent_iter__DOT__current_state))) {
                    vlSelf->spongent_iter__DOT__rst_permutation_from_absorb = 0U;
                }
            }
        }
    }
    if (vlSelf->spongent_iter__DOT__last_block) {
        vlSelf->spongent_iter__DOT__permutation_initial_state_from_absorb[0U] 
            = vlSelf->spongent_iter__DOT__last_initial_state_from_absorb[0U];
        vlSelf->spongent_iter__DOT__permutation_initial_state_from_absorb[1U] 
            = vlSelf->spongent_iter__DOT__last_initial_state_from_absorb[1U];
        vlSelf->spongent_iter__DOT__permutation_initial_state_from_absorb[2U] 
            = vlSelf->spongent_iter__DOT__last_initial_state_from_absorb[2U];
    } else {
        vlSelf->spongent_iter__DOT__permutation_initial_state_from_absorb[0U] 
            = vlSelf->spongent_iter__DOT__standart_initial_state_from_absorb[0U];
        vlSelf->spongent_iter__DOT__permutation_initial_state_from_absorb[1U] 
            = vlSelf->spongent_iter__DOT__standart_initial_state_from_absorb[1U];
        vlSelf->spongent_iter__DOT__permutation_initial_state_from_absorb[2U] 
            = vlSelf->spongent_iter__DOT__standart_initial_state_from_absorb[2U];
    }
    if (vlSelf->spongent_iter__DOT__begin_squeezing) {
        vlSelf->spongent_iter__DOT__rst_permutation 
            = vlSelf->spongent_iter__DOT__rst_permutation_from_squezzing;
        vlSelf->spongent_iter__DOT__permutation_initial_state[0U] 
            = vlSelf->spongent_iter__DOT__permutation_initial_state_from_squezzing[0U];
        vlSelf->spongent_iter__DOT__permutation_initial_state[1U] 
            = vlSelf->spongent_iter__DOT__permutation_initial_state_from_squezzing[1U];
        vlSelf->spongent_iter__DOT__permutation_initial_state[2U] 
            = vlSelf->spongent_iter__DOT__permutation_initial_state_from_squezzing[2U];
    } else {
        vlSelf->spongent_iter__DOT__rst_permutation 
            = vlSelf->spongent_iter__DOT__rst_permutation_from_absorb;
        vlSelf->spongent_iter__DOT__permutation_initial_state[0U] 
            = vlSelf->spongent_iter__DOT__permutation_initial_state_from_absorb[0U];
        vlSelf->spongent_iter__DOT__permutation_initial_state[1U] 
            = vlSelf->spongent_iter__DOT__permutation_initial_state_from_absorb[1U];
        vlSelf->spongent_iter__DOT__permutation_initial_state[2U] 
            = vlSelf->spongent_iter__DOT__permutation_initial_state_from_absorb[2U];
    }
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__rst 
        = vlSelf->spongent_iter__DOT__rst_permutation;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__rst_lCounter 
        = vlSelf->spongent_iter__DOT__rst_permutation;
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__initial_state[0U] 
        = vlSelf->spongent_iter__DOT__permutation_initial_state[0U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__initial_state[1U] 
        = vlSelf->spongent_iter__DOT__permutation_initial_state[1U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__initial_state[2U] 
        = vlSelf->spongent_iter__DOT__permutation_initial_state[2U];
    vlSelf->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__rst 
        = vlSelf->spongent_iter__DOT__permutation_impl__DOT__rst;
    vlSelf->spongent_iter__DOT__rst_lCounter = vlSelf->spongent_iter__DOT__permutation_impl__DOT__rst_lCounter;
    vlSelf->spongent_iter__DOT__lCounter__DOT__rst 
        = vlSelf->spongent_iter__DOT__rst_lCounter;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->data_ready & 0xfeU))) {
        Verilated::overWidthError("data_ready");}
    if (VL_UNLIKELY((vlSelf->start_hash & 0xfeU))) {
        Verilated::overWidthError("start_hash");}
}
#endif  // VL_DEBUG
