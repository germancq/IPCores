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
    vlSelf->present_ctr__DOT__block_i = vlSelf->block_i;
    vlSelf->present_ctr__DOT__rq_data = vlSelf->rq_data;
    vlSelf->present_ctr__DOT__adder_inst__DOT__h0__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__h0__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0U)));
    vlSelf->present_ctr__DOT__IV = vlSelf->IV;
    vlSelf->present_ctr__DOT__block_number = vlSelf->block_number;
    vlSelf->present_ctr__DOT__key[0U] = vlSelf->key[0U];
    vlSelf->present_ctr__DOT__key[1U] = vlSelf->key[1U];
    vlSelf->present_ctr__DOT__key[2U] = vlSelf->key[2U];
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 1U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 1U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 2U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 2U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 3U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 3U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 4U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 4U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 5U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 5U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 6U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 6U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 7U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 7U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 8U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 8U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 9U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 9U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0xaU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0xaU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0xbU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0xbU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0xcU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0xcU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0xdU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0xdU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0xeU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0xeU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0xfU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0xfU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x10U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x10U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x11U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x11U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x12U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x12U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x13U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x13U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x14U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x14U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x15U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x15U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x16U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x16U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x17U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x17U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x18U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x18U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x19U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x19U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x1aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x1aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x1bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x1bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x1cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x1cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x1dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x1dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x1eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x1eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x1fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x1fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x20U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x20U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x21U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x21U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x22U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x22U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x23U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x23U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x24U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x24U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x25U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x25U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x26U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x26U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x27U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x27U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x28U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x28U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x29U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x29U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x2aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x2aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x2bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x2bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x2cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x2cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x2dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x2dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x2eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x2eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x2fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x2fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x30U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x30U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x31U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x31U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x32U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x32U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x33U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x33U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x34U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x34U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x35U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x35U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x36U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x36U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x37U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x37U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x38U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x38U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x39U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x39U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x3aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x3aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x3bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x3bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x3cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x3cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x3dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x3dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x3eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x3eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__a 
        = (1U & (IData)((vlSelf->IV >> 0x3fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__b 
        = (1U & (IData)((vlSelf->block_number >> 0x3fU)));
    vlSelf->present_ctr__DOT__rst = vlSelf->rst;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 1U)) & (IData)(
                                                       (vlSelf->block_number 
                                                        >> 1U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 2U)) & (IData)(
                                                       (vlSelf->block_number 
                                                        >> 2U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 3U)) & (IData)(
                                                       (vlSelf->block_number 
                                                        >> 3U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 4U)) & (IData)(
                                                       (vlSelf->block_number 
                                                        >> 4U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 5U)) & (IData)(
                                                       (vlSelf->block_number 
                                                        >> 5U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 6U)) & (IData)(
                                                       (vlSelf->block_number 
                                                        >> 6U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 7U)) & (IData)(
                                                       (vlSelf->block_number 
                                                        >> 7U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 8U)) & (IData)(
                                                       (vlSelf->block_number 
                                                        >> 8U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 9U)) & (IData)(
                                                       (vlSelf->block_number 
                                                        >> 9U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0xaU)) & (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xaU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0xbU)) & (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xbU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0xcU)) & (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xcU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0xdU)) & (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xdU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0xeU)) & (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xeU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0xfU)) & (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xfU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x10U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x10U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x11U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x11U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x12U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x12U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x13U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x13U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x14U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x14U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x15U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x15U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x16U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x16U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x17U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x17U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x18U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x18U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x19U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x19U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x1aU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1aU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x1bU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1bU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x1cU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1cU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x1dU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1dU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x1eU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1eU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x1fU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1fU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x20U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x20U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x21U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x21U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x22U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x22U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x23U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x23U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x24U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x24U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x25U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x25U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x26U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x26U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x27U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x27U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x28U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x28U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x29U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x29U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x2aU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2aU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x2bU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2bU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x2cU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2cU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x2dU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2dU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x2eU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2eU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x2fU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2fU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x30U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x30U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x31U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x31U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x32U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x32U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x33U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x33U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x34U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x34U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x35U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x35U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x36U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x36U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x37U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x37U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x38U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x38U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x39U)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x39U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x3aU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3aU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x3bU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3bU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x3cU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3cU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x3dU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3dU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (1U & ((IData)((vlSelf->IV >> 0x3eU)) & (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3eU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__carry 
        = (IData)(((vlSelf->IV & vlSelf->block_number) 
                   >> 0x3fU));
    vlSelf->present_ctr__DOT__clk = vlSelf->clk;
    vlSelf->present_ctr__DOT__adder_inst__DOT__h0__DOT__s 
        = (1U & ((IData)(vlSelf->IV) ^ (IData)(vlSelf->block_number)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 1U)) ^ (IData)(
                                                       (vlSelf->block_number 
                                                        >> 1U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 2U)) ^ (IData)(
                                                       (vlSelf->block_number 
                                                        >> 2U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 3U)) ^ (IData)(
                                                       (vlSelf->block_number 
                                                        >> 3U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 4U)) ^ (IData)(
                                                       (vlSelf->block_number 
                                                        >> 4U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 5U)) ^ (IData)(
                                                       (vlSelf->block_number 
                                                        >> 5U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 6U)) ^ (IData)(
                                                       (vlSelf->block_number 
                                                        >> 6U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 7U)) ^ (IData)(
                                                       (vlSelf->block_number 
                                                        >> 7U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 8U)) ^ (IData)(
                                                       (vlSelf->block_number 
                                                        >> 8U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 9U)) ^ (IData)(
                                                       (vlSelf->block_number 
                                                        >> 9U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0xaU)) ^ (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xaU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0xbU)) ^ (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xbU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0xcU)) ^ (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xcU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0xdU)) ^ (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xdU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0xeU)) ^ (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xeU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0xfU)) ^ (IData)(
                                                         (vlSelf->block_number 
                                                          >> 0xfU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x10U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x10U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x11U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x11U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x12U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x12U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x13U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x13U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x14U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x14U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x15U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x15U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x16U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x16U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x17U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x17U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x18U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x18U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x19U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x19U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x1aU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1aU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x1bU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1bU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x1cU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1cU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x1dU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1dU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x1eU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1eU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x1fU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x1fU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x20U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x20U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x21U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x21U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x22U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x22U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x23U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x23U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x24U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x24U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x25U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x25U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x26U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x26U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x27U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x27U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x28U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x28U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x29U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x29U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x2aU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2aU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x2bU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2bU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x2cU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2cU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x2dU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2dU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x2eU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2eU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x2fU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x2fU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x30U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x30U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x31U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x31U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x32U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x32U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x33U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x33U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x34U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x34U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x35U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x35U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x36U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x36U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x37U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x37U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x38U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x38U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x39U)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x39U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x3aU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3aU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x3bU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3bU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x3cU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3cU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x3dU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3dU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__s 
        = (1U & ((IData)((vlSelf->IV >> 0x3eU)) ^ (IData)(
                                                          (vlSelf->block_number 
                                                           >> 0x3eU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__s 
        = (IData)(((vlSelf->IV ^ vlSelf->block_number) 
                   >> 0x3fU));
    vlSelf->present_ctr__DOT__adder_inst__DOT__h0__DOT__carry 
        = (1U & ((IData)(vlSelf->IV) & (IData)(vlSelf->block_number)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__a = vlSelf->present_ctr__DOT__IV;
    vlSelf->present_ctr__DOT__adder_inst__DOT__b = vlSelf->present_ctr__DOT__block_number;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key[0U] 
        = vlSelf->present_ctr__DOT__key[0U];
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key[1U] 
        = vlSelf->present_ctr__DOT__key[1U];
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key[2U] 
        = vlSelf->present_ctr__DOT__key[2U];
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__a;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__b;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__rst 
        = vlSelf->present_ctr__DOT__rst;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__carry;
    vlSelf->present_ctr__DOT__result__DOT__clk = vlSelf->present_ctr__DOT__clk;
    vlSelf->present_ctr__DOT__reg_end_signal__DOT__clk 
        = vlSelf->present_ctr__DOT__clk;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__clk 
        = vlSelf->present_ctr__DOT__clk;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__clk 
        = vlSelf->present_ctr__DOT__clk;
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xfffffffffffffffeULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | (IData)((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__h0__DOT__s)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h0__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xfffffffffffffffeULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | (IData)((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__h0__DOT__carry)));
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__rst 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__rst;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__clk 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__clk;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__clk 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__clk;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__clk 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__clk;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__clk 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__clk;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__clk 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__clk;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__a 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0;
    vlSelf->present_ctr__DOT__adder_inst__DOT__c = 
        (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                       >> 0x3fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 1U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 2U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 3U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 4U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 5U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 6U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 7U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 8U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 9U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xaU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xbU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xcU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xdU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xeU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0xfU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x10U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x11U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x12U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x13U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x14U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x15U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x16U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x17U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x18U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x19U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x1fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x20U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x21U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x22U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x23U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x24U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x25U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x26U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x27U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x28U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x29U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x2fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x30U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x31U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x32U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x33U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x34U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x35U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x36U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x37U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x38U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x39U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c 
        = (1U & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                         >> 0x3eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
           & (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 1U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 2U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 3U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 4U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 5U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 6U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 7U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 8U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 9U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xaU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xbU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xcU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xdU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xeU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0xfU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x10U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x11U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x12U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x13U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x14U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x15U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x16U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x17U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x18U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x19U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x1fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x20U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x21U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x22U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x23U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x24U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x25U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x26U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x27U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x28U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x29U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x2fU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x30U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x31U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x32U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x33U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x34U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x35U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x36U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x37U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x38U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x39U)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3aU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3bU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3cU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3dU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0) 
           & (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                      >> 0x3eU)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values)));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 1U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 2U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 3U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 4U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 5U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 6U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 7U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 8U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 9U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xaU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xbU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xcU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xdU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xeU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0xfU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x10U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x11U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x12U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x13U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x14U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x15U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x16U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x17U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x18U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x19U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1aU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1bU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1cU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1dU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1eU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x1fU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x20U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x21U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x22U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x23U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x24U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x25U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x26U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x27U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x28U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x29U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2aU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2bU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2cU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2dU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2eU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x2fU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x30U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x31U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x32U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x33U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x34U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x35U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x36U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x37U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x38U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x39U))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3aU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3bU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3cU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3dU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__s 
        = (1U & ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s_0) 
                 ^ (IData)((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
                            >> 0x3eU))));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__b 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_1 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__carry;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__h1__DOT__s;
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__carry 
        = ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_0) 
           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__c_1));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xffffffffffffffe1ULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__s)))))) 
            << 1U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xfffffffffffffe1fULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__s)))))) 
            << 5U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xffffffffffffe1ffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__s)))))) 
            << 9U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xfffffffffffe1fffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__s)))))) 
            << 0xdU));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xffffffffffe1ffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__s)))))) 
            << 0x11U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xfffffffffe1fffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__s)))))) 
            << 0x15U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xffffffffe1ffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__s)))))) 
            << 0x19U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xfffffffe1fffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__s)))))) 
            << 0x1dU));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xffffffe1ffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__s)))))) 
            << 0x21U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xfffffe1fffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__s)))))) 
            << 0x25U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xffffe1ffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__s)))))) 
            << 0x29U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xfffe1fffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__s)))))) 
            << 0x2dU));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xffe1ffffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__s)))))) 
            << 0x31U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xfe1fffffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__s)))))) 
            << 0x35U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0xe1ffffffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__s) 
                              << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__s) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__s)))))) 
            << 0x39U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__s = 
        ((0x1fffffffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__s) 
         | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__s) 
                              << 2U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__s) 
                                         << 1U) | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__s))))) 
            << 0x3dU));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xffffffffffffffe1ULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__4__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__3__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__2__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__1__KET____DOT__f_i__DOT__carry)))))) 
              << 1U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xfffffffffffffe1fULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__8__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__7__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__6__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__5__KET____DOT__f_i__DOT__carry)))))) 
              << 5U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xffffffffffffe1ffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__12__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__11__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__10__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__9__KET____DOT__f_i__DOT__carry)))))) 
              << 9U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xfffffffffffe1fffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__16__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__15__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__14__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__13__KET____DOT__f_i__DOT__carry)))))) 
              << 0xdU));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xffffffffffe1ffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__20__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__19__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__18__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__17__KET____DOT__f_i__DOT__carry)))))) 
              << 0x11U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xfffffffffe1fffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__24__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__23__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__22__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__21__KET____DOT__f_i__DOT__carry)))))) 
              << 0x15U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xffffffffe1ffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__28__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__27__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__26__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__25__KET____DOT__f_i__DOT__carry)))))) 
              << 0x19U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xfffffffe1fffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__32__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__31__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__30__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__29__KET____DOT__f_i__DOT__carry)))))) 
              << 0x1dU));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xffffffe1ffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__36__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__35__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__34__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__33__KET____DOT__f_i__DOT__carry)))))) 
              << 0x21U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xfffffe1fffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__40__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__39__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__38__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__37__KET____DOT__f_i__DOT__carry)))))) 
              << 0x25U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xffffe1ffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__44__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__43__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__42__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__41__KET____DOT__f_i__DOT__carry)))))) 
              << 0x29U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xfffe1fffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__48__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__47__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__46__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__45__KET____DOT__f_i__DOT__carry)))))) 
              << 0x2dU));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xffe1ffffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__52__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__51__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__50__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__49__KET____DOT__f_i__DOT__carry)))))) 
              << 0x31U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xfe1fffffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__56__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__55__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__54__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__53__KET____DOT__f_i__DOT__carry)))))) 
              << 0x35U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0xe1ffffffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__60__KET____DOT__f_i__DOT__carry) 
                                << 3U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__59__KET____DOT__f_i__DOT__carry) 
                                           << 2U) | 
                                          (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__58__KET____DOT__f_i__DOT__carry) 
                                            << 1U) 
                                           | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__57__KET____DOT__f_i__DOT__carry)))))) 
              << 0x39U));
    vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values 
        = ((0x1fffffffffffffffULL & vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__63__KET____DOT__f_i__DOT__carry) 
                                << 2U) | (((IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__62__KET____DOT__f_i__DOT__carry) 
                                           << 1U) | (IData)(vlSelf->present_ctr__DOT__adder_inst__DOT__genblk1__BRA__61__KET____DOT__f_i__DOT__carry))))) 
              << 0x3dU));
    vlSelf->present_ctr__DOT__text = vlSelf->present_ctr__DOT__adder_inst__DOT__s;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__text 
        = vlSelf->present_ctr__DOT__text;
}

extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_h443e93db_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    CData/*4:0*/ __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    CData/*4:0*/ __Vdlyvdim0__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
    QData/*63:0*/ __Vdlyvval__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
    CData/*0:0*/ __Vdlyvset__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
    CData/*4:0*/ __Vdly__present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
    // Body
    __Vdlyvset__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 = 0U;
    __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    __Vdly__present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
    if (vlSelf->present_ctr__DOT____Vcellinp__result__cl) {
        vlSelf->present_ctr__DOT__reg_end_signal__DOT__dout = 0U;
        vlSelf->present_ctr__DOT__result__DOT__dout = 0ULL;
    } else if (vlSelf->present_ctr__DOT__end_enc) {
        vlSelf->present_ctr__DOT__reg_end_signal__DOT__dout = 1U;
        vlSelf->present_ctr__DOT__result__DOT__dout 
            = vlSelf->present_ctr__DOT____Vcellinp__result__din;
    }
    if (vlSelf->present_ctr__DOT__key_sch_impl__DOT__r_w) {
        __Vdlyvval__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 
            = (((QData)((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                << 0x30U) | (((QData)((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                           >> 0x10U)));
        __Vdlyvset__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 = 1U;
        __Vdlyvdim0__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0 
            = vlSelf->present_ctr__DOT__key_sch_impl__DOT__mem_addr;
    }
    if (vlSelf->rst) {
        __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout = 0U;
    } else if (vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_up) {
        __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout)));
    }
    if (vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_cl) {
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U] = 0U;
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U] = 0U;
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U] = 0U;
    } else if (vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_w) {
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U] 
            = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U];
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U] 
            = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U];
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U] 
            = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U];
    }
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__next_state));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__end_signal 
        = ((~ (IData)(vlSelf->present_ctr__DOT____Vcellinp__present_enc_impl__rst)) 
           & (0x1fU == (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__key_index)));
    if (vlSelf->present_ctr__DOT____Vcellinp__present_enc_impl__rst) {
        vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__dout = 0ULL;
    } else if (vlSelf->present_ctr__DOT__present_enc_impl__DOT__register_w) {
        vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__dout 
            = vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_o;
    }
    if ((1U & (~ (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__r_w)))) {
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__dout 
            = vlSelf->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_
            [vlSelf->present_ctr__DOT__key_sch_impl__DOT__mem_addr];
    }
    if (vlSelf->present_ctr__DOT____Vcellinp__present_enc_impl__rst) {
        __Vdly__present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout = 0U;
    } else if (vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_up) {
        __Vdly__present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout)));
    }
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    if (__Vdlyvset__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0) {
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory_[__Vdlyvdim0__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0] 
            = __Vdlyvval__present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__memory___v0;
    }
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout 
        = __Vdly__present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
    vlSelf->present_ctr__DOT__end_signal = vlSelf->present_ctr__DOT__reg_end_signal__DOT__dout;
    vlSelf->present_ctr__DOT__block_o = vlSelf->present_ctr__DOT__result__DOT__dout;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_output 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__dout;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U] 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[0U];
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U] 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[1U];
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U] 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__dout[2U];
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 0U;
    if ((4U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 1U;
    } else if ((1U & (~ (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_w = 1U;
    }
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_up = 0U;
    if ((1U & (~ ((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_up = 1U;
            }
        }
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__r_w = 0U;
        if ((1U & (~ ((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
                vlSelf->present_ctr__DOT__key_sch_impl__DOT__r_w = 1U;
            }
        }
    } else {
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__r_w = 0U;
    }
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__end_signal = 0U;
    if ((4U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
                vlSelf->present_ctr__DOT__key_sch_impl__DOT__end_signal = 1U;
            }
        }
    }
    vlSelf->present_ctr__DOT__end_enc = vlSelf->present_ctr__DOT__present_enc_impl__DOT__end_signal;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__register_output 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__dout;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__roundkey 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__dout;
    if ((1U & (~ (IData)(vlSelf->present_ctr__DOT____Vcellinp__present_enc_impl__rst)))) {
        vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_up 
            = (0x1fU != (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__key_index));
    }
    vlSelf->end_signal = vlSelf->present_ctr__DOT__end_signal;
    vlSelf->block_o = vlSelf->present_ctr__DOT__block_o;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__next_state 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state;
    if ((4U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlSelf->present_ctr__DOT__key_sch_impl__DOT__next_state = 1U;
            }
        }
    } else {
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__next_state 
            = ((2U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))
                ? ((1U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))
                    ? 4U : 3U) : ((1U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))
                                   ? ((0x1fU == (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_output))
                                       ? 5U : 2U) : 1U));
    }
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__din 
        = (((QData)((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[
                            (((IData)(0x3fU) + (IData)(0x10U)) 
                             >> 5U)])) << ((0U == 0x10U)
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (IData)(0x10U)))) 
           | (((0U == 0x10U) ? 0ULL : ((QData)((IData)(
                                                       vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[
                                                       (((IData)(0x1fU) 
                                                         + (IData)(0x10U)) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (IData)(0x10U)))) 
              | ((QData)((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                 >> 0x10U)));
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__din 
        = (0xfU & (((0U == 0xcU) ? 0U : (vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[
                                         (((IData)(3U) 
                                           + (IData)(0x4cU)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(0xcU)))) 
                   | (vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U] 
                      >> 0xcU)));
    __Vtableidx1 = (0xfU & (vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U] 
                            >> 0xcU));
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx1];
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__w 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_w;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__up 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_up;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__r_w 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__r_w;
    vlSelf->present_ctr__DOT__end_key_generation = vlSelf->present_ctr__DOT__key_sch_impl__DOT__end_signal;
    vlSelf->present_ctr__DOT__result__DOT__w = vlSelf->present_ctr__DOT__end_enc;
    vlSelf->present_ctr__DOT__reg_end_signal__DOT__w 
        = vlSelf->present_ctr__DOT__end_enc;
    vlSelf->present_ctr__DOT__roundkey = vlSelf->present_ctr__DOT__key_sch_impl__DOT__roundkey;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__key_index 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__dout;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__s_box_output 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__sbox__DOT__dout;
    vlSelf->end_key_generation = vlSelf->present_ctr__DOT__end_key_generation;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__roundkey 
        = vlSelf->present_ctr__DOT__roundkey;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__result 
        = (vlSelf->present_ctr__DOT__present_enc_impl__DOT__register_output 
           ^ vlSelf->present_ctr__DOT__roundkey);
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__up 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_up;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__register_w 
        = (0U < (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__key_index));
    vlSelf->present_ctr__DOT__key_index_enc = vlSelf->present_ctr__DOT__present_enc_impl__DOT__key_index;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__key_i 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__roundkey;
    vlSelf->present_ctr__DOT__enc_o = vlSelf->present_ctr__DOT__present_enc_impl__DOT__result;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__w 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__register_w;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_index 
        = vlSelf->present_ctr__DOT__key_index_enc;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__mem_addr 
        = ((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__end_signal)
            ? (IData)(vlSelf->present_ctr__DOT__key_index_enc)
            : (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_output));
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__addr 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__mem_addr;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Init
    QData/*63:0*/ present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din;
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
    // Body
    vlSelf->present_ctr__DOT____Vcellinp__result__cl 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->rq_data));
    vlSelf->present_ctr__DOT____Vcellinp__present_enc_impl__rst 
        = (1U & ((~ (IData)(vlSelf->present_ctr__DOT__end_key_generation)) 
                 | (IData)(vlSelf->rq_data)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_i 
        = ((2U > (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__key_index))
            ? vlSelf->present_ctr__DOT__text : vlSelf->present_ctr__DOT__present_enc_impl__DOT__register_output);
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] = 0U;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] = 0U;
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] = 0U;
    if ((4U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
                vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
                    = (((IData)((0xfffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                     >> 0x14U))))) 
                        << 0x14U) | ((0xf8000U & ((0xffff8000U 
                                                   & vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U]) 
                                                  ^ 
                                                  ((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__counter_output) 
                                                   << 0xfU))) 
                                     | (0x7fffU & vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])));
                vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
                    = (((IData)((0xfffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                     >> 0x14U))))) 
                        >> 0xcU) | ((IData)(((0xfffffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                     << 0xcU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                       >> 0x14U)))) 
                                             >> 0x20U)) 
                                    << 0x14U));
                vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
                    = ((IData)(((0xfffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                     >> 0x14U)))) 
                                >> 0x20U)) >> 0xcU);
            }
        }
    } else if ((2U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state))) {
            vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
                = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U];
            vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
                = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U];
            vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
                = (((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__s_box_output) 
                    << 0xcU) | (0xfffU & vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U]));
        } else {
            vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
                = (IData)((0x1fffffffffffffffULL & 
                           (((QData)((IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                             << 0x2dU) | (((QData)((IData)(
                                                           vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                           << 0xdU) 
                                          | ((QData)((IData)(
                                                             vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                             >> 0x13U)))));
            vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
                = ((vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U] 
                    << 0x1dU) | (IData)(((0x1fffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[2U])) 
                                              << 0x2dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[1U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U])) 
                                                   >> 0x13U)))) 
                                         >> 0x20U)));
            vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
                = (0xffffU & (vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_output[0U] 
                              >> 3U));
        }
    } else if ((1U & (~ (IData)(vlSelf->present_ctr__DOT__key_sch_impl__DOT__current_state)))) {
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U] 
            = vlSelf->key[0U];
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U] 
            = vlSelf->key[1U];
        vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U] 
            = vlSelf->key[2U];
    }
    vlSelf->present_ctr__DOT____Vcellinp__result__din 
        = (vlSelf->present_ctr__DOT__enc_o ^ vlSelf->block_i);
    vlSelf->present_ctr__DOT__result__DOT__cl = vlSelf->present_ctr__DOT____Vcellinp__result__cl;
    vlSelf->present_ctr__DOT__reg_end_signal__DOT__cl 
        = vlSelf->present_ctr__DOT____Vcellinp__result__cl;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__rst 
        = vlSelf->present_ctr__DOT____Vcellinp__present_enc_impl__rst;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__rst 
        = vlSelf->present_ctr__DOT____Vcellinp__present_enc_impl__rst;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__cl 
        = vlSelf->present_ctr__DOT____Vcellinp__present_enc_impl__rst;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_i 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_i;
    present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
        = (vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_i 
           ^ vlSelf->present_ctr__DOT__roundkey);
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din[0U] 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[0U];
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din[1U] 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[1U];
    vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__din[2U] 
        = vlSelf->present_ctr__DOT__key_sch_impl__DOT__key_register_input[2U];
    vlSelf->present_ctr__DOT__result__DOT__din = vlSelf->present_ctr__DOT____Vcellinp__result__din;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__din 
        = present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 4U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 8U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0xcU)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x10U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x14U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x18U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x1cU)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x20U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x24U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x28U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x2cU)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x30U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x34U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x38U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__din 
        = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                           >> 0x3cU)));
    __Vtableidx2 = (0xfU & (IData)(present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx2];
    __Vtableidx3 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 4U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx3];
    __Vtableidx4 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 8U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx4];
    __Vtableidx5 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0xcU)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx5];
    __Vtableidx6 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0x10U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx6];
    __Vtableidx7 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0x14U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx7];
    __Vtableidx8 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0x18U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx8];
    __Vtableidx9 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                    >> 0x1cU)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx9];
    __Vtableidx10 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x20U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx10];
    __Vtableidx11 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x24U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx11];
    __Vtableidx12 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x28U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx12];
    __Vtableidx13 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x2cU)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx13];
    __Vtableidx14 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x30U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx14];
    __Vtableidx15 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x34U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx15];
    __Vtableidx16 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x38U)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx16];
    __Vtableidx17 = (0xfU & (IData)((present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT____Vcellinp__slayer_i__din 
                                     >> 0x3cU)));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout 
        = Vtop__ConstPool__TABLE_h443e93db_0[__Vtableidx17];
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffffffffffff0000ULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | (IData)((IData)((((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__3__KET____DOT__sbox__DOT__dout) 
                               << 0xcU) | (((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__2__KET____DOT__sbox__DOT__dout) 
                                            << 8U) 
                                           | (((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__1__KET____DOT__sbox__DOT__dout) 
                                               << 4U) 
                                              | (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__0__KET____DOT__sbox__DOT__dout)))))));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffffffff0000ffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__7__KET____DOT__sbox__DOT__dout) 
                                << 0xcU) | (((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__6__KET____DOT__sbox__DOT__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__5__KET____DOT__sbox__DOT__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__4__KET____DOT__sbox__DOT__dout)))))) 
              << 0x10U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffff0000ffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__11__KET____DOT__sbox__DOT__dout) 
                                << 0xcU) | (((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__10__KET____DOT__sbox__DOT__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__9__KET____DOT__sbox__DOT__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__8__KET____DOT__sbox__DOT__dout)))))) 
              << 0x20U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout 
        = ((0xffffffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout) 
           | ((QData)((IData)((((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__15__KET____DOT__sbox__DOT__dout) 
                                << 0xcU) | (((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__14__KET____DOT__sbox__DOT__dout) 
                                             << 8U) 
                                            | (((IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__13__KET____DOT__sbox__DOT__dout) 
                                                << 4U) 
                                               | (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__genblk1__BRA__12__KET____DOT__sbox__DOT__dout)))))) 
              << 0x30U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__slayer_i__DOT__dout;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__din 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffff8ULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                              >> 8U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                             >> 4U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o)))))));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffffffc7ULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x14U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x10U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0xcU))))))) 
              << 3U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffffe3fULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x20U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x1cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x18U))))))) 
              << 6U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffff1ffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x2cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x28U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x24U))))))) 
              << 9U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffff8fffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x38U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x34U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x30U))))))) 
              << 0xcU));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffffffc7fffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 5U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x3cU))))))) 
              << 0xfU));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffffe3ffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x11U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0xdU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 9U))))))) 
              << 0x12U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffff1fffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x19U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x15U))))))) 
              << 0x15U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffff8ffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x29U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x25U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x21U))))))) 
              << 0x18U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffffffc7ffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x35U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x31U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x2dU))))))) 
              << 0x1bU));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffffe3fffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 2U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x3dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x39U))))))) 
              << 0x1eU));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffff1ffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0xeU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0xaU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 6U))))))) 
              << 0x21U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffff8fffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x1aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x16U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x12U))))))) 
              << 0x24U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfffffc7fffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x26U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x22U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x1eU))))))) 
              << 0x27U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffffe3ffffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x32U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x2eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x2aU))))))) 
              << 0x2aU));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffff1fffffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x3eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x3aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x36U))))))) 
              << 0x2dU));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfff8ffffffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0xbU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 7U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 3U))))))) 
              << 0x30U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xffc7ffffffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x17U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x13U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0xfU))))))) 
              << 0x33U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xfe3fffffffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x23U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x1bU))))))) 
              << 0x36U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0xf1ffffffffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x2fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x2bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x27U))))))) 
              << 0x39U));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0x8fffffffffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                               >> 0x3bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                              >> 0x37U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                                               >> 0x33U))))))) 
              << 0x3cU));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout 
        = ((0x7fffffffffffffffULL & vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout) 
           | ((QData)((IData)((1U & (IData)((vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__s_box_o 
                                             >> 0x3fU))))) 
              << 0x3fU));
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__player_i__DOT__dout;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__p_layer_o;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_o 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__enc_stage_impl__DOT__block_o;
    vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__din 
        = vlSelf->present_ctr__DOT__present_enc_impl__DOT__block_o;
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

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values ^ vlSelf->__Vchglast__TOP__present_ctr__DOT__adder_inst__DOT__carry_values));
    VL_DEBUG_IF( if(__req && ((vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values ^ vlSelf->__Vchglast__TOP__present_ctr__DOT__adder_inst__DOT__carry_values))) VL_DBG_MSGF("        CHANGE: ../../../misc/adder/hdl_code/adder.sv:18: present_ctr.adder_inst.carry_values\n"); );
    // Final
    vlSelf->__Vchglast__TOP__present_ctr__DOT__adder_inst__DOT__carry_values 
        = vlSelf->present_ctr__DOT__adder_inst__DOT__carry_values;
    return __req;
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
    if (VL_UNLIKELY((vlSelf->key[2U] & 0xffff0000U))) {
        Verilated::overWidthError("key");}
    if (VL_UNLIKELY((vlSelf->rq_data & 0xfeU))) {
        Verilated::overWidthError("rq_data");}
}
#endif  // VL_DEBUG
