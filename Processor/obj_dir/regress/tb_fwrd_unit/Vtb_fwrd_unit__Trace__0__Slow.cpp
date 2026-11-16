// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_fwrd_unit__Syms.h"


VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_init_sub__TOP__0(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_init_sub__TOP__0\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_fwrd_unit___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_fwrd_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+46,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+43,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+44,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+2,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+15,0,"src1_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"src2_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ex_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_dst_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_val", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"src1_preg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+2,0,"src2_preg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+15,0,"src1_hit_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"src1_val_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"src2_hit_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"src2_val_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ex_valid_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_dst_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_val_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+31,0,"src1_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("src1_fwrd_val", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+36,0,"src2_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("src2_fwrd_val", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+37+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+48,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+53,0,"[0]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"[1]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"[2]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"[3]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+52,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_init_top(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_init_top\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fwrd_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_fwrd_unit___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_fwrd_unit___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_register(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_register\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_fwrd_unit___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_fwrd_unit___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_fwrd_unit___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_fwrd_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_const_0_sub_0(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_const_0\n"); );
    // Body
    Vtb_fwrd_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fwrd_unit___024root*>(voidSelf);
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_fwrd_unit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_const_0_sub_0(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_const_0_sub_0\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+45,(0x00000014U),32);
    bufp->fullDouble(oldp+46,(5.00000000000000000e-01));
    bufp->fullIData(oldp+48,(2U),32);
    bufp->fullIData(oldp+49,(0x00000040U),32);
    bufp->fullIData(oldp+50,(0x00000020U),32);
    bufp->fullIData(oldp+51,(4U),32);
    bufp->fullIData(oldp+52,(0x00000010U),32);
    bufp->fullCData(oldp+53,(0U),2);
    bufp->fullCData(oldp+54,(1U),2);
    bufp->fullIData(oldp+55,(0x00000080U),32);
    bufp->fullIData(oldp+56,(6U),32);
    bufp->fullIData(oldp+57,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_full_0_sub_0(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_full_0\n"); );
    // Body
    Vtb_fwrd_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fwrd_unit___024root*>(voidSelf);
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_fwrd_unit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_full_0_sub_0(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root__trace_full_0_sub_0\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_fwrd_unit__DOT__rst));
    bufp->fullCData(oldp+1,(vlSelfRef.tb_fwrd_unit__DOT__src1_preg),6);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_fwrd_unit__DOT__src2_preg),6);
    bufp->fullBit(oldp+3,(vlSelfRef.tb_fwrd_unit__DOT__ex_valid[0]));
    bufp->fullBit(oldp+4,(vlSelfRef.tb_fwrd_unit__DOT__ex_valid[1]));
    bufp->fullBit(oldp+5,(vlSelfRef.tb_fwrd_unit__DOT__ex_valid[2]));
    bufp->fullBit(oldp+6,(vlSelfRef.tb_fwrd_unit__DOT__ex_valid[3]));
    bufp->fullCData(oldp+7,(vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[0]),6);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[1]),6);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[2]),6);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[3]),6);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_fwrd_unit__DOT__ex_val[0]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_fwrd_unit__DOT__ex_val[1]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_fwrd_unit__DOT__ex_val[2]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_fwrd_unit__DOT__ex_val[3]),32);
    bufp->fullBit(oldp+15,((0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit))));
    bufp->fullIData(oldp+16,(vlSelfRef.tb_fwrd_unit__DOT__src1_val),32);
    bufp->fullBit(oldp+17,((0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit))));
    bufp->fullIData(oldp+18,(vlSelfRef.tb_fwrd_unit__DOT__src2_val),32);
    bufp->fullBit(oldp+19,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[0]));
    bufp->fullBit(oldp+20,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[1]));
    bufp->fullBit(oldp+21,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[2]));
    bufp->fullBit(oldp+22,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[3]));
    bufp->fullCData(oldp+23,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[0]),6);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[1]),6);
    bufp->fullCData(oldp+25,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[2]),6);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[3]),6);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[0]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[1]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[2]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[3]),32);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit),4);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[0]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[1]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[2]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[3]),32);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit),4);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[0]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[1]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[2]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[3]),32);
    bufp->fullBit(oldp+41,(vlSelfRef.tb_fwrd_unit__DOT__clk));
    bufp->fullIData(oldp+42,(vlSelfRef.tb_fwrd_unit__DOT__cycle_count),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_fwrd_unit__DOT__pass_count),32);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_fwrd_unit__DOT__fail_count),32);
}
