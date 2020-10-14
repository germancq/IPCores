// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_h_function_H_
#define _Vtop_h_function_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_galois_multiplication;

//----------

VL_MODULE(Vtop_h_function) {
  public:
    // CELLS
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__1__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__2__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__3__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__1__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__2__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__3__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__1__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__2__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__3__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__1__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__2__KET____DOT__g_m_i;
    Vtop_galois_multiplication* __PVT__m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__3__KET____DOT__g_m_i;
    
    // PORTS
    VL_IN(X,31,0);
    VL_OUT(Z,31,0);
    VL_IN(L[2],31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ i00__DOT__x;
        CData/*7:0*/ i00__DOT__q0;
        CData/*7:0*/ i01__DOT__x;
        CData/*7:0*/ i01__DOT__q1;
        CData/*7:0*/ i02__DOT__x;
        CData/*7:0*/ i02__DOT__q0;
        CData/*7:0*/ i03__DOT__x;
        CData/*7:0*/ i03__DOT__q1;
        CData/*7:0*/ i10__DOT__x;
        CData/*7:0*/ i10__DOT__q0;
        CData/*7:0*/ i11__DOT__x;
        CData/*7:0*/ i11__DOT__q0;
        CData/*7:0*/ i12__DOT__x;
        CData/*7:0*/ i12__DOT__q1;
        CData/*7:0*/ i13__DOT__x;
        CData/*7:0*/ i13__DOT__q1;
        CData/*7:0*/ i20__DOT__x;
        CData/*7:0*/ i20__DOT__q1;
        CData/*7:0*/ i21__DOT__x;
        CData/*7:0*/ i21__DOT__q0;
        CData/*7:0*/ i22__DOT__x;
        CData/*7:0*/ i22__DOT__q1;
        CData/*7:0*/ i23__DOT__x;
        CData/*7:0*/ i23__DOT__q0;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__0__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__1__KET____DOT__g_i__DOT__s;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__a;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__b;
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk2__BRA__2__KET____DOT__g_i__DOT__s;
    };
    struct {
        SData/*8:0*/ m0__DOT__p;
        SData/*8:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__p;
        SData/*8:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__p;
        SData/*8:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__p;
        SData/*8:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__p;
        IData/*31:0*/ X1;
        IData/*31:0*/ X2;
        IData/*31:0*/ Q0;
        IData/*31:0*/ Q1;
        IData/*31:0*/ a0__DOT__a;
        IData/*31:0*/ a0__DOT__b;
        IData/*31:0*/ a0__DOT__s;
        IData/*31:0*/ a1__DOT__a;
        IData/*31:0*/ a1__DOT__b;
        IData/*31:0*/ a1__DOT__s;
        CData/*7:0*/ MDS[16];
        CData/*7:0*/ Q2[4];
        CData/*7:0*/ y[4];
        CData/*3:0*/ i00__DOT__t0[16];
        CData/*3:0*/ i00__DOT__t1[16];
        CData/*3:0*/ i00__DOT__t2[16];
        CData/*3:0*/ i00__DOT__t3[16];
        CData/*3:0*/ i01__DOT__t0[16];
        CData/*3:0*/ i01__DOT__t1[16];
        CData/*3:0*/ i01__DOT__t2[16];
        CData/*3:0*/ i01__DOT__t3[16];
        CData/*3:0*/ i02__DOT__t0[16];
        CData/*3:0*/ i02__DOT__t1[16];
        CData/*3:0*/ i02__DOT__t2[16];
        CData/*3:0*/ i02__DOT__t3[16];
        CData/*3:0*/ i03__DOT__t0[16];
        CData/*3:0*/ i03__DOT__t1[16];
        CData/*3:0*/ i03__DOT__t2[16];
        CData/*3:0*/ i03__DOT__t3[16];
        CData/*3:0*/ i10__DOT__t0[16];
        CData/*3:0*/ i10__DOT__t1[16];
        CData/*3:0*/ i10__DOT__t2[16];
        CData/*3:0*/ i10__DOT__t3[16];
        CData/*3:0*/ i11__DOT__t0[16];
        CData/*3:0*/ i11__DOT__t1[16];
        CData/*3:0*/ i11__DOT__t2[16];
        CData/*3:0*/ i11__DOT__t3[16];
        CData/*3:0*/ i12__DOT__t0[16];
        CData/*3:0*/ i12__DOT__t1[16];
        CData/*3:0*/ i12__DOT__t2[16];
        CData/*3:0*/ i12__DOT__t3[16];
        CData/*3:0*/ i13__DOT__t0[16];
        CData/*3:0*/ i13__DOT__t1[16];
        CData/*3:0*/ i13__DOT__t2[16];
        CData/*3:0*/ i13__DOT__t3[16];
        CData/*3:0*/ i20__DOT__t0[16];
        CData/*3:0*/ i20__DOT__t1[16];
        CData/*3:0*/ i20__DOT__t2[16];
        CData/*3:0*/ i20__DOT__t3[16];
        CData/*3:0*/ i21__DOT__t0[16];
        CData/*3:0*/ i21__DOT__t1[16];
        CData/*3:0*/ i21__DOT__t2[16];
        CData/*3:0*/ i21__DOT__t3[16];
        CData/*3:0*/ i22__DOT__t0[16];
        CData/*3:0*/ i22__DOT__t1[16];
        CData/*3:0*/ i22__DOT__t2[16];
        CData/*3:0*/ i22__DOT__t3[16];
        CData/*3:0*/ i23__DOT__t0[16];
        CData/*3:0*/ i23__DOT__t1[16];
    };
    struct {
        CData/*3:0*/ i23__DOT__t2[16];
        CData/*3:0*/ i23__DOT__t3[16];
        CData/*7:0*/ m0__DOT__a[16];
        CData/*7:0*/ m0__DOT__b[4];
        CData/*7:0*/ m0__DOT__s[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__A_row[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__B_col[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__A_row[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__B_col[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__A_row[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__B_col[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__A_row[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__B_col[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__a[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__b[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__mult_out[7];
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__a[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__b[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__mult_out[7];
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__a[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__b[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__mult_out[7];
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__a[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__b[4];
        CData/*7:0*/ m0__DOT__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__mult_out[7];
    };
    
    // LOCAL VARIABLES
    CData/*7:0*/ __Vcellout__m0__s[4];
    CData/*7:0*/ __Vcellinp__m0__b[4];
    CData/*7:0*/ __Vcellinp__m0__a[16];
    CData/*7:0*/ m0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__b[4];
    CData/*7:0*/ m0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__a[4];
    CData/*7:0*/ m0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__b[4];
    CData/*7:0*/ m0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__a[4];
    CData/*7:0*/ m0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__b[4];
    CData/*7:0*/ m0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__a[4];
    CData/*7:0*/ m0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__b[4];
    CData/*7:0*/ m0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__a[4];
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_h_function);  ///< Copying not allowed
  public:
    Vtop_h_function(const char* name = "TOP");
    ~Vtop_h_function();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    void _combo__TOP__twofish_ctr__DOT__genblk1__BRA__0__KET____DOT__key_words_i__DOT__h0__44(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__62(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__68(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _initial__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__13(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__35(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__42(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__k_0__DOT__h0__15(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__k_0__DOT__h1__16(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
