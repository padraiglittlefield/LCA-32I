// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_fwrd_unit__Syms.h"


void Vtb_fwrd_unit___024root__trace_chg_0_sub_0(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_fwrd_unit___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_chg_0\n"); );
    // Body
    Vtb_fwrd_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fwrd_unit___024root*>(voidSelf);
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_fwrd_unit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_fwrd_unit___024root__trace_chg_0_sub_0(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_chg_0_sub_0\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_fwrd_unit__DOT__rst));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_fwrd_unit__DOT__src1_preg),6);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_fwrd_unit__DOT__src2_preg),6);
        bufp->chgBit(oldp+3,(vlSelfRef.tb_fwrd_unit__DOT__ex_valid[0]));
        bufp->chgBit(oldp+4,(vlSelfRef.tb_fwrd_unit__DOT__ex_valid[1]));
        bufp->chgBit(oldp+5,(vlSelfRef.tb_fwrd_unit__DOT__ex_valid[2]));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_fwrd_unit__DOT__ex_valid[3]));
        bufp->chgCData(oldp+7,(vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[0]),6);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[1]),6);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[2]),6);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[3]),6);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_fwrd_unit__DOT__ex_val[0]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_fwrd_unit__DOT__ex_val[1]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_fwrd_unit__DOT__ex_val[2]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_fwrd_unit__DOT__ex_val[3]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgBit(oldp+15,((0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit))));
        bufp->chgIData(oldp+16,(vlSelfRef.tb_fwrd_unit__DOT__src1_val),32);
        bufp->chgBit(oldp+17,((0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit))));
        bufp->chgIData(oldp+18,(vlSelfRef.tb_fwrd_unit__DOT__src2_val),32);
        bufp->chgBit(oldp+19,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[0]));
        bufp->chgBit(oldp+20,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[1]));
        bufp->chgBit(oldp+21,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[2]));
        bufp->chgBit(oldp+22,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[3]));
        bufp->chgCData(oldp+23,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[0]),6);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[1]),6);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[2]),6);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[3]),6);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[0]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[1]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[2]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[3]),32);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit),4);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[0]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[1]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[2]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[3]),32);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit),4);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[0]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[1]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[2]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[3]),32);
    }
    bufp->chgBit(oldp+41,(vlSelfRef.tb_fwrd_unit__DOT__clk));
    bufp->chgIData(oldp+42,(vlSelfRef.tb_fwrd_unit__DOT__cycle_count),32);
    bufp->chgIData(oldp+43,(vlSelfRef.tb_fwrd_unit__DOT__pass_count),32);
    bufp->chgIData(oldp+44,(vlSelfRef.tb_fwrd_unit__DOT__fail_count),32);
}

void Vtb_fwrd_unit___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_cleanup\n"); );
    // Body
    Vtb_fwrd_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fwrd_unit___024root*>(voidSelf);
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
