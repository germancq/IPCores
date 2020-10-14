// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_galois_multiplication.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_galois_multiplication) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_galois_multiplication::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_galois_multiplication::~Vtop_galois_multiplication() {
}

//--------------------
// Internal Methods

void Vtop_galois_multiplication::_initial__TOP__twofish_ctr__DOT__key_schedule_impl__DOT__m0__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtop_galois_multiplication::_initial__TOP__twofish_ctr__DOT__key_schedule_impl__DOT__m0__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__a = 0U;
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__a = 0U;
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__a = 0U;
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__a = 0U;
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__a = 0U;
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__a = 0U;
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__a = 0U;
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__a = 0U;
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__a = 0U;
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__a = 0U;
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__a = 0U;
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__a = 0U;
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__a = 0U;
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__a = 0U;
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__a = 0U;
}

VL_INLINE_OPT void Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__key_schedule_impl__DOT__m0__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__449(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__key_schedule_impl__DOT__m0__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__449\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->polinomial_inst__DOT__polinomials[6U] = this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[5U] = this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[4U] = this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[3U] = this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[2U] = this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[1U] = this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[0U] = this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__s;
}

VL_INLINE_OPT void Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__key_schedule_impl__DOT__m0__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__513(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__key_schedule_impl__DOT__m0__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__513\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 6U) ? ((IData)(this->p) 
                                      << 6U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 5U) ? ((IData)(this->p) 
                                      << 5U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 4U) ? ((IData)(this->p) 
                                      << 4U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 3U) ? ((IData)(this->p) 
                                      << 3U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 2U) ? ((IData)(this->p) 
                                      << 2U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 1U) ? ((IData)(this->p) 
                                      << 1U) : 0U));
    this->polinomial_inst__DOT__p = this->p;
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__b 
        = this->a;
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 1U) ? ((IData)(this->a) 
                                      << 1U) : 0U));
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 2U) ? ((IData)(this->a) 
                                      << 2U) : 0U));
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 3U) ? ((IData)(this->a) 
                                      << 3U) : 0U));
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 4U) ? ((IData)(this->a) 
                                      << 4U) : 0U));
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 5U) ? ((IData)(this->a) 
                                      << 5U) : 0U));
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 6U) ? ((IData)(this->a) 
                                      << 6U) : 0U));
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 7U) ? ((IData)(this->a) 
                                      << 7U) : 0U));
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 0U));
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 7U));
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__c 
        = ((1U & (IData)(this->b)) ? (IData)(this->a)
            : 0U);
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__c 
        = ((2U & (IData)(this->b)) ? (0x7fffU & ((IData)(this->a) 
                                                 << 1U))
            : 0U);
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__c 
        = ((4U & (IData)(this->b)) ? (0x7fffU & ((IData)(this->a) 
                                                 << 2U))
            : 0U);
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__c 
        = ((8U & (IData)(this->b)) ? (0x7fffU & ((IData)(this->a) 
                                                 << 3U))
            : 0U);
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__c 
        = ((0x10U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 4U)) : 0U);
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__c 
        = ((0x20U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 5U)) : 0U);
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__c 
        = ((0x40U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 6U)) : 0U);
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__c 
        = ((0x80U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 7U)) : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__b 
        = this->polinomial_inst__DOT__p;
    this->m_out[0U] = this->genblk1__BRA__0__KET____DOT__m_i__DOT__c;
    this->m_out[1U] = this->genblk1__BRA__1__KET____DOT__m_i__DOT__c;
    this->m_out[2U] = this->genblk1__BRA__2__KET____DOT__m_i__DOT__c;
    this->m_out[3U] = this->genblk1__BRA__3__KET____DOT__m_i__DOT__c;
    this->m_out[4U] = this->genblk1__BRA__4__KET____DOT__m_i__DOT__c;
    this->m_out[5U] = this->genblk1__BRA__5__KET____DOT__m_i__DOT__c;
    this->m_out[6U] = this->genblk1__BRA__6__KET____DOT__m_i__DOT__c;
    this->m_out[7U] = this->genblk1__BRA__7__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__a = this->m_out[0xeU];
    this->genblk2__BRA__0__KET____DOT__g_i__DOT__a 
        = this->m_out[0U];
    this->genblk2__BRA__0__KET____DOT__g_i__DOT__b 
        = this->m_out[1U];
    this->genblk2__BRA__1__KET____DOT__g_i__DOT__a 
        = this->m_out[2U];
    this->genblk2__BRA__1__KET____DOT__g_i__DOT__b 
        = this->m_out[3U];
    this->genblk2__BRA__2__KET____DOT__g_i__DOT__a 
        = this->m_out[4U];
    this->genblk2__BRA__2__KET____DOT__g_i__DOT__b 
        = this->m_out[5U];
    this->genblk2__BRA__3__KET____DOT__g_i__DOT__a 
        = this->m_out[6U];
    this->genblk2__BRA__3__KET____DOT__g_i__DOT__b 
        = this->m_out[7U];
    this->genblk2__BRA__4__KET____DOT__g_i__DOT__a 
        = this->m_out[8U];
    this->genblk2__BRA__4__KET____DOT__g_i__DOT__b 
        = this->m_out[9U];
    this->genblk2__BRA__5__KET____DOT__g_i__DOT__a 
        = this->m_out[0xaU];
    this->genblk2__BRA__5__KET____DOT__g_i__DOT__b 
        = this->m_out[0xbU];
    this->genblk2__BRA__6__KET____DOT__g_i__DOT__a 
        = this->m_out[0xcU];
    this->genblk2__BRA__6__KET____DOT__g_i__DOT__b 
        = this->m_out[0xdU];
    this->genblk2__BRA__0__KET____DOT__g_i__DOT__s 
        = (this->m_out[0U] ^ this->m_out[1U]);
    this->genblk2__BRA__1__KET____DOT__g_i__DOT__s 
        = (this->m_out[2U] ^ this->m_out[3U]);
    this->genblk2__BRA__2__KET____DOT__g_i__DOT__s 
        = (this->m_out[4U] ^ this->m_out[5U]);
    this->genblk2__BRA__3__KET____DOT__g_i__DOT__s 
        = (this->m_out[6U] ^ this->m_out[7U]);
    this->genblk2__BRA__4__KET____DOT__g_i__DOT__s 
        = (this->m_out[8U] ^ this->m_out[9U]);
    this->genblk2__BRA__5__KET____DOT__g_i__DOT__s 
        = (this->m_out[0xaU] ^ this->m_out[0xbU]);
    this->genblk2__BRA__6__KET____DOT__g_i__DOT__s 
        = (this->m_out[0xcU] ^ this->m_out[0xdU]);
    this->polinomial_inst__DOT__polinomials[7U] = this->m_out
        [0xeU];
    this->m_out[8U] = this->genblk2__BRA__0__KET____DOT__g_i__DOT__s;
    this->m_out[9U] = this->genblk2__BRA__1__KET____DOT__g_i__DOT__s;
    this->m_out[0xaU] = this->genblk2__BRA__2__KET____DOT__g_i__DOT__s;
    this->m_out[0xbU] = this->genblk2__BRA__3__KET____DOT__g_i__DOT__s;
    this->m_out[0xcU] = this->genblk2__BRA__4__KET____DOT__g_i__DOT__s;
    this->m_out[0xdU] = this->genblk2__BRA__5__KET____DOT__g_i__DOT__s;
    this->m_out[0xeU] = this->genblk2__BRA__6__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [7U] >> 0xeU));
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[7U];
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [6U] >> 0xdU));
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[6U];
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [5U] >> 0xcU));
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[5U];
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [4U] >> 0xbU));
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[4U];
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [3U] >> 0xaU));
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[3U];
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [2U] >> 9U));
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[2U];
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [1U] >> 8U));
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[1U];
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__c 
        = ((0x4000U & this->polinomial_inst__DOT__polinomials
            [7U]) ? (0x7fffU & ((IData)(this->p) << 6U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__c 
        = ((0x2000U & this->polinomial_inst__DOT__polinomials
            [6U]) ? (0x7fffU & ((IData)(this->p) << 5U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__c 
        = ((0x1000U & this->polinomial_inst__DOT__polinomials
            [5U]) ? (0x7fffU & ((IData)(this->p) << 4U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__c 
        = ((0x800U & this->polinomial_inst__DOT__polinomials
            [4U]) ? (0x7fffU & ((IData)(this->p) << 3U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__c 
        = ((0x400U & this->polinomial_inst__DOT__polinomials
            [3U]) ? (0x7fffU & ((IData)(this->p) << 2U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__c 
        = ((0x200U & this->polinomial_inst__DOT__polinomials
            [2U]) ? (0x7fffU & ((IData)(this->p) << 1U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__c 
        = ((0x100U & this->polinomial_inst__DOT__polinomials
            [1U]) ? (IData)(this->p) : 0U);
    this->polinomial_inst__DOT__s = (0xffU & this->polinomial_inst__DOT__polinomials
                                     [0U]);
    this->polinomial_inst__DOT__m_out[6U] = this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[5U] = this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[4U] = this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[3U] = this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[2U] = this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[1U] = this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[0U] = this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__c;
    this->s = this->polinomial_inst__DOT__s;
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[7U] 
           ^ this->polinomial_inst__DOT__m_out[6U]);
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[6U] 
           ^ this->polinomial_inst__DOT__m_out[5U]);
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[5U] 
           ^ this->polinomial_inst__DOT__m_out[4U]);
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[4U] 
           ^ this->polinomial_inst__DOT__m_out[3U]);
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[3U] 
           ^ this->polinomial_inst__DOT__m_out[2U]);
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[2U] 
           ^ this->polinomial_inst__DOT__m_out[1U]);
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[1U] 
           ^ this->polinomial_inst__DOT__m_out[0U]);
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[6U];
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[5U];
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[4U];
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[3U];
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[2U];
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[1U];
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[0U];
}

VL_INLINE_OPT void Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__385(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__385\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->polinomial_inst__DOT__polinomials[6U] = this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[5U] = this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[4U] = this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[3U] = this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[2U] = this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[1U] = this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[0U] = this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 6U) ? ((IData)(this->p) 
                                      << 6U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 5U) ? ((IData)(this->p) 
                                      << 5U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 4U) ? ((IData)(this->p) 
                                      << 4U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 3U) ? ((IData)(this->p) 
                                      << 3U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 2U) ? ((IData)(this->p) 
                                      << 2U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 1U) ? ((IData)(this->p) 
                                      << 1U) : 0U));
    this->polinomial_inst__DOT__p = this->p;
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__b 
        = this->a;
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 1U) ? ((IData)(this->a) 
                                      << 1U) : 0U));
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 2U) ? ((IData)(this->a) 
                                      << 2U) : 0U));
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 3U) ? ((IData)(this->a) 
                                      << 3U) : 0U));
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 4U) ? ((IData)(this->a) 
                                      << 4U) : 0U));
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 5U) ? ((IData)(this->a) 
                                      << 5U) : 0U));
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 6U) ? ((IData)(this->a) 
                                      << 6U) : 0U));
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 7U) ? ((IData)(this->a) 
                                      << 7U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__b 
        = this->polinomial_inst__DOT__p;
}

