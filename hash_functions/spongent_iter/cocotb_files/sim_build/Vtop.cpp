// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

CData/*3:0*/ Vtop::__Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[16];
CData/*1:0*/ Vtop::__Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[16];
CData/*0:0*/ Vtop::__Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[16];
CData/*0:0*/ Vtop::__Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[16];

//--------------------

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

//--------------------


void Vtop::eval() {
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
            VL_FATAL_MT("../hdl_code/spongent_iter.sv", 19, "",
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
            VL_FATAL_MT("../hdl_code/spongent_iter.sv", 19, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->spongent_iter__DOT__lCounter__DOT__feedback_coeff = 0x61U;
    vlTOPp->spongent_iter__DOT__lCounter__DOT__initial_state = 5U;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__down = 0U;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__din = 0U;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down = 0U;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din = 0U;
    vlTOPp->spongent_iter__DOT__last_padded_data = 0x80U;
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->spongent_iter__DOT__rst = vlTOPp->rst;
    vlTOPp->spongent_iter__DOT__data_input = vlTOPp->data_input;
    vlTOPp->spongent_iter__DOT__data_ready = vlTOPp->data_ready;
    vlTOPp->spongent_iter__DOT__start_hash = vlTOPp->start_hash;
    vlTOPp->spongent_iter__DOT__clk = vlTOPp->clk;
    vlTOPp->spongent_iter__DOT__lCounter__DOT__clk 
        = vlTOPp->spongent_iter__DOT__clk;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__clk 
        = vlTOPp->spongent_iter__DOT__clk;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__clk 
        = vlTOPp->spongent_iter__DOT__clk;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__clk;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__clk;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp3[3];
    // Body
    vlTOPp->spongent_iter__DOT__rst = vlTOPp->rst;
    vlTOPp->spongent_iter__DOT__data_input = vlTOPp->data_input;
    vlTOPp->spongent_iter__DOT__data_ready = vlTOPp->data_ready;
    vlTOPp->spongent_iter__DOT__start_hash = vlTOPp->start_hash;
    vlTOPp->spongent_iter__DOT__clk = vlTOPp->clk;
    vlTOPp->spongent_iter__DOT__lCounter__DOT__bit_xored 
        = (1U & VL_REDXOR_32((0x30U & (IData)(vlTOPp->spongent_iter__DOT__lCounter__DOT__state_reg))));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(0U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 4U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(4U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 8U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(8U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                         << ((IData)(0x20U) 
                                             - (IData)(0xcU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x10U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x10U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x14U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x14U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x18U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x18U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x1cU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x1cU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(0U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 4U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(4U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 8U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(8U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                         << ((IData)(0x20U) 
                                             - (IData)(0xcU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x10U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x10U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x14U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x14U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x18U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x18U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x1cU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x1cU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(0U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 4U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(4U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 8U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(8U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                         << ((IData)(0x20U) 
                                             - (IData)(0xcU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x10U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x10U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x14U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x14U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0x14U)));
    vlTOPp->spongent_iter__DOT__digest[0U] = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[0U];
    vlTOPp->spongent_iter__DOT__digest[1U] = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[1U];
    vlTOPp->spongent_iter__DOT__digest[2U] = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[2U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[0U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[1U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[2U];
    VL_EXTEND_WI(88,8, __Vtemp1, (IData)(vlTOPp->data_input));
    vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[0U] 
        = (__Vtemp1[0U] ^ vlTOPp->spongent_iter__DOT__state[0U]);
    vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[1U] 
        = (__Vtemp1[1U] ^ vlTOPp->spongent_iter__DOT__state[1U]);
    vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[2U] 
        = (__Vtemp1[2U] ^ vlTOPp->spongent_iter__DOT__state[2U]);
    vlTOPp->spongent_iter__DOT__lCounter__DOT__state 
        = vlTOPp->spongent_iter__DOT__lCounter__DOT__state_reg;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_o 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->__Vtableidx1 = (0xfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U]);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0x1cU) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                  >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx3 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0x18U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                  >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0x14U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                  >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx4];
    vlTOPp->__Vtableidx5 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0x10U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                  >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx5];
    vlTOPp->__Vtableidx6 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0xcU) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                 >> 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx6];
    vlTOPp->__Vtableidx7 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 8U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                               >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx7];
    vlTOPp->__Vtableidx8 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 4U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                               >> 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx8];
    vlTOPp->__Vtableidx9 = (0xfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U]);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx9];
    vlTOPp->__Vtableidx10 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0x1cU) | (
                                                   vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                   >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx10];
    vlTOPp->__Vtableidx11 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0x18U) | (
                                                   vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                   >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx11];
    vlTOPp->__Vtableidx12 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0x14U) | (
                                                   vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                   >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx12];
    vlTOPp->__Vtableidx13 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0x10U) | (
                                                   vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                   >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx13];
    vlTOPp->__Vtableidx14 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0xcU) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                  >> 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx14];
    vlTOPp->__Vtableidx15 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 8U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx15];
    vlTOPp->__Vtableidx16 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 4U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                >> 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx16];
    vlTOPp->__Vtableidx17 = (0xfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U]);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx17];
    vlTOPp->__Vtableidx18 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 4U));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx18];
    vlTOPp->__Vtableidx19 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 8U));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx19];
    vlTOPp->__Vtableidx20 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 0xcU));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx20];
    vlTOPp->__Vtableidx21 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 0x10U));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx21];
    vlTOPp->__Vtableidx22 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 0x14U));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx22];
    vlTOPp->spongent_iter__DOT__busy = 1U;
    if ((0U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        vlTOPp->spongent_iter__DOT__busy = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((2U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if ((3U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    vlTOPp->spongent_iter__DOT__busy = 0U;
                } else {
                    if ((4U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        if ((5U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            vlTOPp->spongent_iter__DOT__busy = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spongent_iter__DOT__end_hash = 0U;
    if ((0U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        if ((1U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((2U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if ((3U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    if ((4U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        if ((5U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            vlTOPp->spongent_iter__DOT__end_hash = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spongent_iter__DOT__rst_squezzing = 1U;
    if ((0U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        if ((1U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((2U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if ((3U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    if ((4U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        vlTOPp->spongent_iter__DOT__rst_squezzing = 0U;
                    } else {
                        if ((5U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            vlTOPp->spongent_iter__DOT__rst_squezzing = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
    if ((0U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((1U & ((~ (IData)(vlTOPp->data_ready)) 
                       | (IData)(vlTOPp->start_hash)))) {
                vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 0U;
                } else {
                    if ((4U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        if ((5U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            if ((6U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                                vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    VL_EXTEND_WI(88,8, __Vtemp3, (IData)(vlTOPp->spongent_iter__DOT__last_padded_data));
    vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[0U] 
        = (__Vtemp3[0U] ^ vlTOPp->spongent_iter__DOT__state[0U]);
    vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[1U] 
        = (__Vtemp3[1U] ^ vlTOPp->spongent_iter__DOT__state[1U]);
    vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[2U] 
        = (__Vtemp3[2U] ^ vlTOPp->spongent_iter__DOT__state[2U]);
    vlTOPp->spongent_iter__DOT__lCounter__DOT__clk 
        = vlTOPp->spongent_iter__DOT__clk;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__clk 
        = vlTOPp->spongent_iter__DOT__clk;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__clk 
        = vlTOPp->spongent_iter__DOT__clk;
    vlTOPp->digest[0U] = vlTOPp->spongent_iter__DOT__digest[0U];
    vlTOPp->digest[1U] = vlTOPp->spongent_iter__DOT__digest[1U];
    vlTOPp->digest[2U] = vlTOPp->spongent_iter__DOT__digest[2U];
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[0U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[1U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[2U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->spongent_iter__DOT__lCounter_state = vlTOPp->spongent_iter__DOT__lCounter__DOT__state;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing 
        = ((0xaU <= (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation 
        = ((0x2dU == (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xfffffff0U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xffffff0fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout) 
                             << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xfffff0ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xffffff00U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout) 
                             << 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xffff0fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xfffff000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout) 
                             << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xfff0ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xffff0000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout) 
                             << 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xff0fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xfff00000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout) 
                             << 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xf0ffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xff000000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout) 
                             << 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xf0000000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout) 
                             << 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xfffffff0U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xffffff0fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout) 
                             << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xfffff0ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xffffff00U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout) 
                             << 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xffff0fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xfffff000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout) 
                             << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xfff0ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xffff0000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout) 
                             << 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xff0fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xfff00000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout) 
                             << 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xf0ffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xff000000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout) 
                             << 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xf0000000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout) 
                             << 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xfffff0U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xffff0fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout) 
                             << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xfff0ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xffffff00U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout) 
                             << 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xff0fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xfffff000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout) 
                             << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xf0ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xffff0000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout) 
                             << 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xfff00000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout) 
                             << 0x14U)));
    vlTOPp->busy = vlTOPp->spongent_iter__DOT__busy;
    vlTOPp->end_hash = vlTOPp->spongent_iter__DOT__end_hash;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst 
        = vlTOPp->spongent_iter__DOT__rst_squezzing;
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[0U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__last_block)
            ? vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[0U]
            : vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[0U]);
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[1U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__last_block)
            ? vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[1U]
            : vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[1U]);
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[2U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__last_block)
            ? vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[2U]
            : vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[2U]);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__clk;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__clk;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__lCounter_state 
        = vlTOPp->spongent_iter__DOT__lCounter_state;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x3eU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (1U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                    >> 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x3dU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (2U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                    >> 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x3bU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (4U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                    >> 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x37U & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (8U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                    << 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x2fU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (0x10U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                       << 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x1fU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (0x20U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                       << 5U)));
    vlTOPp->spongent_iter__DOT__end_squeezing = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__up 
        = (1U & (~ (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__shift_lCounter 
        = (1U & (~ (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation)));
    vlTOPp->spongent_iter__DOT__end_permutation = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffffeU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (1U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffbfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x400000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                           << 0x15U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffefffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x1000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffffbU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (4U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffffdU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (2U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xff7fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x800000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                           << 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffdfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x2000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffff7U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (8U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffffbU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (4U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 6U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfeffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x1000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffbfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x4000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffffefU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x10U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffff7U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (8U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfdffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x2000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffff7fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x8000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffffdfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x20U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffffefU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x10U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfbffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x4000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffeffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x10000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 2U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffffbfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x40U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xdU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffffdfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x20U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xf7ffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x8000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 6U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffdffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x20000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffff7fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x80U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffffbfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x40U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xefffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x10000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                             << 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffbffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x40000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffeffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x100U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                        >> 0x13U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffff7fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x80U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0x15U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xdfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x20000000U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfff7ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x80000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 0xbU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffdffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x200U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                        >> 0x16U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffeffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x100U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xbfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x40000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                             << 0x1dU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffefffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x100000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffbffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x400U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffdffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x200U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0x7fffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x80000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                             << 0x1aU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffdfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x200000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfff7ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x800U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffbffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x400U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 2U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffffeU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (1U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffbfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x400000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffefffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x1000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         << 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffff7ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x800U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        >> 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffffdU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (2U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xff7fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x800000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffdfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x2000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 2U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffefffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x1000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffffbU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (4U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfeffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x1000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                            << 6U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffbfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x4000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffdfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x2000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffff7U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (8U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfdffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x2000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                            << 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xff7fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x8000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffbfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x4000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffffefU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x10U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                       >> 0x15U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfbffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x4000000U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfeffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x10000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                          >> 0xbU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffff7fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x8000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 0xdU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffffdfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x20U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                       >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xf7ffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x8000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                            >> 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfdffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x20000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                          >> 0xeU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffeffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x10000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffffbfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x40U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                       << 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xefffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x10000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x1aU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfbffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x40000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffdffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x20000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xdU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffff7fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x80U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                       << 2U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xdfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x20000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x17U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xf7ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x80000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffbffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x40000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffeffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x100U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xbfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x40000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xefffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x100000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfff7ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x80000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffdffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x200U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0x7fffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x80000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x11U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xdfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x200000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 6U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffefffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x100000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffbffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x400U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffffeU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (1U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                    >> 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xbfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x400000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffdfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x200000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffff7ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x800U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffffdU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (2U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                    >> 0x15U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0x7fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x800000U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]));
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst;
    vlTOPp->spongent_iter__DOT__permutation_initial_state[0U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__begin_squeezing)
            ? vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[0U]
            : vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[0U]);
    vlTOPp->spongent_iter__DOT__permutation_initial_state[1U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__begin_squeezing)
            ? vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[1U]
            : vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[1U]);
    vlTOPp->spongent_iter__DOT__permutation_initial_state[2U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__begin_squeezing)
            ? vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[2U]
            : vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[2U]);
    vlTOPp->spongent_iter__DOT__shift_lCounter = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__shift_lCounter;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_permutation 
        = vlTOPp->spongent_iter__DOT__end_permutation;
    vlTOPp->__Vtableidx23 = (((IData)(vlTOPp->spongent_iter__DOT__end_permutation) 
                              << 3U) | (((IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing) 
                                         << 2U) | (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state)));
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx23];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx23];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx23];
    vlTOPp->spongent_iter__DOT__next_state = vlTOPp->spongent_iter__DOT__current_state;
    if ((0U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        if (vlTOPp->data_ready) {
            vlTOPp->spongent_iter__DOT__next_state = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((1U & ((~ (IData)(vlTOPp->data_ready)) 
                       | (IData)(vlTOPp->start_hash)))) {
                vlTOPp->spongent_iter__DOT__next_state = 2U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if (vlTOPp->spongent_iter__DOT__end_permutation) {
                    vlTOPp->spongent_iter__DOT__next_state = 3U;
                }
            } else {
                if ((3U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    if (vlTOPp->spongent_iter__DOT__last_block) {
                        vlTOPp->spongent_iter__DOT__next_state = 6U;
                    } else {
                        if (((IData)(vlTOPp->data_ready) 
                             | (IData)(vlTOPp->start_hash))) {
                            vlTOPp->spongent_iter__DOT__next_state = 1U;
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        if (vlTOPp->spongent_iter__DOT__end_squeezing) {
                            vlTOPp->spongent_iter__DOT__next_state = 5U;
                        }
                    } else {
                        if ((5U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            if ((6U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                                vlTOPp->spongent_iter__DOT__next_state = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__initial_state[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_initial_state[0U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__initial_state[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_initial_state[1U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__initial_state[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_initial_state[2U];
    vlTOPp->spongent_iter__DOT__lCounter__DOT__shift 
        = vlTOPp->spongent_iter__DOT__shift_lCounter;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up;
    vlTOPp->spongent_iter__DOT__rst_permutation_from_squezzing 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation;
    vlTOPp->spongent_iter__DOT__permutation_state[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[0U];
    vlTOPp->spongent_iter__DOT__permutation_state[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[1U];
    vlTOPp->spongent_iter__DOT__permutation_state[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[2U];
    vlTOPp->spongent_iter__DOT__rst_permutation = ((IData)(vlTOPp->spongent_iter__DOT__begin_squeezing)
                                                    ? (IData)(vlTOPp->spongent_iter__DOT__rst_permutation_from_squezzing)
                                                    : (IData)(vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb));
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_state[0U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_state[1U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_state[2U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk 
        = (0xffU & vlTOPp->spongent_iter__DOT__permutation_state[0U]);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__rst 
        = vlTOPp->spongent_iter__DOT__rst_permutation;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__rst_lCounter 
        = vlTOPp->spongent_iter__DOT__rst_permutation;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__rst;
    vlTOPp->spongent_iter__DOT__rst_lCounter = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__rst_lCounter;
    vlTOPp->spongent_iter__DOT__lCounter__DOT__rst 
        = vlTOPp->spongent_iter__DOT__rst_lCounter;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg;
    CData/*5:0*/ __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
    CData/*4:0*/ __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    WData/*87:0*/ __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[3];
    WData/*95:0*/ __Vtemp9[3];
    WData/*95:0*/ __Vtemp10[3];
    WData/*95:0*/ __Vtemp12[3];
    WData/*95:0*/ __Vtemp14[3];
    WData/*95:0*/ __Vtemp16[3];
    WData/*95:0*/ __Vtemp17[3];
    WData/*95:0*/ __Vtemp21[3];
    WData/*95:0*/ __Vtemp23[3];
    WData/*95:0*/ __Vtemp24[3];
    WData/*95:0*/ __Vtemp27[3];
    // Body
    __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg 
        = vlTOPp->spongent_iter__DOT__lCounter__DOT__state_reg;
    __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
    __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U];
    __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U];
    __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U];
    if (vlTOPp->spongent_iter__DOT__rst_lCounter) {
        __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg = 5U;
    } else {
        if (vlTOPp->spongent_iter__DOT__shift_lCounter) {
            __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg 
                = ((0x3eU & ((IData)(vlTOPp->spongent_iter__DOT__lCounter__DOT__state_reg) 
                             << 1U)) | (IData)(vlTOPp->spongent_iter__DOT__lCounter__DOT__bit_xored));
        }
    }
    if ((0U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        vlTOPp->spongent_iter__DOT__begin_squeezing = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((2U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if ((3U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    if (vlTOPp->spongent_iter__DOT__last_block) {
                        vlTOPp->spongent_iter__DOT__begin_squeezing = 1U;
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        vlTOPp->spongent_iter__DOT__state[0U] = 0U;
        vlTOPp->spongent_iter__DOT__state[1U] = 0U;
        vlTOPp->spongent_iter__DOT__state[2U] = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((2U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if (vlTOPp->spongent_iter__DOT__end_permutation) {
                    vlTOPp->spongent_iter__DOT__state[0U] 
                        = vlTOPp->spongent_iter__DOT__permutation_state[0U];
                    vlTOPp->spongent_iter__DOT__state[1U] 
                        = vlTOPp->spongent_iter__DOT__permutation_state[1U];
                    vlTOPp->spongent_iter__DOT__state[2U] 
                        = vlTOPp->spongent_iter__DOT__permutation_state[2U];
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state))) {
            if (vlTOPp->spongent_iter__DOT__end_permutation) {
                VL_SHIFTL_WWI(88,88,32, __Vtemp9, vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result, 8U);
                VL_EXTEND_WI(88,8, __Vtemp10, (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk));
                vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[0U] 
                    = (__Vtemp9[0U] | __Vtemp10[0U]);
                vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[1U] 
                    = (__Vtemp9[1U] | __Vtemp10[1U]);
                vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[2U] 
                    = (0xffffffU & (__Vtemp9[2U] | 
                                    __Vtemp10[2U]));
            }
        } else {
            VL_EXTEND_WI(88,8, __Vtemp12, (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk));
            vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[0U] 
                = __Vtemp12[0U];
            vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[1U] 
                = __Vtemp12[1U];
            vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[2U] 
                = __Vtemp12[2U];
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state))) {
            if (vlTOPp->spongent_iter__DOT__end_permutation) {
                vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[0U] 
                    = vlTOPp->spongent_iter__DOT__permutation_state[0U];
                vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[1U] 
                    = vlTOPp->spongent_iter__DOT__permutation_state[1U];
                vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[2U] 
                    = vlTOPp->spongent_iter__DOT__permutation_state[2U];
            }
        } else {
            vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[0U] 
                = vlTOPp->spongent_iter__DOT__permutation_state[0U];
            vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[1U] 
                = vlTOPp->spongent_iter__DOT__permutation_state[1U];
            vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[2U] 
                = vlTOPp->spongent_iter__DOT__permutation_state[2U];
        }
    }
    if (vlTOPp->spongent_iter__DOT__rst_squezzing) {
        __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout = 0U;
    } else {
        if (vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up) {
            __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout)));
        }
    }
    if (vlTOPp->spongent_iter__DOT__rst_permutation) {
        __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation)))) {
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout 
                = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout)));
        }
    }
    if (vlTOPp->spongent_iter__DOT__rst_permutation) {
        __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
            = vlTOPp->spongent_iter__DOT__permutation_initial_state[0U];
        __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
            = vlTOPp->spongent_iter__DOT__permutation_initial_state[1U];
        __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
            = vlTOPp->spongent_iter__DOT__permutation_initial_state[2U];
    } else {
        if (((~ (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation)) 
             & (0U == (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_o)))) {
            VL_EXTEND_WI(88,6, __Vtemp14, (IData)(vlTOPp->spongent_iter__DOT__lCounter_state));
            VL_EXTEND_WI(88,6, __Vtemp16, (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter));
            VL_SHIFTL_WWI(88,88,32, __Vtemp17, __Vtemp16, 0x52U);
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                = ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                    ^ __Vtemp14[0U]) ^ __Vtemp17[0U]);
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                = ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                    ^ __Vtemp14[1U]) ^ __Vtemp17[1U]);
            __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                = (0xffffffU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                 ^ __Vtemp14[2U]) ^ 
                                __Vtemp17[2U]));
        } else {
            if ((1U & (~ (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation)))) {
                VL_EXTEND_WI(88,6, __Vtemp21, (IData)(vlTOPp->spongent_iter__DOT__lCounter_state));
                VL_EXTEND_WI(88,6, __Vtemp23, (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter));
                VL_SHIFTL_WWI(88,88,32, __Vtemp24, __Vtemp23, 0x52U);
                __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                    = ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[0U] 
                        ^ __Vtemp21[0U]) ^ __Vtemp24[0U]);
                __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                    = ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[1U] 
                        ^ __Vtemp21[1U]) ^ __Vtemp24[1U]);
                __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                    = (0xffffffU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[2U] 
                                     ^ __Vtemp21[2U]) 
                                    ^ __Vtemp24[2U]));
            }
        }
    }
    vlTOPp->spongent_iter__DOT__lCounter__DOT__state_reg 
        = __Vdly__spongent_iter__DOT__lCounter__DOT__state_reg;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
        = __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[0U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
        = __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[1U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
        = __Vdly__spongent_iter__DOT__permutation_impl__DOT__state_reg[2U];
    vlTOPp->spongent_iter__DOT__lCounter__DOT__bit_xored 
        = (1U & VL_REDXOR_32((0x30U & (IData)(vlTOPp->spongent_iter__DOT__lCounter__DOT__state_reg))));
    vlTOPp->spongent_iter__DOT__lCounter__DOT__state 
        = vlTOPp->spongent_iter__DOT__lCounter__DOT__state_reg;
    if ((0U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        vlTOPp->spongent_iter__DOT__last_block = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((2U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if ((3U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    if (vlTOPp->start_hash) {
                        vlTOPp->spongent_iter__DOT__last_block = 1U;
                    }
                }
            }
        }
    }
    VL_EXTEND_WI(88,8, __Vtemp27, (IData)(vlTOPp->spongent_iter__DOT__last_padded_data));
    vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[0U] 
        = (__Vtemp27[0U] ^ vlTOPp->spongent_iter__DOT__state[0U]);
    vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[1U] 
        = (__Vtemp27[1U] ^ vlTOPp->spongent_iter__DOT__state[1U]);
    vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[2U] 
        = (__Vtemp27[2U] ^ vlTOPp->spongent_iter__DOT__state[2U]);
    vlTOPp->spongent_iter__DOT__digest[0U] = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[0U];
    vlTOPp->spongent_iter__DOT__digest[1U] = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[1U];
    vlTOPp->spongent_iter__DOT__digest[2U] = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result[2U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[0U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[1U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state[2U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state 
        = ((IData)(vlTOPp->spongent_iter__DOT__rst_squezzing)
            ? 0U : (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__next_state));
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_o 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(0U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 4U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(4U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 8U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(8U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                         << ((IData)(0x20U) 
                                             - (IData)(0xcU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x10U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x10U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x14U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x14U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x18U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x18U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x1cU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x1cU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                      >> 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(0U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 4U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(4U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 8U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(8U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                         << ((IData)(0x20U) 
                                             - (IData)(0xcU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x10U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x10U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x14U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x14U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x18U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x18U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x1cU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x1cU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                      >> 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(0U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 4U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(4U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 8U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                       << ((IData)(0x20U) 
                                           - (IData)(8U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                         << ((IData)(0x20U) 
                                             - (IData)(0xcU)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x10U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x10U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__din 
        = (0xfU & (((0U == 0x14U) ? 0U : (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[3U] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0x14U)))) 
                   | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                      >> 0x14U)));
    vlTOPp->__Vtableidx1 = (0xfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U]);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0x1cU) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                  >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx3 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0x18U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                  >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0x14U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                  >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx4];
    vlTOPp->__Vtableidx5 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0x10U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                  >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx5];
    vlTOPp->__Vtableidx6 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 0xcU) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                                 >> 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx6];
    vlTOPp->__Vtableidx7 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 8U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                               >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx7];
    vlTOPp->__Vtableidx8 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                     << 4U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[0U] 
                                               >> 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx8];
    vlTOPp->__Vtableidx9 = (0xfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U]);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx9];
    vlTOPp->__Vtableidx10 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0x1cU) | (
                                                   vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                   >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx10];
    vlTOPp->__Vtableidx11 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0x18U) | (
                                                   vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                   >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx11];
    vlTOPp->__Vtableidx12 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0x14U) | (
                                                   vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                   >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx12];
    vlTOPp->__Vtableidx13 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0x10U) | (
                                                   vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                   >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx13];
    vlTOPp->__Vtableidx14 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 0xcU) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                  >> 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx14];
    vlTOPp->__Vtableidx15 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 8U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx15];
    vlTOPp->__Vtableidx16 = (0xfU & ((vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                      << 4U) | (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[1U] 
                                                >> 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx16];
    vlTOPp->__Vtableidx17 = (0xfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U]);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx17];
    vlTOPp->__Vtableidx18 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 4U));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx18];
    vlTOPp->__Vtableidx19 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 8U));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx19];
    vlTOPp->__Vtableidx20 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 0xcU));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx20];
    vlTOPp->__Vtableidx21 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 0x10U));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx21];
    vlTOPp->__Vtableidx22 = (0xfU & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg[2U] 
                                     >> 0x14U));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout 
        = vlTOPp->__Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout
        [vlTOPp->__Vtableidx22];
    vlTOPp->spongent_iter__DOT__lCounter_state = vlTOPp->spongent_iter__DOT__lCounter__DOT__state;
    vlTOPp->digest[0U] = vlTOPp->spongent_iter__DOT__digest[0U];
    vlTOPp->digest[1U] = vlTOPp->spongent_iter__DOT__digest[1U];
    vlTOPp->digest[2U] = vlTOPp->spongent_iter__DOT__digest[2U];
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[0U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[0U];
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[1U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[1U];
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[2U] 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state[2U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing 
        = ((0xaU <= (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation 
        = ((0x2dU == (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_o))
            ? 1U : 0U);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xfffffff0U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xffffff0fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout) 
                             << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xfffff0ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xffffff00U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout) 
                             << 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xffff0fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xfffff000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout) 
                             << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xfff0ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xffff0000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout) 
                             << 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xff0fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xfff00000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout) 
                             << 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xf0ffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xff000000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout) 
                             << 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
        = ((0xfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]) 
           | (0xf0000000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout) 
                             << 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xfffffff0U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xffffff0fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout) 
                             << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xfffff0ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xffffff00U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout) 
                             << 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xffff0fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xfffff000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout) 
                             << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xfff0ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xffff0000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout) 
                             << 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xff0fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xfff00000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout) 
                             << 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xf0ffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xff000000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout) 
                             << 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
        = ((0xfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]) 
           | (0xf0000000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout) 
                             << 0x1cU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xfffff0U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xffff0fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout) 
                             << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xfff0ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xffffff00U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout) 
                             << 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xff0fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xfffff000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout) 
                             << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xf0ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xffff0000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout) 
                             << 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
        = ((0xfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]) 
           | (0xfff00000U & ((IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout) 
                             << 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__lCounter_state 
        = vlTOPp->spongent_iter__DOT__lCounter_state;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x3eU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (1U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                    >> 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x3dU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (2U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                    >> 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x3bU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (4U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                    >> 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x37U & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (8U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                    << 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x2fU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (0x10U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                       << 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter 
        = ((0x1fU & (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter)) 
           | (0x20U & ((IData)(vlTOPp->spongent_iter__DOT__lCounter_state) 
                       << 5U)));
    vlTOPp->spongent_iter__DOT__current_state = ((IData)(vlTOPp->rst)
                                                  ? 0U
                                                  : (IData)(vlTOPp->spongent_iter__DOT__next_state));
    vlTOPp->spongent_iter__DOT__end_squeezing = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__up 
        = (1U & (~ (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__shift_lCounter 
        = (1U & (~ (IData)(vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation)));
    vlTOPp->spongent_iter__DOT__end_permutation = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffffeU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (1U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffbfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x400000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                           << 0x15U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffefffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x1000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffffbU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (4U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffffdU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (2U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xff7fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x800000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                           << 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffdfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x2000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffff7U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (8U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffffbU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (4U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 6U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfeffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x1000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffbfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x4000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffffefU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x10U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffff7U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (8U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                    >> 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfdffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x2000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffff7fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x8000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                         << 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffffdfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x20U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffffefU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x10U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfbffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x4000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffeffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x10000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 2U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffffbfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x40U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xdU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffffdfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x20U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xf7ffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x8000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                            << 6U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffdffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x20000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffff7fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x80U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffffbfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x40U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xefffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x10000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                             << 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffbffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x40000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffeffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x100U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                        >> 0x13U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffff7fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x80U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                       >> 0x15U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xdfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x20000000U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U]));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfff7ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x80000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                          >> 0xbU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffdffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x200U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[0U] 
                        >> 0x16U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffeffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x100U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xbfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x40000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                             << 0x1dU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffefffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x100000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffbffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x400U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffdffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x200U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0x7fffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x80000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                             << 0x1aU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffdfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x200000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfff7ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x800U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffffbffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x400U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        << 2U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffffeU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (1U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffbfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x400000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffefffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x1000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         << 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffff7ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x800U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                        >> 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffffdU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (2U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xff7fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x800000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                           << 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffdfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x2000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 2U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffefffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x1000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffffbU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (4U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfeffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x1000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                            << 6U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xffbfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x4000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffdfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x2000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffff7U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (8U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                    >> 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfdffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x2000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                            << 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xff7fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x8000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 8U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffffbfffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x4000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffffefU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x10U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                       >> 0x15U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfbffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x4000000U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U]));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfeffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x10000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                          >> 0xbU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffff7fffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x8000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                         >> 0xdU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffffdfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x20U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                       >> 0x18U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xf7ffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x8000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                            >> 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfdffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x20000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[1U] 
                          >> 0xeU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffeffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x10000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0x10U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffffbfU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x40U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                       << 5U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xefffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x10000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x1aU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfbffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x40000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xfU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffdffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x20000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xdU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xffffff7fU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x80U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                       << 2U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xdfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x20000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x17U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xf7ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x80000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xcU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfffbffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x40000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffeffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x100U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xbfffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x40000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x14U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xefffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x100000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 9U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xfff7ffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x80000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                          << 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffdffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x200U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0x7fffffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x80000000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                             << 0x11U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xdfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x200000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 6U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffefffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x100000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 4U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffffbffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x400U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 7U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffffeU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (1U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                    >> 0x12U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xbfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x400000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 3U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U] 
        = ((0xffdfffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U]) 
           | (0x200000U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                           << 1U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U] 
        = ((0xfffff7ffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U]) 
           | (0x800U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                        >> 0xaU)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0xfffffdU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (2U & (vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U] 
                    >> 0x15U)));
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U] 
        = ((0x7fffffU & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U]) 
           | (0x800000U & vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box[2U]));
    vlTOPp->spongent_iter__DOT__shift_lCounter = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__shift_lCounter;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_permutation 
        = vlTOPp->spongent_iter__DOT__end_permutation;
    vlTOPp->__Vtableidx23 = (((IData)(vlTOPp->spongent_iter__DOT__end_permutation) 
                              << 3U) | (((IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing) 
                                         << 2U) | (IData)(vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state)));
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__next_state 
        = vlTOPp->__Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state
        [vlTOPp->__Vtableidx23];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation 
        = vlTOPp->__Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation
        [vlTOPp->__Vtableidx23];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up 
        = vlTOPp->__Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up
        [vlTOPp->__Vtableidx23];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[0U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[1U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout[2U];
    vlTOPp->spongent_iter__DOT__busy = 1U;
    if ((0U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        vlTOPp->spongent_iter__DOT__busy = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((2U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if ((3U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    vlTOPp->spongent_iter__DOT__busy = 0U;
                } else {
                    if ((4U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        if ((5U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            vlTOPp->spongent_iter__DOT__busy = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spongent_iter__DOT__end_hash = 0U;
    if ((0U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        if ((1U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((2U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if ((3U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    if ((4U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        if ((5U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            vlTOPp->spongent_iter__DOT__end_hash = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spongent_iter__DOT__rst_squezzing = 1U;
    if ((0U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        if ((1U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((2U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if ((3U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    if ((4U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        vlTOPp->spongent_iter__DOT__rst_squezzing = 0U;
                    } else {
                        if ((5U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            vlTOPp->spongent_iter__DOT__rst_squezzing = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spongent_iter__DOT__lCounter__DOT__shift 
        = vlTOPp->spongent_iter__DOT__shift_lCounter;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up;
    vlTOPp->spongent_iter__DOT__rst_permutation_from_squezzing 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation;
    vlTOPp->spongent_iter__DOT__permutation_state[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[0U];
    vlTOPp->spongent_iter__DOT__permutation_state[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[1U];
    vlTOPp->spongent_iter__DOT__permutation_state[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__state[2U];
    vlTOPp->busy = vlTOPp->spongent_iter__DOT__busy;
    vlTOPp->end_hash = vlTOPp->spongent_iter__DOT__end_hash;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst 
        = vlTOPp->spongent_iter__DOT__rst_squezzing;
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_state[0U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_state[1U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_state[2U];
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk 
        = (0xffU & vlTOPp->spongent_iter__DOT__permutation_state[0U]);
    vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst;
}

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp29[3];
    // Body
    VL_EXTEND_WI(88,8, __Vtemp29, (IData)(vlTOPp->data_input));
    vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[0U] 
        = (__Vtemp29[0U] ^ vlTOPp->spongent_iter__DOT__state[0U]);
    vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[1U] 
        = (__Vtemp29[1U] ^ vlTOPp->spongent_iter__DOT__state[1U]);
    vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[2U] 
        = (__Vtemp29[2U] ^ vlTOPp->spongent_iter__DOT__state[2U]);
    vlTOPp->spongent_iter__DOT__next_state = vlTOPp->spongent_iter__DOT__current_state;
    if ((0U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        if (vlTOPp->data_ready) {
            vlTOPp->spongent_iter__DOT__next_state = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((1U & ((~ (IData)(vlTOPp->data_ready)) 
                       | (IData)(vlTOPp->start_hash)))) {
                vlTOPp->spongent_iter__DOT__next_state = 2U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                if (vlTOPp->spongent_iter__DOT__end_permutation) {
                    vlTOPp->spongent_iter__DOT__next_state = 3U;
                }
            } else {
                if ((3U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    if (vlTOPp->spongent_iter__DOT__last_block) {
                        vlTOPp->spongent_iter__DOT__next_state = 6U;
                    } else {
                        if (((IData)(vlTOPp->data_ready) 
                             | (IData)(vlTOPp->start_hash))) {
                            vlTOPp->spongent_iter__DOT__next_state = 1U;
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        if (vlTOPp->spongent_iter__DOT__end_squeezing) {
                            vlTOPp->spongent_iter__DOT__next_state = 5U;
                        }
                    } else {
                        if ((5U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            if ((6U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                                vlTOPp->spongent_iter__DOT__next_state = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
    if ((0U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
        vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
            if ((1U & ((~ (IData)(vlTOPp->data_ready)) 
                       | (IData)(vlTOPp->start_hash)))) {
                vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 1U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                    vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 0U;
                } else {
                    if ((4U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                        if ((5U != (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                            if ((6U == (IData)(vlTOPp->spongent_iter__DOT__current_state))) {
                                vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[0U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__last_block)
            ? vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[0U]
            : vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[0U]);
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[1U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__last_block)
            ? vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[1U]
            : vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[1U]);
    vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[2U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__last_block)
            ? vlTOPp->spongent_iter__DOT__last_initial_state_from_absorb[2U]
            : vlTOPp->spongent_iter__DOT__standart_initial_state_from_absorb[2U]);
    vlTOPp->spongent_iter__DOT__rst_permutation = ((IData)(vlTOPp->spongent_iter__DOT__begin_squeezing)
                                                    ? (IData)(vlTOPp->spongent_iter__DOT__rst_permutation_from_squezzing)
                                                    : (IData)(vlTOPp->spongent_iter__DOT__rst_permutation_from_absorb));
    vlTOPp->spongent_iter__DOT__permutation_initial_state[0U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__begin_squeezing)
            ? vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[0U]
            : vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[0U]);
    vlTOPp->spongent_iter__DOT__permutation_initial_state[1U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__begin_squeezing)
            ? vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[1U]
            : vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[1U]);
    vlTOPp->spongent_iter__DOT__permutation_initial_state[2U] 
        = ((IData)(vlTOPp->spongent_iter__DOT__begin_squeezing)
            ? vlTOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing[2U]
            : vlTOPp->spongent_iter__DOT__permutation_initial_state_from_absorb[2U]);
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__rst 
        = vlTOPp->spongent_iter__DOT__rst_permutation;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__rst_lCounter 
        = vlTOPp->spongent_iter__DOT__rst_permutation;
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__initial_state[0U] 
        = vlTOPp->spongent_iter__DOT__permutation_initial_state[0U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__initial_state[1U] 
        = vlTOPp->spongent_iter__DOT__permutation_initial_state[1U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__initial_state[2U] 
        = vlTOPp->spongent_iter__DOT__permutation_initial_state[2U];
    vlTOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__rst;
    vlTOPp->spongent_iter__DOT__rst_lCounter = vlTOPp->spongent_iter__DOT__permutation_impl__DOT__rst_lCounter;
    vlTOPp->spongent_iter__DOT__lCounter__DOT__rst 
        = vlTOPp->spongent_iter__DOT__rst_lCounter;
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
    if (VL_UNLIKELY((data_ready & 0xfeU))) {
        Verilated::overWidthError("data_ready");}
    if (VL_UNLIKELY((start_hash & 0xfeU))) {
        Verilated::overWidthError("start_hash");}
}
#endif // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    data_input = VL_RAND_RESET_I(8);
    data_ready = VL_RAND_RESET_I(1);
    start_hash = VL_RAND_RESET_I(1);
    busy = VL_RAND_RESET_I(1);
    end_hash = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, digest);
    spongent_iter__DOT__clk = VL_RAND_RESET_I(1);
    spongent_iter__DOT__rst = VL_RAND_RESET_I(1);
    spongent_iter__DOT__data_input = VL_RAND_RESET_I(8);
    spongent_iter__DOT__data_ready = VL_RAND_RESET_I(1);
    spongent_iter__DOT__start_hash = VL_RAND_RESET_I(1);
    spongent_iter__DOT__busy = VL_RAND_RESET_I(1);
    spongent_iter__DOT__end_hash = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, spongent_iter__DOT__digest);
    spongent_iter__DOT__rst_lCounter = VL_RAND_RESET_I(1);
    spongent_iter__DOT__shift_lCounter = VL_RAND_RESET_I(1);
    spongent_iter__DOT__lCounter_state = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_state);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_initial_state);
    spongent_iter__DOT__rst_permutation = VL_RAND_RESET_I(1);
    spongent_iter__DOT__end_permutation = VL_RAND_RESET_I(1);
    spongent_iter__DOT__rst_squezzing = VL_RAND_RESET_I(1);
    spongent_iter__DOT__rst_permutation_from_squezzing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_initial_state_from_squezzing);
    spongent_iter__DOT__end_squeezing = VL_RAND_RESET_I(1);
    spongent_iter__DOT__rst_permutation_from_absorb = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_initial_state_from_absorb);
    spongent_iter__DOT__begin_squeezing = VL_RAND_RESET_I(1);
    spongent_iter__DOT__last_block = VL_RAND_RESET_I(1);
    spongent_iter__DOT__last_padded_data = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(88, spongent_iter__DOT__state);
    spongent_iter__DOT__current_state = VL_RAND_RESET_I(4);
    spongent_iter__DOT__next_state = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(88, spongent_iter__DOT__standart_initial_state_from_absorb);
    VL_RAND_RESET_W(88, spongent_iter__DOT__last_initial_state_from_absorb);
    spongent_iter__DOT__lCounter__DOT__clk = VL_RAND_RESET_I(1);
    spongent_iter__DOT__lCounter__DOT__rst = VL_RAND_RESET_I(1);
    spongent_iter__DOT__lCounter__DOT__shift = VL_RAND_RESET_I(1);
    spongent_iter__DOT__lCounter__DOT__feedback_coeff = VL_RAND_RESET_I(7);
    spongent_iter__DOT__lCounter__DOT__initial_state = VL_RAND_RESET_I(6);
    spongent_iter__DOT__lCounter__DOT__state = VL_RAND_RESET_I(6);
    spongent_iter__DOT__lCounter__DOT__state_reg = VL_RAND_RESET_I(6);
    spongent_iter__DOT__lCounter__DOT__bit_xored = VL_RAND_RESET_I(1);
    spongent_iter__DOT__permutation_impl__DOT__clk = VL_RAND_RESET_I(1);
    spongent_iter__DOT__permutation_impl__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_impl__DOT__initial_state);
    spongent_iter__DOT__permutation_impl__DOT__lCounter_state = VL_RAND_RESET_I(6);
    spongent_iter__DOT__permutation_impl__DOT__rst_lCounter = VL_RAND_RESET_I(1);
    spongent_iter__DOT__permutation_impl__DOT__shift_lCounter = VL_RAND_RESET_I(1);
    spongent_iter__DOT__permutation_impl__DOT__end_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_impl__DOT__state);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_impl__DOT__state_reg);
    spongent_iter__DOT__permutation_impl__DOT__counter_o = VL_RAND_RESET_I(6);
    spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_impl__DOT__state_S_box);
    spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(6);
    spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din);
    VL_RAND_RESET_W(88, spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__din = VL_RAND_RESET_I(4);
    spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout = VL_RAND_RESET_I(4);
    spongent_iter__DOT__squeezing_phase_impl__DOT__clk = VL_RAND_RESET_I(1);
    spongent_iter__DOT__squeezing_phase_impl__DOT__rst = VL_RAND_RESET_I(1);
    spongent_iter__DOT__squeezing_phase_impl__DOT__end_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state);
    spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state);
    spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, spongent_iter__DOT__squeezing_phase_impl__DOT__result);
    spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o = VL_RAND_RESET_I(5);
    spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, spongent_iter__DOT__squeezing_phase_impl__DOT__state);
    spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk = VL_RAND_RESET_I(8);
    spongent_iter__DOT__squeezing_phase_impl__DOT__current_state = VL_RAND_RESET_I(2);
    spongent_iter__DOT__squeezing_phase_impl__DOT__next_state = VL_RAND_RESET_I(2);
    spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(5);
    spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(5);
    __Vtableidx1 = 0;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable1_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx2 = 0;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable2_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx3 = 0;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable3_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx4 = 0;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable4_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx5 = 0;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable5_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx6 = 0;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable6_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx7 = 0;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable7_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx8 = 0;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable8_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx9 = 0;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable9_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx10 = 0;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable10_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx11 = 0;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable11_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx12 = 0;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable12_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx13 = 0;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable13_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx14 = 0;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable14_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx15 = 0;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable15_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx16 = 0;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable16_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx17 = 0;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable17_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx18 = 0;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable18_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx19 = 0;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable19_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx20 = 0;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable20_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx21 = 0;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable21_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx22 = 0;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[0] = 0xeU;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[1] = 0xdU;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[2] = 0xbU;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[3] = 0U;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[4] = 2U;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[5] = 1U;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[6] = 4U;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[7] = 0xfU;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[8] = 7U;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[9] = 0xaU;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[10] = 8U;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[11] = 5U;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[12] = 9U;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[13] = 0xcU;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[14] = 3U;
    __Vtable22_spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[15] = 6U;
    __Vtableidx23 = 0;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[0] = 2U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[1] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[2] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[3] = 3U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[4] = 2U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[5] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[6] = 3U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[7] = 3U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[8] = 2U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[9] = 2U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[10] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[11] = 3U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[12] = 2U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[13] = 2U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[14] = 3U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__next_state[15] = 3U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[0] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[1] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[2] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[3] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[4] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[5] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[6] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[7] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[8] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[9] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[10] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[11] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[12] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[13] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[14] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation[15] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[0] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[1] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[2] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[3] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[4] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[5] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[6] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[7] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[8] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[9] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[10] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[11] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[12] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[13] = 1U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[14] = 0U;
    __Vtable23_spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up[15] = 0U;
}
