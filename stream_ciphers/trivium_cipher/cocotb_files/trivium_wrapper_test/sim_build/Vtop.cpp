// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("../../hdl_code/trivium_wrapper.sv", 10, "",
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
            VL_FATAL_MT("../../hdl_code/trivium_wrapper.sv", 10, "",
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
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__cl = 0U;
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__shift_left = 0U;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__din[0U] = 0U;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__din[1U] = 0U;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__din[2U] = 0U;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__din[3U] = 0x7000U;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__down = 0U;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__din = 0U;
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__down = 0U;
    vlTOPp->trivium_wrapper__DOT__reg_in[0U] = 0U;
    vlTOPp->trivium_wrapper__DOT__reg_in[1U] = 0U;
    vlTOPp->trivium_wrapper__DOT__reg_in[2U] = 0U;
    vlTOPp->trivium_wrapper__DOT__counter_in = 0U;
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__din[0U] 
        = vlTOPp->trivium_wrapper__DOT__reg_in[0U];
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__din[1U] 
        = vlTOPp->trivium_wrapper__DOT__reg_in[1U];
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__din[2U] 
        = vlTOPp->trivium_wrapper__DOT__reg_in[2U];
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__din 
        = vlTOPp->trivium_wrapper__DOT__counter_in;
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp2[3];
    // Body
    vlTOPp->trivium_wrapper__DOT__next_data = vlTOPp->next_data;
    VL_EXTEND_WW(93,80, __Vtemp1, vlTOPp->key);
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__din[0U] 
        = __Vtemp1[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__din[1U] 
        = __Vtemp1[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__din[2U] 
        = __Vtemp1[2U];
    VL_EXTEND_WW(84,80, __Vtemp2, vlTOPp->iv);
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__din[0U] 
        = __Vtemp2[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__din[1U] 
        = __Vtemp2[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__din[2U] 
        = __Vtemp2[2U];
    vlTOPp->trivium_wrapper__DOT__key[0U] = vlTOPp->key[0U];
    vlTOPp->trivium_wrapper__DOT__key[1U] = vlTOPp->key[1U];
    vlTOPp->trivium_wrapper__DOT__key[2U] = vlTOPp->key[2U];
    vlTOPp->trivium_wrapper__DOT__iv[0U] = vlTOPp->iv[0U];
    vlTOPp->trivium_wrapper__DOT__iv[1U] = vlTOPp->iv[1U];
    vlTOPp->trivium_wrapper__DOT__iv[2U] = vlTOPp->iv[2U];
    vlTOPp->trivium_wrapper__DOT__rst = vlTOPp->rst;
    vlTOPp->trivium_wrapper__DOT__clk = vlTOPp->clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key[0U] 
        = vlTOPp->trivium_wrapper__DOT__key[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key[1U] 
        = vlTOPp->trivium_wrapper__DOT__key[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key[2U] 
        = vlTOPp->trivium_wrapper__DOT__key[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__iv[0U] 
        = vlTOPp->trivium_wrapper__DOT__iv[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__iv[1U] 
        = vlTOPp->trivium_wrapper__DOT__iv[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__iv[2U] 
        = vlTOPp->trivium_wrapper__DOT__iv[2U];
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__load 
        = vlTOPp->trivium_wrapper__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst 
        = vlTOPp->trivium_wrapper__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__load 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__load 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__load 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__rst 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    // Body
    vlTOPp->trivium_wrapper__DOT__next_data = vlTOPp->next_data;
    VL_EXTEND_WW(93,80, __Vtemp3, vlTOPp->key);
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__din[0U] 
        = __Vtemp3[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__din[1U] 
        = __Vtemp3[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__din[2U] 
        = __Vtemp3[2U];
    VL_EXTEND_WW(84,80, __Vtemp4, vlTOPp->iv);
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__din[0U] 
        = __Vtemp4[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__din[1U] 
        = __Vtemp4[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__din[2U] 
        = __Vtemp4[2U];
    vlTOPp->trivium_wrapper__DOT__key[0U] = vlTOPp->key[0U];
    vlTOPp->trivium_wrapper__DOT__key[1U] = vlTOPp->key[1U];
    vlTOPp->trivium_wrapper__DOT__key[2U] = vlTOPp->key[2U];
    vlTOPp->trivium_wrapper__DOT__iv[0U] = vlTOPp->iv[0U];
    vlTOPp->trivium_wrapper__DOT__iv[1U] = vlTOPp->iv[1U];
    vlTOPp->trivium_wrapper__DOT__iv[2U] = vlTOPp->iv[2U];
    vlTOPp->trivium_wrapper__DOT__rst = vlTOPp->rst;
    vlTOPp->trivium_wrapper__DOT__clk = vlTOPp->clk;
    vlTOPp->trivium_wrapper__DOT__end_block = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            vlTOPp->trivium_wrapper__DOT__end_block = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__counter_up = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (~ (IData)(vlTOPp->trivium_wrapper__DOT__current_state)))) {
            vlTOPp->trivium_wrapper__DOT__counter_up = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__block_o[0U] = vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__block_o[1U] = vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__block_o[2U] = vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__counter_out = vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__dout;
    vlTOPp->trivium_wrapper__DOT__counter_rst = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            vlTOPp->trivium_wrapper__DOT__counter_rst = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__trivium_en = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (~ (IData)(vlTOPp->trivium_wrapper__DOT__current_state)))) {
            vlTOPp->trivium_wrapper__DOT__trivium_en = 1U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            vlTOPp->trivium_wrapper__DOT__trivium_en = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[0U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[1U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[0U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[1U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[0U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[1U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[2U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[3U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[3U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_out 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout;
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__din[0U] 
        = vlTOPp->trivium_wrapper__DOT__reg_in[0U];
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__din[1U] 
        = vlTOPp->trivium_wrapper__DOT__reg_in[1U];
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__din[2U] 
        = vlTOPp->trivium_wrapper__DOT__reg_in[2U];
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__din 
        = vlTOPp->trivium_wrapper__DOT__counter_in;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key[0U] 
        = vlTOPp->trivium_wrapper__DOT__key[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key[1U] 
        = vlTOPp->trivium_wrapper__DOT__key[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key[2U] 
        = vlTOPp->trivium_wrapper__DOT__key[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__iv[0U] 
        = vlTOPp->trivium_wrapper__DOT__iv[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__iv[1U] 
        = vlTOPp->trivium_wrapper__DOT__iv[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__iv[2U] 
        = vlTOPp->trivium_wrapper__DOT__iv[2U];
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__load 
        = vlTOPp->trivium_wrapper__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst 
        = vlTOPp->trivium_wrapper__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__clk;
    vlTOPp->end_block = vlTOPp->trivium_wrapper__DOT__end_block;
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__up 
        = vlTOPp->trivium_wrapper__DOT__counter_up;
    vlTOPp->block_o[0U] = vlTOPp->trivium_wrapper__DOT__block_o[0U];
    vlTOPp->block_o[1U] = vlTOPp->trivium_wrapper__DOT__block_o[1U];
    vlTOPp->block_o[2U] = vlTOPp->trivium_wrapper__DOT__block_o[2U];
    vlTOPp->trivium_wrapper__DOT____Vcellinp__counter_impl__rst 
        = ((IData)(vlTOPp->rst) | (IData)(vlTOPp->trivium_wrapper__DOT__counter_rst));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__en 
        = vlTOPp->trivium_wrapper__DOT__trivium_en;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__a_and 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                  >> 0x1aU) & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                               >> 0x1bU)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__A_out 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                  >> 0x1cU) ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                               >> 1U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__b_and 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                  >> 0x11U) & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                               >> 0x12U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__B_out 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                  >> 0x13U) ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                               >> 4U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__c_and 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[3U] 
                  >> 0xcU) & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[3U] 
                              >> 0xdU)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__C_out 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[3U] 
                  >> 0xeU) ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[2U] 
                              >> 1U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete 
        = (0x480U == (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_out));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__load 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__load 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__load 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__rst 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__clk 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk;
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__rst 
        = vlTOPp->trivium_wrapper__DOT____Vcellinp__counter_impl__rst;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_B 
        = (1U & (((IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__A_out) 
                  ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__a_and)) 
                 ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                    >> 0xdU)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_C 
        = (1U & (((IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__B_out) 
                  ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__b_and)) 
                 ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[2U] 
                    >> 0x16U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_A 
        = (1U & (((IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__C_out) 
                  ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__c_and)) 
                 ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                    >> 4U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key_stream 
        = (((IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__A_out) 
            ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__B_out)) 
           ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__C_out));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__up 
        = (1U & (~ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift 
        = (1U & ((~ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete)) 
                 | (IData)(vlTOPp->trivium_wrapper__DOT__trivium_en)));
    vlTOPp->trivium_wrapper__DOT__warm_up_complete 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__input_bit 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_B;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__input_bit 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_C;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__input_bit 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_A;
    vlTOPp->trivium_wrapper__DOT__key_stream = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key_stream;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__shift 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__shift 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__shift 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift;
    vlTOPp->trivium_wrapper__DOT__next_state = vlTOPp->trivium_wrapper__DOT__current_state;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            if (vlTOPp->next_data) {
                vlTOPp->trivium_wrapper__DOT__next_state = 2U;
            }
        } else {
            if ((0x4eU == (IData)(vlTOPp->trivium_wrapper__DOT__counter_out))) {
                vlTOPp->trivium_wrapper__DOT__next_state = 3U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            if (vlTOPp->trivium_wrapper__DOT__warm_up_complete) {
                vlTOPp->trivium_wrapper__DOT__next_state = 2U;
            }
        } else {
            vlTOPp->trivium_wrapper__DOT__next_state = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__shift_right = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (~ (IData)(vlTOPp->trivium_wrapper__DOT__current_state)))) {
            vlTOPp->trivium_wrapper__DOT__shift_right = 1U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            if (vlTOPp->trivium_wrapper__DOT__warm_up_complete) {
                vlTOPp->trivium_wrapper__DOT__shift_right = 1U;
            }
        }
    }
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__input_bit 
        = vlTOPp->trivium_wrapper__DOT__key_stream;
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__shift_right 
        = vlTOPp->trivium_wrapper__DOT__shift_right;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vdly__trivium_wrapper__DOT__counter_impl__DOT__dout;
    SData/*10:0*/ __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout;
    WData/*79:0*/ __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[3];
    WData/*92:0*/ __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[3];
    WData/*83:0*/ __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[3];
    WData/*110:0*/ __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[4];
    WData/*95:0*/ __Vtemp13[3];
    WData/*95:0*/ __Vtemp18[3];
    // Body
    __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[0U] 
        = vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[0U];
    __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[1U] 
        = vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[1U];
    __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[2U] 
        = vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[2U];
    __Vdly__trivium_wrapper__DOT__counter_impl__DOT__dout 
        = vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__dout;
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[3U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[3U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[2U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[2U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[2U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[2U];
    __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout;
    if (vlTOPp->rst) {
        __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[0U] 
            = vlTOPp->trivium_wrapper__DOT__reg_in[0U];
        __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[1U] 
            = vlTOPp->trivium_wrapper__DOT__reg_in[1U];
        __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[2U] 
            = vlTOPp->trivium_wrapper__DOT__reg_in[2U];
    } else {
        if (vlTOPp->trivium_wrapper__DOT__shift_right) {
            vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__output_bit 
                = (1U & vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[0U]);
            __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[0U] 
                = ((vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[1U] 
                    << 0x1fU) | (vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[0U] 
                                 >> 1U));
            __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[1U] 
                = ((vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[2U] 
                    << 0x1fU) | (vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[1U] 
                                 >> 1U));
            __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[2U] 
                = ((0xffff8000U & ((IData)(vlTOPp->trivium_wrapper__DOT__key_stream) 
                                   << 0xfU)) | (0x7fffU 
                                                & (vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[2U] 
                                                   >> 1U)));
        }
    }
    if (vlTOPp->trivium_wrapper__DOT____Vcellinp__counter_impl__rst) {
        __Vdly__trivium_wrapper__DOT__counter_impl__DOT__dout 
            = vlTOPp->trivium_wrapper__DOT__counter_in;
    } else {
        if (vlTOPp->trivium_wrapper__DOT__counter_up) {
            __Vdly__trivium_wrapper__DOT__counter_impl__DOT__dout 
                = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__dout)));
        }
    }
    vlTOPp->trivium_wrapper__DOT__current_state = ((IData)(vlTOPp->rst)
                                                    ? 0U
                                                    : (IData)(vlTOPp->trivium_wrapper__DOT__next_state));
    if (vlTOPp->rst) {
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U] = 0U;
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U] = 0U;
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U] = 0U;
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[3U] = 0x7000U;
    } else {
        if (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift) {
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U] 
                = ((0xfffffffeU & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U] 
                                   << 1U)) | (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_C));
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U] 
                = ((1U & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U] 
                          >> 0x1fU)) | (0xfffffffeU 
                                        & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U] 
                                           << 1U)));
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U] 
                = ((1U & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U] 
                          >> 0x1fU)) | (0xfffffffeU 
                                        & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U] 
                                           << 1U)));
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[3U] 
                = ((1U & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U] 
                          >> 0x1fU)) | (0x7ffeU & (
                                                   vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[3U] 
                                                   << 1U)));
        }
    }
    if (vlTOPp->rst) {
        VL_EXTEND_WW(84,80, __Vtemp13, vlTOPp->iv);
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U] 
            = __Vtemp13[0U];
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U] 
            = __Vtemp13[1U];
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[2U] 
            = __Vtemp13[2U];
    } else {
        if (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift) {
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U] 
                = ((0xfffffffeU & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U] 
                                   << 1U)) | (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_B));
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U] 
                = ((1U & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U] 
                          >> 0x1fU)) | (0xfffffffeU 
                                        & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U] 
                                           << 1U)));
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[2U] 
                = ((1U & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U] 
                          >> 0x1fU)) | (0xffffeU & 
                                        (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[2U] 
                                         << 1U)));
        }
    }
    if (vlTOPp->rst) {
        VL_EXTEND_WW(93,80, __Vtemp18, vlTOPp->key);
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U] 
            = __Vtemp18[0U];
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U] 
            = __Vtemp18[1U];
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[2U] 
            = __Vtemp18[2U];
    } else {
        if (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift) {
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U] 
                = ((0xfffffffeU & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U] 
                                   << 1U)) | (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_A));
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U] 
                = ((1U & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U] 
                          >> 0x1fU)) | (0xfffffffeU 
                                        & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U] 
                                           << 1U)));
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[2U] 
                = ((1U & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U] 
                          >> 0x1fU)) | (0x1ffffffeU 
                                        & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[2U] 
                                           << 1U)));
        }
    }
    if (vlTOPp->rst) {
        __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete)))) {
            __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout 
                = (0x7ffU & ((IData)(1U) + (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout)));
        }
    }
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[0U] 
        = __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[1U] 
        = __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[2U] 
        = __Vdly__trivium_wrapper__DOT__reg_impl__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__dout 
        = __Vdly__trivium_wrapper__DOT__counter_impl__DOT__dout;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[3U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[3U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[2U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[2U] 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout 
        = __Vdly__trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout;
    vlTOPp->trivium_wrapper__DOT__block_o[0U] = vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__block_o[1U] = vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__block_o[2U] = vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__counter_out = vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__dout;
    vlTOPp->trivium_wrapper__DOT__end_block = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            vlTOPp->trivium_wrapper__DOT__end_block = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__counter_up = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (~ (IData)(vlTOPp->trivium_wrapper__DOT__current_state)))) {
            vlTOPp->trivium_wrapper__DOT__counter_up = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__counter_rst = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            vlTOPp->trivium_wrapper__DOT__counter_rst = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__trivium_en = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (~ (IData)(vlTOPp->trivium_wrapper__DOT__current_state)))) {
            vlTOPp->trivium_wrapper__DOT__trivium_en = 1U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            vlTOPp->trivium_wrapper__DOT__trivium_en = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[0U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[1U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[2U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[3U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[3U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[0U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[1U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[0U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[0U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[1U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[1U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[2U];
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_out 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout;
    vlTOPp->block_o[0U] = vlTOPp->trivium_wrapper__DOT__block_o[0U];
    vlTOPp->block_o[1U] = vlTOPp->trivium_wrapper__DOT__block_o[1U];
    vlTOPp->block_o[2U] = vlTOPp->trivium_wrapper__DOT__block_o[2U];
    vlTOPp->end_block = vlTOPp->trivium_wrapper__DOT__end_block;
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__up 
        = vlTOPp->trivium_wrapper__DOT__counter_up;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__en 
        = vlTOPp->trivium_wrapper__DOT__trivium_en;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__c_and 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[3U] 
                  >> 0xcU) & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[3U] 
                              >> 0xdU)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__C_out 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[3U] 
                  >> 0xeU) ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[2U] 
                              >> 1U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__b_and 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                  >> 0x11U) & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                               >> 0x12U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__B_out 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                  >> 0x13U) ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                               >> 4U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__a_and 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                  >> 0x1aU) & (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                               >> 0x1bU)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__A_out 
        = (1U & ((vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                  >> 0x1cU) ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                               >> 1U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete 
        = (0x480U == (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_out));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_A 
        = (1U & (((IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__C_out) 
                  ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__c_and)) 
                 ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A[2U] 
                    >> 4U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_C 
        = (1U & (((IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__B_out) 
                  ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__b_and)) 
                 ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C[2U] 
                    >> 0x16U)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_B 
        = (1U & (((IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__A_out) 
                  ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__a_and)) 
                 ^ (vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B[2U] 
                    >> 0xdU)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key_stream 
        = (((IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__A_out) 
            ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__B_out)) 
           ^ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__C_out));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__up 
        = (1U & (~ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete)));
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift 
        = (1U & ((~ (IData)(vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete)) 
                 | (IData)(vlTOPp->trivium_wrapper__DOT__trivium_en)));
    vlTOPp->trivium_wrapper__DOT__warm_up_complete 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__input_bit 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_A;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__input_bit 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_C;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__input_bit 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_B;
    vlTOPp->trivium_wrapper__DOT__key_stream = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__key_stream;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__shift 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__shift 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift;
    vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__shift 
        = vlTOPp->trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift;
    vlTOPp->trivium_wrapper__DOT__shift_right = 0U;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (~ (IData)(vlTOPp->trivium_wrapper__DOT__current_state)))) {
            vlTOPp->trivium_wrapper__DOT__shift_right = 1U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            if (vlTOPp->trivium_wrapper__DOT__warm_up_complete) {
                vlTOPp->trivium_wrapper__DOT__shift_right = 1U;
            }
        }
    }
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__input_bit 
        = vlTOPp->trivium_wrapper__DOT__key_stream;
    vlTOPp->trivium_wrapper__DOT__reg_impl__DOT__shift_right 
        = vlTOPp->trivium_wrapper__DOT__shift_right;
}

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->trivium_wrapper__DOT____Vcellinp__counter_impl__rst 
        = ((IData)(vlTOPp->rst) | (IData)(vlTOPp->trivium_wrapper__DOT__counter_rst));
    vlTOPp->trivium_wrapper__DOT__next_state = vlTOPp->trivium_wrapper__DOT__current_state;
    if ((2U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            if (vlTOPp->next_data) {
                vlTOPp->trivium_wrapper__DOT__next_state = 2U;
            }
        } else {
            if ((0x4eU == (IData)(vlTOPp->trivium_wrapper__DOT__counter_out))) {
                vlTOPp->trivium_wrapper__DOT__next_state = 3U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->trivium_wrapper__DOT__current_state))) {
            if (vlTOPp->trivium_wrapper__DOT__warm_up_complete) {
                vlTOPp->trivium_wrapper__DOT__next_state = 2U;
            }
        } else {
            vlTOPp->trivium_wrapper__DOT__next_state = 1U;
        }
    }
    vlTOPp->trivium_wrapper__DOT__counter_impl__DOT__rst 
        = vlTOPp->trivium_wrapper__DOT____Vcellinp__counter_impl__rst;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
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
    if (VL_UNLIKELY((key[2U] & 0xffff0000U))) {
        Verilated::overWidthError("key");}
    if (VL_UNLIKELY((iv[2U] & 0xffff0000U))) {
        Verilated::overWidthError("iv");}
    if (VL_UNLIKELY((next_data & 0xfeU))) {
        Verilated::overWidthError("next_data");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, key);
    VL_RAND_RESET_W(80, iv);
    next_data = VL_RAND_RESET_I(1);
    end_block = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, block_o);
    trivium_wrapper__DOT__clk = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, trivium_wrapper__DOT__key);
    VL_RAND_RESET_W(80, trivium_wrapper__DOT__iv);
    trivium_wrapper__DOT__next_data = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__end_block = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, trivium_wrapper__DOT__block_o);
    VL_RAND_RESET_W(80, trivium_wrapper__DOT__reg_in);
    trivium_wrapper__DOT__shift_right = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__key_stream = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_en = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__warm_up_complete = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__counter_out = VL_RAND_RESET_I(7);
    trivium_wrapper__DOT__counter_in = VL_RAND_RESET_I(7);
    trivium_wrapper__DOT__counter_up = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__stop_value = VL_RAND_RESET_I(7);
    trivium_wrapper__DOT__counter_rst = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT____Vcellinp__counter_impl__rst = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__current_state = VL_RAND_RESET_I(2);
    trivium_wrapper__DOT__next_state = VL_RAND_RESET_I(2);
    trivium_wrapper__DOT__reg_impl__DOT__clk = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__reg_impl__DOT__cl = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__reg_impl__DOT__shift_right = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__reg_impl__DOT__shift_left = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__reg_impl__DOT__load = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__reg_impl__DOT__input_bit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, trivium_wrapper__DOT__reg_impl__DOT__din);
    trivium_wrapper__DOT__reg_impl__DOT__output_bit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, trivium_wrapper__DOT__reg_impl__DOT__dout);
    trivium_wrapper__DOT__trivium_impl__DOT__clk = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__rst = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, trivium_wrapper__DOT__trivium_impl__DOT__key);
    VL_RAND_RESET_W(80, trivium_wrapper__DOT__trivium_impl__DOT__iv);
    trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__key_stream = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__input_bit_A = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(93, trivium_wrapper__DOT__trivium_impl__DOT__dout_A);
    trivium_wrapper__DOT__trivium_impl__DOT__input_bit_B = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(84, trivium_wrapper__DOT__trivium_impl__DOT__dout_B);
    trivium_wrapper__DOT__trivium_impl__DOT__input_bit_C = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(111, trivium_wrapper__DOT__trivium_impl__DOT__dout_C);
    trivium_wrapper__DOT__trivium_impl__DOT__a_and = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__b_and = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__c_and = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__A_out = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__B_out = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__C_out = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__counter_out = VL_RAND_RESET_I(11);
    trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__clk = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__shift = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__load = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__input_bit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(93, trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__din);
    VL_RAND_RESET_W(93, trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout);
    trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__clk = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__shift = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__load = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__input_bit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(84, trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__din);
    VL_RAND_RESET_W(84, trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout);
    trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__clk = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__shift = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__load = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__input_bit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(111, trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__din);
    VL_RAND_RESET_W(111, trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout);
    trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__clk = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__rst = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__up = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__down = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__din = VL_RAND_RESET_I(11);
    trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout = VL_RAND_RESET_I(11);
    trivium_wrapper__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    trivium_wrapper__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(7);
    trivium_wrapper__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(7);
}
