// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"



// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter.configure(this, name(), "spongent_iter", "spongent_iter", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__lCounter.configure(this, name(), "spongent_iter.lCounter", "lCounter", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl.configure(this, name(), "spongent_iter.permutation_impl", "permutation_impl", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__counter_impl.configure(this, name(), "spongent_iter.permutation_impl.counter_impl", "counter_impl", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__0__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__0__KET__", "genblk2__BRA\000KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__0__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__0__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__10__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__10__KET__", "genblk2__BRA__10__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__10__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__10__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__11__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__11__KET__", "genblk2__BRA__11__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__11__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__11__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__12__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__12__KET__", "genblk2__BRA__12__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__12__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__12__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__13__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__13__KET__", "genblk2__BRA__13__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__13__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__13__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__14__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__14__KET__", "genblk2__BRA__14__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__14__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__14__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__15__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__15__KET__", "genblk2__BRA__15__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__15__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__15__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__16__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__16__KET__", "genblk2__BRA__16__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__16__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__16__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__17__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__17__KET__", "genblk2__BRA__17__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__17__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__17__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__18__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__18__KET__", "genblk2__BRA__18__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__18__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__18__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__19__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__19__KET__", "genblk2__BRA__19__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__19__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__19__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__1__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__1__KET__", "genblk2__BRA__1__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__1__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__1__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__20__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__20__KET__", "genblk2__BRA__20__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__20__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__20__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__21__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__21__KET__", "genblk2__BRA__21__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__21__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__21__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__2__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__2__KET__", "genblk2__BRA__2__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__2__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__2__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__3__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__3__KET__", "genblk2__BRA__3__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__3__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__3__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__4__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__4__KET__", "genblk2__BRA__4__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__4__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__4__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__5__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__5__KET__", "genblk2__BRA__5__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__5__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__5__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__6__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__6__KET__", "genblk2__BRA__6__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__6__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__6__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__7__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__7__KET__", "genblk2__BRA__7__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__7__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__7__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__8__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__8__KET__", "genblk2__BRA__8__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__8__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__8__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__9__KET__.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__9__KET__", "genblk2__BRA__9__KET__", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_spongent_iter__permutation_impl__genblk2__BRA__9__KET____s_box_i.configure(this, name(), "spongent_iter.permutation_impl.genblk2__BRA__9__KET__.s_box_i", "s_box_i", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__permutation_impl__pLayer_impl.configure(this, name(), "spongent_iter.permutation_impl.pLayer_impl", "pLayer_impl", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__squeezing_phase_impl.configure(this, name(), "spongent_iter.squeezing_phase_impl", "squeezing_phase_impl", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_spongent_iter__squeezing_phase_impl__counter_impl.configure(this, name(), "spongent_iter.squeezing_phase_impl.counter_impl", "counter_impl", -9, VerilatedScope::SCOPE_MODULE);
    
    // Setup scope hierarchy
    __Vhier.add(0, &__Vscope_spongent_iter);
    __Vhier.add(&__Vscope_spongent_iter, &__Vscope_spongent_iter__lCounter);
    __Vhier.add(&__Vscope_spongent_iter, &__Vscope_spongent_iter__permutation_impl);
    __Vhier.add(&__Vscope_spongent_iter, &__Vscope_spongent_iter__squeezing_phase_impl);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__counter_impl);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__0__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__10__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__11__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__12__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__13__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__14__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__15__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__16__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__17__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__18__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__19__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__1__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__20__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__21__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__2__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__3__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__4__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__5__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__6__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__7__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__8__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__genblk2__BRA__9__KET____s_box_i);
    __Vhier.add(&__Vscope_spongent_iter__permutation_impl, &__Vscope_spongent_iter__permutation_impl__pLayer_impl);
    __Vhier.add(&__Vscope_spongent_iter__squeezing_phase_impl, &__Vscope_spongent_iter__squeezing_phase_impl__counter_impl);
    
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"busy", &(TOPp->busy), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOPp->clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_input", &(TOPp->data_input), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_ready", &(TOPp->data_ready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"digest", &(TOPp->digest), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,1 ,87,0);
        __Vscope_TOP.varInsert(__Vfinal,"end_hash", &(TOPp->end_hash), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOPp->rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"start_hash", &(TOPp->start_hash), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"begin_squeezing", &(TOPp->spongent_iter__DOT__begin_squeezing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"busy", &(TOPp->spongent_iter__DOT__busy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"clk", &(TOPp->spongent_iter__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"current_state", &(TOPp->spongent_iter__DOT__current_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"data_input", &(TOPp->spongent_iter__DOT__data_input), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"data_ready", &(TOPp->spongent_iter__DOT__data_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"digest", &(TOPp->spongent_iter__DOT__digest), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"end_hash", &(TOPp->spongent_iter__DOT__end_hash), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"end_permutation", &(TOPp->spongent_iter__DOT__end_permutation), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"end_squeezing", &(TOPp->spongent_iter__DOT__end_squeezing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"lCounter_state", &(TOPp->spongent_iter__DOT__lCounter_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"last_block", &(TOPp->spongent_iter__DOT__last_block), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"last_initial_state_from_absorb", &(TOPp->spongent_iter__DOT__last_initial_state_from_absorb), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"last_padded_data", &(TOPp->spongent_iter__DOT__last_padded_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"next_state", &(TOPp->spongent_iter__DOT__next_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"permutation_initial_state", &(TOPp->spongent_iter__DOT__permutation_initial_state), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"permutation_initial_state_from_absorb", &(TOPp->spongent_iter__DOT__permutation_initial_state_from_absorb), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"permutation_initial_state_from_squezzing", &(TOPp->spongent_iter__DOT__permutation_initial_state_from_squezzing), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"permutation_state", &(TOPp->spongent_iter__DOT__permutation_state), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"rst", &(TOPp->spongent_iter__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"rst_lCounter", &(TOPp->spongent_iter__DOT__rst_lCounter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"rst_permutation", &(TOPp->spongent_iter__DOT__rst_permutation), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"rst_permutation_from_absorb", &(TOPp->spongent_iter__DOT__rst_permutation_from_absorb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"rst_permutation_from_squezzing", &(TOPp->spongent_iter__DOT__rst_permutation_from_squezzing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"rst_squezzing", &(TOPp->spongent_iter__DOT__rst_squezzing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"shift_lCounter", &(TOPp->spongent_iter__DOT__shift_lCounter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"standart_initial_state_from_absorb", &(TOPp->spongent_iter__DOT__standart_initial_state_from_absorb), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"start_hash", &(TOPp->spongent_iter__DOT__start_hash), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter.varInsert(__Vfinal,"state", &(TOPp->spongent_iter__DOT__state), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__lCounter.varInsert(__Vfinal,"bit_xored", &(TOPp->spongent_iter__DOT__lCounter__DOT__bit_xored), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__lCounter.varInsert(__Vfinal,"clk", &(TOPp->spongent_iter__DOT__lCounter__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__lCounter.varInsert(__Vfinal,"feedback_coeff", &(TOPp->spongent_iter__DOT__lCounter__DOT__feedback_coeff), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_spongent_iter__lCounter.varInsert(__Vfinal,"initial_state", &(TOPp->spongent_iter__DOT__lCounter__DOT__initial_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spongent_iter__lCounter.varInsert(__Vfinal,"rst", &(TOPp->spongent_iter__DOT__lCounter__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__lCounter.varInsert(__Vfinal,"shift", &(TOPp->spongent_iter__DOT__lCounter__DOT__shift), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__lCounter.varInsert(__Vfinal,"state", &(TOPp->spongent_iter__DOT__lCounter__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spongent_iter__lCounter.varInsert(__Vfinal,"state_reg", &(TOPp->spongent_iter__DOT__lCounter__DOT__state_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"clk", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"counter_o", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__counter_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"end_permutation", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__end_permutation), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"initial_state", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__initial_state), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"lCounter_state", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__lCounter_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"reverse_lCounter", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__reverse_lCounter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"rst", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"rst_lCounter", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__rst_lCounter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"shift_lCounter", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__shift_lCounter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"state", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__state), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"state_S_box", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__state_S_box), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__permutation_impl.varInsert(__Vfinal,"state_reg", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__state_reg), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__permutation_impl__counter_impl.varInsert(__Vfinal,"clk", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__permutation_impl__counter_impl.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spongent_iter__permutation_impl__counter_impl.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_spongent_iter__permutation_impl__counter_impl.varInsert(__Vfinal,"down", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__down), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__permutation_impl__counter_impl.varInsert(__Vfinal,"rst", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__permutation_impl__counter_impl.varInsert(__Vfinal,"up", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__counter_impl__DOT__up), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__0__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__0__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__0__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__10__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__10__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__10__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__11__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__11__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__11__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__12__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__12__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__12__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__13__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__13__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__13__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__14__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__14__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__14__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__15__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__15__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__15__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__16__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__16__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__16__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__17__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__17__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__17__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__18__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__18__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__18__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__19__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__19__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__19__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__1__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__1__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__1__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__20__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__20__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__20__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__21__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__21__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__21__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__2__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__2__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__2__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__3__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__3__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__3__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__4__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__4__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__4__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__5__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__5__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__5__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__6__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__6__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__6__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__7__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__7__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__7__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__8__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__8__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__8__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__9__KET____s_box_i.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__genblk2__BRA__9__KET____s_box_i.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__genblk2__BRA__9__KET____DOT__s_box_i__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_spongent_iter__permutation_impl__pLayer_impl.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__din), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__permutation_impl__pLayer_impl.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__permutation_impl__DOT__pLayer_impl__DOT__dout), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"clk", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"counter_o", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"counter_up", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_up), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"current_state", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__current_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"end_permutation", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_permutation), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"end_squeezing", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__end_squeezing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"next_state", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__next_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"permutation_initial_state", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_initial_state), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"permutation_state", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__permutation_state), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"result", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"result_chunk", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__result_chunk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"rst", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"rst_permutation", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__rst_permutation), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__squeezing_phase_impl.varInsert(__Vfinal,"state", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__state), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,87,0);
        __Vscope_spongent_iter__squeezing_phase_impl__counter_impl.varInsert(__Vfinal,"clk", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__squeezing_phase_impl__counter_impl.varInsert(__Vfinal,"din", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_spongent_iter__squeezing_phase_impl__counter_impl.varInsert(__Vfinal,"dout", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_spongent_iter__squeezing_phase_impl__counter_impl.varInsert(__Vfinal,"down", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__down), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__squeezing_phase_impl__counter_impl.varInsert(__Vfinal,"rst", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_spongent_iter__squeezing_phase_impl__counter_impl.varInsert(__Vfinal,"up", &(TOPp->spongent_iter__DOT__squeezing_phase_impl__DOT__counter_impl__DOT__up), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
