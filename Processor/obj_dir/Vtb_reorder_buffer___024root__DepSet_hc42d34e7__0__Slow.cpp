// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"
#include "Vtb_reorder_buffer__Syms.h"
#include "Vtb_reorder_buffer___024root.h"

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_initial__TOP(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x66666572U;
    __Vtemp_1[2U] = 0x725f6275U;
    __Vtemp_1[3U] = 0x6f726465U;
    __Vtemp_1[4U] = 0x625f7265U;
    __Vtemp_1[5U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__stl(Vtb_reorder_buffer___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_triggers__stl(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_reorder_buffer___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root___stl_sequent__TOP__0(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
        = ((0x7ffffffffULL & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
            [0U]) | ((QData)((IData)(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__.dest_reg)) 
                     << 0x23U));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
        = ((0xfbffffffffULL & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
            [0U]) | ((QData)((IData)(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__.wb_en)) 
                     << 0x22U));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
        = (0xfffffffffdULL & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
           [0U]);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
        = (0xfffffffffeULL & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
           [0U]);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
        = ((0x7ffffffffULL & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
            [1U]) | ((QData)((IData)(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__.dest_reg)) 
                     << 0x23U));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
        = ((0xfbffffffffULL & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
            [1U]) | ((QData)((IData)(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__.wb_en)) 
                     << 0x22U));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
        = (0xfffffffffdULL & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
           [1U]);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
        = (0xfffffffffeULL & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
           [1U]);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid 
        = ((6U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid)) 
           | (IData)(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__.ex_valid));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[0U] 
        = vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__.rob_entry_idx;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[0U] 
        = vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__.ex_val;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid 
        = ((5U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid)) 
           | ((IData)(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__.ex_valid) 
              << 1U));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[1U] 
        = vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__.rob_entry_idx;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[1U] 
        = vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__.ex_val;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid 
        = ((3U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid)) 
           | ((IData)(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__.ex_valid) 
              << 2U));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[2U] 
        = vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__.rob_entry_idx;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[2U] 
        = vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__.ex_val;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_valid 
        = (((IData)(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__.fire_valid) 
            << 1U) | (IData)(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__.fire_valid));
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
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations = 0U;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[0U] 
        = vlSelf->tb_reorder_buffer__DOT__dut__DOT__tail_ptr;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0U] 
        = (0xfU & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr
           [0U]);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full 
        = ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full)) 
           | (((1U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr) 
                      >> 4U)) != (1U & (vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr
                                        [0U] >> 4U))) 
              & ((0xfU & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr)) 
                 == vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                 [0U])));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable 
        = ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable)) 
           | (1U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_valid) 
                    & (~ (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full)))));
    if ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations)));
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[1U] 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__tail_ptr)));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1U] 
        = (0xfU & vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr
           [1U]);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full 
        = ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full)) 
           | (2U & (((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full) 
                     | (((1U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr) 
                                >> 4U)) != (1U & (vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr
                                                  [1U] 
                                                  >> 4U))) 
                        & ((0xfU & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr)) 
                           == vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                           [1U]))) << 1U)));
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable 
        = ((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable)) 
           | ((IData)(((((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_valid) 
                         >> 1U) & (~ ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full) 
                                      >> 1U))) & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) 
              << 1U));
    if ((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations)));
    }
}
