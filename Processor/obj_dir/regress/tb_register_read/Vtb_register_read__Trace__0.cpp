// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_register_read__Syms.h"


void Vtb_register_read___024root__trace_chg_0_sub_0(Vtb_register_read___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_register_read___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_chg_0\n"); );
    // Body
    Vtb_register_read___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_register_read___024root*>(voidSelf);
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_register_read___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_register_read___024root__trace_chg_0_sub_0(Vtb_register_read___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_chg_0_sub_0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_register_read__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_register_read__DOT__sched_fire_valid));
        bufp->chgIData(oldp+2,(vlSelfRef.tb_register_read__DOT__sched_pkt[3U]),32);
        bufp->chgCData(oldp+3,((vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                >> 0x0000001bU)),5);
        bufp->chgCData(oldp+4,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                               >> 0x00000015U))),6);
        bufp->chgCData(oldp+5,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                               >> 0x0000000fU))),6);
        bufp->chgBit(oldp+6,((1U & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                    >> 0x0000000eU))));
        bufp->chgCData(oldp+7,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                               >> 8U))),6);
        bufp->chgBit(oldp+8,((1U & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                    >> 7U))));
        bufp->chgCData(oldp+9,((0x0000000fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                               >> 3U))),4);
        bufp->chgIData(oldp+10,(((vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+11,((1U & (vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
                                     >> 2U))));
        bufp->chgIData(oldp+12,(((vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+14,((1U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U])));
        bufp->chgIData(oldp+15,(vlSelfRef.tb_register_read__DOT__rf_src1_val),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_register_read__DOT__rf_src2_val),32);
        bufp->chgBit(oldp+17,(vlSelfRef.tb_register_read__DOT__fwrd_src1_hit));
        bufp->chgIData(oldp+18,(vlSelfRef.tb_register_read__DOT__fwrd_src1_val),32);
        bufp->chgBit(oldp+19,(vlSelfRef.tb_register_read__DOT__fwrd_src2_hit));
        bufp->chgIData(oldp+20,(vlSelfRef.tb_register_read__DOT__fwrd_src2_val),32);
        bufp->chgIData(oldp+21,(((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src1_hit)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+22,(((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src2_hit)
                                  ? 1U : 0U)),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgIData(oldp+23,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[5U] 
                                  << 2U) | (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                            >> 0x0000001eU))),32);
        bufp->chgCData(oldp+24,((0x0000001fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                                >> 0x00000019U))),5);
        bufp->chgCData(oldp+25,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                                >> 0x00000013U))),6);
        bufp->chgCData(oldp+26,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                                >> 0x0000000dU))),6);
        bufp->chgCData(oldp+27,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                                >> 7U))),6);
        bufp->chgCData(oldp+28,((0x0000000fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+29,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[3U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[3U] 
                                     >> 2U))));
        bufp->chgIData(oldp+31,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[3U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
                                  >> 2U))),32);
        bufp->chgIData(oldp+32,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
                                  >> 2U))),32);
        bufp->chgIData(oldp+33,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+35,((1U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U])));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+36,(vlSelfRef.tb_register_read__DOT__exec_fire_valid));
        bufp->chgIData(oldp+37,(((vlSelfRef.tb_register_read__DOT__exec_pkt[5U] 
                                  << 2U) | (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                            >> 0x0000001eU))),32);
        bufp->chgCData(oldp+38,((0x0000001fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                                >> 0x00000019U))),5);
        bufp->chgCData(oldp+39,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                                >> 0x00000013U))),6);
        bufp->chgCData(oldp+40,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                                >> 0x0000000dU))),6);
        bufp->chgCData(oldp+41,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                                >> 7U))),6);
        bufp->chgCData(oldp+42,((0x0000000fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+43,(((vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+44,((1U & (vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                                     >> 2U))));
        bufp->chgIData(oldp+45,(((vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                                  >> 2U))),32);
        bufp->chgIData(oldp+46,(((vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                                  >> 2U))),32);
        bufp->chgIData(oldp+47,(((vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+49,((1U & vlSelfRef.tb_register_read__DOT__exec_pkt[0U])));
    }
    bufp->chgBit(oldp+50,(vlSelfRef.tb_register_read__DOT__clk));
    bufp->chgIData(oldp+51,(vlSelfRef.tb_register_read__DOT__cycle_count),32);
    bufp->chgIData(oldp+52,(vlSelfRef.tb_register_read__DOT__pass_count),32);
    bufp->chgIData(oldp+53,(vlSelfRef.tb_register_read__DOT__fail_count),32);
}

void Vtb_register_read___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_cleanup\n"); );
    // Body
    Vtb_register_read___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_register_read___024root*>(voidSelf);
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
