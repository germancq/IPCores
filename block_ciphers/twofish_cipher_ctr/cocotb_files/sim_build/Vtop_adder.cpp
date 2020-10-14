// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_adder.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_adder) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_adder::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_adder::~Vtop_adder() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vtop_adder::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at00__27(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_adder::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at00__27\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->h0__DOT__a = (1U & (this->a >> 0U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1fU));
    this->h0__DOT__b = (1U & (this->b >> 0U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1fU));
    this->h0__DOT__s = (1U & (this->a ^ this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1fU));
    this->h0__DOT__carry = (1U & (this->a & this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->s = ((0xfffffffeU & this->s) | (IData)(this->h0__DOT__s));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s;
    this->carry_values = ((0xfffffffeU & this->carry_values) 
                          | (IData)(this->h0__DOT__carry));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0;
    this->c = (1U & (this->carry_values >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
           & this->carry_values);
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
                 ^ this->carry_values));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 1U)));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 2U)));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 3U)));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 4U)));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 5U)));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 6U)));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 7U)));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 8U)));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 9U)));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xaU)));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xbU)));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xcU)));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xdU)));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xeU)));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xfU)));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x10U)));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x11U)));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x12U)));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x13U)));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x14U)));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x15U)));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x16U)));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x17U)));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x18U)));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x19U)));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1aU)));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1bU)));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1cU)));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1dU)));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1eU)));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1));
    this->s = ((0xfffffffdU & this->s) | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s) 
                                          << 1U));
    this->s = ((0xfffffffbU & this->s) | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s) 
                                          << 2U));
    this->s = ((0xfffffff7U & this->s) | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s) 
                                          << 3U));
    this->s = ((0xffffffefU & this->s) | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s) 
                                          << 4U));
    this->s = ((0xffffffdfU & this->s) | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s) 
                                          << 5U));
    this->s = ((0xffffffbfU & this->s) | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s) 
                                          << 6U));
    this->s = ((0xffffff7fU & this->s) | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s) 
                                          << 7U));
    this->s = ((0xfffffeffU & this->s) | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s) 
                                          << 8U));
    this->s = ((0xfffffdffU & this->s) | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s) 
                                          << 9U));
    this->s = ((0xfffffbffU & this->s) | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s) 
                                          << 0xaU));
    this->s = ((0xfffff7ffU & this->s) | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s) 
                                          << 0xbU));
    this->s = ((0xffffefffU & this->s) | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s) 
                                          << 0xcU));
    this->s = ((0xffffdfffU & this->s) | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s) 
                                          << 0xdU));
    this->s = ((0xffffbfffU & this->s) | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s) 
                                          << 0xeU));
    this->s = ((0xffff7fffU & this->s) | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s) 
                                          << 0xfU));
    this->s = ((0xfffeffffU & this->s) | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s) 
                                          << 0x10U));
    this->s = ((0xfffdffffU & this->s) | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s) 
                                          << 0x11U));
    this->s = ((0xfffbffffU & this->s) | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s) 
                                          << 0x12U));
    this->s = ((0xfff7ffffU & this->s) | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s) 
                                          << 0x13U));
    this->s = ((0xffefffffU & this->s) | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s) 
                                          << 0x14U));
    this->s = ((0xffdfffffU & this->s) | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s) 
                                          << 0x15U));
    this->s = ((0xffbfffffU & this->s) | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s) 
                                          << 0x16U));
    this->s = ((0xff7fffffU & this->s) | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s) 
                                          << 0x17U));
    this->s = ((0xfeffffffU & this->s) | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s) 
                                          << 0x18U));
    this->s = ((0xfdffffffU & this->s) | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s) 
                                          << 0x19U));
    this->s = ((0xfbffffffU & this->s) | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s) 
                                          << 0x1aU));
    this->s = ((0xf7ffffffU & this->s) | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s) 
                                          << 0x1bU));
    this->s = ((0xefffffffU & this->s) | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s) 
                                          << 0x1cU));
    this->s = ((0xdfffffffU & this->s) | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s) 
                                          << 0x1dU));
    this->s = ((0xbfffffffU & this->s) | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s) 
                                          << 0x1eU));
    this->s = ((0x7fffffffU & this->s) | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s) 
                                          << 0x1fU));
    this->carry_values = ((0xfffffffdU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry) 
                             << 1U));
    this->carry_values = ((0xfffffffbU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry) 
                             << 2U));
    this->carry_values = ((0xfffffff7U & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry) 
                             << 3U));
    this->carry_values = ((0xffffffefU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry) 
                             << 4U));
    this->carry_values = ((0xffffffdfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry) 
                             << 5U));
    this->carry_values = ((0xffffffbfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry) 
                             << 6U));
    this->carry_values = ((0xffffff7fU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry) 
                             << 7U));
    this->carry_values = ((0xfffffeffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry) 
                             << 8U));
    this->carry_values = ((0xfffffdffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry) 
                             << 9U));
    this->carry_values = ((0xfffffbffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry) 
                             << 0xaU));
    this->carry_values = ((0xfffff7ffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry) 
                             << 0xbU));
    this->carry_values = ((0xffffefffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry) 
                             << 0xcU));
    this->carry_values = ((0xffffdfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry) 
                             << 0xdU));
    this->carry_values = ((0xffffbfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry) 
                             << 0xeU));
    this->carry_values = ((0xffff7fffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry) 
                             << 0xfU));
    this->carry_values = ((0xfffeffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry) 
                             << 0x10U));
    this->carry_values = ((0xfffdffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry) 
                             << 0x11U));
    this->carry_values = ((0xfffbffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry) 
                             << 0x12U));
    this->carry_values = ((0xfff7ffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry) 
                             << 0x13U));
    this->carry_values = ((0xffefffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry) 
                             << 0x14U));
    this->carry_values = ((0xffdfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry) 
                             << 0x15U));
    this->carry_values = ((0xffbfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry) 
                             << 0x16U));
    this->carry_values = ((0xff7fffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry) 
                             << 0x17U));
    this->carry_values = ((0xfeffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry) 
                             << 0x18U));
    this->carry_values = ((0xfdffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry) 
                             << 0x19U));
    this->carry_values = ((0xfbffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry) 
                             << 0x1aU));
    this->carry_values = ((0xf7ffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry) 
                             << 0x1bU));
    this->carry_values = ((0xefffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry) 
                             << 0x1cU));
    this->carry_values = ((0xdfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry) 
                             << 0x1dU));
    this->carry_values = ((0xbfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry) 
                             << 0x1eU));
    this->carry_values = ((0x7fffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry) 
                             << 0x1fU));
}

