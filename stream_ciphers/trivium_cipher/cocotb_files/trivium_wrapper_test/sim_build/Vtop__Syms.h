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
    VerilatedScope __Vscope_trivium_wrapper;
    VerilatedScope __Vscope_trivium_wrapper__counter_impl;
    VerilatedScope __Vscope_trivium_wrapper__reg_impl;
    VerilatedScope __Vscope_trivium_wrapper__trivium_impl;
    VerilatedScope __Vscope_trivium_wrapper__trivium_impl__counter_inst;
    VerilatedScope __Vscope_trivium_wrapper__trivium_impl__registerA;
    VerilatedScope __Vscope_trivium_wrapper__trivium_impl__registerB;
    VerilatedScope __Vscope_trivium_wrapper__trivium_impl__registerC;
    
    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;
    
    // CREATORS
    Vtop__Syms(Vtop* topp, const char* namep);
    ~Vtop__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
