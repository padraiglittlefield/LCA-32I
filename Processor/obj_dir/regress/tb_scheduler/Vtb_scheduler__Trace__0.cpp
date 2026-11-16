// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_scheduler__Syms.h"


void Vtb_scheduler___024root__trace_chg_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_scheduler___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_chg_0\n"); );
    // Body
    Vtb_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_scheduler___024root*>(voidSelf);
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_scheduler___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_scheduler___024root__trace_chg_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_chg_0_sub_0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_scheduler__DOT__pass_count),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_scheduler__DOT__fail_count),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i),32);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__dst_val),6);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__src1_val),6);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__src2_val),6);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__pc_val),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+11,(vlSelfRef.tb_scheduler__DOT__rst));
        bufp->chgSData(oldp+12,(vlSelfRef.tb_scheduler__DOT__global_ready_mask),16);
        bufp->chgBit(oldp+13,(vlSelfRef.tb_scheduler__DOT__disp_valid));
        bufp->chgIData(oldp+14,(vlSelfRef.tb_scheduler__DOT__disp_pkt[3U]),32);
        bufp->chgCData(oldp+15,((vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                 >> 0x0000001bU)),5);
        bufp->chgCData(oldp+16,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                                >> 0x00000015U))),6);
        bufp->chgCData(oldp+17,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                                >> 0x0000000fU))),6);
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                     >> 0x0000000eU))));
        bufp->chgCData(oldp+19,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                                >> 8U))),6);
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                     >> 7U))));
        bufp->chgCData(oldp+21,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+22,(((vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+23,((1U & (vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] 
                                     >> 2U))));
        bufp->chgIData(oldp+24,(((vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+25,((1U & (vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+26,((1U & vlSelfRef.tb_scheduler__DOT__disp_pkt[0U])));
        bufp->chgSData(oldp+27,(vlSelfRef.tb_scheduler__DOT__dependency_mask),16);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+29,(vlSelfRef.tb_scheduler__DOT__rs_entry_idx),2);
        bufp->chgBit(oldp+30,(vlSelfRef.tb_scheduler__DOT__rs_full));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_scheduler__DOT__rr_fire_valid));
        bufp->chgIData(oldp+32,(vlSelfRef.tb_scheduler__DOT__rr_pkt[3U]),32);
        bufp->chgCData(oldp+33,((vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                 >> 0x0000001bU)),5);
        bufp->chgCData(oldp+34,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                                >> 0x00000015U))),6);
        bufp->chgCData(oldp+35,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                                >> 0x0000000fU))),6);
        bufp->chgBit(oldp+36,((1U & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                     >> 0x0000000eU))));
        bufp->chgCData(oldp+37,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                                >> 8U))),6);
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                     >> 7U))));
        bufp->chgCData(oldp+39,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+40,(((vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_scheduler__DOT__rr_pkt[1U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.tb_scheduler__DOT__rr_pkt[1U] 
                                     >> 2U))));
        bufp->chgIData(oldp+42,(((vlSelfRef.tb_scheduler__DOT__rr_pkt[1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_scheduler__DOT__rr_pkt[0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+43,((1U & (vlSelfRef.tb_scheduler__DOT__rr_pkt[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+44,((1U & vlSelfRef.tb_scheduler__DOT__rr_pkt[0U])));
        bufp->chgCData(oldp+45,(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant),2);
        bufp->chgBit(oldp+46,(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid));
        bufp->chgCData(oldp+47,(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out),4);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in),4);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][3U]),32);
        bufp->chgCData(oldp+50,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                 >> 0x0000001bU)),5);
        bufp->chgCData(oldp+51,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                                >> 0x00000015U))),6);
        bufp->chgCData(oldp+52,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                                >> 0x0000000fU))),6);
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                     >> 0x0000000eU))));
        bufp->chgCData(oldp+54,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                                >> 8U))),6);
        bufp->chgBit(oldp+55,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                     >> 7U))));
        bufp->chgCData(oldp+56,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+57,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][1U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+58,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][1U] 
                                     >> 2U))));
        bufp->chgIData(oldp+59,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+61,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][0U])));
        bufp->chgIData(oldp+62,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][3U]),32);
        bufp->chgCData(oldp+63,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                 >> 0x0000001bU)),5);
        bufp->chgCData(oldp+64,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                                >> 0x00000015U))),6);
        bufp->chgCData(oldp+65,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                                >> 0x0000000fU))),6);
        bufp->chgBit(oldp+66,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                     >> 0x0000000eU))));
        bufp->chgCData(oldp+67,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                                >> 8U))),6);
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                     >> 7U))));
        bufp->chgCData(oldp+69,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+70,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][1U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+71,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][1U] 
                                     >> 2U))));
        bufp->chgIData(oldp+72,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+74,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][0U])));
        bufp->chgIData(oldp+75,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][3U]),32);
        bufp->chgCData(oldp+76,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                 >> 0x0000001bU)),5);
        bufp->chgCData(oldp+77,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                                >> 0x00000015U))),6);
        bufp->chgCData(oldp+78,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                                >> 0x0000000fU))),6);
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                     >> 0x0000000eU))));
        bufp->chgCData(oldp+80,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                                >> 8U))),6);
        bufp->chgBit(oldp+81,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                     >> 7U))));
        bufp->chgCData(oldp+82,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+83,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][1U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][1U] 
                                     >> 2U))));
        bufp->chgIData(oldp+85,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+87,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][0U])));
        bufp->chgIData(oldp+88,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][3U]),32);
        bufp->chgCData(oldp+89,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                 >> 0x0000001bU)),5);
        bufp->chgCData(oldp+90,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                                >> 0x00000015U))),6);
        bufp->chgCData(oldp+91,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                                >> 0x0000000fU))),6);
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                     >> 0x0000000eU))));
        bufp->chgCData(oldp+93,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                                >> 8U))),6);
        bufp->chgBit(oldp+94,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                     >> 7U))));
        bufp->chgCData(oldp+95,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+96,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][1U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][1U] 
                                     >> 2U))));
        bufp->chgIData(oldp+98,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+100,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][0U])));
        bufp->chgIData(oldp+101,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                 [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][3U]),32);
        bufp->chgCData(oldp+102,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                  [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+103,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                                 [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                                 >> 0x00000015U))),6);
        bufp->chgCData(oldp+104,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                                 [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                                 >> 0x0000000fU))),6);
        bufp->chgBit(oldp+105,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                      [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+106,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                                 [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                                 >> 8U))),6);
        bufp->chgBit(oldp+107,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                      [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                      >> 7U))));
        bufp->chgCData(oldp+108,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                                 [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                                 >> 3U))),4);
        bufp->chgIData(oldp+109,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                   [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                     [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][1U] 
                                     >> 3U))),32);
        bufp->chgBit(oldp+110,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                      [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][1U] 
                                      >> 2U))));
        bufp->chgIData(oldp+111,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                   [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][1U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                     [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][0U] 
                                     >> 2U))),32);
        bufp->chgBit(oldp+112,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                      [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+113,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][0U])));
        bufp->chgCData(oldp+114,((0x0fU >> (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority))),4);
        bufp->chgCData(oldp+115,(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority),2);
        bufp->chgCData(oldp+116,(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req),4);
        bufp->chgCData(oldp+117,(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req),4);
        bufp->chgBit(oldp+118,(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag));
        bufp->chgCData(oldp+119,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid),4);
        bufp->chgCData(oldp+120,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted),4);
        bufp->chgCData(oldp+121,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry),2);
        bufp->chgBit(oldp+122,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full));
        bufp->chgSData(oldp+123,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0]),16);
        bufp->chgSData(oldp+124,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1]),16);
        bufp->chgSData(oldp+125,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2]),16);
        bufp->chgSData(oldp+126,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3]),16);
        bufp->chgBit(oldp+127,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted));
        bufp->chgBit(oldp+128,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag));
    }
    bufp->chgBit(oldp+129,(vlSelfRef.tb_scheduler__DOT__clk));
    bufp->chgIData(oldp+130,(vlSelfRef.tb_scheduler__DOT__cycle_count),32);
    bufp->chgCData(oldp+131,(vlSelfRef.tb_scheduler__DOT__test_select_grant__Vstatic__granted_entry),2);
}

void Vtb_scheduler___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_cleanup\n"); );
    // Body
    Vtb_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_scheduler___024root*>(voidSelf);
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
