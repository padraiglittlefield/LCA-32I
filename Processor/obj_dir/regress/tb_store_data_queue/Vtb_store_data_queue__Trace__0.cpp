// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_store_data_queue__Syms.h"


void Vtb_store_data_queue___024root__trace_chg_0_sub_0(Vtb_store_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_store_data_queue___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_chg_0\n"); );
    // Body
    Vtb_store_data_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_store_data_queue___024root*>(voidSelf);
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_store_data_queue___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_store_data_queue___024root__trace_chg_0_sub_0(Vtb_store_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_chg_0_sub_0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_store_data_queue__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_store_data_queue__DOT__disp_vld_i));
        bufp->chgIData(oldp+2,(vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i),32);
        bufp->chgBit(oldp+3,(vlSelfRef.tb_store_data_queue__DOT__cmit_vld_i));
        bufp->chgCData(oldp+4,(vlSelfRef.tb_store_data_queue__DOT__cmit_idx_i),4);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_store_data_queue__DOT__exec_vld_i));
        bufp->chgCData(oldp+6,(vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i),4);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_store_data_queue__DOT__exec_addr_i),32);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_store_data_queue__DOT__issue_en_i));
        bufp->chgBit(oldp+9,(vlSelfRef.tb_store_data_queue__DOT__issue_ack_i));
        bufp->chgBit(oldp+10,(vlSelfRef.tb_store_data_queue__DOT__ld_vld_i));
        bufp->chgIData(oldp+11,(vlSelfRef.tb_store_data_queue__DOT__ld_addr_i),32);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i),4);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_store_data_queue__DOT__exec_rob_idx_i),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+15,(((vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+16,((1U & (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+17,(((vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+19,((1U & (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+20,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U])),4);
        bufp->chgBit(oldp+21,(vlSelfRef.tb_store_data_queue__DOT__issue_vld_o));
        bufp->chgBit(oldp+22,(vlSelfRef.tb_store_data_queue__DOT__ld_hit_o));
        bufp->chgIData(oldp+23,(vlSelfRef.tb_store_data_queue__DOT__ld_data_o),32);
        bufp->chgBit(oldp+24,(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+25,((0x0000000fU & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr))),4);
        bufp->chgBit(oldp+26,((((1U & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr) 
                                       >> 4U)) != (1U 
                                                   & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr) 
                                                      >> 4U))) 
                               & ((0x0000000fU & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)) 
                                  == (0x0000000fU & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr))))));
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+28,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+29,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+30,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+31,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+33,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U])),4);
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+35,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+36,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+37,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+39,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+40,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U])),4);
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+42,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+43,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+44,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+47,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U])),4);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+49,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+51,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+54,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U])),4);
        bufp->chgBit(oldp+55,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+56,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+58,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+59,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+61,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U])),4);
        bufp->chgBit(oldp+62,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+63,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+65,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+66,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+68,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U])),4);
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+70,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+71,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+72,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+75,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U])),4);
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+77,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+79,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+81,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+82,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U])),4);
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+84,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+86,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+88,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+89,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U])),4);
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+91,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+93,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U] 
                                  >> 6U))),32);
        bufp->chgBit(oldp+94,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U] 
                                     >> 4U))));
        bufp->chgCData(oldp+96,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U])),4);
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][2U] 
                                     >> 7U))));
        bufp->chgIData(oldp+98,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][2U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                                  >> 7U))),32);
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                                     >> 6U))));
        bufp->chgIData(oldp+100,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                                   << 0x0000001aU) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U] 
                                     >> 6U))),32);
        bufp->chgBit(oldp+101,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+102,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+103,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U])),4);
        bufp->chgBit(oldp+104,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][2U] 
                                      >> 7U))));
        bufp->chgIData(oldp+105,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][2U] 
                                   << 0x00000019U) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                                     >> 7U))),32);
        bufp->chgBit(oldp+106,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                                      >> 6U))));
        bufp->chgIData(oldp+107,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                                   << 0x0000001aU) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U] 
                                     >> 6U))),32);
        bufp->chgBit(oldp+108,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+109,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+110,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U])),4);
        bufp->chgBit(oldp+111,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][2U] 
                                      >> 7U))));
        bufp->chgIData(oldp+112,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][2U] 
                                   << 0x00000019U) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                                     >> 7U))),32);
        bufp->chgBit(oldp+113,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                                      >> 6U))));
        bufp->chgIData(oldp+114,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                                   << 0x0000001aU) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U] 
                                     >> 6U))),32);
        bufp->chgBit(oldp+115,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+116,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+117,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U])),4);
        bufp->chgBit(oldp+118,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][2U] 
                                      >> 7U))));
        bufp->chgIData(oldp+119,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][2U] 
                                   << 0x00000019U) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                                     >> 7U))),32);
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                                      >> 6U))));
        bufp->chgIData(oldp+121,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                                   << 0x0000001aU) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U] 
                                     >> 6U))),32);
        bufp->chgBit(oldp+122,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+124,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U])),4);
        bufp->chgBit(oldp+125,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][2U] 
                                      >> 7U))));
        bufp->chgIData(oldp+126,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][2U] 
                                   << 0x00000019U) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
                                     >> 7U))),32);
        bufp->chgBit(oldp+127,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
                                      >> 6U))));
        bufp->chgIData(oldp+128,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
                                   << 0x0000001aU) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U] 
                                     >> 6U))),32);
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+130,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+131,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U])),4);
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][2U] 
                                      >> 7U))));
        bufp->chgIData(oldp+133,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][2U] 
                                   << 0x00000019U) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][1U] 
                                     >> 7U))),32);
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][1U] 
                                      >> 6U))));
        bufp->chgIData(oldp+135,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][1U] 
                                   << 0x0000001aU) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][0U] 
                                     >> 6U))),32);
        bufp->chgBit(oldp+136,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+137,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+138,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][0U])),4);
        bufp->chgBit(oldp+139,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][2U] 
                                      >> 7U))));
        bufp->chgIData(oldp+140,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][2U] 
                                   << 0x00000019U) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][1U] 
                                     >> 7U))),32);
        bufp->chgBit(oldp+141,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][1U] 
                                      >> 6U))));
        bufp->chgIData(oldp+142,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][1U] 
                                   << 0x0000001aU) 
                                  | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][0U] 
                                     >> 6U))),32);
        bufp->chgBit(oldp+143,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+145,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][0U])),4);
        bufp->chgCData(oldp+146,(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr),5);
        bufp->chgCData(oldp+147,(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr),5);
        bufp->chgCData(oldp+148,(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__last_cmit_idx_reg),4);
    }
    bufp->chgBit(oldp+149,(vlSelfRef.tb_store_data_queue__DOT__clk));
    bufp->chgIData(oldp+150,(vlSelfRef.tb_store_data_queue__DOT__cycle_count),32);
    bufp->chgIData(oldp+151,(vlSelfRef.tb_store_data_queue__DOT__pass_count),32);
    bufp->chgIData(oldp+152,(vlSelfRef.tb_store_data_queue__DOT__fail_count),32);
}

void Vtb_store_data_queue___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_cleanup\n"); );
    // Body
    Vtb_store_data_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_store_data_queue___024root*>(voidSelf);
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
