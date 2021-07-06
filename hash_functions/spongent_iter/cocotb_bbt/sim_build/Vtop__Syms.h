// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTOP__SYMS_H_
#define _VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vtop.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vtop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtop*                          TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_spongent_iter;
    VerilatedScope __Vscope_spongent_iter__lCounter;
    VerilatedScope __Vscope_spongent_iter__permutation_impl;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__counter_impl;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__0__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__0__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__10__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__10__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__11__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__11__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__12__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__12__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__13__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__13__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__14__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__14__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__15__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__15__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__16__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__16__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__17__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__17__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__18__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__18__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__19__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__19__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__1__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__1__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__20__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__20__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__21__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__21__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__2__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__2__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__3__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__3__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__4__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__4__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__5__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__5__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__6__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__6__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__7__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__7__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__8__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__8__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__9__KET__;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__genblk2__BRA__9__KET____s_box_i;
    VerilatedScope __Vscope_spongent_iter__permutation_impl__pLayer_impl;
    VerilatedScope __Vscope_spongent_iter__squeezing_phase_impl;
    VerilatedScope __Vscope_spongent_iter__squeezing_phase_impl__counter_impl;
    
    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;
    
    // CREATORS
    Vtop__Syms(Vtop* topp, const char* namep);
    ~Vtop__Syms() = default;
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
