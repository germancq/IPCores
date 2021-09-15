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
        VL_IN8(data_input,7,0);
        VL_IN8(data_ready,0,0);
        VL_IN8(start_hash,0,0);
        VL_OUT8(busy,0,0);
        VL_OUT8(end_hash,0,0);
        CData/*0:0*/ spongent_iter__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__rst;
        CData/*7:0*/ spongent_iter__DOT__data_input;
        CData/*0:0*/ spongent_iter__DOT__data_ready;
        CData/*0:0*/ spongent_iter__DOT__start_hash;
        CData/*0:0*/ spongent_iter__DOT__busy;
        CData/*0:0*/ spongent_iter__DOT__end_hash;
        CData/*0:0*/ spongent_iter__DOT__rst_lCounter;
        CData/*0:0*/ spongent_iter__DOT__shift_lCounter;
        CData/*5:0*/ spongent_iter__DOT__lCounter_state;
        CData/*0:0*/ spongent_iter__DOT__rst_permutation;
        CData/*0:0*/ spongent_iter__DOT__end_permutation;
        CData/*0:0*/ spongent_iter__DOT__rst_squezzing;
        CData/*0:0*/ spongent_iter__DOT__rst_permutation_from_squezzing;
        CData/*0:0*/ spongent_iter__DOT__end_squeezing;
        CData/*0:0*/ spongent_iter__DOT__rst_permutation_from_absorb;
        CData/*0:0*/ spongent_iter__DOT__begin_squeezing;
        CData/*0:0*/ spongent_iter__DOT__last_block;
        CData/*7:0*/ spongent_iter__DOT__last_padded_data;
        CData/*3:0*/ spongent_iter__DOT__current_state;
        CData/*3:0*/ spongent_iter__DOT__next_state;
        CData/*0:0*/ spongent_iter__DOT__lCounter__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__lCounter__DOT__rst;
        CData/*0:0*/ spongent_iter__DOT__lCounter__DOT__shift;
        CData/*6:0*/ spongent_iter__DOT__lCounter__DOT__feedback_coeff;
        CData/*5:0*/ spongent_iter__DOT__lCounter__DOT__initial_state;
        CData/*5:0*/ spongent_iter__DOT__lCounter__DOT__state;
        CData/*5:0*/ spongent_iter__DOT__lCounter__DOT__state_reg;
        CData/*0:0*/ spongent_iter__DOT__lCounter__DOT__bit_xored;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__rst;
        CData/*5:0*/ spongent_iter__DOT__permutation_impl__DOT__lCounter_state;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__rst_lCounter;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__shift_lCounter;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__end_permutation;
        CData/*5:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_o;
        CData/*5:0*/ spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__down;
        CData/*5:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__din;
        CData/*5:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout;
    };
    struct {
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__rst;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__end_permutation;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing;
        CData/*4:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up;
        CData/*7:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk;
        CData/*1:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__current_state;
        CData/*1:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__next_state;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down;
        CData/*4:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din;
        CData/*4:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_OUTW(digest,87,0,3);
        VlWide<3>/*87:0*/ spongent_iter__DOT__digest;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_state;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_initial_state;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_initial_state_from_squezzing;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_initial_state_from_absorb;
        VlWide<3>/*87:0*/ spongent_iter__DOT__state;
        VlWide<3>/*87:0*/ spongent_iter__DOT__standart_initial_state_from_absorb;
        VlWide<3>/*87:0*/ spongent_iter__DOT__last_initial_state_from_absorb;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_impl__DOT__initial_state;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_impl__DOT__state;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_impl__DOT__state_reg;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_impl__DOT__state_S_box;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din;
        VlWide<3>/*87:0*/ spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout;
        VlWide<3>/*87:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state;
        VlWide<3>/*87:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state;
    };
    struct {
        VlWide<3>/*87:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__result;
        VlWide<3>/*87:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__state;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr IData/*31:0*/ spongent_iter__DOT__N = 0x00000058U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__c = 0x00000050U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__r = 8U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__R = 0x0000002dU;
    static constexpr IData/*31:0*/ spongent_iter__DOT__lCounter_initial_state = 5U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__lCounter_feedback_coeff = 0x00000061U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__b = 0x00000058U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__IDLE = 0U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__PERMUTATION = 1U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__WAIT_PERMUTATION = 2U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__WAIT_FOR_DATA = 3U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__SQUEZZING_PHASE = 4U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__END_STATE = 5U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__WAIT_REG = 6U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__lCounter__DOT__DATA_WIDTH = 6U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__permutation_impl__DOT__DATA_WIDTH = 0x00000058U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__permutation_impl__DOT__R = 0x0000002dU;
    static constexpr IData/*31:0*/ spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__DATA_WIDTH = 6U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__DATA_WIDTH = 0x00000058U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__N = 0x00000058U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__b = 0x00000058U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__r = 8U;
    static constexpr IData/*31:0*/ spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__DATA_WIDTH = 5U;

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
