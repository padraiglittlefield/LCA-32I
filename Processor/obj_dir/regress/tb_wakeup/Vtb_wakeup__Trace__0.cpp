// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_wakeup__Syms.h"


void Vtb_wakeup___024root__trace_chg_0_sub_0(Vtb_wakeup___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_wakeup___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root__trace_chg_0\n"); );
    // Body
    Vtb_wakeup___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_wakeup___024root*>(voidSelf);
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_wakeup___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_wakeup___024root__trace_chg_0_sub_0(Vtb_wakeup___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root__trace_chg_0_sub_0\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_wakeup__DOT__pass_count),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_wakeup__DOT__fail_count),32);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_wakeup__DOT__test_grant_ready__Vstatic__granted_entry),2);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_wakeup__DOT__test_retire__Vstatic__retired_entry),2);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_wakeup__DOT__test_dispatch_with_deps__Vstatic__dispatched_entry),2);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_wakeup__DOT__test_clear_dependencies__Vstatic__dep_entry),2);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after),32);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_wakeup__DOT__test_dispatch_after_free__Vstatic__new_entry),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+10,(vlSelfRef.tb_wakeup__DOT__rst));
        bufp->chgBit(oldp+11,(vlSelfRef.tb_wakeup__DOT__disp_valid));
        bufp->chgSData(oldp+12,(vlSelfRef.tb_wakeup__DOT__dependency_mask),16);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_wakeup__DOT__grant),2);
        bufp->chgBit(oldp+14,(vlSelfRef.tb_wakeup__DOT__grant_valid));
        bufp->chgSData(oldp+15,(vlSelfRef.tb_wakeup__DOT__ready_mask),16);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_wakeup__DOT__retire_entry),2);
        bufp->chgBit(oldp+17,(vlSelfRef.tb_wakeup__DOT__retire_valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+18,(vlSelfRef.tb_wakeup__DOT__free_entry_out),2);
        bufp->chgBit(oldp+19,(vlSelfRef.tb_wakeup__DOT__full_out));
        bufp->chgCData(oldp+20,(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid),4);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted),4);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry),2);
        bufp->chgBit(oldp+23,(vlSelfRef.tb_wakeup__DOT__dut__DOT__full));
        bufp->chgSData(oldp+24,(vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0]),16);
        bufp->chgSData(oldp+25,(vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1]),16);
        bufp->chgSData(oldp+26,(vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2]),16);
        bufp->chgSData(oldp+27,(vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3]),16);
        bufp->chgBit(oldp+28,(vlSelfRef.tb_wakeup__DOT__dut__DOT__flag));
    }
    bufp->chgBit(oldp+29,(vlSelfRef.tb_wakeup__DOT__clk));
    bufp->chgIData(oldp+30,(vlSelfRef.tb_wakeup__DOT__cycle_count),32);
    bufp->chgCData(oldp+31,(vlSelfRef.tb_wakeup__DOT__reqs),4);
    bufp->chgBit(oldp+32,(vlSelfRef.tb_wakeup__DOT__dut__DOT__granted));
}

void Vtb_wakeup___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root__trace_cleanup\n"); );
    // Body
    Vtb_wakeup___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_wakeup___024root*>(voidSelf);
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
