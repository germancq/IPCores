// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

CData/*3:0*/ Vtop::__Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[16];
CData/*3:0*/ Vtop::__Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[16];

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
            VL_FATAL_MT("../hdl_code/present_ctr.sv", 9, "",
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
            VL_FATAL_MT("../hdl_code/present_ctr.sv", 9, "",
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
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__down = 0U;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__din = 0U;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__start_signal = 1U;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__down = 0U;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__din = 0U;
    vlTOPp->present_ctr__DOT__reg_end_signal__DOT__din = 1U;
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->present_ctr__DOT__block_i = vlTOPp->block_i;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0U)));
    vlTOPp->present_ctr__DOT__IV = vlTOPp->IV;
    vlTOPp->present_ctr__DOT__block_number = vlTOPp->block_number;
    vlTOPp->present_ctr__DOT__key[0U] = vlTOPp->key[0U];
    vlTOPp->present_ctr__DOT__key[1U] = vlTOPp->key[1U];
    vlTOPp->present_ctr__DOT__key[2U] = vlTOPp->key[2U];
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 1U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 1U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 2U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 2U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 3U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 3U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 4U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 4U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 5U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 5U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 6U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 6U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 7U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 7U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 8U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 8U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 9U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 9U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xaU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xaU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xbU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xbU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xcU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xcU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xdU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xdU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xeU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xeU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xfU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xfU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x10U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x10U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x11U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x11U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x12U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x12U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x13U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x13U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x14U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x14U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x15U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x15U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x16U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x16U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x17U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x17U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x18U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x18U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x19U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x19U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x20U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x20U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x21U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x21U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x22U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x22U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x23U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x23U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x24U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x24U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x25U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x25U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x26U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x26U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x27U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x27U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x28U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x28U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x29U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x29U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x30U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x30U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x31U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x31U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x32U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x32U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x33U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x33U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x34U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x34U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x35U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x35U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x36U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x36U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x37U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x37U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x38U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x38U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x39U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x39U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3fU)));
    vlTOPp->present_ctr__DOT__rst = vlTOPp->rst;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 1U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 1U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 2U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 2U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 3U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 3U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 4U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 4U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 5U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 5U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 6U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 6U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 7U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 7U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 8U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 8U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 9U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 9U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xaU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xaU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xbU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xbU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xcU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xcU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xdU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xdU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xeU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xeU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xfU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xfU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x10U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x10U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x11U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x11U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x12U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x12U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x13U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x13U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x14U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x14U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x15U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x15U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x16U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x16U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x17U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x17U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x18U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x18U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x19U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x19U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1aU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1bU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1cU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1dU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1eU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1fU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x20U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x20U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x21U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x21U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x22U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x22U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x23U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x23U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x24U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x24U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x25U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x25U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x26U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x26U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x27U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x27U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x28U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x28U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x29U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x29U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2aU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2bU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2cU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2dU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2eU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2fU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x30U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x30U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x31U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x31U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x32U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x32U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x33U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x33U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x34U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x34U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x35U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x35U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x36U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x36U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x37U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x37U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x38U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x38U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x39U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x39U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3aU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3bU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3cU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3dU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3eU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3fU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3fU))));
    vlTOPp->present_ctr__DOT__clk = vlTOPp->clk;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__s 
        = (1U & ((IData)(vlTOPp->IV) ^ (IData)(vlTOPp->block_number)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 1U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 1U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 2U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 2U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 3U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 3U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 4U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 4U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 5U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 5U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 6U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 6U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 7U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 7U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 8U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 8U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 9U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 9U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xaU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xaU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xbU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xbU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xcU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xcU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xdU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xdU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xeU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xeU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xfU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xfU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x10U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x10U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x11U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x11U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x12U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x12U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x13U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x13U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x14U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x14U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x15U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x15U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x16U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x16U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x17U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x17U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x18U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x18U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x19U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x19U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1aU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1bU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1cU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1dU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1eU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1fU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x20U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x20U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x21U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x21U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x22U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x22U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x23U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x23U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x24U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x24U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x25U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x25U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x26U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x26U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x27U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x27U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x28U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x28U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x29U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x29U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2aU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2bU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2cU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2dU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2eU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2fU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x30U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x30U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x31U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x31U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x32U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x32U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x33U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x33U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x34U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x34U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x35U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x35U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x36U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x36U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x37U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x37U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x38U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x38U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x39U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x39U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3aU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3bU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3cU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3dU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3eU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3fU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__carry 
        = (1U & ((IData)(vlTOPp->IV) & (IData)(vlTOPp->block_number)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__a = vlTOPp->present_ctr__DOT__IV;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__b = vlTOPp->present_ctr__DOT__block_number;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key[0U] 
        = vlTOPp->present_ctr__DOT__key[0U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key[1U] 
        = vlTOPp->present_ctr__DOT__key[1U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key[2U] 
        = vlTOPp->present_ctr__DOT__key[2U];
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__result__DOT__cl = vlTOPp->present_ctr__DOT__rst;
    vlTOPp->present_ctr__DOT__reg_end_signal__DOT__cl 
        = vlTOPp->present_ctr__DOT__rst;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__rst 
        = vlTOPp->present_ctr__DOT__rst;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__result__DOT__clk = vlTOPp->present_ctr__DOT__clk;
    vlTOPp->present_ctr__DOT__reg_end_signal__DOT__clk 
        = vlTOPp->present_ctr__DOT__clk;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__clk;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__clk;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffffe) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | (IData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__s)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | (IData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__carry)));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__rst;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__clk 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__clk 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__c = 
        (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                       >> 0x3fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 1U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 2U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 3U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 4U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 5U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 6U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 7U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 8U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 9U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xaU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xbU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xcU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xdU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xeU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xfU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x10U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x11U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x12U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x13U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x14U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x15U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x16U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x17U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x18U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x19U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x20U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x21U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x22U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x23U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x24U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x25U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x26U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x27U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x28U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x29U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x30U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x31U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x32U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x33U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x34U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x35U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x36U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x37U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x38U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x39U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
           & (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 1U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 2U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 3U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 4U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 5U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 6U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 7U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 8U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 9U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xaU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xbU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xcU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xdU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xeU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xfU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x10U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x11U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x12U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x13U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x14U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x15U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x16U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x17U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x18U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x19U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x20U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x21U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x22U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x23U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x24U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x25U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x26U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x27U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x28U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x29U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x30U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x31U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x32U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x33U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x34U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x35U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x36U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x37U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x38U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x39U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 1U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 2U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 3U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 4U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 5U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 6U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 7U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 8U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 9U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xaU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xbU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xcU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xdU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xeU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xfU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x10U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x11U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x12U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x13U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x14U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x15U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x16U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x17U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x18U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x19U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x20U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x21U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x22U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x23U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x24U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x25U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x26U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x27U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x28U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x29U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x30U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x31U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x32U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x33U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x34U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x35U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x36U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x37U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x38U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x39U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffffd) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s)) 
            << 1U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffffb) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s)) 
            << 2U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffff7) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s)) 
            << 3U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffffef) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s)) 
            << 4U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffffdf) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s)) 
            << 5U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffffbf) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s)) 
            << 6U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffff7f) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s)) 
            << 7U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffeff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s)) 
            << 8U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffdff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s)) 
            << 9U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffbff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s)) 
            << 0xaU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s)) 
            << 0xbU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffefff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s)) 
            << 0xcU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffdfff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s)) 
            << 0xdU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffbfff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s)) 
            << 0xeU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffff7fff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s)) 
            << 0xfU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffeffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s)) 
            << 0x10U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffdffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s)) 
            << 0x11U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffbffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s)) 
            << 0x12U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s)) 
            << 0x13U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffefffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s)) 
            << 0x14U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffdfffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s)) 
            << 0x15U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffbfffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s)) 
            << 0x16U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffff7fffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s)) 
            << 0x17U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffeffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s)) 
            << 0x18U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffdffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s)) 
            << 0x19U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffbffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s)) 
            << 0x1aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s)) 
            << 0x1bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffefffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s)) 
            << 0x1cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffdfffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s)) 
            << 0x1dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffbfffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s)) 
            << 0x1eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffff7fffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s)) 
            << 0x1fU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffeffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s)) 
            << 0x20U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffdffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s)) 
            << 0x21U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffbffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s)) 
            << 0x22U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s)) 
            << 0x23U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffefffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s)) 
            << 0x24U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffdfffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s)) 
            << 0x25U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffbfffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s)) 
            << 0x26U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffff7fffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s)) 
            << 0x27U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffeffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s)) 
            << 0x28U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffdffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s)) 
            << 0x29U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffbffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s)) 
            << 0x2aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s)) 
            << 0x2bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffefffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s)) 
            << 0x2cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffdfffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s)) 
            << 0x2dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffbfffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s)) 
            << 0x2eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffff7fffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s)) 
            << 0x2fU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffeffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s)) 
            << 0x30U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffdffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s)) 
            << 0x31U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffbffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s)) 
            << 0x32U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s)) 
            << 0x33U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffefffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s)) 
            << 0x34U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffdfffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s)) 
            << 0x35U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffbfffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s)) 
            << 0x36U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xff7fffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s)) 
            << 0x37U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfeffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s)) 
            << 0x38U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfdffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s)) 
            << 0x39U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfbffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s)) 
            << 0x3aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s)) 
            << 0x3bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xefffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s)) 
            << 0x3cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xdfffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s)) 
            << 0x3dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xbfffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s)) 
            << 0x3eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0x7fffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s)) 
            << 0x3fU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__carry)) 
              << 1U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__carry)) 
              << 2U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__carry)) 
              << 3U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffffef) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__carry)) 
              << 4U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__carry)) 
              << 5U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__carry)) 
              << 6U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__carry)) 
              << 7U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__carry)) 
              << 8U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__carry)) 
              << 9U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__carry)) 
              << 0xaU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__carry)) 
              << 0xbU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffefff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__carry)) 
              << 0xcU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__carry)) 
              << 0xdU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__carry)) 
              << 0xeU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__carry)) 
              << 0xfU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__carry)) 
              << 0x10U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__carry)) 
              << 0x11U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__carry)) 
              << 0x12U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__carry)) 
              << 0x13U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffefffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__carry)) 
              << 0x14U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__carry)) 
              << 0x15U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__carry)) 
              << 0x16U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__carry)) 
              << 0x17U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__carry)) 
              << 0x18U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__carry)) 
              << 0x19U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__carry)) 
              << 0x1aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__carry)) 
              << 0x1bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffefffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__carry)) 
              << 0x1cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__carry)) 
              << 0x1dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__carry)) 
              << 0x1eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__carry)) 
              << 0x1fU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__carry)) 
              << 0x20U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__carry)) 
              << 0x21U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__carry)) 
              << 0x22U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__carry)) 
              << 0x23U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffefffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__carry)) 
              << 0x24U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__carry)) 
              << 0x25U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__carry)) 
              << 0x26U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__carry)) 
              << 0x27U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__carry)) 
              << 0x28U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__carry)) 
              << 0x29U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__carry)) 
              << 0x2aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__carry)) 
              << 0x2bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffefffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__carry)) 
              << 0x2cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__carry)) 
              << 0x2dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__carry)) 
              << 0x2eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__carry)) 
              << 0x2fU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__carry)) 
              << 0x30U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__carry)) 
              << 0x31U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__carry)) 
              << 0x32U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__carry)) 
              << 0x33U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffefffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__carry)) 
              << 0x34U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__carry)) 
              << 0x35U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__carry)) 
              << 0x36U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__carry)) 
              << 0x37U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__carry)) 
              << 0x38U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__carry)) 
              << 0x39U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__carry)) 
              << 0x3aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__carry)) 
              << 0x3bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xefffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__carry)) 
              << 0x3cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__carry)) 
              << 0x3dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__carry)) 
              << 0x3eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__carry)) 
              << 0x3fU));
    vlTOPp->present_ctr__DOT__text = vlTOPp->present_ctr__DOT__adder_inst__DOT__s;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__text 
        = vlTOPp->present_ctr__DOT__text;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->present_ctr__DOT__block_i = vlTOPp->block_i;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0U)));
    vlTOPp->present_ctr__DOT__IV = vlTOPp->IV;
    vlTOPp->present_ctr__DOT__block_number = vlTOPp->block_number;
    vlTOPp->present_ctr__DOT__key[0U] = vlTOPp->key[0U];
    vlTOPp->present_ctr__DOT__key[1U] = vlTOPp->key[1U];
    vlTOPp->present_ctr__DOT__key[2U] = vlTOPp->key[2U];
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 1U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 1U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 2U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 2U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 3U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 3U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 4U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 4U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 5U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 5U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 6U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 6U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 7U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 7U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 8U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 8U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 9U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 9U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xaU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xaU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xbU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xbU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xcU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xcU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xdU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xdU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xeU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xeU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0xfU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0xfU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x10U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x10U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x11U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x11U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x12U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x12U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x13U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x13U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x14U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x14U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x15U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x15U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x16U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x16U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x17U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x17U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x18U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x18U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x19U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x19U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x1fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x1fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x20U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x20U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x21U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x21U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x22U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x22U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x23U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x23U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x24U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x24U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x25U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x25U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x26U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x26U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x27U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x27U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x28U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x28U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x29U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x29U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x2fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x2fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x30U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x30U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x31U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x31U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x32U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x32U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x33U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x33U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x34U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x34U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x35U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x35U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x36U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x36U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x37U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x37U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x38U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x38U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x39U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x39U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlTOPp->IV >> 0x3fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlTOPp->block_number >> 0x3fU)));
    vlTOPp->present_ctr__DOT__rst = vlTOPp->rst;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 1U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 1U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 2U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 2U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 3U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 3U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 4U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 4U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 5U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 5U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 6U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 6U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 7U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 7U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 8U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 8U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 9U)) & (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 9U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xaU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xaU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xbU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xbU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xcU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xcU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xdU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xdU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xeU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xeU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0xfU)) & (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xfU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x10U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x10U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x11U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x11U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x12U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x12U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x13U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x13U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x14U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x14U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x15U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x15U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x16U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x16U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x17U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x17U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x18U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x18U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x19U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x19U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1aU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1bU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1cU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1dU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1eU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x1fU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x20U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x20U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x21U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x21U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x22U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x22U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x23U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x23U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x24U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x24U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x25U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x25U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x26U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x26U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x27U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x27U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x28U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x28U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x29U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x29U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2aU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2bU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2cU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2dU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2eU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x2fU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x30U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x30U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x31U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x31U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x32U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x32U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x33U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x33U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x34U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x34U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x35U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x35U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x36U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x36U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x37U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x37U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x38U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x38U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x39U)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x39U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3aU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3bU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3cU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3dU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3eU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlTOPp->IV >> 0x3fU)) & (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3fU))));
    vlTOPp->present_ctr__DOT__clk = vlTOPp->clk;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__s 
        = (1U & ((IData)(vlTOPp->IV) ^ (IData)(vlTOPp->block_number)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 1U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 1U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 2U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 2U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 3U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 3U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 4U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 4U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 5U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 5U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 6U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 6U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 7U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 7U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 8U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 8U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 9U)) ^ (IData)(
                                                       (vlTOPp->block_number 
                                                        >> 9U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xaU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xaU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xbU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xbU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xcU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xcU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xdU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xdU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xeU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xeU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0xfU)) ^ (IData)(
                                                         (vlTOPp->block_number 
                                                          >> 0xfU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x10U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x10U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x11U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x11U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x12U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x12U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x13U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x13U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x14U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x14U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x15U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x15U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x16U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x16U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x17U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x17U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x18U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x18U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x19U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x19U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1aU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1bU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1cU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1dU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1eU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x1fU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x1fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x20U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x20U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x21U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x21U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x22U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x22U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x23U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x23U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x24U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x24U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x25U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x25U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x26U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x26U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x27U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x27U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x28U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x28U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x29U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x29U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2aU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2bU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2cU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2dU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2eU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x2fU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x2fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x30U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x30U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x31U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x31U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x32U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x32U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x33U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x33U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x34U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x34U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x35U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x35U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x36U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x36U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x37U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x37U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x38U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x38U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x39U)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x39U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3aU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3bU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3cU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3dU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3eU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlTOPp->IV >> 0x3fU)) ^ (IData)(
                                                          (vlTOPp->block_number 
                                                           >> 0x3fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__carry 
        = (1U & ((IData)(vlTOPp->IV) & (IData)(vlTOPp->block_number)));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_cl = 0U;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 0U;
    if ((4U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 1U;
        } else {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 1U;
            }
        }
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_up = 0U;
    if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_up = 1U;
            }
        }
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__r_w = 0U;
    if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__r_w = 1U;
            }
        }
    }
    vlTOPp->present_ctr__DOT__block_o = vlTOPp->present_ctr__DOT__result__DOT__dout;
    vlTOPp->present_ctr__DOT__end_signal = vlTOPp->present_ctr__DOT__reg_end_signal__DOT__dout;
    vlTOPp->present_ctr__DOT__end_enc = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__end_signal;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_output 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__end_signal = 0U;
    if ((4U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__end_signal = 1U;
            }
        }
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U];
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_output 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__dout;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__roundkey 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__dout;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_up;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__a = vlTOPp->present_ctr__DOT__IV;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__b = vlTOPp->present_ctr__DOT__block_number;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key[0U] 
        = vlTOPp->present_ctr__DOT__key[0U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key[1U] 
        = vlTOPp->present_ctr__DOT__key[1U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key[2U] 
        = vlTOPp->present_ctr__DOT__key[2U];
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__a;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__b;
    vlTOPp->present_ctr__DOT__result__DOT__cl = vlTOPp->present_ctr__DOT__rst;
    vlTOPp->present_ctr__DOT__reg_end_signal__DOT__cl 
        = vlTOPp->present_ctr__DOT__rst;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__rst 
        = vlTOPp->present_ctr__DOT__rst;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlTOPp->present_ctr__DOT__result__DOT__clk = vlTOPp->present_ctr__DOT__clk;
    vlTOPp->present_ctr__DOT__reg_end_signal__DOT__clk 
        = vlTOPp->present_ctr__DOT__clk;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__clk;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__clk;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffffe) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | (IData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__s)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | (IData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__h0__DOT__carry)));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__w 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_up;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__r_w 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__r_w;
    vlTOPp->block_o = vlTOPp->present_ctr__DOT__block_o;
    vlTOPp->end_signal = vlTOPp->present_ctr__DOT__end_signal;
    vlTOPp->present_ctr__DOT__result__DOT__w = vlTOPp->present_ctr__DOT__end_enc;
    vlTOPp->present_ctr__DOT__reg_end_signal__DOT__w 
        = vlTOPp->present_ctr__DOT__end_enc;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__next_state 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state;
    if ((4U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__next_state = 1U;
            }
        }
    } else {
        vlTOPp->present_ctr__DOT__key_sch_impl__DOT__next_state 
            = ((2U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                ? ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                    ? 4U : 3U) : ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                                   ? ((0x1fU == (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_output))
                                       ? 5U : 2U) : 1U));
    }
    vlTOPp->present_ctr__DOT__end_key_generation = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__end_signal;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__din 
        = (((0U == 0x10U) ? VL_ULL(0) : ((QData)((IData)(
                                                         vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                         << ((IData)(0x40U) 
                                             - (IData)(0x10U)))) 
           | (((QData)((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
               << ((0U == 0x10U) ? 0x20U : ((IData)(0x20U) 
                                            - (IData)(0x10U)))) 
              | ((QData)((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                 >> 0x10U)));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[3U] 
                                         << ((IData)(0x20U) 
                                             - (IData)(0xcU)))) 
                   | (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U] 
                      >> 0xcU)));
    vlTOPp->__Vtableidx1 = (0xfU & (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U] 
                                    >> 0xcU));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx1];
    vlTOPp->present_ctr__DOT__roundkey = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__roundkey;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_w 
        = (0U < (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index));
    vlTOPp->present_ctr__DOT__key_index_enc = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__rst 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__rst;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__clk 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__clk 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__clk 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__clk;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__c = 
        (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                       >> 0x3fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 1U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 2U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 3U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 4U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 5U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 6U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 7U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 8U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 9U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xaU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xbU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xcU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xdU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xeU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xfU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x10U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x11U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x12U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x13U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x14U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x15U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x16U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x17U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x18U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x19U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x20U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x21U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x22U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x23U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x24U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x25U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x26U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x27U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x28U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x29U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x30U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x31U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x32U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x33U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x34U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x35U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x36U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x37U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x38U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x39U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
           & (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 1U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 2U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 3U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 4U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 5U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 6U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 7U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 8U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 9U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xaU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xbU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xcU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xdU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xeU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xfU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x10U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x11U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x12U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x13U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x14U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x15U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x16U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x17U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x18U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x19U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x20U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x21U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x22U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x23U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x24U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x25U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x26U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x27U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x28U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x29U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2fU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x30U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x31U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x32U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x33U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x34U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x35U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x36U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x37U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x38U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x39U)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3aU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3bU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3cU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3dU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3eU)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values)));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 1U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 2U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 3U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 4U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 5U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 6U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 7U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 8U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 9U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xaU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xbU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xcU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xdU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xeU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xfU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x10U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x11U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x12U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x13U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x14U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x15U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x16U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x17U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x18U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x19U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x20U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x21U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x22U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x23U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x24U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x25U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x26U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x27U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x28U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x29U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2eU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2fU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x30U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x31U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x32U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x33U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x34U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x35U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x36U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x37U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x38U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x39U))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3aU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3bU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3cU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3dU))));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3eU))));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__rst 
        = (1U & (~ (IData)(vlTOPp->present_ctr__DOT__end_key_generation)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__rst 
        = (1U & (~ (IData)(vlTOPp->present_ctr__DOT__end_key_generation)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__cl 
        = (1U & (~ (IData)(vlTOPp->present_ctr__DOT__end_key_generation)));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__s_box_output 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__roundkey 
        = vlTOPp->present_ctr__DOT__roundkey;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__result 
        = (vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_output 
           ^ vlTOPp->present_ctr__DOT__roundkey);
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__w 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_w;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_index 
        = vlTOPp->present_ctr__DOT__key_index_enc;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__mem_addr 
        = ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__end_signal)
            ? (IData)(vlTOPp->present_ctr__DOT__key_index_enc)
            : (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_output));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_1 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__s;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] = 0U;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] = 0U;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] = 0U;
    if ((4U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
                    = ((0xfff00000U & ((IData)((VL_ULL(0xfffffffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                    << 0x2cU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                       << 0xcU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                         >> 0x14U))))) 
                                       << 0x14U)) | 
                       ((0xf8000U & ((0xffff8000U & 
                                      vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U]) 
                                     ^ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_output) 
                                        << 0xfU))) 
                        | (0x7fffU & vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])));
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
                    = ((0xfffffU & ((IData)((VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                      >> 0x14U))))) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            ((VL_ULL(0xfffffffffffffff) 
                                                              & (((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                                  << 0x2cU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                                     << 0xcU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                                       >> 0x14U)))) 
                                                             >> 0x20U)) 
                                                    << 0x14U)));
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
                    = (0xfffffU & ((IData)(((VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                      >> 0x14U)))) 
                                            >> 0x20U)) 
                                   >> 0xcU));
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
                = ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                    ? vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U]
                    : (IData)((VL_ULL(0x1fffffffffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                   << 0x2dU) | (((QData)((IData)(
                                                                 vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                   >> 0x13U))))));
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
                = ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                    ? vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U]
                    : ((0xe0000000U & (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U] 
                                       << 0x1dU)) | (IData)(
                                                            ((VL_ULL(0x1fffffffffffffff) 
                                                              & (((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                                     << 0xdU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                                       >> 0x13U)))) 
                                                             >> 0x20U))));
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
                = ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                    ? ((0xfffff000U & ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__s_box_output) 
                                       << 0xcU)) | 
                       (0xfffU & vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U]))
                    : (0xffffU & (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U] 
                                  >> 3U)));
        } else {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
                    = vlTOPp->key[0U];
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
                    = vlTOPp->key[1U];
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
                    = vlTOPp->key[2U];
            }
        }
    }
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__key_i 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__roundkey;
    vlTOPp->present_ctr__DOT__enc_o = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__result;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__addr 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__mem_addr;
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_1));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffffd) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s)) 
            << 1U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffffb) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s)) 
            << 2U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffff7) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s)) 
            << 3U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffffef) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s)) 
            << 4U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffffdf) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s)) 
            << 5U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffffbf) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s)) 
            << 6U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffff7f) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s)) 
            << 7U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffeff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s)) 
            << 8U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffdff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s)) 
            << 9U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffffbff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s)) 
            << 0xaU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s)) 
            << 0xbU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffefff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s)) 
            << 0xcU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffdfff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s)) 
            << 0xdU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffffbfff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s)) 
            << 0xeU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffff7fff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s)) 
            << 0xfU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffeffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s)) 
            << 0x10U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffdffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s)) 
            << 0x11U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffffbffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s)) 
            << 0x12U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s)) 
            << 0x13U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffefffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s)) 
            << 0x14U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffdfffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s)) 
            << 0x15U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffffbfffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s)) 
            << 0x16U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffff7fffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s)) 
            << 0x17U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffeffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s)) 
            << 0x18U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffdffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s)) 
            << 0x19U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffffbffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s)) 
            << 0x1aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s)) 
            << 0x1bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffefffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s)) 
            << 0x1cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffdfffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s)) 
            << 0x1dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffffbfffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s)) 
            << 0x1eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffff7fffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s)) 
            << 0x1fU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffeffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s)) 
            << 0x20U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffdffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s)) 
            << 0x21U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffffbffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s)) 
            << 0x22U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s)) 
            << 0x23U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffefffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s)) 
            << 0x24U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffdfffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s)) 
            << 0x25U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffffbfffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s)) 
            << 0x26U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffff7fffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s)) 
            << 0x27U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffeffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s)) 
            << 0x28U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffdffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s)) 
            << 0x29U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffffbffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s)) 
            << 0x2aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s)) 
            << 0x2bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffefffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s)) 
            << 0x2cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffdfffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s)) 
            << 0x2dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffffbfffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s)) 
            << 0x2eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffff7fffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s)) 
            << 0x2fU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffeffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s)) 
            << 0x30U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffdffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s)) 
            << 0x31U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfffbffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s)) 
            << 0x32U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s)) 
            << 0x33U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffefffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s)) 
            << 0x34U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffdfffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s)) 
            << 0x35U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xffbfffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s)) 
            << 0x36U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xff7fffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s)) 
            << 0x37U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfeffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s)) 
            << 0x38U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfdffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s)) 
            << 0x39U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xfbffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s)) 
            << 0x3aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s)) 
            << 0x3bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xefffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s)) 
            << 0x3cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xdfffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s)) 
            << 0x3dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0xbfffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s)) 
            << 0x3eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__s = 
        ((VL_ULL(0x7fffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s)) 
            << 0x3fU));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din[0U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din[1U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din[2U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U];
    vlTOPp->present_ctr__DOT____Vcellinp__result__din 
        = (vlTOPp->present_ctr__DOT__enc_o ^ vlTOPp->block_i);
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__carry)) 
              << 1U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__carry)) 
              << 2U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__carry)) 
              << 3U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffffef) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__carry)) 
              << 4U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__carry)) 
              << 5U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__carry)) 
              << 6U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__carry)) 
              << 7U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__carry)) 
              << 8U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__carry)) 
              << 9U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__carry)) 
              << 0xaU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__carry)) 
              << 0xbU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffefff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__carry)) 
              << 0xcU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__carry)) 
              << 0xdU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__carry)) 
              << 0xeU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__carry)) 
              << 0xfU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__carry)) 
              << 0x10U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__carry)) 
              << 0x11U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__carry)) 
              << 0x12U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__carry)) 
              << 0x13U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffefffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__carry)) 
              << 0x14U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__carry)) 
              << 0x15U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__carry)) 
              << 0x16U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__carry)) 
              << 0x17U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__carry)) 
              << 0x18U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__carry)) 
              << 0x19U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__carry)) 
              << 0x1aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__carry)) 
              << 0x1bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffefffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__carry)) 
              << 0x1cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__carry)) 
              << 0x1dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__carry)) 
              << 0x1eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__carry)) 
              << 0x1fU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__carry)) 
              << 0x20U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__carry)) 
              << 0x21U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__carry)) 
              << 0x22U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__carry)) 
              << 0x23U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffefffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__carry)) 
              << 0x24U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__carry)) 
              << 0x25U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__carry)) 
              << 0x26U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__carry)) 
              << 0x27U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__carry)) 
              << 0x28U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__carry)) 
              << 0x29U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__carry)) 
              << 0x2aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__carry)) 
              << 0x2bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffefffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__carry)) 
              << 0x2cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__carry)) 
              << 0x2dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__carry)) 
              << 0x2eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__carry)) 
              << 0x2fU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__carry)) 
              << 0x30U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__carry)) 
              << 0x31U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__carry)) 
              << 0x32U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__carry)) 
              << 0x33U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffefffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__carry)) 
              << 0x34U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__carry)) 
              << 0x35U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__carry)) 
              << 0x36U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__carry)) 
              << 0x37U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__carry)) 
              << 0x38U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__carry)) 
              << 0x39U));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__carry)) 
              << 0x3aU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__carry)) 
              << 0x3bU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xefffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__carry)) 
              << 0x3cU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__carry)) 
              << 0x3dU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__carry)) 
              << 0x3eU));
    vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__carry)) 
              << 0x3fU));
    vlTOPp->present_ctr__DOT__text = vlTOPp->present_ctr__DOT__adder_inst__DOT__s;
    vlTOPp->present_ctr__DOT__result__DOT__din = vlTOPp->present_ctr__DOT____Vcellinp__result__din;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__text 
        = vlTOPp->present_ctr__DOT__text;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_i 
        = ((2U > (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index))
            ? vlTOPp->present_ctr__DOT__text : vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_output);
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_i 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_i;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
        = (vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_i 
           ^ vlTOPp->present_ctr__DOT__roundkey);
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__din 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 4U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 8U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0xcU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x10U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x14U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x18U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x1cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x20U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x24U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x28U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x2cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x30U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x34U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x38U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x3cU)));
    vlTOPp->__Vtableidx2 = (0xfU & (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx3 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 4U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 8U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx4];
    vlTOPp->__Vtableidx5 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0xcU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx5];
    vlTOPp->__Vtableidx6 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0x10U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx6];
    vlTOPp->__Vtableidx7 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0x14U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx7];
    vlTOPp->__Vtableidx8 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0x18U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx8];
    vlTOPp->__Vtableidx9 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0x1cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx9];
    vlTOPp->__Vtableidx10 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x20U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx10];
    vlTOPp->__Vtableidx11 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x24U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx11];
    vlTOPp->__Vtableidx12 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x28U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx12];
    vlTOPp->__Vtableidx13 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x2cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx13];
    vlTOPp->__Vtableidx14 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x30U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx14];
    vlTOPp->__Vtableidx15 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x34U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx15];
    vlTOPp->__Vtableidx16 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x38U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx16];
    vlTOPp->__Vtableidx17 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x3cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx17];
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffff0) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | (IData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffff0f) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout)) 
              << 4U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffff0ff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout)) 
              << 8U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffffffffff0fff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout)) 
              << 0xcU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffffff0ffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout)) 
              << 0x10U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffffffff0fffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout)) 
              << 0x14U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffff0ffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout)) 
              << 0x18U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffffff0fffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout)) 
              << 0x1cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffff0ffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout)) 
              << 0x20U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffff0fffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout)) 
              << 0x24U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffff0ffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout)) 
              << 0x28U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffff0fffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout)) 
              << 0x2cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfff0ffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout)) 
              << 0x30U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xff0fffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout)) 
              << 0x34U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xf0ffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout)) 
              << 0x38U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout)) 
              << 0x3cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__din 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | (IData)((IData)((1U & (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o)))));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 4U))))) 
              << 1U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 8U))))) 
              << 2U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xcU))))) 
              << 3U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffffef) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x10U))))) 
              << 4U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x14U))))) 
              << 5U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x18U))))) 
              << 6U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1cU))))) 
              << 7U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x20U))))) 
              << 8U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x24U))))) 
              << 9U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x28U))))) 
              << 0xaU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2cU))))) 
              << 0xbU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffefff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x30U))))) 
              << 0xcU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x34U))))) 
              << 0xdU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x38U))))) 
              << 0xeU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3cU))))) 
              << 0xfU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 1U))))) 
              << 0x10U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 5U))))) 
              << 0x11U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 9U))))) 
              << 0x12U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xdU))))) 
              << 0x13U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffefffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x11U))))) 
              << 0x14U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x15U))))) 
              << 0x15U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x19U))))) 
              << 0x16U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1dU))))) 
              << 0x17U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x21U))))) 
              << 0x18U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x25U))))) 
              << 0x19U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x29U))))) 
              << 0x1aU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2dU))))) 
              << 0x1bU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffefffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x31U))))) 
              << 0x1cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x35U))))) 
              << 0x1dU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x39U))))) 
              << 0x1eU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3dU))))) 
              << 0x1fU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 2U))))) 
              << 0x20U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 6U))))) 
              << 0x21U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xaU))))) 
              << 0x22U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xeU))))) 
              << 0x23U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffefffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x12U))))) 
              << 0x24U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x16U))))) 
              << 0x25U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1aU))))) 
              << 0x26U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1eU))))) 
              << 0x27U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x22U))))) 
              << 0x28U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x26U))))) 
              << 0x29U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2aU))))) 
              << 0x2aU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2eU))))) 
              << 0x2bU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffefffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x32U))))) 
              << 0x2cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x36U))))) 
              << 0x2dU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3aU))))) 
              << 0x2eU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3eU))))) 
              << 0x2fU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 3U))))) 
              << 0x30U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 7U))))) 
              << 0x31U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xbU))))) 
              << 0x32U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xfU))))) 
              << 0x33U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffefffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x13U))))) 
              << 0x34U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x17U))))) 
              << 0x35U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1bU))))) 
              << 0x36U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1fU))))) 
              << 0x37U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x23U))))) 
              << 0x38U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x27U))))) 
              << 0x39U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2bU))))) 
              << 0x3aU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2fU))))) 
              << 0x3bU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xefffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x33U))))) 
              << 0x3cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x37U))))) 
              << 0x3dU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3bU))))) 
              << 0x3eU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3fU))))) 
              << 0x3fU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_o 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__din 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_o;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    CData/*4:0*/ __Vdlyvdim0__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
    CData/*0:0*/ __Vdlyvset__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
    QData/*63:0*/ __Vdlyvval__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
    // Body
    __Vdlyvset__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 = 0U;
    __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    if (vlTOPp->rst) {
        vlTOPp->present_ctr__DOT__reg_end_signal__DOT__dout = 0U;
    } else {
        if (vlTOPp->present_ctr__DOT__end_enc) {
            vlTOPp->present_ctr__DOT__reg_end_signal__DOT__dout = 1U;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->present_ctr__DOT__result__DOT__dout = VL_ULL(0);
    } else {
        if (vlTOPp->present_ctr__DOT__end_enc) {
            vlTOPp->present_ctr__DOT__result__DOT__dout 
                = vlTOPp->present_ctr__DOT____Vcellinp__result__din;
        }
    }
    if (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__r_w) {
        __Vdlyvval__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 
            = (((QData)((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                << 0x30U) | (((QData)((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                           >> 0x10U)));
        __Vdlyvset__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 = 1U;
        __Vdlyvdim0__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 
            = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__mem_addr;
    }
    if (vlTOPp->rst) {
        __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout = 0U;
    } else {
        if (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_up) {
            __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout)));
        }
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state 
        = ((IData)(vlTOPp->rst) ? 0U : (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__next_state));
    if (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_cl) {
        vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U] = 0U;
        vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U] = 0U;
        vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U] = 0U;
    } else {
        if (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w) {
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U] 
                = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U];
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U] 
                = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U];
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U] 
                = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U];
        }
    }
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__end_signal 
        = ((IData)(vlTOPp->present_ctr__DOT__end_key_generation) 
           & (0x1fU == (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index)));
    if (vlTOPp->present_ctr__DOT__end_key_generation) {
        if (vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_w) {
            vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__dout 
                = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_o;
        }
    } else {
        vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__dout = VL_ULL(0);
    }
    if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__r_w)))) {
        vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__dout 
            = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_
            [vlTOPp->present_ctr__DOT__key_sch_impl__DOT__mem_addr];
    }
    if (vlTOPp->present_ctr__DOT__end_key_generation) {
        if (vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_up) {
            vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout)));
        }
    } else {
        vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout = 0U;
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    if (__Vdlyvset__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0) {
        vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_[__Vdlyvdim0__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0] 
            = __Vdlyvval__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
    }
    vlTOPp->present_ctr__DOT__end_signal = vlTOPp->present_ctr__DOT__reg_end_signal__DOT__dout;
    vlTOPp->present_ctr__DOT__block_o = vlTOPp->present_ctr__DOT__result__DOT__dout;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_output 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 0U;
    if ((4U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 1U;
        } else {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 1U;
            }
        }
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_up = 0U;
    if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_up = 1U;
            }
        }
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__r_w = 0U;
    if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__r_w = 1U;
            }
        }
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__end_signal = 0U;
    if ((4U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__end_signal = 1U;
            }
        }
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U];
    vlTOPp->present_ctr__DOT__end_enc = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__end_signal;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_output 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__dout;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__roundkey 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__dout;
    if (vlTOPp->present_ctr__DOT__end_key_generation) {
        vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_up 
            = (0x1fU != (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index));
    }
    vlTOPp->end_signal = vlTOPp->present_ctr__DOT__end_signal;
    vlTOPp->block_o = vlTOPp->present_ctr__DOT__block_o;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__next_state 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state;
    if ((4U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__next_state = 1U;
            }
        }
    } else {
        vlTOPp->present_ctr__DOT__key_sch_impl__DOT__next_state 
            = ((2U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                ? ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                    ? 4U : 3U) : ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                                   ? ((0x1fU == (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_output))
                                       ? 5U : 2U) : 1U));
    }
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__w 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_w;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_up;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__r_w 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__r_w;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__din 
        = (((0U == 0x10U) ? VL_ULL(0) : ((QData)((IData)(
                                                         vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                         << ((IData)(0x40U) 
                                             - (IData)(0x10U)))) 
           | (((QData)((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
               << ((0U == 0x10U) ? 0x20U : ((IData)(0x20U) 
                                            - (IData)(0x10U)))) 
              | ((QData)((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                 >> 0x10U)));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[3U] 
                                         << ((IData)(0x20U) 
                                             - (IData)(0xcU)))) 
                   | (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U] 
                      >> 0xcU)));
    vlTOPp->__Vtableidx1 = (0xfU & (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U] 
                                    >> 0xcU));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx1];
    vlTOPp->present_ctr__DOT__result__DOT__w = vlTOPp->present_ctr__DOT__end_enc;
    vlTOPp->present_ctr__DOT__reg_end_signal__DOT__w 
        = vlTOPp->present_ctr__DOT__end_enc;
    vlTOPp->present_ctr__DOT__roundkey = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__roundkey;
    vlTOPp->present_ctr__DOT__end_key_generation = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__end_signal;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__s_box_output 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__roundkey 
        = vlTOPp->present_ctr__DOT__roundkey;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__result 
        = (vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_output 
           ^ vlTOPp->present_ctr__DOT__roundkey);
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__up 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_up;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__rst 
        = (1U & (~ (IData)(vlTOPp->present_ctr__DOT__end_key_generation)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__rst 
        = (1U & (~ (IData)(vlTOPp->present_ctr__DOT__end_key_generation)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__cl 
        = (1U & (~ (IData)(vlTOPp->present_ctr__DOT__end_key_generation)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_w 
        = (0U < (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index));
    vlTOPp->present_ctr__DOT__key_index_enc = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__key_i 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__roundkey;
    vlTOPp->present_ctr__DOT__enc_o = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__result;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__w 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_w;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_index 
        = vlTOPp->present_ctr__DOT__key_index_enc;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__mem_addr 
        = ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__end_signal)
            ? (IData)(vlTOPp->present_ctr__DOT__key_index_enc)
            : (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_output));
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__addr 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__mem_addr;
}

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_i 
        = ((2U > (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__key_index))
            ? vlTOPp->present_ctr__DOT__text : vlTOPp->present_ctr__DOT__present_enc_impl__DOT__register_output);
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] = 0U;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] = 0U;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] = 0U;
    if ((4U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
                    = ((0xfff00000U & ((IData)((VL_ULL(0xfffffffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                    << 0x2cU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                       << 0xcU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                         >> 0x14U))))) 
                                       << 0x14U)) | 
                       ((0xf8000U & ((0xffff8000U & 
                                      vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U]) 
                                     ^ ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__counter_output) 
                                        << 0xfU))) 
                        | (0x7fffU & vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])));
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
                    = ((0xfffffU & ((IData)((VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                      >> 0x14U))))) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            ((VL_ULL(0xfffffffffffffff) 
                                                              & (((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                                  << 0x2cU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                                     << 0xcU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                                       >> 0x14U)))) 
                                                             >> 0x20U)) 
                                                    << 0x14U)));
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
                    = (0xfffffU & ((IData)(((VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                      >> 0x14U)))) 
                                            >> 0x20U)) 
                                   >> 0xcU));
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
                = ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                    ? vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U]
                    : (IData)((VL_ULL(0x1fffffffffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                   << 0x2dU) | (((QData)((IData)(
                                                                 vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                   >> 0x13U))))));
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
                = ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                    ? vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U]
                    : ((0xe0000000U & (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U] 
                                       << 0x1dU)) | (IData)(
                                                            ((VL_ULL(0x1fffffffffffffff) 
                                                              & (((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                                     << 0xdU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                                       >> 0x13U)))) 
                                                             >> 0x20U))));
            vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
                = ((1U & (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state))
                    ? ((0xfffff000U & ((IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__s_box_output) 
                                       << 0xcU)) | 
                       (0xfffU & vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U]))
                    : (0xffffU & (vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U] 
                                  >> 3U)));
        } else {
            if ((1U & (~ (IData)(vlTOPp->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
                    = vlTOPp->key[0U];
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
                    = vlTOPp->key[1U];
                vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
                    = vlTOPp->key[2U];
            }
        }
    }
    vlTOPp->present_ctr__DOT____Vcellinp__result__din 
        = (vlTOPp->present_ctr__DOT__enc_o ^ vlTOPp->block_i);
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_i 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_i;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
        = (vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_i 
           ^ vlTOPp->present_ctr__DOT__roundkey);
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din[0U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din[1U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U];
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din[2U] 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U];
    vlTOPp->present_ctr__DOT__result__DOT__din = vlTOPp->present_ctr__DOT____Vcellinp__result__din;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__din 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 4U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 8U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0xcU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x10U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x14U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x18U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x1cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x20U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x24U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x28U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x2cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x30U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x34U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x38U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x3cU)));
    vlTOPp->__Vtableidx2 = (0xfU & (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx3 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 4U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 8U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx4];
    vlTOPp->__Vtableidx5 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0xcU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx5];
    vlTOPp->__Vtableidx6 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0x10U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx6];
    vlTOPp->__Vtableidx7 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0x14U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx7];
    vlTOPp->__Vtableidx8 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0x18U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx8];
    vlTOPp->__Vtableidx9 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                            >> 0x1cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx9];
    vlTOPp->__Vtableidx10 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x20U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx10];
    vlTOPp->__Vtableidx11 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x24U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx11];
    vlTOPp->__Vtableidx12 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x28U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx12];
    vlTOPp->__Vtableidx13 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x2cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx13];
    vlTOPp->__Vtableidx14 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x30U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx14];
    vlTOPp->__Vtableidx15 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x34U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx15];
    vlTOPp->__Vtableidx16 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x38U)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx16];
    vlTOPp->__Vtableidx17 = (0xfU & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                             >> 0x3cU)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout 
        = vlTOPp->__Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout
        [vlTOPp->__Vtableidx17];
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffff0) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | (IData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout)));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffff0f) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout)) 
              << 4U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffff0ff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout)) 
              << 8U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffffffffff0fff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout)) 
              << 0xcU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffffff0ffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout)) 
              << 0x10U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffffffff0fffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout)) 
              << 0x14U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffff0ffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout)) 
              << 0x18U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffffff0fffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout)) 
              << 0x1cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffff0ffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout)) 
              << 0x20U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffffff0fffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout)) 
              << 0x24U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffff0ffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout)) 
              << 0x28U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xffff0fffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout)) 
              << 0x2cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfff0ffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout)) 
              << 0x30U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xff0fffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout)) 
              << 0x34U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xf0ffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout)) 
              << 0x38U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout)) 
              << 0x3cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__din 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | (IData)((IData)((1U & (IData)(vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o)))));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 4U))))) 
              << 1U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 8U))))) 
              << 2U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xcU))))) 
              << 3U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffffef) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x10U))))) 
              << 4U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x14U))))) 
              << 5U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x18U))))) 
              << 6U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1cU))))) 
              << 7U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x20U))))) 
              << 8U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x24U))))) 
              << 9U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x28U))))) 
              << 0xaU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2cU))))) 
              << 0xbU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffefff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x30U))))) 
              << 0xcU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x34U))))) 
              << 0xdU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x38U))))) 
              << 0xeU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3cU))))) 
              << 0xfU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 1U))))) 
              << 0x10U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 5U))))) 
              << 0x11U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 9U))))) 
              << 0x12U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xdU))))) 
              << 0x13U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffefffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x11U))))) 
              << 0x14U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x15U))))) 
              << 0x15U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x19U))))) 
              << 0x16U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1dU))))) 
              << 0x17U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x21U))))) 
              << 0x18U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x25U))))) 
              << 0x19U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x29U))))) 
              << 0x1aU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2dU))))) 
              << 0x1bU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffefffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x31U))))) 
              << 0x1cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x35U))))) 
              << 0x1dU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x39U))))) 
              << 0x1eU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3dU))))) 
              << 0x1fU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 2U))))) 
              << 0x20U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 6U))))) 
              << 0x21U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xaU))))) 
              << 0x22U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xeU))))) 
              << 0x23U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffefffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x12U))))) 
              << 0x24U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x16U))))) 
              << 0x25U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1aU))))) 
              << 0x26U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1eU))))) 
              << 0x27U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x22U))))) 
              << 0x28U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x26U))))) 
              << 0x29U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2aU))))) 
              << 0x2aU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2eU))))) 
              << 0x2bU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffefffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x32U))))) 
              << 0x2cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x36U))))) 
              << 0x2dU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3aU))))) 
              << 0x2eU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3eU))))) 
              << 0x2fU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 3U))))) 
              << 0x30U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 7U))))) 
              << 0x31U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xbU))))) 
              << 0x32U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0xfU))))) 
              << 0x33U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffefffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x13U))))) 
              << 0x34U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x17U))))) 
              << 0x35U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1bU))))) 
              << 0x36U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x1fU))))) 
              << 0x37U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x23U))))) 
              << 0x38U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x27U))))) 
              << 0x39U));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2bU))))) 
              << 0x3aU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x2fU))))) 
              << 0x3bU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xefffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x33U))))) 
              << 0x3cU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x37U))))) 
              << 0x3dU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3bU))))) 
              << 0x3eU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3fU))))) 
              << 0x3fU));
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_o 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o;
    vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__din 
        = vlTOPp->present_ctr__DOT__present_enc_impl__DOT__block_o;
}

