// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_permutation__D110_R8c;


//----------

VL_MODULE(Vtop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vtop_permutation__D110_R8c* __PVT__hmac_spongent__DOT__hash_0__DOT__permutation_impl;
    Vtop_permutation__D110_R8c* __PVT__hmac_spongent__DOT__hash_1__DOT__permutation_impl;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(end_hmac,0,0);
    VL_OUTW(digest,255,0,8);
    VL_IN64(key,63,0);
    VL_IN64(msg,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ hmac_spongent__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__end_hmac;
        CData/*0:0*/ hmac_spongent__DOT__end_hash_0;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__end_hash;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__rst_lCounter;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__shift_lCounter;
        CData/*7:0*/ hmac_spongent__DOT__hash_0__DOT__lCounter_state;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__end_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__rst_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__end_absorbing;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_absorb;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__rst_permutation_from_squezzing;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__shift;
        CData/*7:0*/ hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__initial_state;
        CData/*7:0*/ hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state;
        CData/*7:0*/ hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__state_reg;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__bit_xored;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__end_absorbing;
        CData/*5:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_o;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up;
        CData/*1:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__current_state;
        CData/*1:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__down;
        CData/*5:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__din;
        CData/*5:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__end_squeezing;
        CData/*4:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_o;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up;
        CData/*1:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__current_state;
        CData/*1:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down;
        CData/*4:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din;
        CData/*4:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__end_hash;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__rst_lCounter;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__shift_lCounter;
        CData/*7:0*/ hmac_spongent__DOT__hash_1__DOT__lCounter_state;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__end_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__rst_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__end_absorbing;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_absorb;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__rst_permutation_from_squezzing;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__clk;
    };
    struct {
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__shift;
        CData/*7:0*/ hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__initial_state;
        CData/*7:0*/ hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state;
        CData/*7:0*/ hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__state_reg;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__bit_xored;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__end_absorbing;
        CData/*6:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_o;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up;
        CData/*1:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__current_state;
        CData/*1:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__down;
        CData/*6:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__din;
        CData/*6:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_impl__DOT__dout;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__end_squeezing;
        CData/*4:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_o;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up;
        CData/*1:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__current_state;
        CData/*1:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up;
        CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down;
        CData/*4:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din;
        CData/*4:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout;
        SData/*8:0*/ hmac_spongent__DOT__hash_0__DOT__lCounter__DOT__feedback_coeff;
        SData/*15:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__msg_chunk;
        SData/*15:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result_chunk;
        SData/*8:0*/ hmac_spongent__DOT__hash_1__DOT__lCounter__DOT__feedback_coeff;
        SData/*15:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__msg_chunk;
        SData/*15:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result_chunk;
        WData/*255:0*/ hmac_spongent__DOT__digest[8];
        WData/*255:0*/ hmac_spongent__DOT__ipad[8];
        WData/*255:0*/ hmac_spongent__DOT__opad[8];
        WData/*255:0*/ hmac_spongent__DOT__Si[8];
        WData/*255:0*/ hmac_spongent__DOT__So[8];
        WData/*255:0*/ hmac_spongent__DOT__hash_output_0[8];
        WData/*319:0*/ hmac_spongent__DOT__hash_0__DOT__msg[10];
        WData/*255:0*/ hmac_spongent__DOT__hash_0__DOT__hash[8];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__permutation_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__permutation_initial_state[9];
        WData/*335:0*/ hmac_spongent__DOT__hash_0__DOT__padded_msg[11];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_absorb[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__permutation_initial_state_from_squezzing[9];
        WData/*335:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__padded_msg[11];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__permutation_initial_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__absorbing_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__permutation_initial_state[9];
        WData/*255:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__result[8];
    };
    struct {
        WData/*271:0*/ hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__state[9];
        WData/*511:0*/ hmac_spongent__DOT__hash_1__DOT__msg[16];
        WData/*255:0*/ hmac_spongent__DOT__hash_1__DOT__hash[8];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__permutation_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__permutation_initial_state[9];
        WData/*527:0*/ hmac_spongent__DOT__hash_1__DOT__padded_msg[17];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_absorb[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__permutation_initial_state_from_squezzing[9];
        WData/*527:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__padded_msg[17];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__permutation_initial_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__absorbing_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_state[9];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__permutation_initial_state[9];
        WData/*255:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__result[8];
        WData/*271:0*/ hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__state[9];
        QData/*63:0*/ hmac_spongent__DOT__key;
        QData/*63:0*/ hmac_spongent__DOT__msg;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ hmac_spongent__DOT__hash_0__DOT____Vcellinp__squeezing_phase_impl__rst;
    CData/*0:0*/ hmac_spongent__DOT__hash_1__DOT____Vcellinp__squeezing_phase_impl__rst;
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__clk;
    CData/*0:0*/ __Vclklast__TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl__clk;
    WData/*319:0*/ hmac_spongent__DOT____Vcellinp__hash_0__msg[10];
    WData/*511:0*/ hmac_spongent__DOT____Vcellinp__hash_1__msg[16];
    static CData/*1:0*/ __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__next_state[16];
    static CData/*0:0*/ __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__rst_permutation[16];
    static CData/*0:0*/ __Vtable1_hmac_spongent__DOT__hash_0__DOT__absorbing_phase_impl__DOT__counter_up[16];
    static CData/*1:0*/ __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__next_state[16];
    static CData/*0:0*/ __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__rst_permutation[16];
    static CData/*0:0*/ __Vtable2_hmac_spongent__DOT__hash_0__DOT__squeezing_phase_impl__DOT__counter_up[16];
    static CData/*1:0*/ __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__next_state[16];
    static CData/*0:0*/ __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__rst_permutation[16];
    static CData/*0:0*/ __Vtable3_hmac_spongent__DOT__hash_1__DOT__absorbing_phase_impl__DOT__counter_up[16];
    static CData/*1:0*/ __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__next_state[16];
    static CData/*0:0*/ __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__rst_permutation[16];
    static CData/*0:0*/ __Vtable4_hmac_spongent__DOT__hash_1__DOT__squeezing_phase_impl__DOT__counter_up[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__11(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__12(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__10(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