VL_INLINE_OPT void Vtop_adder::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at01__28(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_adder::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at01__28\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->h0__DOT__b = (1U & (this->b >> 0U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__b;
}

VL_INLINE_OPT void Vtop_adder::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at01__31(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_adder::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at01__31\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->h0__DOT__a = (1U & (this->a >> 0U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1fU));
    this->h0__DOT__s = (1U & (this->a ^ this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1fU));
    this->h0__DOT__carry = (1U & (this->a & this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->s = ((0xfffffffeU & this->s) | (IData)(this->h0__DOT__s));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s;
    this->carry_values = ((0xfffffffeU & this->carry_values) 
                          | (IData)(this->h0__DOT__carry));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0;
    this->c = (1U & (this->carry_values >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
           & this->carry_values);
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
                 ^ this->carry_values));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 1U)));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 2U)));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 3U)));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 4U)));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 5U)));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 6U)));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 7U)));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 8U)));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 9U)));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xaU)));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xbU)));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xcU)));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xdU)));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xeU)));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xfU)));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x10U)));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x11U)));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x12U)));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x13U)));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x14U)));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x15U)));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x16U)));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x17U)));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x18U)));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x19U)));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1aU)));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1bU)));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1cU)));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1dU)));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1eU)));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1));
    this->s = ((0xfffffffdU & this->s) | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s) 
                                          << 1U));
    this->s = ((0xfffffffbU & this->s) | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s) 
                                          << 2U));
    this->s = ((0xfffffff7U & this->s) | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s) 
                                          << 3U));
    this->s = ((0xffffffefU & this->s) | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s) 
                                          << 4U));
    this->s = ((0xffffffdfU & this->s) | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s) 
                                          << 5U));
    this->s = ((0xffffffbfU & this->s) | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s) 
                                          << 6U));
    this->s = ((0xffffff7fU & this->s) | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s) 
                                          << 7U));
    this->s = ((0xfffffeffU & this->s) | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s) 
                                          << 8U));
    this->s = ((0xfffffdffU & this->s) | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s) 
                                          << 9U));
    this->s = ((0xfffffbffU & this->s) | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s) 
                                          << 0xaU));
    this->s = ((0xfffff7ffU & this->s) | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s) 
                                          << 0xbU));
    this->s = ((0xffffefffU & this->s) | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s) 
                                          << 0xcU));
    this->s = ((0xffffdfffU & this->s) | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s) 
                                          << 0xdU));
    this->s = ((0xffffbfffU & this->s) | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s) 
                                          << 0xeU));
    this->s = ((0xffff7fffU & this->s) | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s) 
                                          << 0xfU));
    this->s = ((0xfffeffffU & this->s) | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s) 
                                          << 0x10U));
    this->s = ((0xfffdffffU & this->s) | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s) 
                                          << 0x11U));
    this->s = ((0xfffbffffU & this->s) | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s) 
                                          << 0x12U));
    this->s = ((0xfff7ffffU & this->s) | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s) 
                                          << 0x13U));
    this->s = ((0xffefffffU & this->s) | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s) 
                                          << 0x14U));
    this->s = ((0xffdfffffU & this->s) | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s) 
                                          << 0x15U));
    this->s = ((0xffbfffffU & this->s) | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s) 
                                          << 0x16U));
    this->s = ((0xff7fffffU & this->s) | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s) 
                                          << 0x17U));
    this->s = ((0xfeffffffU & this->s) | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s) 
                                          << 0x18U));
    this->s = ((0xfdffffffU & this->s) | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s) 
                                          << 0x19U));
    this->s = ((0xfbffffffU & this->s) | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s) 
                                          << 0x1aU));
    this->s = ((0xf7ffffffU & this->s) | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s) 
                                          << 0x1bU));
    this->s = ((0xefffffffU & this->s) | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s) 
                                          << 0x1cU));
    this->s = ((0xdfffffffU & this->s) | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s) 
                                          << 0x1dU));
    this->s = ((0xbfffffffU & this->s) | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s) 
                                          << 0x1eU));
    this->s = ((0x7fffffffU & this->s) | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s) 
                                          << 0x1fU));
    this->carry_values = ((0xfffffffdU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry) 
                             << 1U));
    this->carry_values = ((0xfffffffbU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry) 
                             << 2U));
    this->carry_values = ((0xfffffff7U & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry) 
                             << 3U));
    this->carry_values = ((0xffffffefU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry) 
                             << 4U));
    this->carry_values = ((0xffffffdfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry) 
                             << 5U));
    this->carry_values = ((0xffffffbfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry) 
                             << 6U));
    this->carry_values = ((0xffffff7fU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry) 
                             << 7U));
    this->carry_values = ((0xfffffeffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry) 
                             << 8U));
    this->carry_values = ((0xfffffdffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry) 
                             << 9U));
    this->carry_values = ((0xfffffbffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry) 
                             << 0xaU));
    this->carry_values = ((0xfffff7ffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry) 
                             << 0xbU));
    this->carry_values = ((0xffffefffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry) 
                             << 0xcU));
    this->carry_values = ((0xffffdfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry) 
                             << 0xdU));
    this->carry_values = ((0xffffbfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry) 
                             << 0xeU));
    this->carry_values = ((0xffff7fffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry) 
                             << 0xfU));
    this->carry_values = ((0xfffeffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry) 
                             << 0x10U));
    this->carry_values = ((0xfffdffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry) 
                             << 0x11U));
    this->carry_values = ((0xfffbffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry) 
                             << 0x12U));
    this->carry_values = ((0xfff7ffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry) 
                             << 0x13U));
    this->carry_values = ((0xffefffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry) 
                             << 0x14U));
    this->carry_values = ((0xffdfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry) 
                             << 0x15U));
    this->carry_values = ((0xffbfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry) 
                             << 0x16U));
    this->carry_values = ((0xff7fffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry) 
                             << 0x17U));
    this->carry_values = ((0xfeffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry) 
                             << 0x18U));
    this->carry_values = ((0xfdffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry) 
                             << 0x19U));
    this->carry_values = ((0xfbffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry) 
                             << 0x1aU));
    this->carry_values = ((0xf7ffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry) 
                             << 0x1bU));
    this->carry_values = ((0xefffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry) 
                             << 0x1cU));
    this->carry_values = ((0xdfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry) 
                             << 0x1dU));
    this->carry_values = ((0xbfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry) 
                             << 0x1eU));
    this->carry_values = ((0x7fffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry) 
                             << 0x1fU));
}

