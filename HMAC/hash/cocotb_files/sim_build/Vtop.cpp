// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*1:0*/ Vtop::__Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[16];
CData/*0:0*/ Vtop::__Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[16];
CData/*0:0*/ Vtop::__Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[16];
CData/*1:0*/ Vtop::__Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[16];
CData/*0:0*/ Vtop::__Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[16];
CData/*0:0*/ Vtop::__Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[16];
CData/*1:0*/ Vtop::__Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[16];
CData/*0:0*/ Vtop::__Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[16];
CData/*0:0*/ Vtop::__Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[16];
CData/*1:0*/ Vtop::__Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[16];
CData/*0:0*/ Vtop::__Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[16];
CData/*0:0*/ Vtop::__Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[16];

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__hmac_spongent__DOT__hash_0__DOT__permutation_impl, Vtop_permutation__D110_R8c);
    VL_CELL(__PVT__hmac_spongent__DOT__hash_1__DOT__permutation_impl, Vtop_permutation__D110_R8c);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../hdl_code/hmac_spongent.sv", 9, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
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
            VL_FATAL_MT("../hdl_code/hmac_spongent.sv", 9, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__feedback_coeff = 0x11dU;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__initial_state = 0x9eU;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__down = 0U;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__din = 0U;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down = 0U;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din = 0U;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__feedback_coeff = 0x11dU;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__initial_state = 0x9eU;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__down = 0U;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__din = 0U;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down = 0U;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din = 0U;
    vlTOPp->hmac_spongent__DOT__ipad[0U] = 0x36363636U;
    vlTOPp->hmac_spongent__DOT__ipad[1U] = 0x36363636U;
    vlTOPp->hmac_spongent__DOT__ipad[2U] = 0x36363636U;
    vlTOPp->hmac_spongent__DOT__ipad[3U] = 0x36363636U;
    vlTOPp->hmac_spongent__DOT__ipad[4U] = 0x36363636U;
    vlTOPp->hmac_spongent__DOT__ipad[5U] = 0x36363636U;
    vlTOPp->hmac_spongent__DOT__ipad[6U] = 0x36363636U;
    vlTOPp->hmac_spongent__DOT__ipad[7U] = 0x36363636U;
    vlTOPp->hmac_spongent__DOT__opad[0U] = 0x5c5c5c5cU;
    vlTOPp->hmac_spongent__DOT__opad[1U] = 0x5c5c5c5cU;
    vlTOPp->hmac_spongent__DOT__opad[2U] = 0x5c5c5c5cU;
    vlTOPp->hmac_spongent__DOT__opad[3U] = 0x5c5c5c5cU;
    vlTOPp->hmac_spongent__DOT__opad[4U] = 0x5c5c5c5cU;
    vlTOPp->hmac_spongent__DOT__opad[5U] = 0x5c5c5c5cU;
    vlTOPp->hmac_spongent__DOT__opad[6U] = 0x5c5c5c5cU;
    vlTOPp->hmac_spongent__DOT__opad[7U] = 0x5c5c5c5cU;
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp1[8];
    WData/*255:0*/ __Vtemp3[8];
    WData/*351:0*/ __Vtemp8[11];
    WData/*351:0*/ __Vtemp9[11];
    // Body
    vlTOPp->hmac_spongent__DOT__key = vlTOPp->key;
    vlTOPp->hmac_spongent__DOT__msg = vlTOPp->msg;
    vlTOPp->hmac_spongent__DOT__rst = vlTOPp->rst;
    vlTOPp->hmac_spongent__DOT__clk = vlTOPp->clk;
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.clk 
        = vlTOPp->clk;
    VL_EXTEND_WQ(256,64, __Vtemp1, vlTOPp->key);
    vlTOPp->hmac_spongent__DOT__Si[0U] = (__Vtemp1[0U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[0U]);
    vlTOPp->hmac_spongent__DOT__Si[1U] = (__Vtemp1[1U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[1U]);
    vlTOPp->hmac_spongent__DOT__Si[2U] = (__Vtemp1[2U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[2U]);
    vlTOPp->hmac_spongent__DOT__Si[3U] = (__Vtemp1[3U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[3U]);
    vlTOPp->hmac_spongent__DOT__Si[4U] = (__Vtemp1[4U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[4U]);
    vlTOPp->hmac_spongent__DOT__Si[5U] = (__Vtemp1[5U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[5U]);
    vlTOPp->hmac_spongent__DOT__Si[6U] = (__Vtemp1[6U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[6U]);
    vlTOPp->hmac_spongent__DOT__Si[7U] = (__Vtemp1[7U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[7U]);
    VL_EXTEND_WQ(256,64, __Vtemp3, vlTOPp->key);
    vlTOPp->hmac_spongent__DOT__So[0U] = (__Vtemp3[0U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[0U]);
    vlTOPp->hmac_spongent__DOT__So[1U] = (__Vtemp3[1U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[1U]);
    vlTOPp->hmac_spongent__DOT__So[2U] = (__Vtemp3[2U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[2U]);
    vlTOPp->hmac_spongent__DOT__So[3U] = (__Vtemp3[3U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[3U]);
    vlTOPp->hmac_spongent__DOT__So[4U] = (__Vtemp3[4U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[4U]);
    vlTOPp->hmac_spongent__DOT__So[5U] = (__Vtemp3[5U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[5U]);
    vlTOPp->hmac_spongent__DOT__So[6U] = (__Vtemp3[6U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[6U]);
    vlTOPp->hmac_spongent__DOT__So[7U] = (__Vtemp3[7U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[7U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst = vlTOPp->hmac_spongent__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__clk = vlTOPp->hmac_spongent__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__clk = vlTOPp->hmac_spongent__DOT__clk;
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[0U] 
        = (IData)(vlTOPp->msg);
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[1U] 
        = (IData)((vlTOPp->msg >> 0x20U));
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[2U] 
        = vlTOPp->hmac_spongent__DOT__Si[0U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[3U] 
        = vlTOPp->hmac_spongent__DOT__Si[1U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[4U] 
        = vlTOPp->hmac_spongent__DOT__Si[2U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[5U] 
        = vlTOPp->hmac_spongent__DOT__Si[3U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[6U] 
        = vlTOPp->hmac_spongent__DOT__Si[4U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[7U] 
        = vlTOPp->hmac_spongent__DOT__Si[5U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[8U] 
        = vlTOPp->hmac_spongent__DOT__Si[6U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[9U] 
        = vlTOPp->hmac_spongent__DOT__Si[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[0U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[1U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[2U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[3U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[4U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[5U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[6U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[7U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[8U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[9U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[9U];
    VL_EXTEND_WW(336,320, __Vtemp8, vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg);
    VL_SHIFTL_WWI(336,336,32, __Vtemp9, __Vtemp8, 0x10U);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[0U] 
        = (0x8000U | __Vtemp9[0U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[1U] 
        = __Vtemp9[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[2U] 
        = __Vtemp9[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[3U] 
        = __Vtemp9[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[4U] 
        = __Vtemp9[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[5U] 
        = __Vtemp9[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[6U] 
        = __Vtemp9[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[7U] 
        = __Vtemp9[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[8U] 
        = __Vtemp9[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[9U] 
        = __Vtemp9[9U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[0xaU] 
        = (0xffffU & __Vtemp9[0xaU]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[9U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[9U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[0xaU] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[0xaU];
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp12[8];
    WData/*255:0*/ __Vtemp14[8];
    WData/*351:0*/ __Vtemp20[11];
    WData/*351:0*/ __Vtemp21[11];
    WData/*543:0*/ __Vtemp26[17];
    WData/*543:0*/ __Vtemp27[17];
    WData/*351:0*/ __Vtemp31[11];
    WData/*543:0*/ __Vtemp34[17];
    WData/*287:0*/ __Vtemp36[9];
    WData/*287:0*/ __Vtemp38[9];
    // Body
    vlTOPp->hmac_spongent__DOT__key = vlTOPp->key;
    vlTOPp->hmac_spongent__DOT__msg = vlTOPp->msg;
    vlTOPp->hmac_spongent__DOT__rst = vlTOPp->rst;
    vlTOPp->hmac_spongent__DOT__clk = vlTOPp->clk;
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.clk 
        = vlTOPp->clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__bit_xored 
        = (1U & VL_REDXOR_32((0x8eU & (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg))));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__bit_xored 
        = (1U & VL_REDXOR_32((0x8eU & (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg))));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_o 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_o 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_o 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_o 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
    VL_EXTEND_WQ(256,64, __Vtemp12, vlTOPp->key);
    vlTOPp->hmac_spongent__DOT__Si[0U] = (__Vtemp12[0U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[0U]);
    vlTOPp->hmac_spongent__DOT__Si[1U] = (__Vtemp12[1U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[1U]);
    vlTOPp->hmac_spongent__DOT__Si[2U] = (__Vtemp12[2U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[2U]);
    vlTOPp->hmac_spongent__DOT__Si[3U] = (__Vtemp12[3U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[3U]);
    vlTOPp->hmac_spongent__DOT__Si[4U] = (__Vtemp12[4U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[4U]);
    vlTOPp->hmac_spongent__DOT__Si[5U] = (__Vtemp12[5U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[5U]);
    vlTOPp->hmac_spongent__DOT__Si[6U] = (__Vtemp12[6U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[6U]);
    vlTOPp->hmac_spongent__DOT__Si[7U] = (__Vtemp12[7U] 
                                          ^ vlTOPp->hmac_spongent__DOT__ipad[7U]);
    VL_EXTEND_WQ(256,64, __Vtemp14, vlTOPp->key);
    vlTOPp->hmac_spongent__DOT__So[0U] = (__Vtemp14[0U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[0U]);
    vlTOPp->hmac_spongent__DOT__So[1U] = (__Vtemp14[1U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[1U]);
    vlTOPp->hmac_spongent__DOT__So[2U] = (__Vtemp14[2U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[2U]);
    vlTOPp->hmac_spongent__DOT__So[3U] = (__Vtemp14[3U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[3U]);
    vlTOPp->hmac_spongent__DOT__So[4U] = (__Vtemp14[4U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[4U]);
    vlTOPp->hmac_spongent__DOT__So[5U] = (__Vtemp14[5U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[5U]);
    vlTOPp->hmac_spongent__DOT__So[6U] = (__Vtemp14[6U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[6U]);
    vlTOPp->hmac_spongent__DOT__So[7U] = (__Vtemp14[7U] 
                                          ^ vlTOPp->hmac_spongent__DOT__opad[7U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst = vlTOPp->hmac_spongent__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__clk = vlTOPp->hmac_spongent__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__clk = vlTOPp->hmac_spongent__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[8U];
    vlTOPp->hmac_spongent__DOT__digest[0U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[0U];
    vlTOPp->hmac_spongent__DOT__digest[1U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[1U];
    vlTOPp->hmac_spongent__DOT__digest[2U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[2U];
    vlTOPp->hmac_spongent__DOT__digest[3U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[3U];
    vlTOPp->hmac_spongent__DOT__digest[4U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[4U];
    vlTOPp->hmac_spongent__DOT__digest[5U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[5U];
    vlTOPp->hmac_spongent__DOT__digest[6U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[6U];
    vlTOPp->hmac_spongent__DOT__digest[7U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter_state 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter_state 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state;
    vlTOPp->hmac_spongent__DOT__hash_output_0[0U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[0U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[1U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[1U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[2U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[2U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[3U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[3U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[4U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[4U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[5U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[5U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[6U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[6U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[7U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_squeezing 
        = ((0xfU <= (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_squeezing 
        = ((0xfU <= (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_absorbing 
        = ((0x15U == (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_absorbing 
        = ((0x21U == (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[0U] 
        = (IData)(vlTOPp->msg);
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[1U] 
        = (IData)((vlTOPp->msg >> 0x20U));
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[2U] 
        = vlTOPp->hmac_spongent__DOT__Si[0U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[3U] 
        = vlTOPp->hmac_spongent__DOT__Si[1U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[4U] 
        = vlTOPp->hmac_spongent__DOT__Si[2U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[5U] 
        = vlTOPp->hmac_spongent__DOT__Si[3U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[6U] 
        = vlTOPp->hmac_spongent__DOT__Si[4U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[7U] 
        = vlTOPp->hmac_spongent__DOT__Si[5U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[8U] 
        = vlTOPp->hmac_spongent__DOT__Si[6U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[9U] 
        = vlTOPp->hmac_spongent__DOT__Si[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__clk;
    vlTOPp->digest[0U] = vlTOPp->hmac_spongent__DOT__digest[0U];
    vlTOPp->digest[1U] = vlTOPp->hmac_spongent__DOT__digest[1U];
    vlTOPp->digest[2U] = vlTOPp->hmac_spongent__DOT__digest[2U];
    vlTOPp->digest[3U] = vlTOPp->hmac_spongent__DOT__digest[3U];
    vlTOPp->digest[4U] = vlTOPp->hmac_spongent__DOT__digest[4U];
    vlTOPp->digest[5U] = vlTOPp->hmac_spongent__DOT__digest[5U];
    vlTOPp->digest[6U] = vlTOPp->hmac_spongent__DOT__digest[6U];
    vlTOPp->digest[7U] = vlTOPp->hmac_spongent__DOT__digest[7U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.lCounter_state 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter_state;
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.lCounter_state 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter_state;
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[0U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[1U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[2U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[3U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[4U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[5U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[6U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[7U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[8U] 
        = vlTOPp->hmac_spongent__DOT__So[0U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[9U] 
        = vlTOPp->hmac_spongent__DOT__So[1U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xaU] 
        = vlTOPp->hmac_spongent__DOT__So[2U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xbU] 
        = vlTOPp->hmac_spongent__DOT__So[3U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xcU] 
        = vlTOPp->hmac_spongent__DOT__So[4U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xdU] 
        = vlTOPp->hmac_spongent__DOT__So[5U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xeU] 
        = vlTOPp->hmac_spongent__DOT__So[6U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xfU] 
        = vlTOPp->hmac_spongent__DOT__So[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_hash 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_squeezing;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_hash 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_squeezing;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_absorbing;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_absorbing;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[0U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[1U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[2U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[3U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[4U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[5U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[6U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[7U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[8U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__msg[9U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg[9U];
    VL_EXTEND_WW(336,320, __Vtemp20, vlTOPp->hmac_spongent__DOT____Vcellinp__hash_0__msg);
    VL_SHIFTL_WWI(336,336,32, __Vtemp21, __Vtemp20, 0x10U);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[0U] 
        = (0x8000U | __Vtemp21[0U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[1U] 
        = __Vtemp21[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[2U] 
        = __Vtemp21[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[3U] 
        = __Vtemp21[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[4U] 
        = __Vtemp21[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[5U] 
        = __Vtemp21[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[6U] 
        = __Vtemp21[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[7U] 
        = __Vtemp21[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[8U] 
        = __Vtemp21[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[9U] 
        = __Vtemp21[9U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[0xaU] 
        = (0xffffU & __Vtemp21[0xaU]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__clk;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[1U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[2U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[3U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[4U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[5U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[6U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[7U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[8U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[9U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[9U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xaU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xaU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xbU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xbU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xcU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xcU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xdU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xdU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xeU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xeU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xfU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xfU];
    VL_EXTEND_WW(528,512, __Vtemp26, vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg);
    VL_SHIFTL_WWI(528,528,32, __Vtemp27, __Vtemp26, 0x10U);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0U] 
        = (0x8000U | __Vtemp27[0U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[1U] 
        = __Vtemp27[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[2U] 
        = __Vtemp27[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[3U] 
        = __Vtemp27[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[4U] 
        = __Vtemp27[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[5U] 
        = __Vtemp27[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[6U] 
        = __Vtemp27[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[7U] 
        = __Vtemp27[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[8U] 
        = __Vtemp27[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[9U] 
        = __Vtemp27[9U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xaU] 
        = __Vtemp27[0xaU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xbU] 
        = __Vtemp27[0xbU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xcU] 
        = __Vtemp27[0xcU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xdU] 
        = __Vtemp27[0xdU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xeU] 
        = __Vtemp27[0xeU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xfU] 
        = __Vtemp27[0xfU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0x10U] 
        = (0xffffU & __Vtemp27[0x10U]);
    vlTOPp->hmac_spongent__DOT__end_hmac = vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_hash;
    vlTOPp->hmac_spongent__DOT__end_hash_0 = vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_hash;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT____Vcellinp__squeezing_phase_impl__rst 
        = (1U & ((IData)(vlTOPp->rst) | (~ (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing))));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[9U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[9U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[0xaU] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg[0xaU];
    VL_SHIFTR_WWI(336,336,32, __Vtemp31, vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg, 
                  ((((IData)(0x15U) - (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_o)) 
                    - (IData)(1U)) << 4U));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__msg_chunk 
        = (0xffffU & __Vtemp31[0U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[9U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[9U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xaU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xaU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xbU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xbU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xcU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xcU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xdU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xdU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xeU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xeU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xfU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xfU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0x10U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0x10U];
    VL_SHIFTR_WWI(528,528,32, __Vtemp34, vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg, 
                  ((((IData)(0x21U) - (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_o)) 
                    - (IData)(1U)) << 4U));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__msg_chunk 
        = (0xffffU & __Vtemp34[0U]);
    vlTOPp->end_hmac = vlTOPp->hmac_spongent__DOT__end_hmac;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst = 
        (1U & (~ (IData)(vlTOPp->hmac_spongent__DOT__end_hash_0)));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT____Vcellinp__squeezing_phase_impl__rst 
        = (1U & ((~ (IData)(vlTOPp->hmac_spongent__DOT__end_hash_0)) 
                 | (~ (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing))));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT____Vcellinp__squeezing_phase_impl__rst;
    VL_EXTEND_WI(272,16, __Vtemp36, ((0xff00U & ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__msg_chunk) 
                                                 << 8U)) 
                                     | (0xffU & ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__msg_chunk) 
                                                 >> 8U))));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[0U] 
        = (__Vtemp36[0U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[0U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[1U] 
        = (__Vtemp36[1U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[1U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[2U] 
        = (__Vtemp36[2U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[2U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[3U] 
        = (__Vtemp36[3U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[3U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[4U] 
        = (__Vtemp36[4U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[4U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[5U] 
        = (__Vtemp36[5U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[5U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[6U] 
        = (__Vtemp36[6U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[6U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[7U] 
        = (__Vtemp36[7U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[7U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[8U] 
        = (__Vtemp36[8U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[8U]);
    VL_EXTEND_WI(272,16, __Vtemp38, ((0xff00U & ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__msg_chunk) 
                                                 << 8U)) 
                                     | (0xffU & ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__msg_chunk) 
                                                 >> 8U))));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[0U] 
        = (__Vtemp38[0U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[0U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[1U] 
        = (__Vtemp38[1U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[1U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[2U] 
        = (__Vtemp38[2U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[2U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[3U] 
        = (__Vtemp38[3U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[3U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[4U] 
        = (__Vtemp38[4U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[4U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[5U] 
        = (__Vtemp38[5U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[5U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[6U] 
        = (__Vtemp38[6U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[6U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[7U] 
        = (__Vtemp38[7U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[7U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[8U] 
        = (__Vtemp38[8U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[8U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT____Vcellinp__squeezing_phase_impl__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[0U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[0U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[0U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[1U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[1U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[1U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[2U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[2U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[2U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[3U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[3U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[3U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[4U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[4U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[4U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[5U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[5U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[5U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[6U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[6U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[6U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[7U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[7U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[7U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[8U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[8U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[8U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[0U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[0U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[0U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[1U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[1U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[1U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[2U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[2U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[2U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[3U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[3U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[3U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[4U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[4U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[4U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[5U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[5U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[5U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[6U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[6U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[6U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[7U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[7U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[7U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[8U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[8U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[8U]);
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[0U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[1U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[2U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[3U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[4U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[5U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[6U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[7U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[8U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[0U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[1U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[2U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[3U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[4U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[5U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[6U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[7U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[8U];
}

void Vtop::_settle__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__shift_lCounter 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.shift_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[2U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[3U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[4U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[5U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[6U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[7U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[8U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__shift_lCounter 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.shift_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[2U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[3U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[4U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[5U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[6U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[7U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[8U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_permutation 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_permutation 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation;
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation) 
                             << 3U) | (((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_absorbing) 
                                        << 2U) | (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__current_state)));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx1];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation) 
                             << 3U) | (((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_squeezing) 
                                        << 2U) | (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__current_state)));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx2];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx2];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx2];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__shift 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__shift_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result_chunk 
        = ((0xff00U & (vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U] 
                       << 8U)) | (0xffU & ((vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U] 
                                            << 0x18U) 
                                           | (vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U] 
                                              >> 8U))));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_permutation 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_permutation 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation;
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation) 
                             << 3U) | (((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_absorbing) 
                                        << 2U) | (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__current_state)));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx3];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx3];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation) 
                             << 3U) | (((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_squeezing) 
                                        << 2U) | (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__current_state)));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx4];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx4];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx4];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__shift 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__shift_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result_chunk 
        = ((0xff00U & (vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U] 
                       << 8U)) | (0xffU & ((vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U] 
                                            << 0x18U) 
                                           | (vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U] 
                                              >> 8U))));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_absorb 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_squezzing 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_absorb 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_squezzing 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_squezzing)
            : (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_absorb));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_squezzing)
            : (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_absorb));
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation;
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation;
}

VL_INLINE_OPT void Vtop::_settle__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_lCounter 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.rst_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_lCounter 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.rst_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_lCounter;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg;
    CData/*5:0*/ __Vdly__hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
    CData/*4:0*/ __Vdly__hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    CData/*7:0*/ __Vdly__hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg;
    CData/*4:0*/ __Vdly__hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    WData/*255:0*/ __Vtemp43[8];
    WData/*255:0*/ __Vtemp44[8];
    WData/*255:0*/ __Vtemp45[8];
    WData/*255:0*/ __Vtemp47[8];
    WData/*255:0*/ __Vtemp48[8];
    WData/*255:0*/ __Vtemp49[8];
    // Body
    __Vdly__hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg;
    __Vdly__hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg;
    __Vdly__hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    __Vdly__hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    __Vdly__hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
    if (vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_lCounter) {
        __Vdly__hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg = 0x9eU;
    } else {
        if (vlTOPp->hmac_spongent__DOT__hash_1__DOT__shift_lCounter) {
            __Vdly__hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg 
                = ((0xfeU & ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg) 
                             << 1U)) | (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__bit_xored));
        }
    }
    if (vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_lCounter) {
        __Vdly__hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg = 0x9eU;
    } else {
        if (vlTOPp->hmac_spongent__DOT__hash_0__DOT__shift_lCounter) {
            __Vdly__hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg 
                = ((0xfeU & ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg) 
                             << 1U)) | (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__bit_xored));
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__current_state))) {
            if (vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation) {
                VL_SHIFTL_WWI(256,256,32, __Vtemp43, vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result, 0x10U);
                VL_EXTEND_WI(256,16, __Vtemp44, (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result_chunk));
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[0U] 
                    = (__Vtemp43[0U] | __Vtemp44[0U]);
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[1U] 
                    = (__Vtemp43[1U] | __Vtemp44[1U]);
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[2U] 
                    = (__Vtemp43[2U] | __Vtemp44[2U]);
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[3U] 
                    = (__Vtemp43[3U] | __Vtemp44[3U]);
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[4U] 
                    = (__Vtemp43[4U] | __Vtemp44[4U]);
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[5U] 
                    = (__Vtemp43[5U] | __Vtemp44[5U]);
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[6U] 
                    = (__Vtemp43[6U] | __Vtemp44[6U]);
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[7U] 
                    = (__Vtemp43[7U] | __Vtemp44[7U]);
            }
        } else {
            VL_EXTEND_WI(256,16, __Vtemp45, (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result_chunk));
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[0U] 
                = __Vtemp45[0U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[1U] 
                = __Vtemp45[1U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[2U] 
                = __Vtemp45[2U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[3U] 
                = __Vtemp45[3U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[4U] 
                = __Vtemp45[4U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[5U] 
                = __Vtemp45[5U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[6U] 
                = __Vtemp45[6U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[7U] 
                = __Vtemp45[7U];
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__current_state))) {
            if (vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation) {
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[0U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[1U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[2U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[2U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[3U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[3U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[4U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[4U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[5U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[5U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[6U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[6U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[7U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[7U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[8U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[8U];
            }
        } else {
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[0U] 
                = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[1U] 
                = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[2U] 
                = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[2U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[3U] 
                = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[3U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[4U] 
                = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[4U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[5U] 
                = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[5U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[6U] 
                = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[6U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[7U] 
                = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[7U];
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[8U] 
                = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[8U];
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__current_state))) {
            if (vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation) {
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[0U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[1U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[2U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[2U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[3U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[3U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[4U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[4U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[5U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[5U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[6U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[6U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[7U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[7U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[8U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[8U];
            }
        } else {
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[0U] 
                = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[1U] 
                = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[2U] 
                = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[2U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[3U] 
                = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[3U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[4U] 
                = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[4U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[5U] 
                = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[5U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[6U] 
                = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[6U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[7U] 
                = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[7U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[8U] 
                = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[8U];
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__current_state))) {
            if (vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation) {
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[0U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[1U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[2U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[2U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[3U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[3U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[4U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[4U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[5U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[5U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[6U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[6U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[7U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[7U];
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[8U] 
                    = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[8U];
            }
        } else {
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[0U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[1U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[2U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[3U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[4U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[5U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[6U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[7U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[8U] = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__current_state))) {
            if (vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation) {
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[0U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[1U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[2U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[2U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[3U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[3U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[4U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[4U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[5U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[5U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[6U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[6U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[7U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[7U];
                vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[8U] 
                    = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[8U];
            }
        } else {
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[0U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[1U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[2U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[3U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[4U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[5U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[6U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[7U] = 0U;
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[8U] = 0U;
        }
    }
    if (vlTOPp->hmac_spongent__DOT__hash_1__DOT____Vcellinp__squeezing_phase_impl__rst) {
        __Vdly__hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout = 0U;
    } else {
        if (vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up) {
            __Vdly__hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout)));
        }
    }
    if (vlTOPp->hmac_spongent__DOT__hash_0__DOT____Vcellinp__squeezing_phase_impl__rst) {
        __Vdly__hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout = 0U;
    } else {
        if (vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up) {
            __Vdly__hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout)));
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__current_state))) {
            if (vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation) {
                VL_SHIFTL_WWI(256,256,32, __Vtemp47, vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result, 0x10U);
                VL_EXTEND_WI(256,16, __Vtemp48, (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result_chunk));
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[0U] 
                    = (__Vtemp47[0U] | __Vtemp48[0U]);
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[1U] 
                    = (__Vtemp47[1U] | __Vtemp48[1U]);
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[2U] 
                    = (__Vtemp47[2U] | __Vtemp48[2U]);
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[3U] 
                    = (__Vtemp47[3U] | __Vtemp48[3U]);
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[4U] 
                    = (__Vtemp47[4U] | __Vtemp48[4U]);
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[5U] 
                    = (__Vtemp47[5U] | __Vtemp48[5U]);
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[6U] 
                    = (__Vtemp47[6U] | __Vtemp48[6U]);
                vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[7U] 
                    = (__Vtemp47[7U] | __Vtemp48[7U]);
            }
        } else {
            VL_EXTEND_WI(256,16, __Vtemp49, (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result_chunk));
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[0U] 
                = __Vtemp49[0U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[1U] 
                = __Vtemp49[1U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[2U] 
                = __Vtemp49[2U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[3U] 
                = __Vtemp49[3U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[4U] 
                = __Vtemp49[4U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[5U] 
                = __Vtemp49[5U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[6U] 
                = __Vtemp49[6U];
            vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[7U] 
                = __Vtemp49[7U];
        }
    }
    if (vlTOPp->rst) {
        __Vdly__hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout = 0U;
    } else {
        if (vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up) {
            __Vdly__hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout 
                = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout)));
        }
    }
    if (vlTOPp->hmac_spongent__DOT__end_hash_0) {
        if (vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up) {
            vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout 
                = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout)));
        }
    } else {
        vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout = 0U;
    }
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg 
        = __Vdly__hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg 
        = __Vdly__hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__bit_xored 
        = (1U & VL_REDXOR_32((0x8eU & (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg))));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__bit_xored 
        = (1U & VL_REDXOR_32((0x8eU & (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg))));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__current_state 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT____Vcellinp__squeezing_phase_impl__rst)
            ? 0U : (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__current_state 
        = ((IData)(vlTOPp->rst) ? 0U : (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__current_state 
        = ((IData)(vlTOPp->hmac_spongent__DOT__end_hash_0)
            ? (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state)
            : 0U);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_o 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_o 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__current_state 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT____Vcellinp__squeezing_phase_impl__rst)
            ? 0U : (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_o 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_o 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter_state 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter_state 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state;
    vlTOPp->hmac_spongent__DOT__digest[0U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[0U];
    vlTOPp->hmac_spongent__DOT__digest[1U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[1U];
    vlTOPp->hmac_spongent__DOT__digest[2U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[2U];
    vlTOPp->hmac_spongent__DOT__digest[3U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[3U];
    vlTOPp->hmac_spongent__DOT__digest[4U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[4U];
    vlTOPp->hmac_spongent__DOT__digest[5U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[5U];
    vlTOPp->hmac_spongent__DOT__digest[6U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[6U];
    vlTOPp->hmac_spongent__DOT__digest[7U] = vlTOPp->hmac_spongent__DOT__hash_1__DOT__hash[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_squeezing 
        = ((0xfU <= (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_squeezing 
        = ((0xfU <= (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->hmac_spongent__DOT__hash_output_0[0U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[0U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[1U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[1U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[2U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[2U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[3U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[3U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[4U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[4U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[5U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[5U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[6U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[6U];
    vlTOPp->hmac_spongent__DOT__hash_output_0[7U] = 
        vlTOPp->hmac_spongent__DOT__hash_0__DOT__hash[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_absorbing 
        = ((0x15U == (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_absorbing 
        = ((0x21U == (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->digest[0U] = vlTOPp->hmac_spongent__DOT__digest[0U];
    vlTOPp->digest[1U] = vlTOPp->hmac_spongent__DOT__digest[1U];
    vlTOPp->digest[2U] = vlTOPp->hmac_spongent__DOT__digest[2U];
    vlTOPp->digest[3U] = vlTOPp->hmac_spongent__DOT__digest[3U];
    vlTOPp->digest[4U] = vlTOPp->hmac_spongent__DOT__digest[4U];
    vlTOPp->digest[5U] = vlTOPp->hmac_spongent__DOT__digest[5U];
    vlTOPp->digest[6U] = vlTOPp->hmac_spongent__DOT__digest[6U];
    vlTOPp->digest[7U] = vlTOPp->hmac_spongent__DOT__digest[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_hash 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_squeezing;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_hash 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_squeezing;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_absorbing;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_absorbing;
    vlTOPp->hmac_spongent__DOT__end_hmac = vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_hash;
    vlTOPp->hmac_spongent__DOT__end_hash_0 = vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_hash;
    vlTOPp->end_hmac = vlTOPp->hmac_spongent__DOT__end_hmac;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst = 
        (1U & (~ (IData)(vlTOPp->hmac_spongent__DOT__end_hash_0)));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT____Vcellinp__squeezing_phase_impl__rst 
        = (1U & ((~ (IData)(vlTOPp->hmac_spongent__DOT__end_hash_0)) 
                 | (~ (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing))));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT____Vcellinp__squeezing_phase_impl__rst;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__shift_lCounter 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.shift_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[2U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[3U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[4U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[5U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[6U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[7U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[8U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_permutation 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_permutation 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__shift 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__shift_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result_chunk 
        = ((0xff00U & (vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U] 
                       << 8U)) | (0xffU & ((vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[1U] 
                                            << 0x18U) 
                                           | (vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_state[0U] 
                                              >> 8U))));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__shift_lCounter 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.shift_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[2U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[3U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[4U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[5U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[6U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[7U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[8U] 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_permutation 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_permutation 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__shift 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__shift_lCounter;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result_chunk 
        = ((0xff00U & (vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U] 
                       << 8U)) | (0xffU & ((vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[1U] 
                                            << 0x18U) 
                                           | (vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_state[0U] 
                                              >> 8U))));
}

VL_INLINE_OPT void Vtop::_combo__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*351:0*/ __Vtemp52[11];
    WData/*287:0*/ __Vtemp55[9];
    WData/*543:0*/ __Vtemp59[17];
    WData/*543:0*/ __Vtemp60[17];
    WData/*543:0*/ __Vtemp64[17];
    WData/*287:0*/ __Vtemp67[9];
    // Body
    VL_SHIFTR_WWI(336,336,32, __Vtemp52, vlTOPp->hmac_spongent__DOT__hash_0__DOT__padded_msg, 
                  ((((IData)(0x15U) - (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_o)) 
                    - (IData)(1U)) << 4U));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__msg_chunk 
        = (0xffffU & __Vtemp52[0U]);
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[0U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[1U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[2U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[3U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[4U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[5U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[6U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_output_0[7U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[8U] 
        = vlTOPp->hmac_spongent__DOT__So[0U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[9U] 
        = vlTOPp->hmac_spongent__DOT__So[1U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xaU] 
        = vlTOPp->hmac_spongent__DOT__So[2U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xbU] 
        = vlTOPp->hmac_spongent__DOT__So[3U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xcU] 
        = vlTOPp->hmac_spongent__DOT__So[4U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xdU] 
        = vlTOPp->hmac_spongent__DOT__So[5U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xeU] 
        = vlTOPp->hmac_spongent__DOT__So[6U];
    vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xfU] 
        = vlTOPp->hmac_spongent__DOT__So[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT____Vcellinp__squeezing_phase_impl__rst 
        = (1U & ((IData)(vlTOPp->rst) | (~ (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing))));
    VL_EXTEND_WI(272,16, __Vtemp55, ((0xff00U & ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__msg_chunk) 
                                                 << 8U)) 
                                     | (0xffU & ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__msg_chunk) 
                                                 >> 8U))));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[0U] 
        = (__Vtemp55[0U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[0U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[1U] 
        = (__Vtemp55[1U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[1U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[2U] 
        = (__Vtemp55[2U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[2U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[3U] 
        = (__Vtemp55[3U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[3U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[4U] 
        = (__Vtemp55[4U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[4U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[5U] 
        = (__Vtemp55[5U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[5U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[6U] 
        = (__Vtemp55[6U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[6U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[7U] 
        = (__Vtemp55[7U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[7U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[8U] 
        = (__Vtemp55[8U] ^ vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[8U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[1U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[2U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[3U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[4U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[5U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[6U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[7U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[8U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[9U] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[9U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xaU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xaU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xbU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xbU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xcU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xcU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xdU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xdU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xeU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xeU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__msg[0xfU] 
        = vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg[0xfU];
    VL_EXTEND_WW(528,512, __Vtemp59, vlTOPp->hmac_spongent__DOT____Vcellinp__hash_1__msg);
    VL_SHIFTL_WWI(528,528,32, __Vtemp60, __Vtemp59, 0x10U);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0U] 
        = (0x8000U | __Vtemp60[0U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[1U] 
        = __Vtemp60[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[2U] 
        = __Vtemp60[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[3U] 
        = __Vtemp60[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[4U] 
        = __Vtemp60[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[5U] 
        = __Vtemp60[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[6U] 
        = __Vtemp60[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[7U] 
        = __Vtemp60[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[8U] 
        = __Vtemp60[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[9U] 
        = __Vtemp60[9U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xaU] 
        = __Vtemp60[0xaU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xbU] 
        = __Vtemp60[0xbU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xcU] 
        = __Vtemp60[0xcU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xdU] 
        = __Vtemp60[0xdU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xeU] 
        = __Vtemp60[0xeU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xfU] 
        = __Vtemp60[0xfU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0x10U] 
        = (0xffffU & __Vtemp60[0x10U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT____Vcellinp__squeezing_phase_impl__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[9U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[9U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xaU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xaU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xbU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xbU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xcU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xcU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xdU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xdU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xeU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xeU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0xfU] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0xfU];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[0x10U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg[0x10U];
    VL_SHIFTR_WWI(528,528,32, __Vtemp64, vlTOPp->hmac_spongent__DOT__hash_1__DOT__padded_msg, 
                  ((((IData)(0x21U) - (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_o)) 
                    - (IData)(1U)) << 4U));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__msg_chunk 
        = (0xffffU & __Vtemp64[0U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[0U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[0U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[0U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[1U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[1U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[1U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[2U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[2U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[2U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[3U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[3U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[3U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[4U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[4U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[4U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[5U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[5U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[5U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[6U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[6U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[6U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[7U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[7U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[7U]);
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[8U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[8U]
            : vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[8U]);
    VL_EXTEND_WI(272,16, __Vtemp67, ((0xff00U & ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__msg_chunk) 
                                                 << 8U)) 
                                     | (0xffU & ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__msg_chunk) 
                                                 >> 8U))));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[0U] 
        = (__Vtemp67[0U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[0U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[1U] 
        = (__Vtemp67[1U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[1U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[2U] 
        = (__Vtemp67[2U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[2U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[3U] 
        = (__Vtemp67[3U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[3U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[4U] 
        = (__Vtemp67[4U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[4U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[5U] 
        = (__Vtemp67[5U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[5U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[6U] 
        = (__Vtemp67[6U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[6U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[7U] 
        = (__Vtemp67[7U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[7U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[8U] 
        = (__Vtemp67[8U] ^ vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[8U]);
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[0U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[1U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[2U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[3U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[4U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[5U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[6U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[7U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.initial_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[3U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[4U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[5U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[6U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[7U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[8U];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[0U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[0U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[0U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[1U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[1U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[1U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[2U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[2U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[2U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[3U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[3U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[3U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[4U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[4U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[4U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[5U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[5U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[5U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[6U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[6U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[6U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[7U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[7U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[7U]);
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[8U] 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[8U]
            : vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[8U]);
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[0U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[0U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[1U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[1U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[2U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[2U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[3U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[3U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[4U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[4U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[5U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[5U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[6U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[6U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[7U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[7U];
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.initial_state[8U] 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[8U];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.lCounter_state 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__lCounter_state;
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.lCounter_state 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__lCounter_state;
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation) 
                             << 3U) | (((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_absorbing) 
                                        << 2U) | (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__current_state)));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx1];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_permutation) 
                             << 3U) | (((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_squeezing) 
                                        << 2U) | (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__current_state)));
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx2];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx2];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx2];
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_absorb 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_squezzing 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation;
    vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__end_absorbing)
            ? (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_squezzing)
            : (IData)(vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_absorb));
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.rst 
        = vlTOPp->hmac_spongent__DOT__hash_0__DOT__rst_permutation;
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation) 
                             << 3U) | (((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_absorbing) 
                                        << 2U) | (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__current_state)));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx3];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx3];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_permutation) 
                             << 3U) | (((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_squeezing) 
                                        << 2U) | (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__current_state)));
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx4];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx4];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx4];
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_absorb 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_squezzing 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation;
    vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation 
        = ((IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__end_absorbing)
            ? (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_squezzing)
            : (IData)(vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_absorb));
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.rst 
        = vlTOPp->hmac_spongent__DOT__hash_1__DOT__rst_permutation;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl._combo__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__3(vlSymsp);
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl._combo__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__3(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__clk)))) {
        vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl._sequent__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__9(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl__clk)))) {
        vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl._sequent__TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl__10(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__clk))) 
         | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))))) {
        vlTOPp->_multiclk__TOP__11(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl__clk))) 
         | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))))) {
        vlTOPp->_multiclk__TOP__12(vlSymsp);
    }
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl._combo__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__11(vlSymsp);
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl._combo__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__11(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__clk 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.clk;
    vlTOPp->__Vclklast__TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl__clk 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl._initial__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__1(vlSymsp);
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl._initial__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__clk 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl.clk;
    vlTOPp->__Vclklast__TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl__clk 
        = vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl.clk;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl._settle__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__5(vlSymsp);
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl._settle__TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl__6(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlSymsp->TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl._settle__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__7(vlSymsp);
    vlSymsp->TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl._settle__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__7(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    key = VL_RAND_RESET_Q(64);
    msg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, digest);
    end_hmac = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__key = VL_RAND_RESET_Q(64);
    hmac_spongent__DOT__msg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__digest);
    hmac_spongent__DOT__end_hmac = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__ipad);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__opad);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__Si);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__So);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__hash_output_0);
    hmac_spongent__DOT__end_hash_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, hmac_spongent__DOT____Vcellinp__hash_0__msg);
    VL_RAND_RESET_W(512, hmac_spongent__DOT____Vcellinp__hash_1__msg);
    hmac_spongent__DOT__hash_0__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, hmac_spongent__DOT__hash_0__DOT__msg);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__hash_0__DOT__hash);
    hmac_spongent__DOT__hash_0__DOT__end_hash = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__rst_lCounter = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__shift_lCounter = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__lCounter_state = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__permutation_state);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__permutation_initial_state);
    hmac_spongent__DOT__hash_0__DOT__end_permutation = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__rst_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(336, hmac_spongent__DOT__hash_0__DOT__padded_msg);
    hmac_spongent__DOT__hash_0__DOT__end_absorbing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__absorbing_state);
    hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_absorb = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb);
    hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_squezzing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing);
    hmac_spongent__DOT__hash_0__DOT____Vcellinp__squeezing_phase_impl__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__shift = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__feedback_coeff = VL_RAND_RESET_I(9);
    hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__initial_state = VL_RAND_RESET_I(8);
    hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state = VL_RAND_RESET_I(8);
    hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg = VL_RAND_RESET_I(8);
    hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__bit_xored = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(336, hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_absorbing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_o = VL_RAND_RESET_I(6);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__msg_chunk = VL_RAND_RESET_I(16);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__current_state = VL_RAND_RESET_I(2);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state = VL_RAND_RESET_I(2);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(6);
    hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(6);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_squeezing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_o = VL_RAND_RESET_I(5);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result_chunk = VL_RAND_RESET_I(16);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__current_state = VL_RAND_RESET_I(2);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state = VL_RAND_RESET_I(2);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(5);
    hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(5);
    hmac_spongent__DOT__hash_1__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, hmac_spongent__DOT__hash_1__DOT__msg);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__hash_1__DOT__hash);
    hmac_spongent__DOT__hash_1__DOT__end_hash = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__rst_lCounter = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__shift_lCounter = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__lCounter_state = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__permutation_state);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__permutation_initial_state);
    hmac_spongent__DOT__hash_1__DOT__end_permutation = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__rst_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(528, hmac_spongent__DOT__hash_1__DOT__padded_msg);
    hmac_spongent__DOT__hash_1__DOT__end_absorbing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__absorbing_state);
    hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_absorb = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb);
    hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_squezzing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing);
    hmac_spongent__DOT__hash_1__DOT____Vcellinp__squeezing_phase_impl__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__shift = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__feedback_coeff = VL_RAND_RESET_I(9);
    hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__initial_state = VL_RAND_RESET_I(8);
    hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state = VL_RAND_RESET_I(8);
    hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg = VL_RAND_RESET_I(8);
    hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__bit_xored = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(528, hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_absorbing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_o = VL_RAND_RESET_I(7);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__msg_chunk = VL_RAND_RESET_I(16);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__current_state = VL_RAND_RESET_I(2);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state = VL_RAND_RESET_I(2);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(7);
    hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(7);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_squeezing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_o = VL_RAND_RESET_I(5);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result_chunk = VL_RAND_RESET_I(16);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__current_state = VL_RAND_RESET_I(2);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state = VL_RAND_RESET_I(2);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(5);
    hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(5);
    __Vtableidx1 = 0;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[0] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[1] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[2] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[3] = 3U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[4] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[5] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[6] = 3U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[7] = 3U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[8] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[9] = 2U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[10] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[11] = 3U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[12] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[13] = 2U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[14] = 3U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[15] = 3U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[0] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[1] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[2] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[3] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[4] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[5] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[6] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[7] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[8] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[9] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[10] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[11] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[12] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[13] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[14] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[15] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[0] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[1] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[2] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[3] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[4] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[5] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[6] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[7] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[8] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[9] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[10] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[11] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[12] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[13] = 1U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[14] = 0U;
    __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[15] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[0] = 2U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[1] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[2] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[3] = 3U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[4] = 2U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[5] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[6] = 3U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[7] = 3U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[8] = 2U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[9] = 2U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[10] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[11] = 3U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[12] = 2U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[13] = 2U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[14] = 3U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[15] = 3U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[0] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[1] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[2] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[3] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[4] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[5] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[6] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[7] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[8] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[9] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[10] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[11] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[12] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[13] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[14] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[15] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[0] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[1] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[2] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[3] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[4] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[5] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[6] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[7] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[8] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[9] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[10] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[11] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[12] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[13] = 1U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[14] = 0U;
    __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[15] = 0U;
    __Vtableidx3 = 0;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[0] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[1] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[2] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[3] = 3U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[4] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[5] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[6] = 3U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[7] = 3U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[8] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[9] = 2U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[10] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[11] = 3U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[12] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[13] = 2U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[14] = 3U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[15] = 3U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[0] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[1] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[2] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[3] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[4] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[5] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[6] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[7] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[8] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[9] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[10] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[11] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[12] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[13] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[14] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[15] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[0] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[1] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[2] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[3] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[4] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[5] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[6] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[7] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[8] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[9] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[10] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[11] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[12] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[13] = 1U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[14] = 0U;
    __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[15] = 0U;
    __Vtableidx4 = 0;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[0] = 2U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[1] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[2] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[3] = 3U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[4] = 2U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[5] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[6] = 3U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[7] = 3U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[8] = 2U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[9] = 2U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[10] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[11] = 3U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[12] = 2U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[13] = 2U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[14] = 3U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[15] = 3U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[0] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[1] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[2] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[3] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[4] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[5] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[6] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[7] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[8] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[9] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[10] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[11] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[12] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[13] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[14] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[15] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[0] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[1] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[2] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[3] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[4] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[5] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[6] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[7] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[8] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[9] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[10] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[11] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[12] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[13] = 1U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[14] = 0U;
    __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[15] = 0U;
}
