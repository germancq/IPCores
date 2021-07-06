// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VerilatedContext* Vtop::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../hdl_code/present.sv", 9, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
            } else {
                __Vchange = _change_request(vlSymsp);
            }
        } while (VL_UNLIKELY(__Vchange));
    }
    
    void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
        vlSymsp->__Vm_didInit = true;
        _eval_initial(vlSymsp);
        // Evaluate till stable
        int __VclockLoop = 0;
        QData __Vchange = 1;
        do {
            _eval_settle(vlSymsp);
            _eval(vlSymsp);
            if (VL_UNLIKELY(++__VclockLoop > 100)) {
                // About to fail, so enable debug to see what's not settling.
                // Note you must run make with OPT=-DVL_DEBUG for debug prints.
                int __Vsaved_debug = Verilated::debug();
                Verilated::debug(1);
                __Vchange = _change_request(vlSymsp);
                Verilated::debug(__Vsaved_debug);
                VL_FATAL_MT("../hdl_code/present.sv", 9, "",
                    "Verilated model didn't DC converge\n"
                    "- See https://verilator.org/warn/DIDNOTCONVERGE");
                } else {
                    __Vchange = _change_request(vlSymsp);
                }
            } while (VL_UNLIKELY(__Vchange));
        }
        
        VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
            Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->present__DOT__enc_dec = vlTOPp->enc_dec;
            vlTOPp->present__DOT__rq_data = vlTOPp->rq_data;
            vlTOPp->present__DOT__key[0U] = vlTOPp->key[0U];
            vlTOPp->present__DOT__key[1U] = vlTOPp->key[1U];
            vlTOPp->present__DOT__key[2U] = vlTOPp->key[2U];
            vlTOPp->present__DOT__block_i = vlTOPp->block_i;
            vlTOPp->present__DOT__rst = vlTOPp->rst;
            vlTOPp->present__DOT__clk = vlTOPp->clk;
            vlTOPp->present__DOT__key_sch_impl__DOT__key[0U] 
                = vlTOPp->present__DOT__key[0U];
            vlTOPp->present__DOT__key_sch_impl__DOT__key[1U] 
                = vlTOPp->present__DOT__key[1U];
            vlTOPp->present__DOT__key_sch_impl__DOT__key[2U] 
                = vlTOPp->present__DOT__key[2U];
            vlTOPp->present__DOT__present_enc_impl__DOT__text 
                = vlTOPp->present__DOT__block_i;
            vlTOPp->present__DOT__present_dec_impl__DOT__text 
                = vlTOPp->present__DOT__block_i;
            vlTOPp->present__DOT__key_sch_impl__DOT__rst 
                = vlTOPp->present__DOT__rst;
            vlTOPp->present__DOT__result__DOT__clk 
                = vlTOPp->present__DOT__clk;
            vlTOPp->present__DOT__reg_end_signal__DOT__clk 
                = vlTOPp->present__DOT__clk;
            vlTOPp->present__DOT__present_enc_impl__DOT__clk 
                = vlTOPp->present__DOT__clk;
            vlTOPp->present__DOT__present_dec_impl__DOT__clk 
                = vlTOPp->present__DOT__clk;
            vlTOPp->present__DOT__key_sch_impl__DOT__clk 
                = vlTOPp->present__DOT__clk;
            vlTOPp->present__DOT__key_sch_impl__DOT__counter_impl__DOT__rst 
                = vlTOPp->present__DOT__key_sch_impl__DOT__rst;
            vlTOPp->present__DOT__present_enc_impl__DOT__counter_impl__DOT__clk 
                = vlTOPp->present__DOT__present_enc_impl__DOT__clk;
            vlTOPp->present__DOT__present_enc_impl__DOT__block_register__DOT__clk 
                = vlTOPp->present__DOT__present_enc_impl__DOT__clk;
            vlTOPp->present__DOT__present_dec_impl__DOT__counter_impl__DOT__clk 
                = vlTOPp->present__DOT__present_dec_impl__DOT__clk;
            vlTOPp->present__DOT__present_dec_impl__DOT__block_register__DOT__clk 
                = vlTOPp->present__DOT__present_dec_impl__DOT__clk;
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__clk 
                = vlTOPp->present__DOT__key_sch_impl__DOT__clk;
            vlTOPp->present__DOT__key_sch_impl__DOT__counter_impl__DOT__clk 
                = vlTOPp->present__DOT__key_sch_impl__DOT__clk;
            vlTOPp->present__DOT__key_sch_impl__DOT__memory_impl__DOT__clk 
                = vlTOPp->present__DOT__key_sch_impl__DOT__clk;
        }
        
        VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
            Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Variables
            CData/*4:0*/ __Vdly__present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
            CData/*4:0*/ __Vdlyvdim0__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
            CData/*0:0*/ __Vdlyvset__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
            CData/*4:0*/ __Vdly__present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
            CData/*4:0*/ __Vdly__present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout;
            QData/*63:0*/ __Vdlyvval__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
            // Body
            __Vdlyvset__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 = 0U;
            __Vdly__present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout 
                = vlTOPp->present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
            __Vdly__present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout 
                = vlTOPp->present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
            __Vdly__present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout 
                = vlTOPp->present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout;
            if (vlTOPp->present__DOT____Vcellinp__result__cl) {
                vlTOPp->present__DOT__reg_end_signal__DOT__dout = 0U;
            } else if (vlTOPp->present__DOT____Vcellinp__result__w) {
                vlTOPp->present__DOT__reg_end_signal__DOT__dout = 1U;
            }
            if (vlTOPp->present__DOT____Vcellinp__result__cl) {
                vlTOPp->present__DOT__result__DOT__dout = 0ULL;
            } else if (vlTOPp->present__DOT____Vcellinp__result__w) {
                vlTOPp->present__DOT__result__DOT__dout 
                    = vlTOPp->present__DOT__block_o_logic;
            }
            if (vlTOPp->present__DOT__key_sch_impl__DOT__r_w) {
                __Vdlyvval__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 
                    = (((QData)((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                        << 0x30U) | (((QData)((IData)(
                                                      vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                      << 0x10U) | ((QData)((IData)(
                                                                   vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                   >> 0x10U)));
                __Vdlyvset__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 = 1U;
                __Vdlyvdim0__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 
                    = vlTOPp->present__DOT__key_sch_impl__DOT__mem_addr;
            }
            if (vlTOPp->rst) {
                __Vdly__present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout = 0U;
            } else if (vlTOPp->present__DOT__key_sch_impl__DOT__counter_up) {
                __Vdly__present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout 
                    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout)));
            }
            if (vlTOPp->present__DOT__key_sch_impl__DOT__key_register_cl) {
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U] = 0U;
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U] = 0U;
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U] = 0U;
            } else if (vlTOPp->present__DOT__key_sch_impl__DOT__key_register_w) {
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U] 
                    = vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[0U];
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U] 
                    = vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[1U];
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U] 
                    = vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[2U];
            }
            vlTOPp->present__DOT__key_sch_impl__DOT__current_state 
                = ((IData)(vlTOPp->rst) ? 0U : (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__next_state));
            if (vlTOPp->present__DOT____Vcellinp__present_enc_impl__rst) {
                vlTOPp->present__DOT__present_enc_impl__DOT__end_signal = 0U;
            } else if ((0x1fU == (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__key_index))) {
                vlTOPp->present__DOT__present_enc_impl__DOT__end_signal = 1U;
            } else if (vlTOPp->present__DOT__start_enc) {
                vlTOPp->present__DOT__present_enc_impl__DOT__end_signal = 0U;
            }
            if (vlTOPp->present__DOT____Vcellinp__present_enc_impl__rst) {
                vlTOPp->present__DOT__present_dec_impl__DOT__end_signal = 0U;
            } else if ((0U == (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__key_index))) {
                vlTOPp->present__DOT__present_dec_impl__DOT__end_signal = 1U;
            } else if (vlTOPp->present__DOT__start_dec) {
                vlTOPp->present__DOT__present_dec_impl__DOT__end_signal = 0U;
            }
            if (vlTOPp->present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst) {
                vlTOPp->present__DOT__present_enc_impl__DOT__block_register__DOT__dout = 0ULL;
            } else if (vlTOPp->present__DOT__present_enc_impl__DOT__register_w) {
                vlTOPp->present__DOT__present_enc_impl__DOT__block_register__DOT__dout 
                    = vlTOPp->present__DOT__present_enc_impl__DOT__block_o;
            }
            if (vlTOPp->present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst) {
                vlTOPp->present__DOT__present_dec_impl__DOT__block_register__DOT__dout = 0ULL;
            } else if (vlTOPp->present__DOT__present_dec_impl__DOT__register_w) {
                vlTOPp->present__DOT__present_dec_impl__DOT__block_register__DOT__dout 
                    = vlTOPp->present__DOT__present_dec_impl__DOT__block_o;
            }
            if (vlTOPp->present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst) {
                __Vdly__present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout = 0U;
            } else if (vlTOPp->present__DOT__present_enc_impl__DOT__counter_up) {
                __Vdly__present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout 
                    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout)));
            }
            if (vlTOPp->present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst) {
                __Vdly__present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout = 0x1fU;
            } else if (vlTOPp->present__DOT__present_dec_impl__DOT__counter_down) {
                __Vdly__present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout 
                    = (0x1fU & ((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout) 
                                - (IData)(1U)));
            }
            if ((1U & (~ (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__r_w)))) {
                vlTOPp->present__DOT__key_sch_impl__DOT__memory_impl__DOT__dout 
                    = vlTOPp->present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_
                    [vlTOPp->present__DOT__key_sch_impl__DOT__mem_addr];
            }
            vlTOPp->present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout 
                = __Vdly__present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
            vlTOPp->present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout 
                = __Vdly__present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
            vlTOPp->present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout 
                = __Vdly__present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout;
            if (__Vdlyvset__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0) {
                vlTOPp->present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_
                            [__Vdlyvdim0__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0] 
                    = __Vdlyvval__present__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
            }
            vlTOPp->present__DOT__end_signal = vlTOPp->present__DOT__reg_end_signal__DOT__dout;
            vlTOPp->present__DOT__block_o = vlTOPp->present__DOT__result__DOT__dout;
            vlTOPp->present__DOT__key_sch_impl__DOT__counter_output 
                = vlTOPp->present__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U] 
                = vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U];
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U] 
                = vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U];
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U] 
                = vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U];
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_w = 0U;
            if ((4U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state)))) {
                        vlTOPp->present__DOT__key_sch_impl__DOT__key_register_w = 1U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register_w = 1U;
            } else if ((1U & (~ (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register_w = 1U;
            }
            vlTOPp->present__DOT__key_sch_impl__DOT__counter_up = 0U;
            if ((1U & (~ ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state)))) {
                        vlTOPp->present__DOT__key_sch_impl__DOT__counter_up = 1U;
                    }
                }
            }
            vlTOPp->present__DOT__key_sch_impl__DOT__r_w = 0U;
            if ((1U & (~ ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                        vlTOPp->present__DOT__key_sch_impl__DOT__r_w = 1U;
                    }
                }
            }
            vlTOPp->present__DOT__key_sch_impl__DOT__end_signal = 0U;
            if ((4U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                        vlTOPp->present__DOT__key_sch_impl__DOT__end_signal = 1U;
                    }
                }
            }
            vlTOPp->present__DOT__end_enc = vlTOPp->present__DOT__present_enc_impl__DOT__end_signal;
            vlTOPp->present__DOT__end_dec = vlTOPp->present__DOT__present_dec_impl__DOT__end_signal;
            vlTOPp->present__DOT__present_enc_impl__DOT__register_output 
                = vlTOPp->present__DOT__present_enc_impl__DOT__block_register__DOT__dout;
            vlTOPp->present__DOT__present_dec_impl__DOT__register_output 
                = vlTOPp->present__DOT__present_dec_impl__DOT__block_register__DOT__dout;
            if ((1U & (~ (IData)(vlTOPp->present__DOT____Vcellinp__present_enc_impl__rst)))) {
                if ((0x1fU == (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__key_index))) {
                    vlTOPp->present__DOT__present_enc_impl__DOT__counter_up = 0U;
                } else if (vlTOPp->present__DOT__start_enc) {
                    vlTOPp->present__DOT__present_enc_impl__DOT__counter_up = 1U;
                }
            }
            if ((1U & (~ (IData)(vlTOPp->present__DOT____Vcellinp__present_enc_impl__rst)))) {
                if ((0U == (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__key_index))) {
                    vlTOPp->present__DOT__present_dec_impl__DOT__counter_down = 0U;
                } else if (vlTOPp->present__DOT__start_dec) {
                    vlTOPp->present__DOT__present_dec_impl__DOT__counter_down = 1U;
                }
            }
            vlTOPp->present__DOT__key_sch_impl__DOT__roundkey 
                = vlTOPp->present__DOT__key_sch_impl__DOT__memory_impl__DOT__dout;
            vlTOPp->end_signal = vlTOPp->present__DOT__end_signal;
            vlTOPp->block_o = vlTOPp->present__DOT__block_o;
            vlTOPp->present__DOT__key_sch_impl__DOT__next_state 
                = vlTOPp->present__DOT__key_sch_impl__DOT__current_state;
            if ((4U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state)))) {
                        vlTOPp->present__DOT__key_sch_impl__DOT__next_state = 1U;
                    }
                }
            } else {
                vlTOPp->present__DOT__key_sch_impl__DOT__next_state 
                    = ((2U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))
                        ? ((1U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))
                            ? 4U : 3U) : ((1U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))
                                           ? ((0x1fU 
                                               == (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__counter_output))
                                               ? 5U
                                               : 2U)
                                           : 1U));
            }
            vlTOPp->present__DOT__key_sch_impl__DOT__memory_impl__DOT__din 
                = (((0U == 0x10U) ? 0ULL : ((QData)((IData)(
                                                            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                            << ((IData)(0x40U) 
                                                - (IData)(0x10U)))) 
                   | (((QData)((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                       << ((0U == 0x10U) ? 0x20U : 
                           ((IData)(0x20U) - (IData)(0x10U)))) 
                      | ((QData)((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                         >> 0x10U)));
            vlTOPp->present__DOT__key_sch_impl__DOT__sbox__DOT__din 
                = (0xfU & (((0U == 0xcU) ? 0U : (vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[3U] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - (IData)(0xcU)))) 
                           | (vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U] 
                              >> 0xcU)));
            vlTOPp->__Vtableidx1 = (0xfU & (vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U] 
                                            >> 0xcU));
            vlTOPp->present__DOT__key_sch_impl__DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable1_present__DOT__key_sch_impl__DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx1];
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__w 
                = vlTOPp->present__DOT__key_sch_impl__DOT__key_register_w;
            vlTOPp->present__DOT__key_sch_impl__DOT__counter_impl__DOT__up 
                = vlTOPp->present__DOT__key_sch_impl__DOT__counter_up;
            vlTOPp->present__DOT__key_sch_impl__DOT__memory_impl__DOT__r_w 
                = vlTOPp->present__DOT__key_sch_impl__DOT__r_w;
            vlTOPp->present__DOT__end_key_generation 
                = vlTOPp->present__DOT__key_sch_impl__DOT__end_signal;
            vlTOPp->present__DOT____Vcellinp__result__w 
                = ((IData)(vlTOPp->present__DOT__end_enc) 
                   | (IData)(vlTOPp->present__DOT__end_dec));
            vlTOPp->present__DOT__present_enc_impl__DOT__key_index 
                = vlTOPp->present__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
            vlTOPp->present__DOT__present_dec_impl__DOT__key_index 
                = vlTOPp->present__DOT__present_dec_impl__DOT__counter_impl__DOT__dout;
            vlTOPp->present__DOT__roundkey = vlTOPp->present__DOT__key_sch_impl__DOT__roundkey;
            vlTOPp->present__DOT__key_sch_impl__DOT__s_box_output 
                = vlTOPp->present__DOT__key_sch_impl__DOT__sbox__DOT__dout;
            vlTOPp->end_key_generation = vlTOPp->present__DOT__end_key_generation;
            vlTOPp->present__DOT__result__DOT__w = vlTOPp->present__DOT____Vcellinp__result__w;
            vlTOPp->present__DOT__reg_end_signal__DOT__w 
                = vlTOPp->present__DOT____Vcellinp__result__w;
            vlTOPp->present__DOT__present_enc_impl__DOT__counter_impl__DOT__up 
                = vlTOPp->present__DOT__present_enc_impl__DOT__counter_up;
            vlTOPp->present__DOT__present_enc_impl__DOT__register_w 
                = (0U < (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__key_index));
            vlTOPp->present__DOT__key_index_enc = vlTOPp->present__DOT__present_enc_impl__DOT__key_index;
            vlTOPp->present__DOT__present_dec_impl__DOT__counter_impl__DOT__down 
                = vlTOPp->present__DOT__present_dec_impl__DOT__counter_down;
            vlTOPp->present__DOT__present_dec_impl__DOT__register_w 
                = (0x1fU > (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__key_index));
            vlTOPp->present__DOT__key_index_dec = vlTOPp->present__DOT__present_dec_impl__DOT__key_index;
            vlTOPp->present__DOT__present_enc_impl__DOT__roundkey 
                = vlTOPp->present__DOT__roundkey;
            vlTOPp->present__DOT__present_dec_impl__DOT__roundkey 
                = vlTOPp->present__DOT__roundkey;
            vlTOPp->present__DOT__present_enc_impl__DOT__result 
                = (vlTOPp->present__DOT__present_enc_impl__DOT__register_output 
                   ^ vlTOPp->present__DOT__roundkey);
            vlTOPp->present__DOT__present_dec_impl__DOT__result 
                = (vlTOPp->present__DOT__present_dec_impl__DOT__register_output 
                   ^ vlTOPp->present__DOT__roundkey);
            vlTOPp->present__DOT__present_enc_impl__DOT__block_register__DOT__w 
                = vlTOPp->present__DOT__present_enc_impl__DOT__register_w;
            vlTOPp->present__DOT__present_dec_impl__DOT__block_register__DOT__w 
                = vlTOPp->present__DOT__present_dec_impl__DOT__register_w;
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__key_i 
                = vlTOPp->present__DOT__present_enc_impl__DOT__roundkey;
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__key_i 
                = vlTOPp->present__DOT__present_dec_impl__DOT__roundkey;
            vlTOPp->present__DOT__enc_o = vlTOPp->present__DOT__present_enc_impl__DOT__result;
            vlTOPp->present__DOT__dec_o = vlTOPp->present__DOT__present_dec_impl__DOT__result;
        }
        
        VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
            Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->present__DOT____Vcellinp__result__cl 
                = ((IData)(vlTOPp->rst) | (IData)(vlTOPp->rq_data));
            vlTOPp->present__DOT__start_enc = (1U & 
                                               (~ (IData)(vlTOPp->enc_dec)));
            vlTOPp->present__DOT__start_dec = vlTOPp->enc_dec;
            vlTOPp->present__DOT____Vcellinp__present_enc_impl__rst 
                = (1U & ((~ (IData)(vlTOPp->present__DOT__end_key_generation)) 
                         | (IData)(vlTOPp->rq_data)));
            vlTOPp->present__DOT__present_enc_impl__DOT__block_i 
                = ((2U > (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__key_index))
                    ? vlTOPp->block_i : vlTOPp->present__DOT__present_enc_impl__DOT__register_output);
            vlTOPp->present__DOT__present_dec_impl__DOT__block_i 
                = ((0x1dU < (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__key_index))
                    ? vlTOPp->block_i : vlTOPp->present__DOT__present_dec_impl__DOT__register_output);
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[0U] = 0U;
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[1U] = 0U;
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[2U] = 0U;
            if ((4U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state)))) {
                        vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[0U] 
                            = ((0xfff00000U & ((IData)(
                                                       (0xfffffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                            << 0x2cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                               << 0xcU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                                 >> 0x14U))))) 
                                               << 0x14U)) 
                               | ((0xf8000U & ((0xffff8000U 
                                                & vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U]) 
                                               ^ ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__counter_output) 
                                                  << 0xfU))) 
                                  | (0x7fffU & vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U])));
                        vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[1U] 
                            = ((0xfffffU & ((IData)(
                                                    (0xfffffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                            << 0xcU) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                              >> 0x14U))))) 
                                            >> 0xcU)) 
                               | (0xfff00000U & ((IData)(
                                                         ((0xfffffffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                               << 0x2cU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                                  << 0xcU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                                    >> 0x14U)))) 
                                                          >> 0x20U)) 
                                                 << 0x14U)));
                        vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[2U] 
                            = (0xfffffU & ((IData)(
                                                   ((0xfffffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                            << 0xcU) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                              >> 0x14U)))) 
                                                    >> 0x20U)) 
                                           >> 0xcU));
                    }
                }
            } else if ((2U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                if ((1U & (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state))) {
                    vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[0U] 
                        = vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U];
                    vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[1U] 
                        = vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U];
                    vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[2U] 
                        = ((0xfffff000U & ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__s_box_output) 
                                           << 0xcU)) 
                           | (0xfffU & vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U]));
                } else {
                    vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[0U] 
                        = (IData)((0x1fffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                       << 0x2dU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                        << 0xdU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                        >> 0x13U)))));
                    vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[1U] 
                        = ((0xe0000000U & (vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U] 
                                           << 0x1dU)) 
                           | (IData)(((0x1fffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                           << 0x2dU) 
                                          | (((QData)((IData)(
                                                              vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                >> 0x13U)))) 
                                      >> 0x20U)));
                    vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[2U] 
                        = (0xffffU & (vlTOPp->present__DOT__key_sch_impl__DOT__key_register_output[0U] 
                                      >> 3U));
                }
            } else if ((1U & (~ (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[0U] 
                    = vlTOPp->key[0U];
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[1U] 
                    = vlTOPp->key[1U];
                vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[2U] 
                    = vlTOPp->key[2U];
            }
            if (vlTOPp->enc_dec) {
                vlTOPp->present__DOT__key_index = vlTOPp->present__DOT__key_index_dec;
                vlTOPp->present__DOT__block_o_logic 
                    = vlTOPp->present__DOT__dec_o;
            } else {
                vlTOPp->present__DOT__key_index = vlTOPp->present__DOT__key_index_enc;
                vlTOPp->present__DOT__block_o_logic 
                    = vlTOPp->present__DOT__enc_o;
            }
            vlTOPp->present__DOT__result__DOT__cl = vlTOPp->present__DOT____Vcellinp__result__cl;
            vlTOPp->present__DOT__reg_end_signal__DOT__cl 
                = vlTOPp->present__DOT____Vcellinp__result__cl;
            vlTOPp->present__DOT__present_enc_impl__DOT__start_signal 
                = vlTOPp->present__DOT__start_enc;
            vlTOPp->present__DOT__present_dec_impl__DOT__start_signal 
                = vlTOPp->present__DOT__start_dec;
            vlTOPp->present__DOT__present_enc_impl__DOT__rst 
                = vlTOPp->present__DOT____Vcellinp__present_enc_impl__rst;
            vlTOPp->present__DOT__present_dec_impl__DOT__rst 
                = vlTOPp->present__DOT____Vcellinp__present_enc_impl__rst;
            vlTOPp->present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst 
                = (1U & ((~ (IData)(vlTOPp->present__DOT__start_enc)) 
                         | (IData)(vlTOPp->present__DOT____Vcellinp__present_enc_impl__rst)));
            vlTOPp->present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst 
                = (1U & ((~ (IData)(vlTOPp->present__DOT__start_dec)) 
                         | (IData)(vlTOPp->present__DOT____Vcellinp__present_enc_impl__rst)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_i 
                = vlTOPp->present__DOT__present_enc_impl__DOT__block_i;
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                = (vlTOPp->present__DOT__present_enc_impl__DOT__block_i 
                   ^ vlTOPp->present__DOT__roundkey);
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_i 
                = vlTOPp->present__DOT__present_dec_impl__DOT__block_i;
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                = (vlTOPp->present__DOT__present_dec_impl__DOT__block_i 
                   ^ vlTOPp->present__DOT__roundkey);
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__din[0U] 
                = vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[0U];
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__din[1U] 
                = vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[1U];
            vlTOPp->present__DOT__key_sch_impl__DOT__key_register__DOT__din[2U] 
                = vlTOPp->present__DOT__key_sch_impl__DOT__key_register_input[2U];
            vlTOPp->present__DOT__key_sch_impl__DOT__key_index 
                = vlTOPp->present__DOT__key_index;
            vlTOPp->present__DOT__key_sch_impl__DOT__mem_addr 
                = ((IData)(vlTOPp->present__DOT__key_sch_impl__DOT__end_signal)
                    ? (IData)(vlTOPp->present__DOT__key_index)
                    : (IData)(vlTOPp->present__DOT__key_sch_impl__DOT__counter_output));
            vlTOPp->present__DOT__result__DOT__din 
                = vlTOPp->present__DOT__block_o_logic;
            vlTOPp->present__DOT__present_enc_impl__DOT__counter_impl__DOT__rst 
                = vlTOPp->present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst;
            vlTOPp->present__DOT__present_enc_impl__DOT__block_register__DOT__cl 
                = vlTOPp->present__DOT__present_enc_impl__DOT____Vcellinp__counter_impl__rst;
            vlTOPp->present__DOT__present_dec_impl__DOT__counter_impl__DOT__rst 
                = vlTOPp->present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst;
            vlTOPp->present__DOT__present_dec_impl__DOT__block_register__DOT__cl 
                = vlTOPp->present__DOT__present_dec_impl__DOT____Vcellinp__counter_impl__rst;
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__din 
                = vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din;
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 4U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 8U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0xcU)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x10U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x14U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x18U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x1cU)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x20U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x24U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x28U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x2cU)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x30U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x34U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x38U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                   >> 0x3cU)));
            vlTOPp->__Vtableidx2 = (0xfU & (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable2_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx2];
            vlTOPp->__Vtableidx3 = (0xfU & (IData)(
                                                   (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                    >> 4U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable3_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx3];
            vlTOPp->__Vtableidx4 = (0xfU & (IData)(
                                                   (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                    >> 8U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable4_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx4];
            vlTOPp->__Vtableidx5 = (0xfU & (IData)(
                                                   (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                    >> 0xcU)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable5_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx5];
            vlTOPp->__Vtableidx6 = (0xfU & (IData)(
                                                   (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                    >> 0x10U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable6_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx6];
            vlTOPp->__Vtableidx7 = (0xfU & (IData)(
                                                   (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                    >> 0x14U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable7_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx7];
            vlTOPp->__Vtableidx8 = (0xfU & (IData)(
                                                   (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                    >> 0x18U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable8_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx8];
            vlTOPp->__Vtableidx9 = (0xfU & (IData)(
                                                   (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                    >> 0x1cU)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable9_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx9];
            vlTOPp->__Vtableidx10 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                     >> 0x20U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable10_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx10];
            vlTOPp->__Vtableidx11 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                     >> 0x24U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable11_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx11];
            vlTOPp->__Vtableidx12 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                     >> 0x28U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable12_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx12];
            vlTOPp->__Vtableidx13 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                     >> 0x2cU)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable13_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx13];
            vlTOPp->__Vtableidx14 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                     >> 0x30U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable14_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx14];
            vlTOPp->__Vtableidx15 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                     >> 0x34U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable15_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx15];
            vlTOPp->__Vtableidx16 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                     >> 0x38U)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable16_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx16];
            vlTOPp->__Vtableidx17 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                                     >> 0x3cU)));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable17_present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx17];
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__din 
                = vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din;
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffffffeULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | (IData)((IData)((1U & (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din)))));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffffffefULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 1U))))) 
                      << 4U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffffeffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 2U))))) 
                      << 8U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffffefffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 3U))))) 
                      << 0xcU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffeffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 4U))))) 
                      << 0x10U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffefffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 5U))))) 
                      << 0x14U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffeffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 6U))))) 
                      << 0x18U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffefffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 7U))))) 
                      << 0x1cU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffeffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 8U))))) 
                      << 0x20U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffefffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 9U))))) 
                      << 0x24U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffeffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0xaU))))) 
                      << 0x28U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffefffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0xbU))))) 
                      << 0x2cU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffeffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0xcU))))) 
                      << 0x30U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffefffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0xdU))))) 
                      << 0x34U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfeffffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0xeU))))) 
                      << 0x38U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xefffffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0xfU))))) 
                      << 0x3cU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffffffdULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x10U))))) 
                      << 1U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffffffdfULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x11U))))) 
                      << 5U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffffdffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x12U))))) 
                      << 9U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffffdfffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x13U))))) 
                      << 0xdU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffdffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x14U))))) 
                      << 0x11U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffdfffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x15U))))) 
                      << 0x15U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffdffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x16U))))) 
                      << 0x19U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffdfffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x17U))))) 
                      << 0x1dU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffdffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x18U))))) 
                      << 0x21U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffdfffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x19U))))) 
                      << 0x25U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffdffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x1aU))))) 
                      << 0x29U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffdfffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x1bU))))) 
                      << 0x2dU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffdffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x1cU))))) 
                      << 0x31U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffdfffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x1dU))))) 
                      << 0x35U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfdffffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x1eU))))) 
                      << 0x39U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xdfffffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x1fU))))) 
                      << 0x3dU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffffffbULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x20U))))) 
                      << 2U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffffffbfULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x21U))))) 
                      << 6U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffffbffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x22U))))) 
                      << 0xaU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffffbfffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x23U))))) 
                      << 0xeU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffbffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x24U))))) 
                      << 0x12U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffbfffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x25U))))) 
                      << 0x16U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffbffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x26U))))) 
                      << 0x1aU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffbfffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x27U))))) 
                      << 0x1eU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffbffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x28U))))) 
                      << 0x22U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffbfffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x29U))))) 
                      << 0x26U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffbffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x2aU))))) 
                      << 0x2aU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffbfffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x2bU))))) 
                      << 0x2eU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffbffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x2cU))))) 
                      << 0x32U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffbfffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x2dU))))) 
                      << 0x36U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfbffffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x2eU))))) 
                      << 0x3aU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xbfffffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x2fU))))) 
                      << 0x3eU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffffff7ULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x30U))))) 
                      << 3U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffffff7fULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x31U))))) 
                      << 7U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffff7ffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x32U))))) 
                      << 0xbU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffff7fffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x33U))))) 
                      << 0xfU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffff7ffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x34U))))) 
                      << 0x13U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffff7fffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x35U))))) 
                      << 0x17U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffff7ffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x36U))))) 
                      << 0x1bU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffff7fffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x37U))))) 
                      << 0x1fU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffff7ffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x38U))))) 
                      << 0x23U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffff7fffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x39U))))) 
                      << 0x27U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffff7ffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x3aU))))) 
                      << 0x2bU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffff7fffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x3bU))))) 
                      << 0x2fU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfff7ffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x3cU))))) 
                      << 0x33U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xff7fffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x3dU))))) 
                      << 0x37U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0xf7ffffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x3eU))))) 
                      << 0x3bU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout 
                = ((0x7fffffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT____Vcellinp__player_i__din 
                                                     >> 0x3fU))))) 
                      << 0x3fU));
            vlTOPp->present__DOT__key_sch_impl__DOT__memory_impl__DOT__addr 
                = vlTOPp->present__DOT__key_sch_impl__DOT__mem_addr;
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
                = ((0xffffffffffff0000ULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
                   | (IData)((IData)((((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout) 
                                       << 0xcU) | (
                                                   ((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout) 
                                                    << 8U) 
                                                   | (((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout) 
                                                       << 4U) 
                                                      | (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout)))))));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
                = ((0xffffffff0000ffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
                   | ((QData)((IData)((((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout) 
                                        << 0xcU) | 
                                       (((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout) 
                                         << 8U) | (
                                                   ((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout) 
                                                    << 4U) 
                                                   | (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout)))))) 
                      << 0x10U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
                = ((0xffff0000ffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
                   | ((QData)((IData)((((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout) 
                                        << 0xcU) | 
                                       (((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout) 
                                         << 8U) | (
                                                   ((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout) 
                                                    << 4U) 
                                                   | (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout)))))) 
                      << 0x20U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
                = ((0xffffffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
                   | ((QData)((IData)((((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout) 
                                        << 0xcU) | 
                                       (((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout) 
                                         << 8U) | (
                                                   ((IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout) 
                                                    << 4U) 
                                                   | (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout)))))) 
                      << 0x30U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                = vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__player_i__DOT__dout;
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                = vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout;
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__din 
                = vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o;
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 4U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 8U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0xcU)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x10U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x14U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x18U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x1cU)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x20U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x24U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x28U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x2cU)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x30U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x34U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x38U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din 
                = (0xfU & (IData)((vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                   >> 0x3cU)));
            vlTOPp->__Vtableidx18 = (0xfU & (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable18_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx18];
            vlTOPp->__Vtableidx19 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 4U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable19_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx19];
            vlTOPp->__Vtableidx20 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 8U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable20_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx20];
            vlTOPp->__Vtableidx21 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0xcU)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable21_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx21];
            vlTOPp->__Vtableidx22 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x10U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable22_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx22];
            vlTOPp->__Vtableidx23 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x14U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable23_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx23];
            vlTOPp->__Vtableidx24 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x18U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable24_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx24];
            vlTOPp->__Vtableidx25 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x1cU)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable25_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx25];
            vlTOPp->__Vtableidx26 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x20U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable26_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx26];
            vlTOPp->__Vtableidx27 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x24U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable27_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx27];
            vlTOPp->__Vtableidx28 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x28U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable28_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx28];
            vlTOPp->__Vtableidx29 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x2cU)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable29_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx29];
            vlTOPp->__Vtableidx30 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x30U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable30_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx30];
            vlTOPp->__Vtableidx31 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x34U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable31_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx31];
            vlTOPp->__Vtableidx32 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x38U)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable32_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx32];
            vlTOPp->__Vtableidx33 = (0xfU & (IData)(
                                                    (vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__p_layer_o 
                                                     >> 0x3cU)));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout 
                = vlTOPp->__Vtable33_present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout
                [vlTOPp->__Vtableidx33];
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__din 
                = vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o;
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffffff8ULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | (IData)((IData)(((4U & ((IData)(
                                                     (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                      >> 8U)) 
                                             << 2U)) 
                                      | ((2U & ((IData)(
                                                        (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                         >> 4U)) 
                                                << 1U)) 
                                         | (1U & (IData)(vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o)))))));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffffffc7ULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x14U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x10U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0xcU))))))) 
                      << 3U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffffe3fULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x20U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x1cU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x18U))))))) 
                      << 6U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffff1ffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x2cU)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x28U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x24U))))))) 
                      << 9U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffff8fffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x38U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x34U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x30U))))))) 
                      << 0xcU));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffffffc7fffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 5U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x3cU))))))) 
                      << 0xfU));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffffe3ffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x11U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0xdU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 9U))))))) 
                      << 0x12U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffff1fffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x1dU)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x19U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x15U))))))) 
                      << 0x15U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffff8ffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x29U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x25U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x21U))))))) 
                      << 0x18U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffffffc7ffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x35U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x31U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x2dU))))))) 
                      << 0x1bU));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffffe3fffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 2U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x3dU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x39U))))))) 
                      << 0x1eU));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffff1ffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0xeU)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0xaU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 6U))))))) 
                      << 0x21U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffff8fffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x1aU)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x16U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x12U))))))) 
                      << 0x24U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfffffc7fffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x26U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x22U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x1eU))))))) 
                      << 0x27U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffffe3ffffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x32U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x2eU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x2aU))))))) 
                      << 0x2aU));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffff1fffffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x3eU)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x3aU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x36U))))))) 
                      << 0x2dU));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfff8ffffffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0xbU)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 7U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 3U))))))) 
                      << 0x30U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xffc7ffffffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x17U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x13U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0xfU))))))) 
                      << 0x33U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xfe3fffffffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x23U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x1fU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x1bU))))))) 
                      << 0x36U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0xf1ffffffffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x2fU)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x2bU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x27U))))))) 
                      << 0x39U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0x8fffffffffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)(((4U & ((IData)(
                                                      (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                       >> 0x3bU)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                          >> 0x37U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                           >> 0x33U))))))) 
                      << 0x3cU));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
                = ((0x7fffffffffffffffULL & vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                     >> 0x3fU))))) 
                      << 0x3fU));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout 
                = ((0xffffffffffff0000ULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout) 
                   | (IData)((IData)((((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout) 
                                       << 0xcU) | (
                                                   ((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout) 
                                                    << 8U) 
                                                   | (((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout) 
                                                       << 4U) 
                                                      | (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout)))))));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout 
                = ((0xffffffff0000ffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout) 
                   | ((QData)((IData)((((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout) 
                                        << 0xcU) | 
                                       (((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout) 
                                         << 8U) | (
                                                   ((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout) 
                                                    << 4U) 
                                                   | (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout)))))) 
                      << 0x10U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout 
                = ((0xffff0000ffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout) 
                   | ((QData)((IData)((((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout) 
                                        << 0xcU) | 
                                       (((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout) 
                                         << 8U) | (
                                                   ((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout) 
                                                    << 4U) 
                                                   | (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout)))))) 
                      << 0x20U));
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout 
                = ((0xffffffffffffULL & vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout) 
                   | ((QData)((IData)((((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout) 
                                        << 0xcU) | 
                                       (((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout) 
                                         << 8U) | (
                                                   ((IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout) 
                                                    << 4U) 
                                                   | (IData)(vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout)))))) 
                      << 0x30U));
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o 
                = vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout;
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__s_box_o 
                = vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__slayer_i__DOT__dout;
            vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o 
                = vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o;
            vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_o 
                = vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__s_box_o;
            vlTOPp->present__DOT__present_enc_impl__DOT__block_o 
                = vlTOPp->present__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o;
            vlTOPp->present__DOT__present_dec_impl__DOT__block_o 
                = vlTOPp->present__DOT__present_dec_impl__DOT__dec_stage_impl__DOT__block_o;
            vlTOPp->present__DOT__present_enc_impl__DOT__block_register__DOT__din 
                = vlTOPp->present__DOT__present_enc_impl__DOT__block_o;
            vlTOPp->present__DOT__present_dec_impl__DOT__block_register__DOT__din 
                = vlTOPp->present__DOT__present_dec_impl__DOT__block_o;
        }
        
        void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
            Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->_combo__TOP__2(vlSymsp);
            if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
                vlTOPp->_sequent__TOP__4(vlSymsp);
            }
            vlTOPp->_combo__TOP__5(vlSymsp);
            // Final
            vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
        }
        
        VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
            Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            return (vlTOPp->_change_request_1(vlSymsp));
        }
        
        VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
            Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            // Change detection
            QData __req = false;  // Logically a bool
            return __req;
        }
        
#ifdef VL_DEBUG
        void Vtop::_eval_debug_assertions() {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
            // Body
            if (VL_UNLIKELY((clk & 0xfeU))) {
                Verilated::overWidthError("clk");}
            if (VL_UNLIKELY((rst & 0xfeU))) {
                Verilated::overWidthError("rst");}
            if (VL_UNLIKELY((key[2U] & 0xffff0000U))) {
                Verilated::overWidthError("key");}
            if (VL_UNLIKELY((enc_dec & 0xfeU))) {
                Verilated::overWidthError("enc_dec");}
            if (VL_UNLIKELY((rq_data & 0xfeU))) {
                Verilated::overWidthError("rq_data");}
        }
#endif  // VL_DEBUG
