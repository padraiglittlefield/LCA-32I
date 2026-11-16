// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_reorder_buffer__Syms.h"


VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__0(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_reorder_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+250,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+252,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+252,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+253,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("disp_fire_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_dst_areg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_wb_en", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_rob_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_rob_full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+24+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_rob_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_val", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_br_mispred", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_exception", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ret_wr_en", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+76+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ret_wr_areg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+78+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ret_wr_val", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+82,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"flush_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+253,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"flush_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("disp_fire_valid_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_dst_areg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_wb_en_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_rob_idx_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_rob_full_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+34+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_valid_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_rob_idx_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+39+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_val_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+42+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_br_mispred_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+45+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ex_exception_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+48+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ret_wr_en_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+84+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("ret_wr_areg_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+86+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ret_wr_val_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+88+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+82,0,"flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"flush_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"RESULT_FINISH_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"ROB_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"IDX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rob_entries", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+90,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+91,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+95,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+96,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+100,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+101,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+105,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+106,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+110,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+111,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+115,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+116,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+120,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+121,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+123,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+125,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+126,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+130,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+131,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+135,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+136,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+140,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+141,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+145,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+146,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+150,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+151,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+155,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+156,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+160,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+161,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+163,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+165,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+166,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rob_status", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+170,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+173,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+176,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+179,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+182,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+185,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+188,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+191,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+194,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+197,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+200,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+203,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+206,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+209,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+212,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+215,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+218,0,"head_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+219,0,"tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"alloc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"alloc_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("alloc_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+53+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alloc_ptr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+55+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alloc_entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+57,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+58,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+62,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+63,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+67,0,"alloc_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"num_allocations",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+220,0,"retire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+221,0,"retire_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,0,"retire_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,0,"retire_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"retire_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("retire_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+225+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("retire_ptr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+227+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("retire_entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+229,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+230,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+234,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+235,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("retire_status", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+239,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+242,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+245,0,"num_retirements",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+69,0,"result_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("result_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+70+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("result_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+73+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+246,0,"restore_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+253,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+261,0,"[0]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+261,0,"[1]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+261,0,"[2]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+262,0,"[3]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+256,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_top(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_top\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_reorder_buffer___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_reorder_buffer___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_register(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_register\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_reorder_buffer___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_reorder_buffer___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_reorder_buffer___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_reorder_buffer___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_const_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_const_0\n"); );
    // Body
    Vtb_reorder_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_reorder_buffer___024root*>(voidSelf);
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_reorder_buffer___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_const_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_const_0_sub_0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+249,(0x00000014U),32);
    bufp->fullDouble(oldp+250,(5.00000000000000000e-01));
    bufp->fullIData(oldp+252,(0U),32);
    bufp->fullIData(oldp+253,(2U),32);
    bufp->fullBit(oldp+254,(0U));
    bufp->fullIData(oldp+255,(3U),32);
    bufp->fullIData(oldp+256,(0x00000010U),32);
    bufp->fullIData(oldp+257,(5U),32);
    bufp->fullIData(oldp+258,(4U),32);
    bufp->fullIData(oldp+259,(0x00000040U),32);
    bufp->fullIData(oldp+260,(0x00000020U),32);
    bufp->fullCData(oldp+261,(0U),2);
    bufp->fullCData(oldp+262,(1U),2);
    bufp->fullIData(oldp+263,(0x00000080U),32);
    bufp->fullIData(oldp+264,(6U),32);
    bufp->fullIData(oldp+265,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_full_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_full_0\n"); );
    // Body
    Vtb_reorder_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_reorder_buffer___024root*>(voidSelf);
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_reorder_buffer___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_full_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_full_0_sub_0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_reorder_buffer__DOT__rst));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[0]));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[1]));
    bufp->fullCData(oldp+3,(vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[0]),5);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[1]),5);
    bufp->fullBit(oldp+5,(vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[0]));
    bufp->fullBit(oldp+6,(vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[1]));
    bufp->fullBit(oldp+7,(vlSelfRef.tb_reorder_buffer__DOT__ex_valid[0]));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_reorder_buffer__DOT__ex_valid[1]));
    bufp->fullBit(oldp+9,(vlSelfRef.tb_reorder_buffer__DOT__ex_valid[2]));
    bufp->fullCData(oldp+10,(vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[0]),4);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[1]),4);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[2]),4);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_reorder_buffer__DOT__ex_val[0]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_reorder_buffer__DOT__ex_val[1]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_reorder_buffer__DOT__ex_val[2]),32);
    bufp->fullBit(oldp+16,(vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[0]));
    bufp->fullBit(oldp+17,(vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[1]));
    bufp->fullBit(oldp+18,(vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[2]));
    bufp->fullBit(oldp+19,(vlSelfRef.tb_reorder_buffer__DOT__ex_exception[0]));
    bufp->fullBit(oldp+20,(vlSelfRef.tb_reorder_buffer__DOT__ex_exception[1]));
    bufp->fullBit(oldp+21,(vlSelfRef.tb_reorder_buffer__DOT__ex_exception[2]));
    bufp->fullCData(oldp+22,(vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[0]),4);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[1]),4);
    bufp->fullBit(oldp+24,(vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[0]));
    bufp->fullBit(oldp+25,(vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[1]));
    bufp->fullBit(oldp+26,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_fire_valid_i[0]));
    bufp->fullBit(oldp+27,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_fire_valid_i[1]));
    bufp->fullCData(oldp+28,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_dst_areg_i[0]),5);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_dst_areg_i[1]),5);
    bufp->fullBit(oldp+30,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_wb_en_i[0]));
    bufp->fullBit(oldp+31,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_wb_en_i[1]));
    bufp->fullCData(oldp+32,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[0]),4);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[1]),4);
    bufp->fullBit(oldp+34,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[0]));
    bufp->fullBit(oldp+35,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[1]));
    bufp->fullBit(oldp+36,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[0]));
    bufp->fullBit(oldp+37,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[1]));
    bufp->fullBit(oldp+38,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[2]));
    bufp->fullCData(oldp+39,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[0]),4);
    bufp->fullCData(oldp+40,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[1]),4);
    bufp->fullCData(oldp+41,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[2]),4);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_val_i[0]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_val_i[1]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_val_i[2]),32);
    bufp->fullBit(oldp+45,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[0]));
    bufp->fullBit(oldp+46,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[1]));
    bufp->fullBit(oldp+47,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[2]));
    bufp->fullBit(oldp+48,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[0]));
    bufp->fullBit(oldp+49,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[1]));
    bufp->fullBit(oldp+50,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[2]));
    bufp->fullCData(oldp+51,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_valid),2);
    bufp->fullCData(oldp+52,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full),2);
    bufp->fullCData(oldp+53,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0]),4);
    bufp->fullCData(oldp+54,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1]),4);
    bufp->fullCData(oldp+55,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[0]),5);
    bufp->fullCData(oldp+56,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[1]),5);
    bufp->fullCData(oldp+57,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
                                                     >> 0x00000023U)))),5);
    bufp->fullBit(oldp+58,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
                                          >> 0x00000022U)))));
    bufp->fullIData(oldp+59,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
                                      >> 2U))),32);
    bufp->fullBit(oldp+60,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
                                          >> 1U)))));
    bufp->fullBit(oldp+61,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U]))));
    bufp->fullCData(oldp+62,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
                                                     >> 0x00000023U)))),5);
    bufp->fullBit(oldp+63,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
                                          >> 0x00000022U)))));
    bufp->fullIData(oldp+64,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
                                      >> 2U))),32);
    bufp->fullBit(oldp+65,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
                                          >> 1U)))));
    bufp->fullBit(oldp+66,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U]))));
    bufp->fullCData(oldp+67,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable),2);
    bufp->fullCData(oldp+68,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_allocations),2);
    bufp->fullCData(oldp+69,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid),3);
    bufp->fullCData(oldp+70,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[0]),4);
    bufp->fullCData(oldp+71,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[1]),4);
    bufp->fullCData(oldp+72,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[2]),4);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[0]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[1]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[2]),32);
    bufp->fullBit(oldp+76,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_en[0]));
    bufp->fullBit(oldp+77,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_en[1]));
    bufp->fullCData(oldp+78,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_areg[0]),5);
    bufp->fullCData(oldp+79,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_areg[1]),5);
    bufp->fullIData(oldp+80,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_val[0]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_reorder_buffer__DOT__ret_wr_val[1]),32);
    bufp->fullBit(oldp+82,(vlSelfRef.tb_reorder_buffer__DOT__flush));
    bufp->fullIData(oldp+83,(vlSelfRef.tb_reorder_buffer__DOT__flush_pc),32);
    bufp->fullBit(oldp+84,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_en_o[0]));
    bufp->fullBit(oldp+85,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_en_o[1]));
    bufp->fullCData(oldp+86,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_areg_o[0]),5);
    bufp->fullCData(oldp+87,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_areg_o[1]),5);
    bufp->fullIData(oldp+88,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_val_o[0]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_val_o[1]),32);
    bufp->fullCData(oldp+90,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] 
                                                     >> 0x00000023U)))),5);
    bufp->fullBit(oldp+91,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] 
                                          >> 0x00000022U)))));
    bufp->fullIData(oldp+92,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] 
                                      >> 2U))),32);
    bufp->fullBit(oldp+93,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] 
                                          >> 1U)))));
    bufp->fullBit(oldp+94,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U]))));
    bufp->fullCData(oldp+95,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] 
                                                     >> 0x00000023U)))),5);
    bufp->fullBit(oldp+96,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] 
                                          >> 0x00000022U)))));
    bufp->fullIData(oldp+97,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] 
                                      >> 2U))),32);
    bufp->fullBit(oldp+98,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] 
                                          >> 1U)))));
    bufp->fullBit(oldp+99,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U]))));
    bufp->fullCData(oldp+100,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+101,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+102,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+103,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+104,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U]))));
    bufp->fullCData(oldp+105,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+106,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+107,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+108,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+109,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U]))));
    bufp->fullCData(oldp+110,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+111,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+112,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+113,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+114,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U]))));
    bufp->fullCData(oldp+115,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+116,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+117,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+118,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+119,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U]))));
    bufp->fullCData(oldp+120,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+121,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+122,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+123,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+124,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U]))));
    bufp->fullCData(oldp+125,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+126,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+127,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+128,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+129,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U]))));
    bufp->fullCData(oldp+130,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+131,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+132,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+133,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+134,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U]))));
    bufp->fullCData(oldp+135,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+136,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+137,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+138,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+139,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U]))));
    bufp->fullCData(oldp+140,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+141,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+142,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+143,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+144,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U]))));
    bufp->fullCData(oldp+145,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+146,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+147,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+148,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+149,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U]))));
    bufp->fullCData(oldp+150,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+151,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+152,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+153,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+154,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U]))));
    bufp->fullCData(oldp+155,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+156,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+157,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+158,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+159,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U]))));
    bufp->fullCData(oldp+160,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+161,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+162,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+163,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+164,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U]))));
    bufp->fullCData(oldp+165,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+166,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+167,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+168,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+169,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U]))));
    bufp->fullBit(oldp+170,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[0U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+171,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[0U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+172,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[0U])),32);
    bufp->fullBit(oldp+173,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[1U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+174,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[1U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+175,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[1U])),32);
    bufp->fullBit(oldp+176,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[2U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+177,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[2U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+178,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[2U])),32);
    bufp->fullBit(oldp+179,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[3U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+180,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[3U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+181,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[3U])),32);
    bufp->fullBit(oldp+182,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[4U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+183,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[4U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+184,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[4U])),32);
    bufp->fullBit(oldp+185,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[5U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+186,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[5U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+187,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[5U])),32);
    bufp->fullBit(oldp+188,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[6U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+189,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[6U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+190,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[6U])),32);
    bufp->fullBit(oldp+191,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[7U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+192,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[7U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+193,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[7U])),32);
    bufp->fullBit(oldp+194,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[8U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+195,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[8U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+196,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[8U])),32);
    bufp->fullBit(oldp+197,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[9U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+198,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[9U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+199,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[9U])),32);
    bufp->fullBit(oldp+200,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[10U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+201,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[10U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+202,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[10U])),32);
    bufp->fullBit(oldp+203,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[11U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+204,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[11U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+205,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[11U])),32);
    bufp->fullBit(oldp+206,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[12U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+207,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[12U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+208,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[12U])),32);
    bufp->fullBit(oldp+209,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[13U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+210,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[13U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+211,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[13U])),32);
    bufp->fullBit(oldp+212,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[14U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+213,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[14U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+214,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[14U])),32);
    bufp->fullBit(oldp+215,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[15U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+216,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[15U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+217,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[15U])),32);
    bufp->fullCData(oldp+218,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr),5);
    bufp->fullCData(oldp+219,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__tail_ptr),5);
    bufp->fullCData(oldp+220,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid),2);
    bufp->fullCData(oldp+221,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ready),2);
    bufp->fullCData(oldp+222,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable),2);
    bufp->fullCData(oldp+223,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush),2);
    bufp->fullCData(oldp+224,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_exception),2);
    bufp->fullCData(oldp+225,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[0]),4);
    bufp->fullCData(oldp+226,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[1]),4);
    bufp->fullCData(oldp+227,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ptr[0]),5);
    bufp->fullCData(oldp+228,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ptr[1]),5);
    bufp->fullCData(oldp+229,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+230,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+231,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+232,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+233,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U]))));
    bufp->fullCData(oldp+234,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                                                      >> 0x00000023U)))),5);
    bufp->fullBit(oldp+235,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                                           >> 0x00000022U)))));
    bufp->fullIData(oldp+236,((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                                       >> 2U))),32);
    bufp->fullBit(oldp+237,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                                           >> 1U)))));
    bufp->fullBit(oldp+238,((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U]))));
    bufp->fullBit(oldp+239,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+240,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+241,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U])),32);
    bufp->fullBit(oldp+242,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U] 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+243,((1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U] 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+244,((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U])),32);
    bufp->fullCData(oldp+245,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_retirements),2);
    bufp->fullIData(oldp+246,(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__restore_pc),32);
    bufp->fullBit(oldp+247,(vlSelfRef.tb_reorder_buffer__DOT__clk));
    bufp->fullIData(oldp+248,(vlSelfRef.tb_reorder_buffer__DOT__cycle_count),32);
}
