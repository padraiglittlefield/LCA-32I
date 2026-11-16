// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_phys_reg_file__Syms.h"


VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_init_sub__TOP__0(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_init_sub__TOP__0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_phys_reg_file___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_phys_reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+68,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+63,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+65,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+66,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("rd_src1_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_src2_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_src1_val", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+24+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_src2_val", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_wr_en", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_wr_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_wr_val", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+15+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wr_en", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+18+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wr_areg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+20+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wr_val", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+63,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"flush_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rd_src1_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_src2_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_src1_val_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_src2_val_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+44+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_wr_en_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+48+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_wr_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+51+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_wr_val_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+54+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wr_en_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+57+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wr_areg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+59+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wr_val_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+61+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+71,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+76,0,"[0]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"[1]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"[2]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"[3]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+75,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_init_top(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_init_top\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_phys_reg_file___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_phys_reg_file___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_phys_reg_file___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_register(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_register\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_phys_reg_file___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_phys_reg_file___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_phys_reg_file___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_phys_reg_file___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_const_0_sub_0(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_const_0\n"); );
    // Body
    Vtb_phys_reg_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_phys_reg_file___024root*>(voidSelf);
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_phys_reg_file___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_const_0_sub_0(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_const_0_sub_0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+67,(0x00000014U),32);
    bufp->fullDouble(oldp+68,(5.00000000000000000e-01));
    bufp->fullBit(oldp+70,(0U));
    bufp->fullIData(oldp+71,(2U),32);
    bufp->fullIData(oldp+72,(0x00000040U),32);
    bufp->fullIData(oldp+73,(0x00000020U),32);
    bufp->fullIData(oldp+74,(4U),32);
    bufp->fullIData(oldp+75,(0x00000010U),32);
    bufp->fullCData(oldp+76,(0U),2);
    bufp->fullCData(oldp+77,(1U),2);
    bufp->fullIData(oldp+78,(0x00000080U),32);
    bufp->fullIData(oldp+79,(6U),32);
    bufp->fullIData(oldp+80,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_full_0_sub_0(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_full_0\n"); );
    // Body
    Vtb_phys_reg_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_phys_reg_file___024root*>(voidSelf);
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_phys_reg_file___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root__trace_full_0_sub_0(Vtb_phys_reg_file___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root__trace_full_0_sub_0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_phys_reg_file__DOT__rst));
    bufp->fullCData(oldp+1,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[0]),6);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[1]),6);
    bufp->fullCData(oldp+3,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[2]),6);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[3]),6);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[0]),6);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[1]),6);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[2]),6);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[3]),6);
    bufp->fullBit(oldp+9,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0]));
    bufp->fullBit(oldp+10,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1]));
    bufp->fullBit(oldp+11,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2]));
    bufp->fullCData(oldp+12,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0]),6);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1]),6);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2]),6);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2]),32);
    bufp->fullBit(oldp+18,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[0]));
    bufp->fullBit(oldp+19,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[1]));
    bufp->fullCData(oldp+20,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[0]),5);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[1]),5);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[0]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[1]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[0]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[1]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[2]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[3]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[0]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[1]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[2]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[3]),32);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[0]),6);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[1]),6);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[2]),6);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[3]),6);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[0]),6);
    bufp->fullCData(oldp+37,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[1]),6);
    bufp->fullCData(oldp+38,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[2]),6);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[3]),6);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[0]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[1]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[2]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[3]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[0]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[1]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[2]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[3]),32);
    bufp->fullBit(oldp+48,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[0]));
    bufp->fullBit(oldp+49,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[1]));
    bufp->fullBit(oldp+50,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[2]));
    bufp->fullCData(oldp+51,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[0]),6);
    bufp->fullCData(oldp+52,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[1]),6);
    bufp->fullCData(oldp+53,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[2]),6);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[0]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[1]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[2]),32);
    bufp->fullBit(oldp+57,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_en_i[0]));
    bufp->fullBit(oldp+58,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_en_i[1]));
    bufp->fullCData(oldp+59,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_areg_i[0]),5);
    bufp->fullCData(oldp+60,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_areg_i[1]),5);
    bufp->fullIData(oldp+61,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_val_i[0]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_val_i[1]),32);
    bufp->fullBit(oldp+63,(vlSelfRef.tb_phys_reg_file__DOT__clk));
    bufp->fullIData(oldp+64,(vlSelfRef.tb_phys_reg_file__DOT__cycle_count),32);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_phys_reg_file__DOT__pass_count),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_phys_reg_file__DOT__fail_count),32);
}
