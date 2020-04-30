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
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", VerilatedScope::SCOPE_OTHER);
    __Vscope_trivium_wrapper.configure(this, name(), "trivium_wrapper", "trivium_wrapper", VerilatedScope::SCOPE_MODULE);
    __Vscope_trivium_wrapper__counter_impl.configure(this, name(), "trivium_wrapper.counter_impl", "counter_impl", VerilatedScope::SCOPE_MODULE);
    __Vscope_trivium_wrapper__reg_impl.configure(this, name(), "trivium_wrapper.reg_impl", "reg_impl", VerilatedScope::SCOPE_MODULE);
    __Vscope_trivium_wrapper__trivium_impl.configure(this, name(), "trivium_wrapper.trivium_impl", "trivium_impl", VerilatedScope::SCOPE_MODULE);
    __Vscope_trivium_wrapper__trivium_impl__counter_inst.configure(this, name(), "trivium_wrapper.trivium_impl.counter_inst", "counter_inst", VerilatedScope::SCOPE_MODULE);
    __Vscope_trivium_wrapper__trivium_impl__registerA.configure(this, name(), "trivium_wrapper.trivium_impl.registerA", "registerA", VerilatedScope::SCOPE_MODULE);
    __Vscope_trivium_wrapper__trivium_impl__registerB.configure(this, name(), "trivium_wrapper.trivium_impl.registerB", "registerB", VerilatedScope::SCOPE_MODULE);
    __Vscope_trivium_wrapper__trivium_impl__registerC.configure(this, name(), "trivium_wrapper.trivium_impl.registerC", "registerC", VerilatedScope::SCOPE_MODULE);
    
    // Setup scope hierarchy
    __Vhier.add(0, &__Vscope_trivium_wrapper);
    __Vhier.add(&__Vscope_trivium_wrapper, &__Vscope_trivium_wrapper__counter_impl);
    __Vhier.add(&__Vscope_trivium_wrapper, &__Vscope_trivium_wrapper__reg_impl);
    __Vhier.add(&__Vscope_trivium_wrapper, &__Vscope_trivium_wrapper__trivium_impl);
    __Vhier.add(&__Vscope_trivium_wrapper__trivium_impl, &__Vscope_trivium_wrapper__trivium_impl__counter_inst);
    __Vhier.add(&__Vscope_trivium_wrapper__trivium_impl, &__Vscope_trivium_wrapper__trivium_impl__registerA);
    __Vhier.add(&__Vscope_trivium_wrapper__trivium_impl, &__Vscope_trivium_wrapper__trivium_impl__registerB);
    __Vhier.add(&__Vscope_trivium_wrapper__trivium_impl, &__Vscope_trivium_wrapper__trivium_impl__registerC);
    
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"block_o", &(TOPp->block_o), VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,1 ,79,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOPp->clk), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"end_block", &(TOPp->end_block), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"iv", &(TOPp->iv), VLVT_WDATA,VLVD_IN|VLVF_PUB_RW,1 ,79,0);
        __Vscope_TOP.varInsert(__Vfinal,"key", &(TOPp->key), VLVT_WDATA,VLVD_IN|VLVF_PUB_RW,1 ,79,0);
        __Vscope_TOP.varInsert(__Vfinal,"next_data", &(TOPp->next_data), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOPp->rst), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"block_o", &(TOPp->trivium_wrapper__DOT__block_o), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,79,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"clk", &(TOPp->trivium_wrapper__DOT__clk), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"counter_in", &(TOPp->trivium_wrapper__DOT__counter_in), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"counter_out", &(TOPp->trivium_wrapper__DOT__counter_out), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"counter_rst", &(TOPp->trivium_wrapper__DOT__counter_rst), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"counter_up", &(TOPp->trivium_wrapper__DOT__counter_up), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"current_state", &(TOPp->trivium_wrapper__DOT__current_state), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"end_block", &(TOPp->trivium_wrapper__DOT__end_block), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"iv", &(TOPp->trivium_wrapper__DOT__iv), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,79,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"key", &(TOPp->trivium_wrapper__DOT__key), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,79,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"key_stream", &(TOPp->trivium_wrapper__DOT__key_stream), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"next_data", &(TOPp->trivium_wrapper__DOT__next_data), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"next_state", &(TOPp->trivium_wrapper__DOT__next_state), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"reg_in", &(TOPp->trivium_wrapper__DOT__reg_in), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,79,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"rst", &(TOPp->trivium_wrapper__DOT__rst), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"shift_right", &(TOPp->trivium_wrapper__DOT__shift_right), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"stop_value", &(TOPp->trivium_wrapper__DOT__stop_value), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"trivium_en", &(TOPp->trivium_wrapper__DOT__trivium_en), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper.varInsert(__Vfinal,"warm_up_complete", &(TOPp->trivium_wrapper__DOT__warm_up_complete), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__counter_impl.varInsert(__Vfinal,"clk", &(TOPp->trivium_wrapper__DOT__counter_impl__DOT__clk), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__counter_impl.varInsert(__Vfinal,"din", &(TOPp->trivium_wrapper__DOT__counter_impl__DOT__din), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_trivium_wrapper__counter_impl.varInsert(__Vfinal,"dout", &(TOPp->trivium_wrapper__DOT__counter_impl__DOT__dout), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_trivium_wrapper__counter_impl.varInsert(__Vfinal,"down", &(TOPp->trivium_wrapper__DOT__counter_impl__DOT__down), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__counter_impl.varInsert(__Vfinal,"rst", &(TOPp->trivium_wrapper__DOT__counter_impl__DOT__rst), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__counter_impl.varInsert(__Vfinal,"up", &(TOPp->trivium_wrapper__DOT__counter_impl__DOT__up), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__reg_impl.varInsert(__Vfinal,"cl", &(TOPp->trivium_wrapper__DOT__reg_impl__DOT__cl), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__reg_impl.varInsert(__Vfinal,"clk", &(TOPp->trivium_wrapper__DOT__reg_impl__DOT__clk), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__reg_impl.varInsert(__Vfinal,"din", &(TOPp->trivium_wrapper__DOT__reg_impl__DOT__din), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,79,0);
        __Vscope_trivium_wrapper__reg_impl.varInsert(__Vfinal,"dout", &(TOPp->trivium_wrapper__DOT__reg_impl__DOT__dout), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,79,0);
        __Vscope_trivium_wrapper__reg_impl.varInsert(__Vfinal,"input_bit", &(TOPp->trivium_wrapper__DOT__reg_impl__DOT__input_bit), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__reg_impl.varInsert(__Vfinal,"load", &(TOPp->trivium_wrapper__DOT__reg_impl__DOT__load), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__reg_impl.varInsert(__Vfinal,"output_bit", &(TOPp->trivium_wrapper__DOT__reg_impl__DOT__output_bit), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__reg_impl.varInsert(__Vfinal,"shift_left", &(TOPp->trivium_wrapper__DOT__reg_impl__DOT__shift_left), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__reg_impl.varInsert(__Vfinal,"shift_right", &(TOPp->trivium_wrapper__DOT__reg_impl__DOT__shift_right), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"A_out", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__A_out), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"B_out", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__B_out), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"C_out", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__C_out), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"a_and", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__a_and), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"b_and", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__b_and), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"c_and", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__c_and), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"clk", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__clk), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"counter_out", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_out), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"dout_A", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_A), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,92,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"dout_B", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_B), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,83,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"dout_C", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__dout_C), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,110,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"en", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__en), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"input_bit_A", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_A), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"input_bit_B", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_B), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"input_bit_C", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__input_bit_C), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"iv", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__iv), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,79,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"key", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__key), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,79,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"key_stream", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__key_stream), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"rst", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__rst), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl.varInsert(__Vfinal,"warm_up_complete", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__warm_up_complete), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__counter_inst.varInsert(__Vfinal,"clk", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__clk), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__counter_inst.varInsert(__Vfinal,"din", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__din), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_trivium_wrapper__trivium_impl__counter_inst.varInsert(__Vfinal,"dout", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__dout), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_trivium_wrapper__trivium_impl__counter_inst.varInsert(__Vfinal,"down", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__down), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__counter_inst.varInsert(__Vfinal,"rst", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__rst), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__counter_inst.varInsert(__Vfinal,"up", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__counter_inst__DOT__up), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerA.varInsert(__Vfinal,"clk", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__clk), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerA.varInsert(__Vfinal,"din", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__din), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,92,0);
        __Vscope_trivium_wrapper__trivium_impl__registerA.varInsert(__Vfinal,"dout", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__dout), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,92,0);
        __Vscope_trivium_wrapper__trivium_impl__registerA.varInsert(__Vfinal,"input_bit", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__input_bit), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerA.varInsert(__Vfinal,"load", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__load), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerA.varInsert(__Vfinal,"shift", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerA__DOT__shift), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerB.varInsert(__Vfinal,"clk", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__clk), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerB.varInsert(__Vfinal,"din", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__din), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,83,0);
        __Vscope_trivium_wrapper__trivium_impl__registerB.varInsert(__Vfinal,"dout", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__dout), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,83,0);
        __Vscope_trivium_wrapper__trivium_impl__registerB.varInsert(__Vfinal,"input_bit", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__input_bit), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerB.varInsert(__Vfinal,"load", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__load), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerB.varInsert(__Vfinal,"shift", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerB__DOT__shift), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerC.varInsert(__Vfinal,"clk", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__clk), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerC.varInsert(__Vfinal,"din", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__din), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,110,0);
        __Vscope_trivium_wrapper__trivium_impl__registerC.varInsert(__Vfinal,"dout", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__dout), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,110,0);
        __Vscope_trivium_wrapper__trivium_impl__registerC.varInsert(__Vfinal,"input_bit", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__input_bit), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerC.varInsert(__Vfinal,"load", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__load), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_trivium_wrapper__trivium_impl__registerC.varInsert(__Vfinal,"shift", &(TOPp->trivium_wrapper__DOT__trivium_impl__DOT__registerC__DOT__shift), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