void Vtop::_settle__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__cl 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_cl;
    vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__cl 
        = vlTOPp->present_ctr__DOT__key_sch_impl__DOT__key_register_cl;
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
    vlTOPp->_settle__TOP__6(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values ^ vlTOPp->__Vchglast__TOP__present_ctr__DOT__adder_inst__DOT__carry_values));
    VL_DEBUG_IF( if(__req && ((vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values ^ vlTOPp->__Vchglast__TOP__present_ctr__DOT__adder_inst__DOT__carry_values))) VL_DBG_MSGF("        CHANGE: ../../../misc/adder/hdl_code/adder.sv:18: present_ctr.adder_inst.carry_values\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__present_ctr__DOT__adder_inst__DOT__carry_values 
        = vlTOPp->present_ctr__DOT__adder_inst__DOT__carry_values;
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
}
#endif // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    IV = VL_RAND_RESET_Q(64);
    block_number = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(80, key);
    block_i = VL_RAND_RESET_Q(64);
    block_o = VL_RAND_RESET_Q(64);
    end_signal = VL_RAND_RESET_I(1);
    present_ctr__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__rst = VL_RAND_RESET_I(1);
    present_ctr__DOT__IV = VL_RAND_RESET_Q(64);
    present_ctr__DOT__block_number = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(80, present_ctr__DOT__key);
    present_ctr__DOT__block_i = VL_RAND_RESET_Q(64);
    present_ctr__DOT__block_o = VL_RAND_RESET_Q(64);
    present_ctr__DOT__end_signal = VL_RAND_RESET_I(1);
    present_ctr__DOT__end_key_generation = VL_RAND_RESET_I(1);
    present_ctr__DOT__end_enc = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_index_enc = VL_RAND_RESET_I(5);
    present_ctr__DOT__roundkey = VL_RAND_RESET_Q(64);
    present_ctr__DOT__text = VL_RAND_RESET_Q(64);
    present_ctr__DOT__enc_o = VL_RAND_RESET_Q(64);
    present_ctr__DOT____Vcellinp__result__din = VL_RAND_RESET_Q(64);
    present_ctr__DOT__key_sch_impl__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, present_ctr__DOT__key_sch_impl__DOT__key);
    present_ctr__DOT__key_sch_impl__DOT__end_signal = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__key_index = VL_RAND_RESET_I(5);
    present_ctr__DOT__key_sch_impl__DOT__roundkey = VL_RAND_RESET_Q(64);
    present_ctr__DOT__key_sch_impl__DOT__key_register_cl = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__key_register_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, present_ctr__DOT__key_sch_impl__DOT__key_register_input);
    VL_RAND_RESET_W(80, present_ctr__DOT__key_sch_impl__DOT__key_register_output);
    present_ctr__DOT__key_sch_impl__DOT__counter_output = VL_RAND_RESET_I(5);
    present_ctr__DOT__key_sch_impl__DOT__counter_up = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__r_w = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__mem_addr = VL_RAND_RESET_I(5);
    present_ctr__DOT__key_sch_impl__DOT__s_box_output = VL_RAND_RESET_I(4);
    present_ctr__DOT__key_sch_impl__DOT__current_state = VL_RAND_RESET_I(3);
    present_ctr__DOT__key_sch_impl__DOT__next_state = VL_RAND_RESET_I(3);
    present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__cl = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din);
    VL_RAND_RESET_W(80, present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout);
    present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(5);
    present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(5);
    present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__r_w = VL_RAND_RESET_I(1);
    present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__addr = VL_RAND_RESET_I(5);
    present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__din = VL_RAND_RESET_Q(64);
    present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__dout = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__adder_inst__DOT__a = VL_RAND_RESET_Q(64);
    present_ctr__DOT__adder_inst__DOT__b = VL_RAND_RESET_Q(64);
    present_ctr__DOT__adder_inst__DOT__s = VL_RAND_RESET_Q(64);
    present_ctr__DOT__adder_inst__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__carry_values = VL_RAND_RESET_Q(64);
    present_ctr__DOT__adder_inst__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__rst = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__start_signal = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__text = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__roundkey = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__key_index = VL_RAND_RESET_I(5);
    present_ctr__DOT__present_enc_impl__DOT__result = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__end_signal = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__counter_up = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__block_o = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__register_output = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__register_w = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__block_i = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__rst = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__up = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__down = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__din = VL_RAND_RESET_I(5);
    present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout = VL_RAND_RESET_I(5);
    present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__cl = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__w = VL_RAND_RESET_I(1);
    present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__din = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__dout = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_i = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__key_i = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__din = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout = VL_RAND_RESET_I(4);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__din = VL_RAND_RESET_Q(64);
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout = VL_RAND_RESET_Q(64);
    present_ctr__DOT__result__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__result__DOT__cl = VL_RAND_RESET_I(1);
    present_ctr__DOT__result__DOT__w = VL_RAND_RESET_I(1);
    present_ctr__DOT__result__DOT__din = VL_RAND_RESET_Q(64);
    present_ctr__DOT__result__DOT__dout = VL_RAND_RESET_Q(64);
    present_ctr__DOT__reg_end_signal__DOT__clk = VL_RAND_RESET_I(1);
    present_ctr__DOT__reg_end_signal__DOT__cl = VL_RAND_RESET_I(1);
    present_ctr__DOT__reg_end_signal__DOT__w = VL_RAND_RESET_I(1);
    present_ctr__DOT__reg_end_signal__DOT__din = VL_RAND_RESET_I(1);
    present_ctr__DOT__reg_end_signal__DOT__dout = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[1] = 5U;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[2] = 6U;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[4] = 9U;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[5] = 0U;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[8] = 3U;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[11] = 8U;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[12] = 4U;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[13] = 7U;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[14] = 1U;
    __Vtable1_present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx2 = 0;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable2_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx3 = 0;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable3_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx4 = 0;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable4_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx5 = 0;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable5_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx6 = 0;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable6_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx7 = 0;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable7_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx8 = 0;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable8_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx9 = 0;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable9_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx10 = 0;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable10_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx11 = 0;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable11_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx12 = 0;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable12_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx13 = 0;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable13_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx14 = 0;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable14_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx15 = 0;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable15_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx16 = 0;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable16_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vtableidx17 = 0;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[0] = 0xcU;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[1] = 5U;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[2] = 6U;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[3] = 0xbU;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[4] = 9U;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[5] = 0U;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[6] = 0xaU;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[7] = 0xdU;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[8] = 3U;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[9] = 0xeU;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[10] = 0xfU;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[11] = 8U;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[12] = 4U;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[13] = 7U;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[14] = 1U;
    __Vtable17_present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout[15] = 2U;
    __Vchglast__TOP__present_ctr__DOT__adder_inst__DOT__carry_values = VL_RAND_RESET_Q(64);
}
