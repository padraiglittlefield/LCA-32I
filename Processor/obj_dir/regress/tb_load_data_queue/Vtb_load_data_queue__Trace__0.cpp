// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_load_data_queue__Syms.h"


void Vtb_load_data_queue___024root__trace_chg_0_sub_0(Vtb_load_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_load_data_queue___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_chg_0\n"); );
    // Body
    Vtb_load_data_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_load_data_queue___024root*>(voidSelf);
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_load_data_queue___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_load_data_queue___024root__trace_chg_0_sub_0(Vtb_load_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_chg_0_sub_0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_load_data_queue__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_load_data_queue__DOT__disp_vld_i));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_load_data_queue__DOT__disp_sdq_marker_i),5);
        bufp->chgBit(oldp+3,(vlSelfRef.tb_load_data_queue__DOT__exec_vld_i));
        bufp->chgCData(oldp+4,(vlSelfRef.tb_load_data_queue__DOT__exec_ldq_idx_i),4);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_load_data_queue__DOT__exec_addr_i),32);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_load_data_queue__DOT__rob_entry_idx),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+7,(((IData)(vlSelfRef.tb_load_data_queue__DOT__ldq_full_o)
                                 ? 0U : (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx))),4);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_load_data_queue__DOT__ldq_full_o));
        bufp->chgBit(oldp+9,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                            >> 0x0000002bU)))));
        bufp->chgBit(oldp+10,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+11,((IData)((vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+12,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+13,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                             >> 4U)))));
        bufp->chgCData(oldp+14,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_entry_o))),4);
        bufp->chgBit(oldp+15,(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o));
        bufp->chgBit(oldp+16,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+17,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+18,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+19,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+20,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+21,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U]))),4);
        bufp->chgBit(oldp+22,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+23,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+24,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+25,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+26,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+27,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U]))),4);
        bufp->chgBit(oldp+28,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+29,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+30,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+31,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+32,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+33,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U]))),4);
        bufp->chgBit(oldp+34,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+35,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+36,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+37,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+38,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+39,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U]))),4);
        bufp->chgBit(oldp+40,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+41,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+42,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+43,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+44,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+45,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U]))),4);
        bufp->chgBit(oldp+46,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+47,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+48,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+49,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+50,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+51,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U]))),4);
        bufp->chgBit(oldp+52,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+53,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+54,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+55,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+56,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+57,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U]))),4);
        bufp->chgBit(oldp+58,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+59,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+60,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+61,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+62,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+63,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U]))),4);
        bufp->chgBit(oldp+64,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+65,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+66,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+67,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+68,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+69,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U]))),4);
        bufp->chgBit(oldp+70,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+71,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+72,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+73,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+74,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+75,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U]))),4);
        bufp->chgBit(oldp+76,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+77,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+78,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+79,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+80,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+81,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U]))),4);
        bufp->chgBit(oldp+82,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+83,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+84,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+85,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+86,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+87,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U]))),4);
        bufp->chgBit(oldp+88,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+89,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+90,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+91,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+92,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+93,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U]))),4);
        bufp->chgBit(oldp+94,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                             >> 0x0000002bU)))));
        bufp->chgBit(oldp+95,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                             >> 0x0000002aU)))));
        bufp->chgIData(oldp+96,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                         >> 0x0000000aU))),32);
        bufp->chgCData(oldp+97,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                                        >> 5U)))),5);
        bufp->chgBit(oldp+98,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                             >> 4U)))));
        bufp->chgCData(oldp+99,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U]))),4);
        bufp->chgBit(oldp+100,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                              >> 0x0000002bU)))));
        bufp->chgBit(oldp+101,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                              >> 0x0000002aU)))));
        bufp->chgIData(oldp+102,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                          >> 0x0000000aU))),32);
        bufp->chgCData(oldp+103,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                                         >> 5U)))),5);
        bufp->chgBit(oldp+104,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                              >> 4U)))));
        bufp->chgCData(oldp+105,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U]))),4);
        bufp->chgBit(oldp+106,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                              >> 0x0000002bU)))));
        bufp->chgBit(oldp+107,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                              >> 0x0000002aU)))));
        bufp->chgIData(oldp+108,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                          >> 0x0000000aU))),32);
        bufp->chgCData(oldp+109,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                                         >> 5U)))),5);
        bufp->chgBit(oldp+110,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                              >> 4U)))));
        bufp->chgCData(oldp+111,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U]))),4);
        bufp->chgCData(oldp+112,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx),4);
        bufp->chgSData(oldp+113,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free),16);
        bufp->chgBit(oldp+114,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found));
        bufp->chgSData(oldp+115,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready),16);
        bufp->chgCData(oldp+116,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx),4);
    }
    bufp->chgBit(oldp+117,(vlSelfRef.tb_load_data_queue__DOT__clk));
    bufp->chgIData(oldp+118,(vlSelfRef.tb_load_data_queue__DOT__cycle_count),32);
}

void Vtb_load_data_queue___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_cleanup\n"); );
    // Body
    Vtb_load_data_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_load_data_queue___024root*>(voidSelf);
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
