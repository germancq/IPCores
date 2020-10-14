// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_galois_multiplication_H_
#define _Vtop_galois_multiplication_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop_galois_multiplication) {
  public:
    
    // PORTS
    VL_OUT8(s,7,0);
    VL_IN16(a,14,0);
    VL_IN16(b,14,0);
    VL_IN16(p,8,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ polinomial_inst__DOT__s;
        CData/*0:0*/ polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ genblk1__BRA__0__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ genblk1__BRA__1__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ genblk1__BRA__2__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ genblk1__BRA__3__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ genblk1__BRA__4__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ genblk1__BRA__5__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ genblk1__BRA__6__KET____DOT__m_i__DOT__sel;
        CData/*0:0*/ genblk1__BRA__7__KET____DOT__m_i__DOT__sel;
        SData/*14:0*/ polinomial_inst__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__p;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ genblk1__BRA__0__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ genblk1__BRA__0__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ genblk1__BRA__0__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ genblk1__BRA__1__KET____DOT__m_i__DOT__a;
    };
    struct {
        SData/*14:0*/ genblk1__BRA__1__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ genblk1__BRA__1__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ genblk1__BRA__2__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ genblk1__BRA__2__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ genblk1__BRA__2__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ genblk1__BRA__3__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ genblk1__BRA__3__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ genblk1__BRA__3__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ genblk1__BRA__4__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ genblk1__BRA__4__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ genblk1__BRA__4__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ genblk1__BRA__5__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ genblk1__BRA__5__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ genblk1__BRA__5__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ genblk1__BRA__6__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ genblk1__BRA__6__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ genblk1__BRA__6__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ genblk1__BRA__7__KET____DOT__m_i__DOT__a;
        SData/*14:0*/ genblk1__BRA__7__KET____DOT__m_i__DOT__b;
        SData/*14:0*/ genblk1__BRA__7__KET____DOT__m_i__DOT__c;
        SData/*14:0*/ genblk2__BRA__0__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ genblk2__BRA__0__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ genblk2__BRA__0__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ genblk2__BRA__1__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ genblk2__BRA__1__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ genblk2__BRA__1__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ genblk2__BRA__2__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ genblk2__BRA__2__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ genblk2__BRA__2__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ genblk2__BRA__3__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ genblk2__BRA__3__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ genblk2__BRA__3__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ genblk2__BRA__4__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ genblk2__BRA__4__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ genblk2__BRA__4__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ genblk2__BRA__5__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ genblk2__BRA__5__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ genblk2__BRA__5__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ genblk2__BRA__6__KET____DOT__g_i__DOT__a;
        SData/*14:0*/ genblk2__BRA__6__KET____DOT__g_i__DOT__b;
        SData/*14:0*/ genblk2__BRA__6__KET____DOT__g_i__DOT__s;
        SData/*14:0*/ m_out[15];
        SData/*14:0*/ polinomial_inst__DOT__m_out[8];
        SData/*14:0*/ polinomial_inst__DOT__polinomials[8];
    };
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_galois_multiplication);  ///< Copying not allowed
  public:
    Vtop_galois_multiplication(const char* name = "TOP");
    ~Vtop_galois_multiplication();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _initial__TOP__twofish_ctr__DOT__key_schedule_impl__DOT__m0__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__twofish_ctr__DOT__key_schedule_impl__DOT__m0__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__449(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__twofish_ctr__DOT__key_schedule_impl__DOT__m0__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__513(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__385(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__657(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__k_0__DOT__h0__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__417(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
