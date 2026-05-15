// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_dispatch__Syms.h"


void Vtb_dispatch___024root__trace_chg_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_dispatch___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_chg_0\n"); );
    // Init
    Vtb_dispatch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dispatch___024root*>(voidSelf);
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_dispatch___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_dispatch___024root__trace_chg_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->tb_dispatch__DOT__instr_queue_full[0]));
        bufp->chgBit(oldp+1,(vlSelf->tb_dispatch__DOT__instr_queue_full[1]));
        bufp->chgWData(oldp+2,(vlSelf->tb_dispatch__DOT__disp_pkt
                               [0U]),128);
        bufp->chgWData(oldp+6,(vlSelf->tb_dispatch__DOT__disp_pkt
                               [1U]),128);
        bufp->chgWData(oldp+10,(vlSelf->tb_dispatch__DOT__disp_pkt
                                [2U]),128);
        bufp->chgWData(oldp+14,(vlSelf->tb_dispatch__DOT__disp_pkt
                                [3U]),128);
        bufp->chgBit(oldp+18,(vlSelf->tb_dispatch__DOT__disp_valid[0]));
        bufp->chgBit(oldp+19,(vlSelf->tb_dispatch__DOT__disp_valid[1]));
        bufp->chgBit(oldp+20,(vlSelf->tb_dispatch__DOT__disp_valid[2]));
        bufp->chgBit(oldp+21,(vlSelf->tb_dispatch__DOT__disp_valid[3]));
        bufp->chgSData(oldp+22,(vlSelf->tb_dispatch__DOT__dependency_mask[0]),16);
        bufp->chgSData(oldp+23,(vlSelf->tb_dispatch__DOT__dependency_mask[1]),16);
        bufp->chgSData(oldp+24,(vlSelf->tb_dispatch__DOT__dependency_mask[2]),16);
        bufp->chgSData(oldp+25,(vlSelf->tb_dispatch__DOT__dependency_mask[3]),16);
        bufp->chgBit(oldp+26,(vlSelf->tb_dispatch__DOT__rob_fire_valid[0]));
        bufp->chgBit(oldp+27,(vlSelf->tb_dispatch__DOT__rob_fire_valid[1]));
        bufp->chgCData(oldp+28,(vlSelf->tb_dispatch__DOT__rob_dst_reg[0]),5);
        bufp->chgCData(oldp+29,(vlSelf->tb_dispatch__DOT__rob_dst_reg[1]),5);
        bufp->chgBit(oldp+30,(vlSelf->tb_dispatch__DOT__rob_wb_en[0]));
        bufp->chgBit(oldp+31,(vlSelf->tb_dispatch__DOT__rob_wb_en[1]));
        bufp->chgBit(oldp+32,(vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[0]));
        bufp->chgBit(oldp+33,(vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[1]));
        bufp->chgWData(oldp+34,(vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                [0U]),127);
        bufp->chgWData(oldp+38,(vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                [1U]),127);
        bufp->chgWData(oldp+42,(vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
                                [0U]),128);
        bufp->chgWData(oldp+46,(vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
                                [1U]),128);
        bufp->chgCData(oldp+50,(vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                                [0U]),2);
        bufp->chgCData(oldp+51,(vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                                [1U]),2);
        bufp->chgCData(oldp+52,(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free),4);
        bufp->chgCData(oldp+53,(vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0]),2);
        bufp->chgCData(oldp+54,(vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1]),2);
        bufp->chgBit(oldp+55,(vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0]));
        bufp->chgBit(oldp+56,(vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1]));
        bufp->chgCData(oldp+57,(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[0]),4);
        bufp->chgCData(oldp+58,(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[1]),4);
        bufp->chgBit(oldp+59,(vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[0]));
        bufp->chgBit(oldp+60,(vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[1]));
        bufp->chgCData(oldp+61,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[0]),6);
        bufp->chgCData(oldp+62,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[1]),6);
        bufp->chgCData(oldp+63,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[0]),4);
        bufp->chgCData(oldp+64,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[1]),4);
        bufp->chgCData(oldp+65,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[0]),6);
        bufp->chgCData(oldp+66,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[1]),6);
        bufp->chgCData(oldp+67,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[0]),6);
        bufp->chgCData(oldp+68,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[1]),6);
        bufp->chgBit(oldp+69,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[0]));
        bufp->chgBit(oldp+70,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[1]));
        bufp->chgBit(oldp+71,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[0]));
        bufp->chgBit(oldp+72,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[1]));
        bufp->chgSData(oldp+73,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[0]),16);
        bufp->chgSData(oldp+74,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[1]),16);
        bufp->chgIData(oldp+75,(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_steering__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+76,(vlSelf->tb_dispatch__DOT__dut__DOT__pipeline_register__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_dispatch__DOT__dut__DOT__pipeline_register__DOT__unnamedblk7__DOT__i),32);
        bufp->chgBit(oldp+78,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0]));
        bufp->chgBit(oldp+79,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[1]));
        bufp->chgCData(oldp+80,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0]),6);
        bufp->chgCData(oldp+81,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1]),6);
        bufp->chgCData(oldp+82,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0]),4);
        bufp->chgCData(oldp+83,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[1]),4);
        bufp->chgCData(oldp+84,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0]),6);
        bufp->chgCData(oldp+85,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1]),6);
        bufp->chgBit(oldp+86,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0]));
        bufp->chgBit(oldp+87,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1]));
        bufp->chgCData(oldp+88,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0]),6);
        bufp->chgCData(oldp+89,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1]),6);
        bufp->chgBit(oldp+90,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0]));
        bufp->chgBit(oldp+91,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1]));
        bufp->chgSData(oldp+92,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0]),16);
        bufp->chgSData(oldp+93,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1]),16);
        bufp->chgCData(oldp+94,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
                                [0U]),5);
        bufp->chgCData(oldp+95,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
                                [1U]),5);
        bufp->chgCData(oldp+96,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
                                [0U]),5);
        bufp->chgCData(oldp+97,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
                                [1U]),5);
        bufp->chgIData(oldp+98,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+99,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+100,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk5__DOT__i),32);
        bufp->chgBit(oldp+101,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0]));
        bufp->chgBit(oldp+102,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1]));
        bufp->chgCData(oldp+103,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr),5);
        bufp->chgCData(oldp+104,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr),5);
        bufp->chgWData(oldp+105,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [0U]),127);
        bufp->chgWData(oldp+109,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [1U]),127);
        bufp->chgWData(oldp+113,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [2U]),127);
        bufp->chgWData(oldp+117,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [3U]),127);
        bufp->chgWData(oldp+121,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [4U]),127);
        bufp->chgWData(oldp+125,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [5U]),127);
        bufp->chgWData(oldp+129,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [6U]),127);
        bufp->chgWData(oldp+133,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [7U]),127);
        bufp->chgWData(oldp+137,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [8U]),127);
        bufp->chgWData(oldp+141,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [9U]),127);
        bufp->chgWData(oldp+145,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [0xaU]),127);
        bufp->chgWData(oldp+149,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [0xbU]),127);
        bufp->chgWData(oldp+153,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [0xcU]),127);
        bufp->chgWData(oldp+157,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [0xdU]),127);
        bufp->chgWData(oldp+161,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [0xeU]),127);
        bufp->chgWData(oldp+165,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                                 [0xfU]),127);
        bufp->chgBit(oldp+169,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0]));
        bufp->chgBit(oldp+170,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1]));
        bufp->chgCData(oldp+171,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated),2);
        bufp->chgCData(oldp+172,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en),2);
        bufp->chgCData(oldp+173,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0]),5);
        bufp->chgCData(oldp+174,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1]),5);
        bufp->chgCData(oldp+175,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0]),4);
        bufp->chgCData(oldp+176,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1]),4);
        bufp->chgCData(oldp+177,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched),2);
        bufp->chgCData(oldp+178,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en),2);
        bufp->chgCData(oldp+179,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0]),4);
        bufp->chgCData(oldp+180,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1]),4);
        bufp->chgIData(oldp+181,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+182,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__unnamedblk5__DOT__i),32);
    }
    bufp->chgBit(oldp+183,(vlSelf->tb_dispatch__DOT__clk));
    bufp->chgBit(oldp+184,(vlSelf->tb_dispatch__DOT__rst));
    bufp->chgIData(oldp+185,(vlSelf->tb_dispatch__DOT__cycle_count),32);
}

void Vtb_dispatch___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_cleanup\n"); );
    // Init
    Vtb_dispatch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dispatch___024root*>(voidSelf);
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
