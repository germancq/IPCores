// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__c;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__r;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__R;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__lCounter_initial_state;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__lCounter_feedback_coeff;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__b;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__IDLE;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__PERMUTATION;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__WAIT_PERMUTATION;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__WAIT_FOR_DATA;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__SQUEZZING_PHASE;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__END_STATE;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__WAIT_REG;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__lCounter__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__permutation_impl__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__permutation_impl__DOT__R;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__squeezing_phase_impl__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__squeezing_phase_impl__DOT__b;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__squeezing_phase_impl__DOT__r;
constexpr IData/*31:0*/ Vtop___024root::spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__DATA_WIDTH;


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