VL_INLINE_OPT void Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__657(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__g0__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__657\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 0U));
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 7U));
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__c 
        = ((1U & (IData)(this->b)) ? (IData)(this->a)
            : 0U);
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__c 
        = ((2U & (IData)(this->b)) ? (0x7fffU & ((IData)(this->a) 
                                                 << 1U))
            : 0U);
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__c 
        = ((4U & (IData)(this->b)) ? (0x7fffU & ((IData)(this->a) 
                                                 << 2U))
            : 0U);
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__c 
        = ((8U & (IData)(this->b)) ? (0x7fffU & ((IData)(this->a) 
                                                 << 3U))
            : 0U);
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__c 
        = ((0x10U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 4U)) : 0U);
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__c 
        = ((0x20U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 5U)) : 0U);
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__c 
        = ((0x40U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 6U)) : 0U);
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__c 
        = ((0x80U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 7U)) : 0U);
    this->m_out[0U] = this->genblk1__BRA__0__KET____DOT__m_i__DOT__c;
    this->m_out[1U] = this->genblk1__BRA__1__KET____DOT__m_i__DOT__c;
    this->m_out[2U] = this->genblk1__BRA__2__KET____DOT__m_i__DOT__c;
    this->m_out[3U] = this->genblk1__BRA__3__KET____DOT__m_i__DOT__c;
    this->m_out[4U] = this->genblk1__BRA__4__KET____DOT__m_i__DOT__c;
    this->m_out[5U] = this->genblk1__BRA__5__KET____DOT__m_i__DOT__c;
    this->m_out[6U] = this->genblk1__BRA__6__KET____DOT__m_i__DOT__c;
    this->m_out[7U] = this->genblk1__BRA__7__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__a = this->m_out[0xeU];
    this->genblk2__BRA__0__KET____DOT__g_i__DOT__a 
        = this->m_out[0U];
    this->genblk2__BRA__0__KET____DOT__g_i__DOT__b 
        = this->m_out[1U];
    this->genblk2__BRA__1__KET____DOT__g_i__DOT__a 
        = this->m_out[2U];
    this->genblk2__BRA__1__KET____DOT__g_i__DOT__b 
        = this->m_out[3U];
    this->genblk2__BRA__2__KET____DOT__g_i__DOT__a 
        = this->m_out[4U];
    this->genblk2__BRA__2__KET____DOT__g_i__DOT__b 
        = this->m_out[5U];
    this->genblk2__BRA__3__KET____DOT__g_i__DOT__a 
        = this->m_out[6U];
    this->genblk2__BRA__3__KET____DOT__g_i__DOT__b 
        = this->m_out[7U];
    this->genblk2__BRA__4__KET____DOT__g_i__DOT__a 
        = this->m_out[8U];
    this->genblk2__BRA__4__KET____DOT__g_i__DOT__b 
        = this->m_out[9U];
    this->genblk2__BRA__5__KET____DOT__g_i__DOT__a 
        = this->m_out[0xaU];
    this->genblk2__BRA__5__KET____DOT__g_i__DOT__b 
        = this->m_out[0xbU];
    this->genblk2__BRA__6__KET____DOT__g_i__DOT__a 
        = this->m_out[0xcU];
    this->genblk2__BRA__6__KET____DOT__g_i__DOT__b 
        = this->m_out[0xdU];
    this->genblk2__BRA__0__KET____DOT__g_i__DOT__s 
        = (this->m_out[0U] ^ this->m_out[1U]);
    this->genblk2__BRA__1__KET____DOT__g_i__DOT__s 
        = (this->m_out[2U] ^ this->m_out[3U]);
    this->genblk2__BRA__2__KET____DOT__g_i__DOT__s 
        = (this->m_out[4U] ^ this->m_out[5U]);
    this->genblk2__BRA__3__KET____DOT__g_i__DOT__s 
        = (this->m_out[6U] ^ this->m_out[7U]);
    this->genblk2__BRA__4__KET____DOT__g_i__DOT__s 
        = (this->m_out[8U] ^ this->m_out[9U]);
    this->genblk2__BRA__5__KET____DOT__g_i__DOT__s 
        = (this->m_out[0xaU] ^ this->m_out[0xbU]);
    this->genblk2__BRA__6__KET____DOT__g_i__DOT__s 
        = (this->m_out[0xcU] ^ this->m_out[0xdU]);
    this->polinomial_inst__DOT__polinomials[7U] = this->m_out
        [0xeU];
    this->m_out[8U] = this->genblk2__BRA__0__KET____DOT__g_i__DOT__s;
    this->m_out[9U] = this->genblk2__BRA__1__KET____DOT__g_i__DOT__s;
    this->m_out[0xaU] = this->genblk2__BRA__2__KET____DOT__g_i__DOT__s;
    this->m_out[0xbU] = this->genblk2__BRA__3__KET____DOT__g_i__DOT__s;
    this->m_out[0xcU] = this->genblk2__BRA__4__KET____DOT__g_i__DOT__s;
    this->m_out[0xdU] = this->genblk2__BRA__5__KET____DOT__g_i__DOT__s;
    this->m_out[0xeU] = this->genblk2__BRA__6__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [7U] >> 0xeU));
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[7U];
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [6U] >> 0xdU));
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[6U];
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [5U] >> 0xcU));
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[5U];
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [4U] >> 0xbU));
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[4U];
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [3U] >> 0xaU));
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[3U];
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [2U] >> 9U));
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[2U];
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [1U] >> 8U));
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[1U];
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__c 
        = ((0x4000U & this->polinomial_inst__DOT__polinomials
            [7U]) ? (0x7fffU & ((IData)(this->p) << 6U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__c 
        = ((0x2000U & this->polinomial_inst__DOT__polinomials
            [6U]) ? (0x7fffU & ((IData)(this->p) << 5U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__c 
        = ((0x1000U & this->polinomial_inst__DOT__polinomials
            [5U]) ? (0x7fffU & ((IData)(this->p) << 4U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__c 
        = ((0x800U & this->polinomial_inst__DOT__polinomials
            [4U]) ? (0x7fffU & ((IData)(this->p) << 3U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__c 
        = ((0x400U & this->polinomial_inst__DOT__polinomials
            [3U]) ? (0x7fffU & ((IData)(this->p) << 2U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__c 
        = ((0x200U & this->polinomial_inst__DOT__polinomials
            [2U]) ? (0x7fffU & ((IData)(this->p) << 1U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__c 
        = ((0x100U & this->polinomial_inst__DOT__polinomials
            [1U]) ? (IData)(this->p) : 0U);
    this->polinomial_inst__DOT__s = (0xffU & this->polinomial_inst__DOT__polinomials
                                     [0U]);
    this->polinomial_inst__DOT__m_out[6U] = this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[5U] = this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[4U] = this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[3U] = this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[2U] = this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[1U] = this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[0U] = this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__c;
    this->s = this->polinomial_inst__DOT__s;
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[7U] 
           ^ this->polinomial_inst__DOT__m_out[6U]);
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[6U] 
           ^ this->polinomial_inst__DOT__m_out[5U]);
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[5U] 
           ^ this->polinomial_inst__DOT__m_out[4U]);
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[4U] 
           ^ this->polinomial_inst__DOT__m_out[3U]);
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[3U] 
           ^ this->polinomial_inst__DOT__m_out[2U]);
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[2U] 
           ^ this->polinomial_inst__DOT__m_out[1U]);
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[1U] 
           ^ this->polinomial_inst__DOT__m_out[0U]);
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[6U];
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[5U];
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[4U];
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[3U];
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[2U];
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[1U];
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[0U];
}

void Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__k_0__DOT__h0__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__417(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtop_galois_multiplication::_settle__TOP__twofish_ctr__DOT__stage_impl__DOT__f_i__DOT__k_0__DOT__h0__m0__DOT__genblk1__BRA__0__KET____DOT__genblk2__BRA__0__KET____DOT__rc3__DOT__genblk1__BRA__0__KET____DOT__g_m_i__417\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->polinomial_inst__DOT__polinomials[6U] = this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[5U] = this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[4U] = this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[3U] = this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[2U] = this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[1U] = this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__polinomials[0U] = this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 6U) ? ((IData)(this->p) 
                                      << 6U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 5U) ? ((IData)(this->p) 
                                      << 5U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 4U) ? ((IData)(this->p) 
                                      << 4U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 3U) ? ((IData)(this->p) 
                                      << 3U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 2U) ? ((IData)(this->p) 
                                      << 2U) : 0U));
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 1U) ? ((IData)(this->p) 
                                      << 1U) : 0U));
    this->polinomial_inst__DOT__p = this->p;
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__b 
        = this->a;
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 1U) ? ((IData)(this->a) 
                                      << 1U) : 0U));
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 2U) ? ((IData)(this->a) 
                                      << 2U) : 0U));
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 3U) ? ((IData)(this->a) 
                                      << 3U) : 0U));
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 4U) ? ((IData)(this->a) 
                                      << 4U) : 0U));
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 5U) ? ((IData)(this->a) 
                                      << 5U) : 0U));
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 6U) ? ((IData)(this->a) 
                                      << 6U) : 0U));
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__b 
        = (0x7fffU & ((0xeU >= 7U) ? ((IData)(this->a) 
                                      << 7U) : 0U));
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 0U));
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 1U));
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 2U));
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 3U));
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 4U));
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 5U));
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 6U));
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__sel 
        = (1U & ((IData)(this->b) >> 7U));
    this->genblk1__BRA__0__KET____DOT__m_i__DOT__c 
        = ((1U & (IData)(this->b)) ? (IData)(this->a)
            : 0U);
    this->genblk1__BRA__1__KET____DOT__m_i__DOT__c 
        = ((2U & (IData)(this->b)) ? (0x7fffU & ((IData)(this->a) 
                                                 << 1U))
            : 0U);
    this->genblk1__BRA__2__KET____DOT__m_i__DOT__c 
        = ((4U & (IData)(this->b)) ? (0x7fffU & ((IData)(this->a) 
                                                 << 2U))
            : 0U);
    this->genblk1__BRA__3__KET____DOT__m_i__DOT__c 
        = ((8U & (IData)(this->b)) ? (0x7fffU & ((IData)(this->a) 
                                                 << 3U))
            : 0U);
    this->genblk1__BRA__4__KET____DOT__m_i__DOT__c 
        = ((0x10U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 4U)) : 0U);
    this->genblk1__BRA__5__KET____DOT__m_i__DOT__c 
        = ((0x20U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 5U)) : 0U);
    this->genblk1__BRA__6__KET____DOT__m_i__DOT__c 
        = ((0x40U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 6U)) : 0U);
    this->genblk1__BRA__7__KET____DOT__m_i__DOT__c 
        = ((0x80U & (IData)(this->b)) ? (0x7fffU & 
                                         ((IData)(this->a) 
                                          << 7U)) : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__b 
        = this->polinomial_inst__DOT__p;
    this->m_out[0U] = this->genblk1__BRA__0__KET____DOT__m_i__DOT__c;
    this->m_out[1U] = this->genblk1__BRA__1__KET____DOT__m_i__DOT__c;
    this->m_out[2U] = this->genblk1__BRA__2__KET____DOT__m_i__DOT__c;
    this->m_out[3U] = this->genblk1__BRA__3__KET____DOT__m_i__DOT__c;
    this->m_out[4U] = this->genblk1__BRA__4__KET____DOT__m_i__DOT__c;
    this->m_out[5U] = this->genblk1__BRA__5__KET____DOT__m_i__DOT__c;
    this->m_out[6U] = this->genblk1__BRA__6__KET____DOT__m_i__DOT__c;
    this->m_out[7U] = this->genblk1__BRA__7__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__a = this->m_out[0xeU];
    this->genblk2__BRA__0__KET____DOT__g_i__DOT__a 
        = this->m_out[0U];
    this->genblk2__BRA__0__KET____DOT__g_i__DOT__b 
        = this->m_out[1U];
    this->genblk2__BRA__1__KET____DOT__g_i__DOT__a 
        = this->m_out[2U];
    this->genblk2__BRA__1__KET____DOT__g_i__DOT__b 
        = this->m_out[3U];
    this->genblk2__BRA__2__KET____DOT__g_i__DOT__a 
        = this->m_out[4U];
    this->genblk2__BRA__2__KET____DOT__g_i__DOT__b 
        = this->m_out[5U];
    this->genblk2__BRA__3__KET____DOT__g_i__DOT__a 
        = this->m_out[6U];
    this->genblk2__BRA__3__KET____DOT__g_i__DOT__b 
        = this->m_out[7U];
    this->genblk2__BRA__4__KET____DOT__g_i__DOT__a 
        = this->m_out[8U];
    this->genblk2__BRA__4__KET____DOT__g_i__DOT__b 
        = this->m_out[9U];
    this->genblk2__BRA__5__KET____DOT__g_i__DOT__a 
        = this->m_out[0xaU];
    this->genblk2__BRA__5__KET____DOT__g_i__DOT__b 
        = this->m_out[0xbU];
    this->genblk2__BRA__6__KET____DOT__g_i__DOT__a 
        = this->m_out[0xcU];
    this->genblk2__BRA__6__KET____DOT__g_i__DOT__b 
        = this->m_out[0xdU];
    this->genblk2__BRA__0__KET____DOT__g_i__DOT__s 
        = (this->m_out[0U] ^ this->m_out[1U]);
    this->genblk2__BRA__1__KET____DOT__g_i__DOT__s 
        = (this->m_out[2U] ^ this->m_out[3U]);
    this->genblk2__BRA__2__KET____DOT__g_i__DOT__s 
        = (this->m_out[4U] ^ this->m_out[5U]);
    this->genblk2__BRA__3__KET____DOT__g_i__DOT__s 
        = (this->m_out[6U] ^ this->m_out[7U]);
    this->genblk2__BRA__4__KET____DOT__g_i__DOT__s 
        = (this->m_out[8U] ^ this->m_out[9U]);
    this->genblk2__BRA__5__KET____DOT__g_i__DOT__s 
        = (this->m_out[0xaU] ^ this->m_out[0xbU]);
    this->genblk2__BRA__6__KET____DOT__g_i__DOT__s 
        = (this->m_out[0xcU] ^ this->m_out[0xdU]);
    this->polinomial_inst__DOT__polinomials[7U] = this->m_out
        [0xeU];
    this->m_out[8U] = this->genblk2__BRA__0__KET____DOT__g_i__DOT__s;
    this->m_out[9U] = this->genblk2__BRA__1__KET____DOT__g_i__DOT__s;
    this->m_out[0xaU] = this->genblk2__BRA__2__KET____DOT__g_i__DOT__s;
    this->m_out[0xbU] = this->genblk2__BRA__3__KET____DOT__g_i__DOT__s;
    this->m_out[0xcU] = this->genblk2__BRA__4__KET____DOT__g_i__DOT__s;
    this->m_out[0xdU] = this->genblk2__BRA__5__KET____DOT__g_i__DOT__s;
    this->m_out[0xeU] = this->genblk2__BRA__6__KET____DOT__g_i__DOT__s;
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [7U] >> 0xeU));
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[7U];
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [6U] >> 0xdU));
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[6U];
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [5U] >> 0xcU));
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[5U];
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [4U] >> 0xbU));
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[4U];
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [3U] >> 0xaU));
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[3U];
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [2U] >> 9U));
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[2U];
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__sel 
        = (1U & (this->polinomial_inst__DOT__polinomials
                 [1U] >> 8U));
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__a 
        = this->polinomial_inst__DOT__polinomials[1U];
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__c 
        = ((0x4000U & this->polinomial_inst__DOT__polinomials
            [7U]) ? (0x7fffU & ((IData)(this->p) << 6U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__c 
        = ((0x2000U & this->polinomial_inst__DOT__polinomials
            [6U]) ? (0x7fffU & ((IData)(this->p) << 5U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__c 
        = ((0x1000U & this->polinomial_inst__DOT__polinomials
            [5U]) ? (0x7fffU & ((IData)(this->p) << 4U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__c 
        = ((0x800U & this->polinomial_inst__DOT__polinomials
            [4U]) ? (0x7fffU & ((IData)(this->p) << 3U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__c 
        = ((0x400U & this->polinomial_inst__DOT__polinomials
            [3U]) ? (0x7fffU & ((IData)(this->p) << 2U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__c 
        = ((0x200U & this->polinomial_inst__DOT__polinomials
            [2U]) ? (0x7fffU & ((IData)(this->p) << 1U))
            : 0U);
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__c 
        = ((0x100U & this->polinomial_inst__DOT__polinomials
            [1U]) ? (IData)(this->p) : 0U);
    this->polinomial_inst__DOT__s = (0xffU & this->polinomial_inst__DOT__polinomials
                                     [0U]);
    this->polinomial_inst__DOT__m_out[6U] = this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[5U] = this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[4U] = this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[3U] = this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[2U] = this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[1U] = this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__c;
    this->polinomial_inst__DOT__m_out[0U] = this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__c;
    this->s = this->polinomial_inst__DOT__s;
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[7U] 
           ^ this->polinomial_inst__DOT__m_out[6U]);
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[6U] 
           ^ this->polinomial_inst__DOT__m_out[5U]);
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[5U] 
           ^ this->polinomial_inst__DOT__m_out[4U]);
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[4U] 
           ^ this->polinomial_inst__DOT__m_out[3U]);
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[3U] 
           ^ this->polinomial_inst__DOT__m_out[2U]);
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[2U] 
           ^ this->polinomial_inst__DOT__m_out[1U]);
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__s 
        = (this->polinomial_inst__DOT__polinomials[1U] 
           ^ this->polinomial_inst__DOT__m_out[0U]);
    this->polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[6U];
    this->polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[5U];
    this->polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[4U];
    this->polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[3U];
    this->polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[2U];
    this->polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[1U];
    this->polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__b 
        = this->polinomial_inst__DOT__m_out[0U];
}

void Vtop_galois_multiplication::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtop_galois_multiplication::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(15);
    b = VL_RAND_RESET_I(15);
    p = VL_RAND_RESET_I(9);
    s = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<15; ++__Vi0) {
            m_out[__Vi0] = VL_RAND_RESET_I(15);
    }}
    polinomial_inst__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__p = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__s = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            polinomial_inst__DOT__m_out[__Vi0] = VL_RAND_RESET_I(15);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            polinomial_inst__DOT__polinomials[__Vi0] = VL_RAND_RESET_I(15);
    }}
    polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__6__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__5__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__4__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__3__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__2__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__1__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    polinomial_inst__DOT__genblk1__BRA__0__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    genblk1__BRA__0__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    genblk1__BRA__0__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    genblk1__BRA__0__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    genblk1__BRA__0__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    genblk1__BRA__1__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    genblk1__BRA__1__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    genblk1__BRA__1__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    genblk1__BRA__1__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    genblk1__BRA__2__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    genblk1__BRA__2__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    genblk1__BRA__2__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    genblk1__BRA__2__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    genblk1__BRA__3__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    genblk1__BRA__3__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    genblk1__BRA__3__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    genblk1__BRA__3__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    genblk1__BRA__4__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    genblk1__BRA__4__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    genblk1__BRA__4__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    genblk1__BRA__4__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    genblk1__BRA__5__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    genblk1__BRA__5__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    genblk1__BRA__5__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    genblk1__BRA__5__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    genblk1__BRA__6__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    genblk1__BRA__6__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    genblk1__BRA__6__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    genblk1__BRA__6__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    genblk1__BRA__7__KET____DOT__m_i__DOT__a = VL_RAND_RESET_I(15);
    genblk1__BRA__7__KET____DOT__m_i__DOT__b = VL_RAND_RESET_I(15);
    genblk1__BRA__7__KET____DOT__m_i__DOT__sel = VL_RAND_RESET_I(1);
    genblk1__BRA__7__KET____DOT__m_i__DOT__c = VL_RAND_RESET_I(15);
    genblk2__BRA__0__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    genblk2__BRA__0__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    genblk2__BRA__0__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    genblk2__BRA__1__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    genblk2__BRA__1__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    genblk2__BRA__1__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    genblk2__BRA__2__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    genblk2__BRA__2__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    genblk2__BRA__2__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    genblk2__BRA__3__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    genblk2__BRA__3__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    genblk2__BRA__3__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    genblk2__BRA__4__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    genblk2__BRA__4__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    genblk2__BRA__4__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    genblk2__BRA__5__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    genblk2__BRA__5__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    genblk2__BRA__5__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
    genblk2__BRA__6__KET____DOT__g_i__DOT__a = VL_RAND_RESET_I(15);
    genblk2__BRA__6__KET____DOT__g_i__DOT__b = VL_RAND_RESET_I(15);
    genblk2__BRA__6__KET____DOT__g_i__DOT__s = VL_RAND_RESET_I(15);
}
