// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_reorder_buffer__Syms.h"


void Vtb_reorder_buffer___024root__trace_chg_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_reorder_buffer___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_chg_0\n"); );
    // Body
    Vtb_reorder_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_reorder_buffer___024root*>(voidSelf);
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_reorder_buffer___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_reorder_buffer___024root__trace_chg_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_chg_0_sub_0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_reorder_buffer__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[0]));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[1]));
        bufp->chgCData(oldp+3,(vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[0]),5);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[1]),5);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[0]));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[1]));
        bufp->chgBit(oldp+7,(vlSelfRef.tb_reorder_buffer__DOT__ex_valid[0]));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_reorder_buffer__DOT__ex_valid[1]));
        bufp->chgBit(oldp+9,(vlSelfRef.tb_reorder_buffer__DOT__ex_valid[2]));
        bufp->chgCData(oldp+10,(vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[0]),4);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[1]),4);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[2]),4);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_reorder_buffer__DOT__ex_val[0]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_reorder_buffer__DOT__ex_val[1]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_reorder_buffer__DOT__ex_val[2]),32);
        bufp->chgBit(oldp+16,(vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[0]));
        bufp->chgBit(oldp+17,(vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[1]));
        bufp->chgBit(oldp+18,(vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[2]));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_reorder_buffer__DOT__ex_exception[0]));
        bufp->chgBit(oldp+20,(vlSelfRef.tb_reorder_buffer__DOT__ex_exception[1]));
        bufp->chgBit(oldp+21,(vlSelfRef.tb_reorder_buffer__DOT__ex_exception[2]));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgCData(oldp+22,(vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[0]),4);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[1]),4);
        bufp->chgBit(oldp+24,(vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[0]));
        bufp->chgBit(oldp+25,(vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[1]));
        bufp->chgBit(oldp+26,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_fire_valid_i[0]));
        bufp->chgBit(oldp+27,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_fire_valid_i[1]));
        bufp->chgCData(oldp+28,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_dst_areg_i[0]),5);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_dst_areg_i[1]),5);
        bufp->chgBit(oldp+30,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_wb_en_i[0]));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_wb_en_i[1]));
        bufp->chgCData(oldp+32,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[0]),4);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[1]),4);
        bufp->chgBit(oldp+34,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[0]));
        bufp->chgBit(oldp+35,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[1]));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[0]));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[1]));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[2]));
        bufp->chgCData(oldp+39,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[0]),4);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[1]),4);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[2]),4);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_val_i[0]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_val_i[1]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_val_i[2]),32);
        bufp->chgBit(oldp+45,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[0]));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[1]));
        bufp->chgBit(oldp+47,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[2]));
        bufp->chgBit(oldp+48,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[0]));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[1]));
        bufp->chgBit(oldp+50,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[2]));
        bufp->chgCData(oldp+51,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_valid),2);
        bufp->chgCData(oldp+52,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full),2);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0]),4);
        bufp->chgCData(oldp+54,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1]),4);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[0]),5);
        bufp->chgCData(oldp+56,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[1]),5);
        bufp->chgCData(oldp+57,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
                                                        >> 0x00000023U)))),5);
        bufp->chgBit(oldp+58,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
                                             >> 0x00000022U)))));
        bufp->chgIData(oldp+59,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
                                         >> 2U))),32);
        bufp->chgBit(oldp+60,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+61,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U]))));
        bufp->chgCData(oldp+62,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
                                                        >> 0x00000023U)))),5);
        bufp->chgBit(oldp+63,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
                                             >> 0x00000022U)))));
        bufp->chgIData(oldp+64,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
                                         >> 2U))),32);
        bufp->chgBit(oldp+65,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+66,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U]))));
        bufp->chgCData(oldp+67,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable),2);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_allocations),2);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid),3);
        bufp->chgCData(oldp+70,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[0]),4);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[1]),4);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[2]),4);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[0]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[1]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[2]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+76,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_en[0]));
        bufp->chgBit(oldp+77,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_en[1]));
        bufp->chgCData(oldp+78,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_areg[0]),5);
        bufp->chgCData(oldp+79,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_areg[1]),5);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_val[0]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_val[1]),32);
        bufp->chgBit(oldp+82,(vlSelfRef.tb_reorder_buffer__DOT__flush));
        bufp->chgIData(oldp+83,(vlSelfRef.tb_reorder_buffer__DOT__flush_pc),32);
        bufp->chgBit(oldp+84,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_en_o[0]));
        bufp->chgBit(oldp+85,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_en_o[1]));
        bufp->chgCData(oldp+86,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_areg_o[0]),5);
        bufp->chgCData(oldp+87,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_areg_o[1]),5);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_val_o[0]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_val_o[1]),32);
        bufp->chgCData(oldp+90,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] 
                                                        >> 0x00000023U)))),5);
        bufp->chgBit(oldp+91,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] 
                                             >> 0x00000022U)))));
        bufp->chgIData(oldp+92,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] 
                                         >> 2U))),32);
        bufp->chgBit(oldp+93,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+94,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U]))));
        bufp->chgCData(oldp+95,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] 
                                                        >> 0x00000023U)))),5);
        bufp->chgBit(oldp+96,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] 
                                             >> 0x00000022U)))));
        bufp->chgIData(oldp+97,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] 
                                         >> 2U))),32);
        bufp->chgBit(oldp+98,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+99,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U]))));
        bufp->chgCData(oldp+100,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+101,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+102,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+103,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+104,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U]))));
        bufp->chgCData(oldp+105,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+106,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+107,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+108,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+109,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U]))));
        bufp->chgCData(oldp+110,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+111,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+112,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+113,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+114,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U]))));
        bufp->chgCData(oldp+115,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+116,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+117,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+118,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+119,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U]))));
        bufp->chgCData(oldp+120,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+121,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+122,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+123,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+124,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U]))));
        bufp->chgCData(oldp+125,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+126,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+127,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+128,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+129,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U]))));
        bufp->chgCData(oldp+130,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+131,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+132,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+133,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+134,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U]))));
        bufp->chgCData(oldp+135,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+136,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+137,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+138,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+139,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U]))));
        bufp->chgCData(oldp+140,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+141,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+142,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+143,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+144,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U]))));
        bufp->chgCData(oldp+145,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+146,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+147,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+148,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+149,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U]))));
        bufp->chgCData(oldp+150,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+151,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+152,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+153,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+154,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U]))));
        bufp->chgCData(oldp+155,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+156,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+157,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+158,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+159,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U]))));
        bufp->chgCData(oldp+160,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+161,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+162,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+163,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+164,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U]))));
        bufp->chgCData(oldp+165,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+166,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+167,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+168,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+169,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U]))));
        bufp->chgBit(oldp+170,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[0U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+171,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[0U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+172,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[0U])),32);
        bufp->chgBit(oldp+173,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[1U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+174,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[1U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+175,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[1U])),32);
        bufp->chgBit(oldp+176,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[2U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+177,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[2U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+178,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[2U])),32);
        bufp->chgBit(oldp+179,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[3U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+180,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[3U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+181,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[3U])),32);
        bufp->chgBit(oldp+182,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[4U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+183,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[4U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+184,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[4U])),32);
        bufp->chgBit(oldp+185,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[5U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+186,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[5U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+187,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[5U])),32);
        bufp->chgBit(oldp+188,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[6U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+189,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[6U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+190,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[6U])),32);
        bufp->chgBit(oldp+191,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[7U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+192,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[7U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+193,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[7U])),32);
        bufp->chgBit(oldp+194,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[8U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+195,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[8U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+196,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[8U])),32);
        bufp->chgBit(oldp+197,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[9U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+198,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[9U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+199,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[9U])),32);
        bufp->chgBit(oldp+200,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[10U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+201,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[10U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+202,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[10U])),32);
        bufp->chgBit(oldp+203,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[11U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+204,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[11U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+205,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[11U])),32);
        bufp->chgBit(oldp+206,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[12U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+207,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[12U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+208,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[12U])),32);
        bufp->chgBit(oldp+209,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[13U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+210,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[13U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+211,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[13U])),32);
        bufp->chgBit(oldp+212,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[14U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+213,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[14U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+214,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[14U])),32);
        bufp->chgBit(oldp+215,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[15U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+216,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[15U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+217,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[15U])),32);
        bufp->chgCData(oldp+218,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr),5);
        bufp->chgCData(oldp+219,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__tail_ptr),5);
        bufp->chgCData(oldp+220,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid),2);
        bufp->chgCData(oldp+221,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ready),2);
        bufp->chgCData(oldp+222,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable),2);
        bufp->chgCData(oldp+223,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush),2);
        bufp->chgCData(oldp+224,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_exception),2);
        bufp->chgCData(oldp+225,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[0]),4);
        bufp->chgCData(oldp+226,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[1]),4);
        bufp->chgCData(oldp+227,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ptr[0]),5);
        bufp->chgCData(oldp+228,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ptr[1]),5);
        bufp->chgCData(oldp+229,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+230,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+231,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+232,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+233,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U]))));
        bufp->chgCData(oldp+234,((0x0000001fU & (IData)(
                                                        (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                                                         >> 0x00000023U)))),5);
        bufp->chgBit(oldp+235,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                                              >> 0x00000022U)))));
        bufp->chgIData(oldp+236,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                                          >> 2U))),32);
        bufp->chgBit(oldp+237,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+238,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U]))));
        bufp->chgBit(oldp+239,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+240,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+241,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U])),32);
        bufp->chgBit(oldp+242,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U] 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+243,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U] 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+244,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U])),32);
        bufp->chgCData(oldp+245,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_retirements),2);
        bufp->chgIData(oldp+246,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__restore_pc),32);
    }
    bufp->chgBit(oldp+247,(vlSelfRef.tb_reorder_buffer__DOT__clk));
    bufp->chgIData(oldp+248,(vlSelfRef.tb_reorder_buffer__DOT__cycle_count),32);
}

void Vtb_reorder_buffer___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_cleanup\n"); );
    // Body
    Vtb_reorder_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_reorder_buffer___024root*>(voidSelf);
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
