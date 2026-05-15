// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_reorder_buffer__Syms.h"


void Vtb_reorder_buffer___024root__trace_chg_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_reorder_buffer___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_chg_0\n"); );
    // Init
    Vtb_reorder_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_reorder_buffer___024root*>(voidSelf);
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_reorder_buffer___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_reorder_buffer___024root__trace_chg_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_valid),2);
        bufp->chgQData(oldp+1,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
                               [0U]),40);
        bufp->chgQData(oldp+3,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
                               [1U]),40);
        bufp->chgCData(oldp+5,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid),3);
        bufp->chgCData(oldp+6,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[0]),4);
        bufp->chgCData(oldp+7,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[1]),4);
        bufp->chgCData(oldp+8,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[2]),4);
        bufp->chgIData(oldp+9,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[0]),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[1]),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[2]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+12,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [0U]),40);
        bufp->chgQData(oldp+14,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [1U]),40);
        bufp->chgQData(oldp+16,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [2U]),40);
        bufp->chgQData(oldp+18,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [3U]),40);
        bufp->chgQData(oldp+20,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [4U]),40);
        bufp->chgQData(oldp+22,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [5U]),40);
        bufp->chgQData(oldp+24,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [6U]),40);
        bufp->chgQData(oldp+26,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [7U]),40);
        bufp->chgQData(oldp+28,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [8U]),40);
        bufp->chgQData(oldp+30,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [9U]),40);
        bufp->chgQData(oldp+32,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [0xaU]),40);
        bufp->chgQData(oldp+34,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [0xbU]),40);
        bufp->chgQData(oldp+36,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [0xcU]),40);
        bufp->chgQData(oldp+38,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [0xdU]),40);
        bufp->chgQData(oldp+40,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [0xeU]),40);
        bufp->chgQData(oldp+42,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                                [0xfU]),40);
        bufp->chgQData(oldp+44,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [0U]),34);
        bufp->chgQData(oldp+46,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [1U]),34);
        bufp->chgQData(oldp+48,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [2U]),34);
        bufp->chgQData(oldp+50,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [3U]),34);
        bufp->chgQData(oldp+52,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [4U]),34);
        bufp->chgQData(oldp+54,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [5U]),34);
        bufp->chgQData(oldp+56,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [6U]),34);
        bufp->chgQData(oldp+58,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [7U]),34);
        bufp->chgQData(oldp+60,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [8U]),34);
        bufp->chgQData(oldp+62,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [9U]),34);
        bufp->chgQData(oldp+64,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [0xaU]),34);
        bufp->chgQData(oldp+66,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [0xbU]),34);
        bufp->chgQData(oldp+68,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [0xcU]),34);
        bufp->chgQData(oldp+70,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [0xdU]),34);
        bufp->chgQData(oldp+72,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [0xeU]),34);
        bufp->chgQData(oldp+74,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                                [0xfU]),34);
        bufp->chgCData(oldp+76,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr),5);
        bufp->chgCData(oldp+77,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__tail_ptr),5);
        bufp->chgCData(oldp+78,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full),2);
        bufp->chgCData(oldp+79,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0]),4);
        bufp->chgCData(oldp+80,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1]),4);
        bufp->chgCData(oldp+81,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[0]),5);
        bufp->chgCData(oldp+82,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[1]),5);
        bufp->chgCData(oldp+83,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable),2);
        bufp->chgCData(oldp+84,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations),2);
        bufp->chgCData(oldp+85,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid),2);
        bufp->chgCData(oldp+86,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready),2);
        bufp->chgCData(oldp+87,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable),2);
        bufp->chgCData(oldp+88,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush),2);
        bufp->chgCData(oldp+89,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_exception),2);
        bufp->chgCData(oldp+90,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx[0]),4);
        bufp->chgCData(oldp+91,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx[1]),4);
        bufp->chgCData(oldp+92,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr[0]),5);
        bufp->chgCData(oldp+93,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr[1]),5);
        bufp->chgQData(oldp+94,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                [0U]),40);
        bufp->chgQData(oldp+96,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                [1U]),40);
        bufp->chgQData(oldp+98,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                                [0U]),34);
        bufp->chgQData(oldp+100,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                                 [1U]),34);
        bufp->chgCData(oldp+102,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements),2);
        bufp->chgIData(oldp+103,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__restore_pc),32);
        bufp->chgIData(oldp+104,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+105,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+106,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+107,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk6__DOT__i),32);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__tb_reorder_buffer__DOT__flush_if.flush_out));
        bufp->chgIData(oldp+109,(vlSymsp->TOP__tb_reorder_buffer__DOT__flush_if.pc),32);
        bufp->chgCData(oldp+110,((0x1fU & (IData)((
                                                   vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                                   [1U] 
                                                   >> 0x23U)))),5);
        bufp->chgIData(oldp+111,((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                                         [1U])),32);
        bufp->chgBit(oldp+112,((IData)((((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
                                         >> 1U) & (
                                                   vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                                   [1U] 
                                                   >> 0x22U)))));
        bufp->chgCData(oldp+113,((0x1fU & (IData)((
                                                   vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                                   [0U] 
                                                   >> 0x23U)))),5);
        bufp->chgIData(oldp+114,((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                                         [0U])),32);
        bufp->chgBit(oldp+115,((1U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
                                      & (IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                                 [0U] 
                                                 >> 0x22U))))));
        bufp->chgCData(oldp+116,(((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full))
                                   ? 0U : vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                                  [1U])),4);
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full) 
                                      >> 1U))));
        bufp->chgCData(oldp+118,(((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full))
                                   ? 0U : vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                                  [0U])),4);
        bufp->chgBit(oldp+119,((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full))));
    }
    bufp->chgBit(oldp+120,(vlSelf->tb_reorder_buffer__DOT__clk));
    bufp->chgBit(oldp+121,(vlSelf->tb_reorder_buffer__DOT__rst));
    bufp->chgIData(oldp+122,(vlSelf->tb_reorder_buffer__DOT__cycle_count),32);
}

void Vtb_reorder_buffer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_cleanup\n"); );
    // Init
    Vtb_reorder_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_reorder_buffer___024root*>(voidSelf);
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