VL_INLINE_OPT void Vtop_adder::_combo__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at01__59(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_adder::_combo__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at01__59\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->h0__DOT__a = (1U & (this->a >> 0U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__a;
}

VL_INLINE_OPT void Vtop_adder::_combo__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at01__62(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_adder::_combo__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__at01__62\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->h0__DOT__b = (1U & (this->b >> 0U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1fU));
    this->h0__DOT__s = (1U & (this->a ^ this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1fU));
    this->h0__DOT__carry = (1U & (this->a & this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->s = ((0xfffffffeU & this->s) | (IData)(this->h0__DOT__s));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s;
    this->carry_values = ((0xfffffffeU & this->carry_values) 
                          | (IData)(this->h0__DOT__carry));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0;
    this->c = (1U & (this->carry_values >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
           & this->carry_values);
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
                 ^ this->carry_values));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 1U)));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 2U)));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 3U)));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 4U)));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 5U)));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 6U)));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 7U)));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 8U)));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 9U)));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xaU)));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xbU)));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xcU)));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xdU)));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xeU)));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xfU)));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x10U)));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x11U)));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x12U)));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x13U)));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x14U)));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x15U)));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x16U)));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x17U)));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x18U)));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x19U)));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1aU)));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1bU)));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1cU)));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1dU)));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1eU)));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1));
    this->s = ((0xfffffffdU & this->s) | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s) 
                                          << 1U));
    this->s = ((0xfffffffbU & this->s) | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s) 
                                          << 2U));
    this->s = ((0xfffffff7U & this->s) | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s) 
                                          << 3U));
    this->s = ((0xffffffefU & this->s) | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s) 
                                          << 4U));
    this->s = ((0xffffffdfU & this->s) | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s) 
                                          << 5U));
    this->s = ((0xffffffbfU & this->s) | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s) 
                                          << 6U));
    this->s = ((0xffffff7fU & this->s) | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s) 
                                          << 7U));
    this->s = ((0xfffffeffU & this->s) | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s) 
                                          << 8U));
    this->s = ((0xfffffdffU & this->s) | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s) 
                                          << 9U));
    this->s = ((0xfffffbffU & this->s) | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s) 
                                          << 0xaU));
    this->s = ((0xfffff7ffU & this->s) | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s) 
                                          << 0xbU));
    this->s = ((0xffffefffU & this->s) | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s) 
                                          << 0xcU));
    this->s = ((0xffffdfffU & this->s) | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s) 
                                          << 0xdU));
    this->s = ((0xffffbfffU & this->s) | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s) 
                                          << 0xeU));
    this->s = ((0xffff7fffU & this->s) | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s) 
                                          << 0xfU));
    this->s = ((0xfffeffffU & this->s) | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s) 
                                          << 0x10U));
    this->s = ((0xfffdffffU & this->s) | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s) 
                                          << 0x11U));
    this->s = ((0xfffbffffU & this->s) | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s) 
                                          << 0x12U));
    this->s = ((0xfff7ffffU & this->s) | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s) 
                                          << 0x13U));
    this->s = ((0xffefffffU & this->s) | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s) 
                                          << 0x14U));
    this->s = ((0xffdfffffU & this->s) | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s) 
                                          << 0x15U));
    this->s = ((0xffbfffffU & this->s) | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s) 
                                          << 0x16U));
    this->s = ((0xff7fffffU & this->s) | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s) 
                                          << 0x17U));
    this->s = ((0xfeffffffU & this->s) | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s) 
                                          << 0x18U));
    this->s = ((0xfdffffffU & this->s) | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s) 
                                          << 0x19U));
    this->s = ((0xfbffffffU & this->s) | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s) 
                                          << 0x1aU));
    this->s = ((0xf7ffffffU & this->s) | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s) 
                                          << 0x1bU));
    this->s = ((0xefffffffU & this->s) | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s) 
                                          << 0x1cU));
    this->s = ((0xdfffffffU & this->s) | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s) 
                                          << 0x1dU));
    this->s = ((0xbfffffffU & this->s) | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s) 
                                          << 0x1eU));
    this->s = ((0x7fffffffU & this->s) | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s) 
                                          << 0x1fU));
    this->carry_values = ((0xfffffffdU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry) 
                             << 1U));
    this->carry_values = ((0xfffffffbU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry) 
                             << 2U));
    this->carry_values = ((0xfffffff7U & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry) 
                             << 3U));
    this->carry_values = ((0xffffffefU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry) 
                             << 4U));
    this->carry_values = ((0xffffffdfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry) 
                             << 5U));
    this->carry_values = ((0xffffffbfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry) 
                             << 6U));
    this->carry_values = ((0xffffff7fU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry) 
                             << 7U));
    this->carry_values = ((0xfffffeffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry) 
                             << 8U));
    this->carry_values = ((0xfffffdffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry) 
                             << 9U));
    this->carry_values = ((0xfffffbffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry) 
                             << 0xaU));
    this->carry_values = ((0xfffff7ffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry) 
                             << 0xbU));
    this->carry_values = ((0xffffefffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry) 
                             << 0xcU));
    this->carry_values = ((0xffffdfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry) 
                             << 0xdU));
    this->carry_values = ((0xffffbfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry) 
                             << 0xeU));
    this->carry_values = ((0xffff7fffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry) 
                             << 0xfU));
    this->carry_values = ((0xfffeffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry) 
                             << 0x10U));
    this->carry_values = ((0xfffdffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry) 
                             << 0x11U));
    this->carry_values = ((0xfffbffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry) 
                             << 0x12U));
    this->carry_values = ((0xfff7ffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry) 
                             << 0x13U));
    this->carry_values = ((0xffefffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry) 
                             << 0x14U));
    this->carry_values = ((0xffdfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry) 
                             << 0x15U));
    this->carry_values = ((0xffbfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry) 
                             << 0x16U));
    this->carry_values = ((0xff7fffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry) 
                             << 0x17U));
    this->carry_values = ((0xfeffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry) 
                             << 0x18U));
    this->carry_values = ((0xfdffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry) 
                             << 0x19U));
    this->carry_values = ((0xfbffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry) 
                             << 0x1aU));
    this->carry_values = ((0xf7ffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry) 
                             << 0x1bU));
    this->carry_values = ((0xefffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry) 
                             << 0x1cU));
    this->carry_values = ((0xdfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry) 
                             << 0x1dU));
    this->carry_values = ((0xbfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry) 
                             << 0x1eU));
    this->carry_values = ((0x7fffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry) 
                             << 0x1fU));
}

