// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"
#include "Vtb_reorder_buffer__Syms.h"
#include "Vtb_reorder_buffer___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__act(Vtb_reorder_buffer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_reorder_buffer___024root___eval_triggers__act(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_reorder_buffer__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->tb_reorder_buffer__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0 
        = vlSelf->tb_reorder_buffer__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_reorder_buffer___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_reorder_buffer___024root___nba_sequent__TOP__0(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 = 0;
    IData/*31:0*/ __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23;
    __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 = 0;
    IData/*31:0*/ __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25;
    __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 = 0;
    IData/*31:0*/ __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27;
    __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31;
    __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 0;
    QData/*39:0*/ __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16;
    __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17;
    __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 0;
    QData/*39:0*/ __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17;
    __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 0;
    CData/*0:0*/ __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 0;
    // Body
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 0U;
    __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_reorder_buffer__DOT__rst) 
                  | (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__flush_en))))) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk4__DOT__i = 2U;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk5__DOT__i = 3U;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk6__DOT__i = 2U;
    }
    if (((IData)(vlSelf->tb_reorder_buffer__DOT__rst) 
         | (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__flush_en))) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__tail_ptr = 0U;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr = 0U;
        __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0 = 1U;
        __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0 = 1U;
        vlSymsp->TOP__tb_reorder_buffer__DOT__flush_if.pc = 0U;
    } else {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__tail_ptr 
            = (0x1fU & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__tail_ptr) 
                        + (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations)));
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr 
            = (0x1fU & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr) 
                        + (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements)));
        if ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) {
            __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
                [0U];
            __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 1U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                [0U];
            __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 1U;
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 0x21U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                [0U];
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17 = 0x20U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                [0U];
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18 = 0U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                [0U];
        }
        if ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) {
            __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
                [1U];
            __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 1U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                [1U];
            __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 1U;
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 0x21U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                [1U];
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20 = 0x20U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                [1U];
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21 = 0U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                [1U];
        }
        if ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid))) {
            __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 1U;
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 0x20U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx
                [0U];
            __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data
                [0U];
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 = 0U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx
                [0U];
        }
        if ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid))) {
            __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 1U;
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 0x20U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx
                [1U];
            __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data
                [1U];
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 = 0U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx
                [1U];
        }
        if ((4U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid))) {
            __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 1U;
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 0x20U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx
                [2U];
            __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data
                [2U];
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 = 0U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx
                [2U];
        }
        if ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable))) {
            __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 1U;
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 0x21U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx
                [0U];
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29 = 0x20U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx
                [0U];
        }
        if ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable))) {
            __Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 1U;
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 0x21U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx
                [1U];
            __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31 = 0x20U;
            __Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31 
                = vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx
                [1U];
        }
        vlSymsp->TOP__tb_reorder_buffer__DOT__flush_if.pc 
            = vlSelf->tb_reorder_buffer__DOT__dut__DOT__restore_pc;
    }
    vlSymsp->TOP__tb_reorder_buffer__DOT__flush_if.flush_out 
        = ((1U & (~ ((IData)(vlSelf->tb_reorder_buffer__DOT__rst) 
                     | (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__flush_en)))) 
           && (0U != ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
                      & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush))));
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[0xaU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[0xbU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[0xcU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[0xdU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[0xeU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[0xfU] = 0ULL;
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16] 
            = __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16;
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17] 
            = __Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17;
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[0U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[1U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[2U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[3U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[4U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[5U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[6U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[7U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[8U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[9U] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[0xaU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[0xbU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[0xcU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[0xdU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[0xeU] = 0ULL;
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[0xfU] = 0ULL;
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16] 
            = (vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16] 
               | (0x3ffffffffULL & ((QData)((IData)(1U)) 
                                    << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16)));
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17] 
            = ((~ (1ULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17)) 
               & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17]);
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18] 
            = ((~ (0xffffffffULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18)) 
               & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18]);
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19] 
            = (vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19] 
               | (0x3ffffffffULL & ((QData)((IData)(1U)) 
                                    << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19)));
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20] 
            = ((~ (1ULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20)) 
               & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20]);
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21] 
            = ((~ (0xffffffffULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21)) 
               & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21]);
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22] 
            = (vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22] 
               | (0x3ffffffffULL & ((QData)((IData)(1U)) 
                                    << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22)));
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23] 
            = (((~ (0xffffffffULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23)) 
                & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23]) 
               | (0x3ffffffffULL & ((QData)((IData)(__Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23)) 
                                    << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23)));
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24] 
            = (vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24] 
               | (0x3ffffffffULL & ((QData)((IData)(1U)) 
                                    << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24)));
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25] 
            = (((~ (0xffffffffULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25)) 
                & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25]) 
               | (0x3ffffffffULL & ((QData)((IData)(__Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25)) 
                                    << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25)));
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26] 
            = (vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26] 
               | (0x3ffffffffULL & ((QData)((IData)(1U)) 
                                    << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26)));
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27] 
            = (((~ (0xffffffffULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27)) 
                & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27]) 
               | (0x3ffffffffULL & ((QData)((IData)(__Vdlyvval__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27)) 
                                    << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27)));
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28] 
            = ((~ (1ULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28)) 
               & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28]);
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29] 
            = ((~ (1ULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29)) 
               & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29]);
    }
    if (__Vdlyvset__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30] 
            = ((~ (1ULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30)) 
               & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30]);
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31] 
            = ((~ (1ULL << __Vdlyvlsb__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31)) 
               & vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__Vdlyvdim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31]);
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements = 0U;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__restore_pc = 0U;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr[0U] 
        = vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx[0U] 
        = (0xfU & vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr
           [0U]);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
        = vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
        [vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx
        [0U]];
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status[0U] 
        = vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
        [vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx
        [0U]];
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid 
        = ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid)) 
           | (1U & (IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                            [0U] >> 0x21U))));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready 
        = ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready)) 
           | (1U & ((IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                             [0U] >> 0x20U)) & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid))));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush 
        = ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush)) 
           | (1U & (IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                            [0U] >> 1U))));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_exception 
        = ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_exception)) 
           | (1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                           [0U])));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable 
        = ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable)) 
           | (1U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid) 
                    & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready))));
    if ((1U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
               & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush)))) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__restore_pc 
            = (IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                       [0U] >> 2U));
    }
    if ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable))) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements)));
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr[1U] 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr)));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx[1U] 
        = (0xfU & vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr
           [1U]);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
        = vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
        [vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx
        [1U]];
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status[1U] 
        = vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
        [vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx
        [1U]];
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid 
        = ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid)) 
           | (2U & ((IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                             [1U] >> 0x21U)) << 1U)));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready 
        = ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready)) 
           | ((IData)((((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid) 
                        >> 1U) & (vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                                  [1U] >> 0x20U))) 
              << 1U));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush 
        = ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush)) 
           | (2U & ((IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                             [1U] >> 1U)) << 1U)));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_exception 
        = ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_exception)) 
           | (2U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                            [1U]) << 1U)));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable 
        = ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable)) 
           | (2U & ((((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid) 
                      & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready)) 
                     & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
                        << 1U)) & (((~ (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush)) 
                                    & (~ (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_exception))) 
                                   << 1U))));
    if ((2U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
               & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush)))) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__restore_pc 
            = (IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                       [1U] >> 2U));
    }
    if ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable))) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements)));
    }
}
