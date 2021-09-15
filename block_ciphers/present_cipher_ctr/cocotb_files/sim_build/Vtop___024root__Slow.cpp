// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::present_ctr__DOT__key_sch_impl__DOT__key_register__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::present_ctr__DOT__key_sch_impl__DOT__counter_impl__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__ADDR;
constexpr IData/*31:0*/ Vtop___024root::present_ctr__DOT__key_sch_impl__DOT__memory_impl__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::present_ctr__DOT__adder_inst__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::present_ctr__DOT__present_enc_impl__DOT__counter_impl__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::present_ctr__DOT__present_enc_impl__DOT__block_register__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::present_ctr__DOT__result__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::present_ctr__DOT__reg_end_signal__DOT__DATA_WIDTH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}