void Vtop_adder::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__k_0__DOT__ai__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_adder::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__k_0__DOT__ai__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->h0__DOT__b = (1U & (this->b >> 0U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1fU));
    this->h0__DOT__a = (1U & (this->a >> 0U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1fU));
    this->h0__DOT__s = (1U & (this->a ^ this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1fU));
    this->h0__DOT__carry = (1U & (this->a & this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->s = ((0xfffffffeU & this->s) | (IData)(this->h0__DOT__s));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s;
    this->carry_values = ((0xfffffffeU & this->carry_values) 
                          | (IData)(this->h0__DOT__carry));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0;
    this->c = (1U & (this->carry_values >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
           & this->carry_values);
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
                 ^ this->carry_values));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 1U)));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 2U)));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 3U)));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 4U)));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 5U)));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 6U)));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 7U)));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 8U)));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 9U)));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xaU)));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xbU)));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xcU)));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xdU)));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xeU)));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xfU)));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x10U)));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x11U)));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x12U)));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x13U)));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x14U)));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x15U)));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x16U)));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x17U)));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x18U)));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x19U)));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1aU)));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1bU)));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1cU)));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1dU)));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1eU)));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1));
    this->s = ((0xfffffffdU & this->s) | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s) 
                                          << 1U));
    this->s = ((0xfffffffbU & this->s) | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s) 
                                          << 2U));
    this->s = ((0xfffffff7U & this->s) | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s) 
                                          << 3U));
    this->s = ((0xffffffefU & this->s) | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s) 
                                          << 4U));
    this->s = ((0xffffffdfU & this->s) | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s) 
                                          << 5U));
    this->s = ((0xffffffbfU & this->s) | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s) 
                                          << 6U));
    this->s = ((0xffffff7fU & this->s) | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s) 
                                          << 7U));
    this->s = ((0xfffffeffU & this->s) | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s) 
                                          << 8U));
    this->s = ((0xfffffdffU & this->s) | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s) 
                                          << 9U));
    this->s = ((0xfffffbffU & this->s) | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s) 
                                          << 0xaU));
    this->s = ((0xfffff7ffU & this->s) | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s) 
                                          << 0xbU));
    this->s = ((0xffffefffU & this->s) | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s) 
                                          << 0xcU));
    this->s = ((0xffffdfffU & this->s) | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s) 
                                          << 0xdU));
    this->s = ((0xffffbfffU & this->s) | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s) 
                                          << 0xeU));
    this->s = ((0xffff7fffU & this->s) | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s) 
                                          << 0xfU));
    this->s = ((0xfffeffffU & this->s) | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s) 
                                          << 0x10U));
    this->s = ((0xfffdffffU & this->s) | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s) 
                                          << 0x11U));
    this->s = ((0xfffbffffU & this->s) | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s) 
                                          << 0x12U));
    this->s = ((0xfff7ffffU & this->s) | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s) 
                                          << 0x13U));
    this->s = ((0xffefffffU & this->s) | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s) 
                                          << 0x14U));
    this->s = ((0xffdfffffU & this->s) | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s) 
                                          << 0x15U));
    this->s = ((0xffbfffffU & this->s) | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s) 
                                          << 0x16U));
    this->s = ((0xff7fffffU & this->s) | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s) 
                                          << 0x17U));
    this->s = ((0xfeffffffU & this->s) | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s) 
                                          << 0x18U));
    this->s = ((0xfdffffffU & this->s) | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s) 
                                          << 0x19U));
    this->s = ((0xfbffffffU & this->s) | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s) 
                                          << 0x1aU));
    this->s = ((0xf7ffffffU & this->s) | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s) 
                                          << 0x1bU));
    this->s = ((0xefffffffU & this->s) | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s) 
                                          << 0x1cU));
    this->s = ((0xdfffffffU & this->s) | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s) 
                                          << 0x1dU));
    this->s = ((0xbfffffffU & this->s) | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s) 
                                          << 0x1eU));
    this->s = ((0x7fffffffU & this->s) | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s) 
                                          << 0x1fU));
    this->carry_values = ((0xfffffffdU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry) 
                             << 1U));
    this->carry_values = ((0xfffffffbU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry) 
                             << 2U));
    this->carry_values = ((0xfffffff7U & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry) 
                             << 3U));
    this->carry_values = ((0xffffffefU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry) 
                             << 4U));
    this->carry_values = ((0xffffffdfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry) 
                             << 5U));
    this->carry_values = ((0xffffffbfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry) 
                             << 6U));
    this->carry_values = ((0xffffff7fU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry) 
                             << 7U));
    this->carry_values = ((0xfffffeffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry) 
                             << 8U));
    this->carry_values = ((0xfffffdffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry) 
                             << 9U));
    this->carry_values = ((0xfffffbffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry) 
                             << 0xaU));
    this->carry_values = ((0xfffff7ffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry) 
                             << 0xbU));
    this->carry_values = ((0xffffefffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry) 
                             << 0xcU));
    this->carry_values = ((0xffffdfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry) 
                             << 0xdU));
    this->carry_values = ((0xffffbfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry) 
                             << 0xeU));
    this->carry_values = ((0xffff7fffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry) 
                             << 0xfU));
    this->carry_values = ((0xfffeffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry) 
                             << 0x10U));
    this->carry_values = ((0xfffdffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry) 
                             << 0x11U));
    this->carry_values = ((0xfffbffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry) 
                             << 0x12U));
    this->carry_values = ((0xfff7ffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry) 
                             << 0x13U));
    this->carry_values = ((0xffefffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry) 
                             << 0x14U));
    this->carry_values = ((0xffdfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry) 
                             << 0x15U));
    this->carry_values = ((0xffbfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry) 
                             << 0x16U));
    this->carry_values = ((0xff7fffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry) 
                             << 0x17U));
    this->carry_values = ((0xfeffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry) 
                             << 0x18U));
    this->carry_values = ((0xfdffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry) 
                             << 0x19U));
    this->carry_values = ((0xfbffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry) 
                             << 0x1aU));
    this->carry_values = ((0xf7ffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry) 
                             << 0x1bU));
    this->carry_values = ((0xefffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry) 
                             << 0x1cU));
    this->carry_values = ((0xdfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry) 
                             << 0x1dU));
    this->carry_values = ((0xbfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry) 
                             << 0x1eU));
    this->carry_values = ((0x7fffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry) 
                             << 0x1fU));
}

