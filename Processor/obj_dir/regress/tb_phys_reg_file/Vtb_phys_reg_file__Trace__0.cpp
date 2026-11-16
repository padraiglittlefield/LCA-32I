// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_phys_reg_file__Syms.h"


void Vtb_phys_reg_file___024root__trace_chg_0_sub_0(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_phys_reg_file___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_chg_0\n"); );
    // Body
    Vtb_phys_reg_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_phys_reg_file___024root*>(voidSelf);
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_phys_reg_file___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_phys_reg_file___024root__trace_chg_0_sub_0(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_chg_0_sub_0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_phys_reg_file__DOT__rst));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[0]),6);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[1]),6);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[2]),6);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[3]),6);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[0]),6);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[1]),6);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[2]),6);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[3]),6);
        bufp->chgBit(oldp+9,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0]));
        bufp->chgBit(oldp+10,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1]));
        bufp->chgBit(oldp+11,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2]));
        bufp->chgCData(oldp+12,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0]),6);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1]),6);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2]),6);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2]),32);
        bufp->chgBit(oldp+18,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[0]));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[1]));
        bufp->chgCData(oldp+20,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[0]),5);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[1]),5);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[0]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[1]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgIData(oldp+24,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[0]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[1]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[2]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[3]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[0]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[1]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[2]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[3]),32);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[0]),6);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[1]),6);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[2]),6);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[3]),6);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[0]),6);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[1]),6);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[2]),6);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[3]),6);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[0]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[1]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[2]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[3]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[0]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[1]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[2]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[3]),32);
        bufp->chgBit(oldp+48,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[0]));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[1]));
        bufp->chgBit(oldp+50,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[2]));
        bufp->chgCData(oldp+51,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[0]),6);
        bufp->chgCData(oldp+52,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[1]),6);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[2]),6);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[0]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[1]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[2]),32);
        bufp->chgBit(oldp+57,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_en_i[0]));
        bufp->chgBit(oldp+58,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_en_i[1]));
        bufp->chgCData(oldp+59,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_areg_i[0]),5);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_areg_i[1]),5);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_val_i[0]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_val_i[1]),32);
    }
    bufp->chgBit(oldp+63,(vlSelfRef.tb_phys_reg_file__DOT__clk));
    bufp->chgIData(oldp+64,(vlSelfRef.tb_phys_reg_file__DOT__cycle_count),32);
    bufp->chgIData(oldp+65,(vlSelfRef.tb_phys_reg_file__DOT__pass_count),32);
    bufp->chgIData(oldp+66,(vlSelfRef.tb_phys_reg_file__DOT__fail_count),32);
}

void Vtb_phys_reg_file___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_cleanup\n"); );
    // Body
    Vtb_phys_reg_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_phys_reg_file___024root*>(voidSelf);
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
