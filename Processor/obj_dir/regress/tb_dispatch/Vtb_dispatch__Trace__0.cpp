// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_dispatch__Syms.h"


void Vtb_dispatch___024root__trace_chg_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_dispatch___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_chg_0\n"); );
    // Body
    Vtb_dispatch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dispatch___024root*>(voidSelf);
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_dispatch___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_dispatch___024root__trace_chg_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_chg_0_sub_0\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_vld_i[0]));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_vld_i[1]));
        bufp->chgIData(oldp+2,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][3U] 
                                 << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                           >> 0x0000001fU))),32);
        bufp->chgCData(oldp+3,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                      >> 0x0000001dU))),2);
        bufp->chgCData(oldp+4,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                               >> 0x00000018U))),5);
        bufp->chgCData(oldp+5,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                               >> 0x00000012U))),6);
        bufp->chgBit(oldp+6,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                    >> 0x00000011U))));
        bufp->chgCData(oldp+7,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                               >> 0x0000000bU))),6);
        bufp->chgBit(oldp+8,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                    >> 0x0000000aU))));
        bufp->chgCData(oldp+9,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                               >> 4U))),6);
        bufp->chgIData(oldp+10,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                  << 0x0000001cU) | 
                                 (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][1U] 
                                  >> 4U))),32);
        bufp->chgBit(oldp+11,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][1U] 
                                     >> 3U))));
        bufp->chgIData(oldp+12,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][1U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][0U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+15,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][0U])));
        bufp->chgIData(oldp+16,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][3U] 
                                  << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                            >> 0x0000001fU))),32);
        bufp->chgCData(oldp+17,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                       >> 0x0000001dU))),2);
        bufp->chgCData(oldp+18,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                                >> 0x00000018U))),5);
        bufp->chgCData(oldp+19,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                                >> 0x00000012U))),6);
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                     >> 0x00000011U))));
        bufp->chgCData(oldp+21,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                                >> 0x0000000bU))),6);
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                     >> 0x0000000aU))));
        bufp->chgCData(oldp+23,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                                >> 4U))),6);
        bufp->chgIData(oldp+24,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                  << 0x0000001cU) | 
                                 (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][1U] 
                                  >> 4U))),32);
        bufp->chgBit(oldp+25,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][1U] 
                                     >> 3U))));
        bufp->chgIData(oldp+26,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][1U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][0U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+29,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][0U])));
        bufp->chgCData(oldp+30,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[0]),2);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[1]),2);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[2]),2);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[3]),2);
        bufp->chgBit(oldp+34,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[0]));
        bufp->chgBit(oldp+35,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[1]));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[2]));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[3]));
        bufp->chgCData(oldp+38,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_entry_idx_i[0]),4);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_entry_idx_i[1]),4);
        bufp->chgBit(oldp+40,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_full_i[0]));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_full_i[1]));
        bufp->chgBit(oldp+42,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_vld_i[0]));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_vld_i[1]));
        bufp->chgIData(oldp+44,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][3U] 
                                  << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                            >> 0x0000001fU))),32);
        bufp->chgCData(oldp+45,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                       >> 0x0000001dU))),2);
        bufp->chgCData(oldp+46,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                                >> 0x00000018U))),5);
        bufp->chgCData(oldp+47,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                                >> 0x00000012U))),6);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                     >> 0x00000011U))));
        bufp->chgCData(oldp+49,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                                >> 0x0000000bU))),6);
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                     >> 0x0000000aU))));
        bufp->chgCData(oldp+51,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                                >> 4U))),6);
        bufp->chgIData(oldp+52,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                  << 0x0000001cU) | 
                                 (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][1U] 
                                  >> 4U))),32);
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][1U] 
                                     >> 3U))));
        bufp->chgIData(oldp+54,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][1U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][0U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+55,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+56,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+57,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][0U])));
        bufp->chgIData(oldp+58,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][3U] 
                                  << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                            >> 0x0000001fU))),32);
        bufp->chgCData(oldp+59,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                       >> 0x0000001dU))),2);
        bufp->chgCData(oldp+60,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                                >> 0x00000018U))),5);
        bufp->chgCData(oldp+61,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                                >> 0x00000012U))),6);
        bufp->chgBit(oldp+62,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                     >> 0x00000011U))));
        bufp->chgCData(oldp+63,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                                >> 0x0000000bU))),6);
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                     >> 0x0000000aU))));
        bufp->chgCData(oldp+65,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                                >> 4U))),6);
        bufp->chgIData(oldp+66,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                  << 0x0000001cU) | 
                                 (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][1U] 
                                  >> 4U))),32);
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][1U] 
                                     >> 3U))));
        bufp->chgIData(oldp+68,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][1U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][0U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+71,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][0U])));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+72,(vlSelfRef.tb_dispatch__DOT__instr_queue_full[0]));
        bufp->chgBit(oldp+73,(vlSelfRef.tb_dispatch__DOT__instr_queue_full[1]));
        bufp->chgBit(oldp+74,(vlSelfRef.tb_dispatch__DOT__disp_vld));
        bufp->chgIData(oldp+75,(vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][3U]),32);
        bufp->chgCData(oldp+76,((vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                 >> 0x0000001bU)),5);
        bufp->chgCData(oldp+77,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                                >> 0x00000015U))),6);
        bufp->chgCData(oldp+78,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                                >> 0x0000000fU))),6);
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                     >> 0x0000000eU))));
        bufp->chgCData(oldp+80,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                                >> 8U))),6);
        bufp->chgBit(oldp+81,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                     >> 7U))));
        bufp->chgCData(oldp+82,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+83,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][1U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][1U] 
                                     >> 2U))));
        bufp->chgIData(oldp+85,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+87,((1U & vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][0U])));
        bufp->chgIData(oldp+88,(vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][3U]),32);
        bufp->chgCData(oldp+89,((vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                 >> 0x0000001bU)),5);
        bufp->chgCData(oldp+90,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                                >> 0x00000015U))),6);
        bufp->chgCData(oldp+91,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                                >> 0x0000000fU))),6);
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                     >> 0x0000000eU))));
        bufp->chgCData(oldp+93,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                                >> 8U))),6);
        bufp->chgBit(oldp+94,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                     >> 7U))));
        bufp->chgCData(oldp+95,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+96,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][1U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][1U] 
                                     >> 2U))));
        bufp->chgIData(oldp+98,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+100,((1U & vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][0U])));
        bufp->chgIData(oldp+101,(vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][3U]),32);
        bufp->chgCData(oldp+102,((vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+103,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                                 >> 0x00000015U))),6);
        bufp->chgCData(oldp+104,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                                 >> 0x0000000fU))),6);
        bufp->chgBit(oldp+105,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+106,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                                 >> 8U))),6);
        bufp->chgBit(oldp+107,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                      >> 7U))));
        bufp->chgCData(oldp+108,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                                 >> 3U))),4);
        bufp->chgIData(oldp+109,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][1U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+110,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][1U] 
                                      >> 2U))));
        bufp->chgIData(oldp+111,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][1U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][0U] 
                                     >> 2U))),32);
        bufp->chgBit(oldp+112,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+113,((1U & vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][0U])));
        bufp->chgIData(oldp+114,(vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][3U]),32);
        bufp->chgCData(oldp+115,((vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+116,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                                 >> 0x00000015U))),6);
        bufp->chgCData(oldp+117,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                                 >> 0x0000000fU))),6);
        bufp->chgBit(oldp+118,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+119,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                                 >> 8U))),6);
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                      >> 7U))));
        bufp->chgCData(oldp+121,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                                 >> 3U))),4);
        bufp->chgIData(oldp+122,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][1U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][1U] 
                                      >> 2U))));
        bufp->chgIData(oldp+124,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][1U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][0U] 
                                     >> 2U))),32);
        bufp->chgBit(oldp+125,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+126,((1U & vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][0U])));
        bufp->chgBit(oldp+127,(vlSelfRef.tb_dispatch__DOT__disp_valid[0]));
        bufp->chgBit(oldp+128,(vlSelfRef.tb_dispatch__DOT__disp_valid[1]));
        bufp->chgBit(oldp+129,(vlSelfRef.tb_dispatch__DOT__disp_valid[2]));
        bufp->chgBit(oldp+130,(vlSelfRef.tb_dispatch__DOT__disp_valid[3]));
        bufp->chgSData(oldp+131,(vlSelfRef.tb_dispatch__DOT__dependency_mask[0]),16);
        bufp->chgSData(oldp+132,(vlSelfRef.tb_dispatch__DOT__dependency_mask[1]),16);
        bufp->chgSData(oldp+133,(vlSelfRef.tb_dispatch__DOT__dependency_mask[2]),16);
        bufp->chgSData(oldp+134,(vlSelfRef.tb_dispatch__DOT__dependency_mask[3]),16);
        bufp->chgBit(oldp+135,(vlSelfRef.tb_dispatch__DOT__rob_fire_valid[0]));
        bufp->chgBit(oldp+136,(vlSelfRef.tb_dispatch__DOT__rob_fire_valid[1]));
        bufp->chgCData(oldp+137,(vlSelfRef.tb_dispatch__DOT__rob_dst_reg[0]),5);
        bufp->chgCData(oldp+138,(vlSelfRef.tb_dispatch__DOT__rob_dst_reg[1]),5);
        bufp->chgBit(oldp+139,(vlSelfRef.tb_dispatch__DOT__rob_wb_en[0]));
        bufp->chgBit(oldp+140,(vlSelfRef.tb_dispatch__DOT__rob_wb_en[1]));
        bufp->chgBit(oldp+141,(vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_queue_full_o[0]));
        bufp->chgBit(oldp+142,(vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_queue_full_o[1]));
        bufp->chgIData(oldp+143,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][3U]),32);
        bufp->chgCData(oldp+144,((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+145,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                                 >> 0x00000015U))),6);
        bufp->chgCData(oldp+146,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                                 >> 0x0000000fU))),6);
        bufp->chgBit(oldp+147,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+148,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                                 >> 8U))),6);
        bufp->chgBit(oldp+149,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                      >> 7U))));
        bufp->chgCData(oldp+150,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                                 >> 3U))),4);
        bufp->chgIData(oldp+151,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][1U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+152,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][1U] 
                                      >> 2U))));
        bufp->chgIData(oldp+153,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][1U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][0U] 
                                     >> 2U))),32);
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+155,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][0U])));
        bufp->chgIData(oldp+156,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][3U]),32);
        bufp->chgCData(oldp+157,((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+158,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                                 >> 0x00000015U))),6);
        bufp->chgCData(oldp+159,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                                 >> 0x0000000fU))),6);
        bufp->chgBit(oldp+160,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+161,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                                 >> 8U))),6);
        bufp->chgBit(oldp+162,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                      >> 7U))));
        bufp->chgCData(oldp+163,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                                 >> 3U))),4);
        bufp->chgIData(oldp+164,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][1U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+165,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][1U] 
                                      >> 2U))));
        bufp->chgIData(oldp+166,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][1U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][0U] 
                                     >> 2U))),32);
        bufp->chgBit(oldp+167,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+168,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][0U])));
        bufp->chgIData(oldp+169,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][3U]),32);
        bufp->chgCData(oldp+170,((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+171,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                                 >> 0x00000015U))),6);
        bufp->chgCData(oldp+172,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                                 >> 0x0000000fU))),6);
        bufp->chgBit(oldp+173,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+174,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                                 >> 8U))),6);
        bufp->chgBit(oldp+175,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                      >> 7U))));
        bufp->chgCData(oldp+176,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                                 >> 3U))),4);
        bufp->chgIData(oldp+177,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][1U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+178,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][1U] 
                                      >> 2U))));
        bufp->chgIData(oldp+179,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][1U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][0U] 
                                     >> 2U))),32);
        bufp->chgBit(oldp+180,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+181,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][0U])));
        bufp->chgIData(oldp+182,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][3U]),32);
        bufp->chgCData(oldp+183,((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+184,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                                 >> 0x00000015U))),6);
        bufp->chgCData(oldp+185,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                                 >> 0x0000000fU))),6);
        bufp->chgBit(oldp+186,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+187,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                                 >> 8U))),6);
        bufp->chgBit(oldp+188,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                      >> 7U))));
        bufp->chgCData(oldp+189,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                                 >> 3U))),4);
        bufp->chgIData(oldp+190,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][1U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+191,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][1U] 
                                      >> 2U))));
        bufp->chgIData(oldp+192,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][1U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][0U] 
                                     >> 2U))),32);
        bufp->chgBit(oldp+193,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+194,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][0U])));
        bufp->chgBit(oldp+195,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[0]));
        bufp->chgBit(oldp+196,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[1]));
        bufp->chgBit(oldp+197,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[2]));
        bufp->chgBit(oldp+198,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[3]));
        bufp->chgSData(oldp+199,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[0]),16);
        bufp->chgSData(oldp+200,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[1]),16);
        bufp->chgSData(oldp+201,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[2]),16);
        bufp->chgSData(oldp+202,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[3]),16);
        bufp->chgBit(oldp+203,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_fire_valid_o[0]));
        bufp->chgBit(oldp+204,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_fire_valid_o[1]));
        bufp->chgCData(oldp+205,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_dst_reg_o[0]),5);
        bufp->chgCData(oldp+206,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_dst_reg_o[1]),5);
        bufp->chgBit(oldp+207,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_wb_en_o[0]));
        bufp->chgBit(oldp+208,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_wb_en_o[1]));
        bufp->chgCData(oldp+209,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[0]),4);
        bufp->chgCData(oldp+210,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[1]),4);
        bufp->chgCData(oldp+211,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[0]),4);
        bufp->chgCData(oldp+212,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[1]),4);
        bufp->chgBit(oldp+213,(vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0]));
        bufp->chgBit(oldp+214,(vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1]));
        bufp->chgIData(oldp+215,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+216,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+217,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+218,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+219,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+220,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+221,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+222,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+223,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+224,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+225,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+226,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+227,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+228,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U])));
        bufp->chgIData(oldp+229,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+230,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+231,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+232,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+233,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+234,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+235,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+236,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+237,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+238,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+239,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+240,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+241,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+242,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U])));
        bufp->chgIData(oldp+243,(vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][3U]),32);
        bufp->chgCData(oldp+244,((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+245,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                                 >> 0x00000015U))),6);
        bufp->chgCData(oldp+246,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                                 >> 0x0000000fU))),6);
        bufp->chgBit(oldp+247,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+248,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                                 >> 8U))),6);
        bufp->chgBit(oldp+249,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                      >> 7U))));
        bufp->chgCData(oldp+250,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                                 >> 3U))),4);
        bufp->chgIData(oldp+251,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+252,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
                                      >> 2U))));
        bufp->chgIData(oldp+253,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
                                     >> 2U))),32);
        bufp->chgBit(oldp+254,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+255,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U])));
        bufp->chgIData(oldp+256,(vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][3U]),32);
        bufp->chgCData(oldp+257,((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+258,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                                 >> 0x00000015U))),6);
        bufp->chgCData(oldp+259,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                                 >> 0x0000000fU))),6);
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+261,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                                 >> 8U))),6);
        bufp->chgBit(oldp+262,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                      >> 7U))));
        bufp->chgCData(oldp+263,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                                 >> 3U))),4);
        bufp->chgIData(oldp+264,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+265,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
                                      >> 2U))));
        bufp->chgIData(oldp+266,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
                                     >> 2U))),32);
        bufp->chgBit(oldp+267,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+268,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U])));
        bufp->chgCData(oldp+269,(vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U]),2);
        bufp->chgCData(oldp+270,(vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U]),2);
        bufp->chgCData(oldp+271,(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free),4);
        bufp->chgCData(oldp+272,(vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0]),2);
        bufp->chgCData(oldp+273,(vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1]),2);
        bufp->chgBit(oldp+274,(vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0]));
        bufp->chgBit(oldp+275,(vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1]));
        bufp->chgCData(oldp+276,(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0]),4);
        bufp->chgCData(oldp+277,(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1]),4);
        bufp->chgBit(oldp+278,(vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0]));
        bufp->chgBit(oldp+279,(vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1]));
        bufp->chgCData(oldp+280,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[0]),6);
        bufp->chgCData(oldp+281,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[1]),6);
        bufp->chgCData(oldp+282,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[0]),4);
        bufp->chgCData(oldp+283,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[1]),4);
        bufp->chgCData(oldp+284,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[0]),6);
        bufp->chgCData(oldp+285,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[1]),6);
        bufp->chgCData(oldp+286,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[0]),6);
        bufp->chgCData(oldp+287,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[1]),6);
        bufp->chgBit(oldp+288,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[0]));
        bufp->chgBit(oldp+289,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[1]));
        bufp->chgBit(oldp+290,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[0]));
        bufp->chgBit(oldp+291,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[1]));
        bufp->chgSData(oldp+292,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[0]),16);
        bufp->chgSData(oldp+293,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[1]),16);
        bufp->chgBit(oldp+294,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i[0]));
        bufp->chgBit(oldp+295,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i[1]));
        bufp->chgCData(oldp+296,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i[0]),6);
        bufp->chgCData(oldp+297,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i[1]),6);
        bufp->chgCData(oldp+298,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i[0]),4);
        bufp->chgCData(oldp+299,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i[1]),4);
        bufp->chgCData(oldp+300,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i[0]),6);
        bufp->chgCData(oldp+301,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i[1]),6);
        bufp->chgBit(oldp+302,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i[0]));
        bufp->chgBit(oldp+303,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i[1]));
        bufp->chgCData(oldp+304,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i[0]),6);
        bufp->chgCData(oldp+305,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i[1]),6);
        bufp->chgBit(oldp+306,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i[0]));
        bufp->chgBit(oldp+307,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i[1]));
        bufp->chgSData(oldp+308,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o[0]),16);
        bufp->chgSData(oldp+309,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o[1]),16);
        bufp->chgBit(oldp+310,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+311,((0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U])),4);
        bufp->chgBit(oldp+312,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] 
                                      >> 4U))));
        bufp->chgCData(oldp+313,((0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U])),4);
        bufp->chgBit(oldp+314,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+315,((0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U])),4);
        bufp->chgBit(oldp+316,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] 
                                      >> 4U))));
        bufp->chgCData(oldp+317,((0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U])),4);
        bufp->chgBit(oldp+318,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full[0]));
        bufp->chgBit(oldp+319,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full[1]));
        bufp->chgBit(oldp+320,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i[0]));
        bufp->chgBit(oldp+321,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i[1]));
        bufp->chgBit(oldp+322,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o[0]));
        bufp->chgBit(oldp+323,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o[1]));
        bufp->chgIData(oldp+324,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+325,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+326,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+327,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+328,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+329,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+330,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+331,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+332,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+333,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+334,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+335,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+336,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+337,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U])));
        bufp->chgIData(oldp+338,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+339,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+340,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+341,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+342,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+343,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+344,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+345,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+346,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+347,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+348,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+349,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+350,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+351,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U])));
        bufp->chgCData(oldp+352,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr),5);
        bufp->chgCData(oldp+353,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr),5);
        bufp->chgIData(oldp+354,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+355,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+356,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+357,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+358,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+359,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+360,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+361,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+362,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+363,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+364,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+365,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+366,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+367,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U])));
        bufp->chgIData(oldp+368,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+369,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+370,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+371,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+372,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+373,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+374,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+375,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+376,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+377,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+378,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+379,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+380,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+381,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U])));
        bufp->chgIData(oldp+382,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+383,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+384,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+385,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+386,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+387,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+388,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+389,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+390,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+391,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+392,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+393,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+394,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+395,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U])));
        bufp->chgIData(oldp+396,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+397,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+398,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+399,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+400,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+401,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+402,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+403,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+404,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+405,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+406,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+407,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+408,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+409,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U])));
        bufp->chgIData(oldp+410,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+411,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+412,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+413,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+414,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+415,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+416,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+417,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+418,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+419,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+420,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+421,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+422,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+423,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U])));
        bufp->chgIData(oldp+424,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+425,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+426,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+427,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+428,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+429,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+430,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+431,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+432,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+433,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+434,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+435,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+436,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+437,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U])));
        bufp->chgIData(oldp+438,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+439,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+440,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+441,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+442,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+443,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+444,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+445,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+446,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+447,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+448,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+449,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+450,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+451,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U])));
        bufp->chgIData(oldp+452,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+453,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+454,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+455,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+456,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+457,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+458,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+459,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+460,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+461,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+462,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+463,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+464,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+465,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U])));
        bufp->chgIData(oldp+466,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+467,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+468,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+469,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+470,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+471,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+472,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+473,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+474,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+475,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+476,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+478,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+479,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U])));
        bufp->chgIData(oldp+480,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+481,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+482,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+483,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+484,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+485,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+486,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+487,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+488,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+489,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+490,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+491,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+492,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+493,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U])));
        bufp->chgIData(oldp+494,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+495,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+496,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+497,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+498,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+499,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+500,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+501,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+502,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+503,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+504,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+505,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+506,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+507,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][0U])));
        bufp->chgIData(oldp+508,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+509,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+510,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+511,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+512,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+513,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+514,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+515,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+516,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+517,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+518,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+519,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+520,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+521,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][0U])));
        bufp->chgIData(oldp+522,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+523,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+524,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+525,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+526,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+527,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+528,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+529,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+530,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+531,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+532,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+533,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+534,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+535,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][0U])));
        bufp->chgIData(oldp+536,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+537,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+538,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+539,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+540,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+541,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+542,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+543,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+544,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+545,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+546,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+547,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+548,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+549,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][0U])));
        bufp->chgIData(oldp+550,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+551,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+552,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+553,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+554,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+555,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+556,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+557,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+558,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+559,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+560,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+561,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+562,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+563,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][0U])));
        bufp->chgIData(oldp+564,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][3U] 
                                   << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                             >> 0x0000001fU))),32);
        bufp->chgCData(oldp+565,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                        >> 0x0000001dU))),2);
        bufp->chgCData(oldp+566,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                                 >> 0x00000018U))),5);
        bufp->chgCData(oldp+567,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+568,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+569,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                                 >> 0x0000000bU))),6);
        bufp->chgBit(oldp+570,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+571,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                                 >> 4U))),6);
        bufp->chgIData(oldp+572,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][1U] 
                                     >> 4U))),32);
        bufp->chgBit(oldp+573,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][1U] 
                                      >> 3U))));
        bufp->chgIData(oldp+574,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][1U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][0U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+575,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+576,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+577,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][0U])));
        bufp->chgBit(oldp+578,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0]));
        bufp->chgBit(oldp+579,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1]));
        bufp->chgCData(oldp+580,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated),2);
        bufp->chgCData(oldp+581,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en),2);
        bufp->chgCData(oldp+582,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0]),5);
        bufp->chgCData(oldp+583,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1]),5);
        bufp->chgCData(oldp+584,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0]),4);
        bufp->chgCData(oldp+585,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1]),4);
        bufp->chgCData(oldp+586,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched),2);
        bufp->chgCData(oldp+587,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en),2);
        bufp->chgCData(oldp+588,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0]),4);
        bufp->chgCData(oldp+589,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1]),4);
    }
    bufp->chgBit(oldp+590,(vlSelfRef.tb_dispatch__DOT__clk));
    bufp->chgBit(oldp+591,(vlSelfRef.tb_dispatch__DOT__rst));
    bufp->chgIData(oldp+592,(vlSelfRef.tb_dispatch__DOT__cycle_count),32);
    bufp->chgBit(oldp+593,(vlSelfRef.tb_dispatch__DOT__disp_is_store));
    bufp->chgCData(oldp+594,(vlSelfRef.tb_dispatch__DOT__disp_sdq_marker),5);
}

void Vtb_dispatch___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_cleanup\n"); );
    // Body
    Vtb_dispatch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dispatch___024root*>(voidSelf);
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