VL_INLINE_OPT void Vtop_adder::_combo__TOP__twofish_ctr__DOT__genblk1__BRA__0__KET____DOT__key_words_i__DOT__ai__33(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_adder::_combo__TOP__twofish_ctr__DOT__genblk1__BRA__0__KET____DOT__key_words_i__DOT__ai__33\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->h0__DOT__a = (1U & (this->a >> 0U));
    this->h0__DOT__b = (1U & (this->b >> 0U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 1U));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 2U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 3U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 4U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 5U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 6U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 7U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 8U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 9U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xaU));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xbU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xcU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xdU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xeU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0xfU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x10U));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x11U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x12U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x13U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x14U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x15U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x16U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x17U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x18U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x19U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1aU));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1bU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1cU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1dU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1eU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__a 
        = (1U & (this->a >> 0x1fU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__b 
        = (1U & (this->b >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((this->a & this->b) >> 0x1fU));
    this->h0__DOT__s = (1U & (this->a ^ this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 7U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 8U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 9U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xaU));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xbU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xcU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xdU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xeU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0xfU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x10U));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x11U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x12U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x13U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x14U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x15U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x16U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x17U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x18U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x19U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1aU));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1bU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1cU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1dU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1eU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((this->a ^ this->b) >> 0x1fU));
    this->h0__DOT__carry = (1U & (this->a & this->b));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__a;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__b;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry;
    this->s = ((0xfffffffeU & this->s) | (IData)(this->h0__DOT__s));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s;
    this->carry_values = ((0xfffffffeU & this->carry_values) 
                          | (IData)(this->h0__DOT__carry));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0;
    this->c = (1U & (this->carry_values >> 0x1fU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0U));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c 
        = (1U & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
           & this->carry_values);
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 1U));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 2U));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 3U));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 4U));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 5U));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 6U));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 7U));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 8U));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 9U));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xaU));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xbU));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xcU));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xdU));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xeU));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0xfU));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x10U));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x11U));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x12U));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x13U));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x14U));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x15U));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x16U));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x17U));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x18U));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x19U));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1aU));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1bU));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1cU));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1dU));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
           & (this->carry_values >> 0x1eU));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
                 ^ this->carry_values));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 1U)));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 2U)));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 3U)));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 4U)));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 5U)));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 6U)));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 7U)));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 8U)));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 9U)));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xaU)));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xbU)));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xcU)));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xdU)));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xeU)));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0xfU)));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x10U)));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x11U)));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x12U)));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x13U)));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x14U)));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x15U)));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x16U)));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x17U)));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x18U)));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x19U)));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1aU)));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1bU)));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1cU)));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1dU)));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
                 ^ (this->carry_values >> 0x1eU)));
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__c;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__s 
        = this->genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s;
    this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__c_1));
    this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry 
        = ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_0) 
           | (IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__c_1));
    this->s = ((0xfffffffdU & this->s) | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__s) 
                                          << 1U));
    this->s = ((0xfffffffbU & this->s) | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__s) 
                                          << 2U));
    this->s = ((0xfffffff7U & this->s) | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__s) 
                                          << 3U));
    this->s = ((0xffffffefU & this->s) | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__s) 
                                          << 4U));
    this->s = ((0xffffffdfU & this->s) | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__s) 
                                          << 5U));
    this->s = ((0xffffffbfU & this->s) | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__s) 
                                          << 6U));
    this->s = ((0xffffff7fU & this->s) | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__s) 
                                          << 7U));
    this->s = ((0xfffffeffU & this->s) | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__s) 
                                          << 8U));
    this->s = ((0xfffffdffU & this->s) | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__s) 
                                          << 9U));
    this->s = ((0xfffffbffU & this->s) | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__s) 
                                          << 0xaU));
    this->s = ((0xfffff7ffU & this->s) | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__s) 
                                          << 0xbU));
    this->s = ((0xffffefffU & this->s) | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__s) 
                                          << 0xcU));
    this->s = ((0xffffdfffU & this->s) | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__s) 
                                          << 0xdU));
    this->s = ((0xffffbfffU & this->s) | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__s) 
                                          << 0xeU));
    this->s = ((0xffff7fffU & this->s) | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__s) 
                                          << 0xfU));
    this->s = ((0xfffeffffU & this->s) | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__s) 
                                          << 0x10U));
    this->s = ((0xfffdffffU & this->s) | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__s) 
                                          << 0x11U));
    this->s = ((0xfffbffffU & this->s) | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__s) 
                                          << 0x12U));
    this->s = ((0xfff7ffffU & this->s) | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__s) 
                                          << 0x13U));
    this->s = ((0xffefffffU & this->s) | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__s) 
                                          << 0x14U));
    this->s = ((0xffdfffffU & this->s) | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__s) 
                                          << 0x15U));
    this->s = ((0xffbfffffU & this->s) | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__s) 
                                          << 0x16U));
    this->s = ((0xff7fffffU & this->s) | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__s) 
                                          << 0x17U));
    this->s = ((0xfeffffffU & this->s) | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__s) 
                                          << 0x18U));
    this->s = ((0xfdffffffU & this->s) | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__s) 
                                          << 0x19U));
    this->s = ((0xfbffffffU & this->s) | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__s) 
                                          << 0x1aU));
    this->s = ((0xf7ffffffU & this->s) | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__s) 
                                          << 0x1bU));
    this->s = ((0xefffffffU & this->s) | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__s) 
                                          << 0x1cU));
    this->s = ((0xdfffffffU & this->s) | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__s) 
                                          << 0x1dU));
    this->s = ((0xbfffffffU & this->s) | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__s) 
                                          << 0x1eU));
    this->s = ((0x7fffffffU & this->s) | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__s) 
                                          << 0x1fU));
    this->carry_values = ((0xfffffffdU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__1__KET____DOT__f_i__DOT__carry) 
                             << 1U));
    this->carry_values = ((0xfffffffbU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__2__KET____DOT__f_i__DOT__carry) 
                             << 2U));
    this->carry_values = ((0xfffffff7U & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__3__KET____DOT__f_i__DOT__carry) 
                             << 3U));
    this->carry_values = ((0xffffffefU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__4__KET____DOT__f_i__DOT__carry) 
                             << 4U));
    this->carry_values = ((0xffffffdfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__5__KET____DOT__f_i__DOT__carry) 
                             << 5U));
    this->carry_values = ((0xffffffbfU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__6__KET____DOT__f_i__DOT__carry) 
                             << 6U));
    this->carry_values = ((0xffffff7fU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__7__KET____DOT__f_i__DOT__carry) 
                             << 7U));
    this->carry_values = ((0xfffffeffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__8__KET____DOT__f_i__DOT__carry) 
                             << 8U));
    this->carry_values = ((0xfffffdffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__9__KET____DOT__f_i__DOT__carry) 
                             << 9U));
    this->carry_values = ((0xfffffbffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__10__KET____DOT__f_i__DOT__carry) 
                             << 0xaU));
    this->carry_values = ((0xfffff7ffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__11__KET____DOT__f_i__DOT__carry) 
                             << 0xbU));
    this->carry_values = ((0xffffefffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__12__KET____DOT__f_i__DOT__carry) 
                             << 0xcU));
    this->carry_values = ((0xffffdfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__13__KET____DOT__f_i__DOT__carry) 
                             << 0xdU));
    this->carry_values = ((0xffffbfffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__14__KET____DOT__f_i__DOT__carry) 
                             << 0xeU));
    this->carry_values = ((0xffff7fffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__15__KET____DOT__f_i__DOT__carry) 
                             << 0xfU));
    this->carry_values = ((0xfffeffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__16__KET____DOT__f_i__DOT__carry) 
                             << 0x10U));
    this->carry_values = ((0xfffdffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__17__KET____DOT__f_i__DOT__carry) 
                             << 0x11U));
    this->carry_values = ((0xfffbffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__18__KET____DOT__f_i__DOT__carry) 
                             << 0x12U));
    this->carry_values = ((0xfff7ffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__19__KET____DOT__f_i__DOT__carry) 
                             << 0x13U));
    this->carry_values = ((0xffefffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__20__KET____DOT__f_i__DOT__carry) 
                             << 0x14U));
    this->carry_values = ((0xffdfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__21__KET____DOT__f_i__DOT__carry) 
                             << 0x15U));
    this->carry_values = ((0xffbfffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__22__KET____DOT__f_i__DOT__carry) 
                             << 0x16U));
    this->carry_values = ((0xff7fffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__23__KET____DOT__f_i__DOT__carry) 
                             << 0x17U));
    this->carry_values = ((0xfeffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__24__KET____DOT__f_i__DOT__carry) 
                             << 0x18U));
    this->carry_values = ((0xfdffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__25__KET____DOT__f_i__DOT__carry) 
                             << 0x19U));
    this->carry_values = ((0xfbffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__26__KET____DOT__f_i__DOT__carry) 
                             << 0x1aU));
    this->carry_values = ((0xf7ffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__27__KET____DOT__f_i__DOT__carry) 
                             << 0x1bU));
    this->carry_values = ((0xefffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__28__KET____DOT__f_i__DOT__carry) 
                             << 0x1cU));
    this->carry_values = ((0xdfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__29__KET____DOT__f_i__DOT__carry) 
                             << 0x1dU));
    this->carry_values = ((0xbfffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__30__KET____DOT__f_i__DOT__carry) 
                             << 0x1eU));
    this->carry_values = ((0x7fffffffU & this->carry_values) 
                          | ((IData)(this->genblk1__BRA__31__KET____DOT__f_i__DOT__carry) 
                             << 0x1fU));
}

void Vtop_adder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_adder::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(32);
    b = VL_RAND_RESET_I(32);
    s = VL_RAND_RESET_I(32);
    c = VL_RAND_RESET_I(1);
    carry_values = VL_RAND_RESET_I(32);
    h0__DOT__a = VL_RAND_RESET_I(1);
    h0__DOT__b = VL_RAND_RESET_I(1);
    h0__DOT__carry = VL_RAND_RESET_I(1);
    h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__c = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry = VL_RAND_RESET_I(1);
    genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s = VL_RAND_RESET_I(1);
}
