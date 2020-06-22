// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_PERMUTATION__D110_R8C_H_
#define _VTOP_PERMUTATION__D110_R8C_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop_permutation__D110_R8c) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(lCounter_state,7,0);
    VL_OUT8(rst_lCounter,0,0);
    VL_OUT8(shift_lCounter,0,0);
    VL_OUT8(end_permutation,0,0);
    VL_INW(initial_state,271,0,9);
    VL_OUTW(state,271,0,9);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ counter_o;
        CData/*7:0*/ reverse_lCounter;
        CData/*0:0*/ counter_impl__DOT__clk;
        CData/*0:0*/ counter_impl__DOT__rst;
        CData/*0:0*/ counter_impl__DOT__up;
        CData/*0:0*/ counter_impl__DOT__down;
        CData/*7:0*/ counter_impl__DOT__din;
        CData/*7:0*/ counter_impl__DOT__dout;
        CData/*3:0*/ genblk2__BRA__0__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__1__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__2__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__3__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__4__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__5__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__6__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__7__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__8__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__9__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__10__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__11__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__12__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__13__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__14__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__15__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__16__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__17__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__18__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__19__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__20__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__21__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__22__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__22__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__23__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__23__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__24__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__24__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__25__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__25__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__26__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__26__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__27__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__27__KET____DOT__s_box_i__DOT__dout;
    };
    struct {
        CData/*3:0*/ genblk2__BRA__28__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__28__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__29__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__29__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__30__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__30__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__31__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__31__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__32__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__32__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__33__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__33__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__34__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__34__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__35__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__35__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__36__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__36__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__37__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__37__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__38__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__38__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__39__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__39__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__40__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__40__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__41__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__41__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__42__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__42__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__43__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__43__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__44__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__44__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__45__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__45__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__46__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__46__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__47__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__47__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__48__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__48__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__49__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__49__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__50__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__50__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__51__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__51__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__52__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__52__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__53__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__53__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__54__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__54__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__55__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__55__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__56__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__56__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__57__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__57__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__58__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__58__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__59__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__59__KET____DOT__s_box_i__DOT__dout;
    };
    struct {
        CData/*3:0*/ genblk2__BRA__60__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__60__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__61__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__61__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__62__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__62__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__63__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__63__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__64__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__64__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__65__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__65__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__66__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__66__KET____DOT__s_box_i__DOT__dout;
        CData/*3:0*/ genblk2__BRA__67__KET____DOT__s_box_i__DOT__din;
        CData/*3:0*/ genblk2__BRA__67__KET____DOT__s_box_i__DOT__dout;
        WData/*271:0*/ state_reg[9];
        WData/*271:0*/ state_S_box[9];
        WData/*271:0*/ pLayer_impl__DOT__din[9];
        WData/*271:0*/ pLayer_impl__DOT__dout[9];
    };
    
    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ __Vtableidx1;
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
        CData/*3:0*/ __Vtableidx18;
        CData/*3:0*/ __Vtableidx19;
        CData/*3:0*/ __Vtableidx20;
        CData/*3:0*/ __Vtableidx21;
        CData/*3:0*/ __Vtableidx22;
        CData/*3:0*/ __Vtableidx23;
        CData/*3:0*/ __Vtableidx24;
        CData/*3:0*/ __Vtableidx25;
        CData/*3:0*/ __Vtableidx26;
        CData/*3:0*/ __Vtableidx27;
        CData/*3:0*/ __Vtableidx28;
        CData/*3:0*/ __Vtableidx29;
        CData/*3:0*/ __Vtableidx30;
        CData/*3:0*/ __Vtableidx31;
        CData/*3:0*/ __Vtableidx32;
        CData/*3:0*/ __Vtableidx33;
        CData/*3:0*/ __Vtableidx34;
        CData/*3:0*/ __Vtableidx35;
        CData/*3:0*/ __Vtableidx36;
        CData/*3:0*/ __Vtableidx37;
        CData/*3:0*/ __Vtableidx38;
        CData/*3:0*/ __Vtableidx39;
        CData/*3:0*/ __Vtableidx40;
        CData/*3:0*/ __Vtableidx41;
        CData/*3:0*/ __Vtableidx42;
        CData/*3:0*/ __Vtableidx43;
        CData/*3:0*/ __Vtableidx44;
        CData/*3:0*/ __Vtableidx45;
        CData/*3:0*/ __Vtableidx46;
        CData/*3:0*/ __Vtableidx47;
        CData/*3:0*/ __Vtableidx48;
        CData/*3:0*/ __Vtableidx49;
        CData/*3:0*/ __Vtableidx50;
        CData/*3:0*/ __Vtableidx51;
        CData/*3:0*/ __Vtableidx52;
        CData/*3:0*/ __Vtableidx53;
        CData/*3:0*/ __Vtableidx54;
        CData/*3:0*/ __Vtableidx55;
        CData/*3:0*/ __Vtableidx56;
        CData/*3:0*/ __Vtableidx57;
        CData/*3:0*/ __Vtableidx58;
        CData/*3:0*/ __Vtableidx59;
        CData/*3:0*/ __Vtableidx60;
        CData/*3:0*/ __Vtableidx61;
        CData/*3:0*/ __Vtableidx62;
        CData/*3:0*/ __Vtableidx63;
        CData/*3:0*/ __Vtableidx64;
    };
    struct {
        CData/*3:0*/ __Vtableidx65;
        CData/*3:0*/ __Vtableidx66;
        CData/*3:0*/ __Vtableidx67;
        CData/*3:0*/ __Vtableidx68;
        CData/*3:0*/ __Vtableidx69;
        CData/*3:0*/ __Vtableidx70;
        CData/*3:0*/ __Vtableidx71;
        CData/*3:0*/ __Vtableidx72;
        CData/*3:0*/ __Vtableidx73;
        CData/*3:0*/ __Vtableidx74;
        CData/*3:0*/ __Vtableidx75;
        CData/*3:0*/ __Vtableidx76;
        CData/*3:0*/ __Vtableidx77;
        CData/*3:0*/ __Vtableidx78;
        CData/*3:0*/ __Vtableidx79;
        CData/*3:0*/ __Vtableidx80;
        CData/*3:0*/ __Vtableidx81;
        CData/*3:0*/ __Vtableidx82;
        CData/*3:0*/ __Vtableidx83;
        CData/*3:0*/ __Vtableidx84;
        CData/*3:0*/ __Vtableidx85;
        CData/*3:0*/ __Vtableidx86;
        CData/*3:0*/ __Vtableidx87;
        CData/*3:0*/ __Vtableidx88;
        CData/*3:0*/ __Vtableidx89;
        CData/*3:0*/ __Vtableidx90;
        CData/*3:0*/ __Vtableidx91;
        CData/*3:0*/ __Vtableidx92;
        CData/*3:0*/ __Vtableidx93;
        CData/*3:0*/ __Vtableidx94;
        CData/*3:0*/ __Vtableidx95;
        CData/*3:0*/ __Vtableidx96;
        CData/*3:0*/ __Vtableidx97;
        CData/*3:0*/ __Vtableidx98;
        CData/*3:0*/ __Vtableidx99;
        CData/*3:0*/ __Vtableidx100;
        CData/*3:0*/ __Vtableidx101;
        CData/*3:0*/ __Vtableidx102;
        CData/*3:0*/ __Vtableidx103;
        CData/*3:0*/ __Vtableidx104;
        CData/*3:0*/ __Vtableidx105;
        CData/*3:0*/ __Vtableidx106;
        CData/*3:0*/ __Vtableidx107;
        CData/*3:0*/ __Vtableidx108;
        CData/*3:0*/ __Vtableidx109;
        CData/*3:0*/ __Vtableidx110;
        CData/*3:0*/ __Vtableidx111;
        CData/*3:0*/ __Vtableidx112;
        CData/*3:0*/ __Vtableidx113;
        CData/*3:0*/ __Vtableidx114;
        CData/*3:0*/ __Vtableidx115;
        CData/*3:0*/ __Vtableidx116;
        CData/*3:0*/ __Vtableidx117;
        CData/*3:0*/ __Vtableidx118;
        CData/*3:0*/ __Vtableidx119;
        CData/*3:0*/ __Vtableidx120;
        CData/*3:0*/ __Vtableidx121;
        CData/*3:0*/ __Vtableidx122;
        CData/*3:0*/ __Vtableidx123;
        CData/*3:0*/ __Vtableidx124;
        CData/*3:0*/ __Vtableidx125;
        CData/*3:0*/ __Vtableidx126;
        CData/*3:0*/ __Vtableidx127;
        CData/*3:0*/ __Vtableidx128;
    };
    struct {
        CData/*3:0*/ __Vtableidx129;
        CData/*3:0*/ __Vtableidx130;
        CData/*3:0*/ __Vtableidx131;
        CData/*3:0*/ __Vtableidx132;
        CData/*3:0*/ __Vtableidx133;
        CData/*3:0*/ __Vtableidx134;
        CData/*3:0*/ __Vtableidx135;
        CData/*3:0*/ __Vtableidx136;
        CData/*7:0*/ __Vdly__counter_impl__DOT__dout;
        WData/*271:0*/ __Vdly__state_reg[9];
    };
    static CData/*3:0*/ __Vtable1_genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable2_genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable3_genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable4_genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable5_genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable6_genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable7_genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable8_genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable9_genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable10_genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable11_genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable12_genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable13_genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable14_genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable15_genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable16_genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable17_genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable18_genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable19_genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable20_genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable21_genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable22_genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable23_genblk2__BRA__22__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable24_genblk2__BRA__23__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable25_genblk2__BRA__24__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable26_genblk2__BRA__25__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable27_genblk2__BRA__26__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable28_genblk2__BRA__27__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable29_genblk2__BRA__28__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable30_genblk2__BRA__29__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable31_genblk2__BRA__30__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable32_genblk2__BRA__31__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable33_genblk2__BRA__32__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable34_genblk2__BRA__33__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable35_genblk2__BRA__34__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable36_genblk2__BRA__35__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable37_genblk2__BRA__36__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable38_genblk2__BRA__37__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable39_genblk2__BRA__38__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable40_genblk2__BRA__39__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable41_genblk2__BRA__40__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable42_genblk2__BRA__41__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable43_genblk2__BRA__42__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable44_genblk2__BRA__43__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable45_genblk2__BRA__44__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable46_genblk2__BRA__45__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable47_genblk2__BRA__46__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable48_genblk2__BRA__47__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable49_genblk2__BRA__48__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable50_genblk2__BRA__49__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable51_genblk2__BRA__50__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable52_genblk2__BRA__51__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable53_genblk2__BRA__52__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable54_genblk2__BRA__53__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable55_genblk2__BRA__54__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable56_genblk2__BRA__55__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable57_genblk2__BRA__56__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable58_genblk2__BRA__57__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable59_genblk2__BRA__58__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable60_genblk2__BRA__59__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable61_genblk2__BRA__60__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable62_genblk2__BRA__61__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable63_genblk2__BRA__62__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable64_genblk2__BRA__63__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable65_genblk2__BRA__64__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable66_genblk2__BRA__65__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable67_genblk2__BRA__66__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable68_genblk2__BRA__67__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable69_genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable70_genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable71_genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable72_genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable73_genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable74_genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable75_genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable76_genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable77_genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable78_genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable79_genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable80_genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable81_genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable82_genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable83_genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable84_genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable85_genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable86_genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable87_genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable88_genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable89_genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable90_genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable91_genblk2__BRA__22__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable92_genblk2__BRA__23__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable93_genblk2__BRA__24__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable94_genblk2__BRA__25__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable95_genblk2__BRA__26__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable96_genblk2__BRA__27__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable97_genblk2__BRA__28__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable98_genblk2__BRA__29__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable99_genblk2__BRA__30__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable100_genblk2__BRA__31__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable101_genblk2__BRA__32__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable102_genblk2__BRA__33__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable103_genblk2__BRA__34__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable104_genblk2__BRA__35__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable105_genblk2__BRA__36__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable106_genblk2__BRA__37__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable107_genblk2__BRA__38__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable108_genblk2__BRA__39__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable109_genblk2__BRA__40__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable110_genblk2__BRA__41__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable111_genblk2__BRA__42__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable112_genblk2__BRA__43__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable113_genblk2__BRA__44__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable114_genblk2__BRA__45__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable115_genblk2__BRA__46__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable116_genblk2__BRA__47__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable117_genblk2__BRA__48__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable118_genblk2__BRA__49__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable119_genblk2__BRA__50__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable120_genblk2__BRA__51__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable121_genblk2__BRA__52__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable122_genblk2__BRA__53__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable123_genblk2__BRA__54__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable124_genblk2__BRA__55__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable125_genblk2__BRA__56__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable126_genblk2__BRA__57__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable127_genblk2__BRA__58__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable128_genblk2__BRA__59__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable129_genblk2__BRA__60__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable130_genblk2__BRA__61__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable131_genblk2__BRA__62__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable132_genblk2__BRA__63__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable133_genblk2__BRA__64__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable134_genblk2__BRA__65__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable135_genblk2__BRA__66__KET____DOT__s_box_i__DOT__dout[16];
    static CData/*3:0*/ __Vtable136_genblk2__BRA__67__KET____DOT__s_box_i__DOT__dout[16];
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_permutation__D110_R8c);  ///< Copying not allowed
  public:
    Vtop_permutation__D110_R8c(const char* name = "TOP");
    ~Vtop_permutation__D110_R8c();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    void _combo__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__11(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__3(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _initial__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _sequent__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__9(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl__10(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__5(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__hmac_spongent__DOT__hash_0__DOT__permutation_impl__7(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__hmac_spongent__DOT__hash_1__DOT__permutation_impl__6(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
