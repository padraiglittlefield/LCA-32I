// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_cache_controller__Syms.h"


void Vtb_cache_controller___024root__trace_chg_0_sub_0(Vtb_cache_controller___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_cache_controller___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_chg_0\n"); );
    // Body
    Vtb_cache_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cache_controller___024root*>(voidSelf);
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_cache_controller___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_cache_controller___024root__trace_chg_0_sub_0(Vtb_cache_controller___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_chg_0_sub_0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_cache_controller__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_cache_controller__DOT__flush));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i));
        bufp->chgIData(oldp+4,(vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i),32);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_cache_controller__DOT__lsu_req_rob_idx_i),4);
        bufp->chgBit(oldp+7,(vlSelfRef.tb_cache_controller__DOT__mem_resp_vld_i));
        bufp->chgWData(oldp+8,(vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i),128);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg) {
            __Vtemp_2[0U] = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                 >> 4U))][0U];
            __Vtemp_2[1U] = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                 >> 4U))][1U];
            __Vtemp_2[2U] = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                 >> 4U))][2U];
            __Vtemp_2[3U] = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                 >> 4U))][3U];
        } else {
            __Vtemp_2[0U] = 0U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
        }
        bufp->chgWData(oldp+12,(__Vtemp_2),128);
        bufp->chgIData(oldp+16,((0x003fffffU & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg)
                                                  ? vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                                                 [(0x0000003fU 
                                                   & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                                      >> 4U))]
                                                  : 0U) 
                                                >> 2U))),22);
        bufp->chgBit(oldp+17,((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg)
                                       ? vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                                      [(0x0000003fU 
                                        & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                           >> 4U))]
                                       : 0U) >> 1U))));
        bufp->chgBit(oldp+18,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg)
                                ? (1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                                   [(0x0000003fU & 
                                     (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                      >> 4U))]) : 0U)));
        bufp->chgWData(oldp+19,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg),128);
        bufp->chgIData(oldp+23,((0x003fffffU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
                                                >> 2U))),22);
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
                                     >> 1U))));
        bufp->chgBit(oldp+25,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg)));
        bufp->chgBit(oldp+26,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_vld_reg));
        bufp->chgBit(oldp+27,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg));
        bufp->chgIData(oldp+28,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_st_data_reg),32);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg),4);
        bufp->chgIData(oldp+31,((vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                                 >> 0x0000000aU)),22);
        bufp->chgBit(oldp+32,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit));
        bufp->chgBit(oldp+33,(((~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg)) 
                               & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0))));
        bufp->chgBit(oldp+34,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0) 
                               & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg))));
        bufp->chgBit(oldp+35,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg));
        bufp->chgIData(oldp+37,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg),32);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg),4);
        bufp->chgBit(oldp+40,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st));
        bufp->chgCData(oldp+42,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg),3);
        bufp->chgIData(oldp+43,((vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                 >> 0x0000000aU)),22);
        bufp->chgCData(oldp+44,((0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                                >> 4U))),6);
        bufp->chgCData(oldp+45,((3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                       >> 2U))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+46,(vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o));
        bufp->chgIData(oldp+47,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg),32);
        bufp->chgBit(oldp+48,(vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o));
        bufp->chgWData(oldp+49,(vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block),128);
        bufp->chgBit(oldp+53,(vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o));
        bufp->chgIData(oldp+54,(vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o),32);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o),4);
        bufp->chgBit(oldp+56,(vlSelfRef.tb_cache_controller__DOT__stall_controller_o));
        bufp->chgCData(oldp+57,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state),2);
        bufp->chgWData(oldp+58,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire),128);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire),32);
        bufp->chgBit(oldp+63,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_en));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair));
        bufp->chgBit(oldp+65,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store));
        bufp->chgBit(oldp+66,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__store_wr_en));
        bufp->chgWData(oldp+67,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block),128);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block_offset),2);
        bufp->chgBit(oldp+72,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ld_mshr_full));
        bufp->chgBit(oldp+73,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__st_mshr_full));
        bufp->chgBit(oldp+74,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr_repair_req));
        bufp->chgIData(oldp+75,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld)
                                  ? ((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                                      [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][2U] 
                                      << 0x0000001cU) 
                                     | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                                        [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][1U] 
                                        >> 4U)) : ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st)
                                                    ? vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st
                                                   [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][1U]
                                                    : 0U))),32);
        bufp->chgIData(oldp+76,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st)
                                  ? vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st
                                 [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][0U]
                                  : 0U)),32);
        bufp->chgCData(oldp+77,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld)
                                  ? (0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                                     [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][0U])
                                  : 0U)),4);
        bufp->chgBit(oldp+78,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st));
        bufp->chgBit(oldp+79,((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state))));
        bufp->chgIData(oldp+80,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_data_reg),32);
        bufp->chgCData(oldp+81,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_rob_idx_reg),4);
        bufp->chgWData(oldp+82,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg),128);
        bufp->chgWData(oldp+86,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data),128);
        bufp->chgCData(oldp+90,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset),2);
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] 
                                     >> 4U))));
        bufp->chgIData(oldp+92,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] 
                                  << 0x0000001cU) | 
                                 (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][1U] 
                                  >> 4U))),32);
        bufp->chgIData(oldp+93,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][1U] 
                                  << 0x0000001cU) | 
                                 (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][0U] 
                                  >> 4U))),32);
        bufp->chgCData(oldp+94,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][0U])),4);
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] 
                                     >> 4U))));
        bufp->chgIData(oldp+96,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] 
                                  << 0x0000001cU) | 
                                 (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][1U] 
                                  >> 4U))),32);
        bufp->chgIData(oldp+97,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][1U] 
                                  << 0x0000001cU) | 
                                 (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][0U] 
                                  >> 4U))),32);
        bufp->chgCData(oldp+98,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][0U])),4);
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] 
                                     >> 4U))));
        bufp->chgIData(oldp+100,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][1U] 
                                     >> 4U))),32);
        bufp->chgIData(oldp+101,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][1U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][0U] 
                                     >> 4U))),32);
        bufp->chgCData(oldp+102,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][0U])),4);
        bufp->chgBit(oldp+103,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] 
                                      >> 4U))));
        bufp->chgIData(oldp+104,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][1U] 
                                     >> 4U))),32);
        bufp->chgIData(oldp+105,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][1U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][0U] 
                                     >> 4U))),32);
        bufp->chgCData(oldp+106,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][0U])),4);
        bufp->chgBit(oldp+107,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U] 
                                      >> 4U))));
        bufp->chgIData(oldp+108,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][1U] 
                                     >> 4U))),32);
        bufp->chgIData(oldp+109,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][1U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][0U] 
                                     >> 4U))),32);
        bufp->chgCData(oldp+110,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][0U])),4);
        bufp->chgBit(oldp+111,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] 
                                      >> 4U))));
        bufp->chgIData(oldp+112,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][1U] 
                                     >> 4U))),32);
        bufp->chgIData(oldp+113,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][1U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][0U] 
                                     >> 4U))),32);
        bufp->chgCData(oldp+114,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][0U])),4);
        bufp->chgBit(oldp+115,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] 
                                      >> 4U))));
        bufp->chgIData(oldp+116,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][1U] 
                                     >> 4U))),32);
        bufp->chgIData(oldp+117,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][1U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][0U] 
                                     >> 4U))),32);
        bufp->chgCData(oldp+118,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][0U])),4);
        bufp->chgBit(oldp+119,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] 
                                      >> 4U))));
        bufp->chgIData(oldp+120,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][1U] 
                                     >> 4U))),32);
        bufp->chgIData(oldp+121,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][1U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][0U] 
                                     >> 4U))),32);
        bufp->chgCData(oldp+122,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][0U])),4);
        bufp->chgBit(oldp+123,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][2U])));
        bufp->chgIData(oldp+124,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][1U]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][0U]),32);
        bufp->chgBit(oldp+126,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][2U])));
        bufp->chgIData(oldp+127,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][1U]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][0U]),32);
        bufp->chgBit(oldp+129,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][2U])));
        bufp->chgIData(oldp+130,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][1U]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][0U]),32);
        bufp->chgBit(oldp+132,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][2U])));
        bufp->chgIData(oldp+133,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][1U]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][0U]),32);
        bufp->chgBit(oldp+135,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][2U])));
        bufp->chgIData(oldp+136,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][1U]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][0U]),32);
        bufp->chgBit(oldp+138,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][2U])));
        bufp->chgIData(oldp+139,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][1U]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][0U]),32);
        bufp->chgBit(oldp+141,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][2U])));
        bufp->chgIData(oldp+142,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][1U]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][0U]),32);
        bufp->chgBit(oldp+144,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][2U])));
        bufp->chgIData(oldp+145,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][1U]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][0U]),32);
        bufp->chgCData(oldp+147,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free),8);
        bufp->chgCData(oldp+148,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx),3);
        bufp->chgBit(oldp+149,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found));
        bufp->chgCData(oldp+150,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free),8);
        bufp->chgCData(oldp+151,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx),3);
        bufp->chgBit(oldp+152,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found));
        bufp->chgBit(oldp+153,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld));
        bufp->chgCData(oldp+154,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr),3);
        bufp->chgCData(oldp+155,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req),8);
        bufp->chgCData(oldp+156,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req),8);
        bufp->chgWData(oldp+157,(vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block),128);
        bufp->chgIData(oldp+161,((vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                  >> 0x0000000aU)),22);
        bufp->chgCData(oldp+162,((0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                                 >> 4U))),6);
        bufp->chgCData(oldp+163,((3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                        >> 2U))),2);
    }
    bufp->chgBit(oldp+164,(vlSelfRef.tb_cache_controller__DOT__clk));
    bufp->chgIData(oldp+165,(vlSelfRef.tb_cache_controller__DOT__cycle_count),32);
    bufp->chgCData(oldp+166,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state_next),2);
}

void Vtb_cache_controller___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_cleanup\n"); );
    // Body
    Vtb_cache_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cache_controller___024root*>(voidSelf);
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
