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

//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(next_data,0,0);
    VL_OUT8(end_block,0,0);
    VL_INW(key,79,0,3);
    VL_INW(iv,79,0,3);
    VL_OUTW(block_o,79,0,3);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ trivium_wrapper__DOT__clk;
        CData/*0:0*/ trivium_wrapper__DOT__rst;
        CData/*0:0*/ trivium_wrapper__DOT__next_data;
        CData/*0:0*/ trivium_wrapper__DOT__end_block;
        CData/*0:0*/ trivium_wrapper__DOT__shift_right;
        CData/*0:0*/ trivium_wrapper__DOT__key_stream;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_en;
        CData/*0:0*/ trivium_wrapper__DOT__warm_up_complete;
        CData/*6:0*/ trivium_wrapper__DOT__counter_out;
        CData/*6:0*/ trivium_wrapper__DOT__counter_in;
        CData/*0:0*/ trivium_wrapper__DOT__counter_up;
        CData/*6:0*/ trivium_wrapper__DOT__stop_value;
        CData/*0:0*/ trivium_wrapper__DOT__counter_rst;
        CData/*1:0*/ trivium_wrapper__DOT__current_state;
        CData/*1:0*/ trivium_wrapper__DOT__next_state;
        CData/*0:0*/ trivium_wrapper__DOT__reg_impl__DOT__clk;
        CData/*0:0*/ trivium_wrapper__DOT__reg_impl__DOT__cl;
        CData/*0:0*/ trivium_wrapper__DOT__reg_impl__DOT__shift_right;
        CData/*0:0*/ trivium_wrapper__DOT__reg_impl__DOT__shift_left;
        CData/*0:0*/ trivium_wrapper__DOT__reg_impl__DOT__load;
        CData/*0:0*/ trivium_wrapper__DOT__reg_impl__DOT__input_bit;
        CData/*0:0*/ trivium_wrapper__DOT__reg_impl__DOT__output_bit;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__clk;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__rst;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__en;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__key_stream;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__input_bit_A;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__input_bit_B;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__input_bit_C;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__a_and;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__b_and;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__c_and;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__A_out;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__B_out;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__C_out;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__clk;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__shift;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__load;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__input_bit;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__clk;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__shift;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__load;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__input_bit;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__clk;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__shift;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__load;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__input_bit;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__clk;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__rst;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__up;
        CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__down;
        CData/*0:0*/ trivium_wrapper__DOT__counter_impl__DOT__clk;
        CData/*0:0*/ trivium_wrapper__DOT__counter_impl__DOT__rst;
        CData/*0:0*/ trivium_wrapper__DOT__counter_impl__DOT__up;
        CData/*0:0*/ trivium_wrapper__DOT__counter_impl__DOT__down;
        CData/*6:0*/ trivium_wrapper__DOT__counter_impl__DOT__din;
        CData/*6:0*/ trivium_wrapper__DOT__counter_impl__DOT__dout;
        SData/*10:0*/ trivium_wrapper__DOT__trivium_impl__DOT__counter_out;
        SData/*10:0*/ trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__din;
        SData/*10:0*/ trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout;
        WData/*79:0*/ trivium_wrapper__DOT__key[3];
        WData/*79:0*/ trivium_wrapper__DOT__iv[3];
        WData/*79:0*/ trivium_wrapper__DOT__block_o[3];
    };
    struct {
        WData/*79:0*/ trivium_wrapper__DOT__reg_in[3];
        WData/*79:0*/ trivium_wrapper__DOT__reg_impl__DOT__din[3];
        WData/*79:0*/ trivium_wrapper__DOT__reg_impl__DOT__dout[3];
        WData/*79:0*/ trivium_wrapper__DOT__trivium_impl__DOT__key[3];
        WData/*79:0*/ trivium_wrapper__DOT__trivium_impl__DOT__iv[3];
        WData/*92:0*/ trivium_wrapper__DOT__trivium_impl__DOT__dout_A[3];
        WData/*83:0*/ trivium_wrapper__DOT__trivium_impl__DOT__dout_B[3];
        WData/*110:0*/ trivium_wrapper__DOT__trivium_impl__DOT__dout_C[4];
        WData/*92:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__din[3];
        WData/*92:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout[3];
        WData/*83:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__din[3];
        WData/*83:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout[3];
        WData/*110:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__din[4];
        WData/*110:0*/ trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout[4];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ trivium_wrapper__DOT____Vcellinp__counter_impl__rst;
    CData/*0:0*/ trivium_wrapper__DOT__trivium_impl__DOT____Vcellinp__registerA__shift;
    CData/*0:0*/ __Vclklast__TOP__clk;
    
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
    static void _combo__TOP__5(Vtop__Syms* __restrict vlSymsp);
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
    static void _sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
