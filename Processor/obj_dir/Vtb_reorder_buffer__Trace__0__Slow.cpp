// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_reorder_buffer__Syms.h"


VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__0__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__1__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__flush_if__0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_reorder_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+124,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+125,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+127,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+127,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+128,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("disp_if[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("disp_if[1]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exec_if[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exec_if[1]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exec_if[2]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("arch_reg_file_if[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("arch_reg_file_if[1]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__1__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("flush_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__flush_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+128,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"flush_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("disp_if[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("disp_if[1]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exec_if[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exec_if[1]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exec_if[2]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("arch_reg_file_if[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("arch_reg_file_if[1]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__1__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("flush_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__flush_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+130,0,"RESULT_FINISH_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"ROB_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"IDX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rob_entries", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+13,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+15,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+17,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+19,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+21,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+23,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+25,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+27,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+29,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+31,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+33,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+35,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+37,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+39,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+41,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+43,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->popPrefix();
    tracep->pushPrefix("rob_status", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+45,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+47,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+49,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+51,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+53,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+55,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+57,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+59,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+61,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+63,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+65,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+67,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+69,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+71,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+73,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+75,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->declBus(c+77,0,"head_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"alloc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"alloc_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("alloc_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alloc_ptr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+82+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alloc_entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+2,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+4,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->popPrefix();
    tracep->declBus(c+84,0,"alloc_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"num_allocations",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"retire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+87,0,"retire_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+88,0,"retire_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+89,0,"retire_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"retire_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("retire_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+91+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("retire_ptr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("retire_entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+95,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+97,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->popPrefix();
    tracep->pushPrefix("retire_status", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+99,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+101,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->declBus(c+103,0,"num_retirements",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"result_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("result_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("result_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+104,0,"restore_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+134,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+134,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__flush_if__0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__flush_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+109,0,"flush_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__1__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+111,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__0__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__arch_reg_file_if__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+114,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+135,0,"fire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+118,0,"rob_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+138,0,"fire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"dest_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+120,0,"rob_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+141,0,"br_mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+144,0,"ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"ex_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+146,0,"br_mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+149,0,"ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"ex_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET____0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+151,0,"br_mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"ex_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+128,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+158,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+158,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+158,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+131,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_init_top(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_init_top\n"); );
    // Body
    Vtb_reorder_buffer___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_reorder_buffer___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_reorder_buffer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_register(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_reorder_buffer___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_reorder_buffer___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_reorder_buffer___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_reorder_buffer___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_const_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_const_0\n"); );
    // Init
    Vtb_reorder_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_reorder_buffer___024root*>(voidSelf);
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_reorder_buffer___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_const_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+124,(0x14U),32);
    bufp->fullDouble(oldp+125,(5.00000000000000000e-01));
    bufp->fullIData(oldp+127,(0U),32);
    bufp->fullIData(oldp+128,(2U),32);
    bufp->fullBit(oldp+129,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__flush_en));
    bufp->fullIData(oldp+130,(3U),32);
    bufp->fullIData(oldp+131,(0x10U),32);
    bufp->fullIData(oldp+132,(5U),32);
    bufp->fullIData(oldp+133,(4U),32);
    bufp->fullIData(oldp+134,(2U),32);
    bufp->fullBit(oldp+135,(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__.fire_valid));
    bufp->fullCData(oldp+136,(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__.dest_reg),5);
    bufp->fullBit(oldp+137,(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__.wb_en));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__.fire_valid));
    bufp->fullCData(oldp+139,(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__.dest_reg),5);
    bufp->fullBit(oldp+140,(vlSymsp->TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__.wb_en));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__.__PVT__br_mispred));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__.__PVT__exception));
    bufp->fullCData(oldp+143,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__.rob_entry_idx),4);
    bufp->fullBit(oldp+144,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__.ex_valid));
    bufp->fullIData(oldp+145,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__.ex_val),32);
    bufp->fullBit(oldp+146,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__.__PVT__br_mispred));
    bufp->fullBit(oldp+147,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__.__PVT__exception));
    bufp->fullCData(oldp+148,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__.rob_entry_idx),4);
    bufp->fullBit(oldp+149,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__.ex_valid));
    bufp->fullIData(oldp+150,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__.ex_val),32);
    bufp->fullBit(oldp+151,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__.__PVT__br_mispred));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__.__PVT__exception));
    bufp->fullCData(oldp+153,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__.rob_entry_idx),4);
    bufp->fullBit(oldp+154,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__.ex_valid));
    bufp->fullIData(oldp+155,(vlSymsp->TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__.ex_val),32);
    bufp->fullIData(oldp+156,(0x40U),32);
    bufp->fullIData(oldp+157,(0x20U),32);
    bufp->fullCData(oldp+158,(0U),2);
    bufp->fullCData(oldp+159,(1U),2);
    bufp->fullIData(oldp+160,(0x80U),32);
    bufp->fullIData(oldp+161,(6U),32);
    bufp->fullIData(oldp+162,(0x16U),32);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_full_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_full_0\n"); );
    // Init
    Vtb_reorder_buffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_reorder_buffer___024root*>(voidSelf);
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_reorder_buffer___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root__trace_full_0_sub_0(Vtb_reorder_buffer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_valid),2);
    bufp->fullQData(oldp+2,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
                            [0U]),40);
    bufp->fullQData(oldp+4,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry
                            [1U]),40);
    bufp->fullCData(oldp+6,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid),3);
    bufp->fullCData(oldp+7,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[0]),4);
    bufp->fullCData(oldp+8,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[1]),4);
    bufp->fullCData(oldp+9,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[2]),4);
    bufp->fullIData(oldp+10,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[2]),32);
    bufp->fullQData(oldp+13,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [0U]),40);
    bufp->fullQData(oldp+15,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [1U]),40);
    bufp->fullQData(oldp+17,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [2U]),40);
    bufp->fullQData(oldp+19,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [3U]),40);
    bufp->fullQData(oldp+21,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [4U]),40);
    bufp->fullQData(oldp+23,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [5U]),40);
    bufp->fullQData(oldp+25,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [6U]),40);
    bufp->fullQData(oldp+27,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [7U]),40);
    bufp->fullQData(oldp+29,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [8U]),40);
    bufp->fullQData(oldp+31,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [9U]),40);
    bufp->fullQData(oldp+33,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [0xaU]),40);
    bufp->fullQData(oldp+35,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [0xbU]),40);
    bufp->fullQData(oldp+37,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [0xcU]),40);
    bufp->fullQData(oldp+39,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [0xdU]),40);
    bufp->fullQData(oldp+41,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [0xeU]),40);
    bufp->fullQData(oldp+43,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries
                             [0xfU]),40);
    bufp->fullQData(oldp+45,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [0U]),34);
    bufp->fullQData(oldp+47,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [1U]),34);
    bufp->fullQData(oldp+49,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [2U]),34);
    bufp->fullQData(oldp+51,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [3U]),34);
    bufp->fullQData(oldp+53,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [4U]),34);
    bufp->fullQData(oldp+55,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [5U]),34);
    bufp->fullQData(oldp+57,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [6U]),34);
    bufp->fullQData(oldp+59,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [7U]),34);
    bufp->fullQData(oldp+61,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [8U]),34);
    bufp->fullQData(oldp+63,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [9U]),34);
    bufp->fullQData(oldp+65,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [0xaU]),34);
    bufp->fullQData(oldp+67,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [0xbU]),34);
    bufp->fullQData(oldp+69,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [0xcU]),34);
    bufp->fullQData(oldp+71,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [0xdU]),34);
    bufp->fullQData(oldp+73,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [0xeU]),34);
    bufp->fullQData(oldp+75,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status
                             [0xfU]),34);
    bufp->fullCData(oldp+77,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr),5);
    bufp->fullCData(oldp+78,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__tail_ptr),5);
    bufp->fullCData(oldp+79,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full),2);
    bufp->fullCData(oldp+80,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0]),4);
    bufp->fullCData(oldp+81,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1]),4);
    bufp->fullCData(oldp+82,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[0]),5);
    bufp->fullCData(oldp+83,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[1]),5);
    bufp->fullCData(oldp+84,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable),2);
    bufp->fullCData(oldp+85,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations),2);
    bufp->fullCData(oldp+86,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid),2);
    bufp->fullCData(oldp+87,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready),2);
    bufp->fullCData(oldp+88,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable),2);
    bufp->fullCData(oldp+89,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush),2);
    bufp->fullCData(oldp+90,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_exception),2);
    bufp->fullCData(oldp+91,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx[0]),4);
    bufp->fullCData(oldp+92,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx[1]),4);
    bufp->fullCData(oldp+93,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr[0]),5);
    bufp->fullCData(oldp+94,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr[1]),5);
    bufp->fullQData(oldp+95,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                             [0U]),40);
    bufp->fullQData(oldp+97,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                             [1U]),40);
    bufp->fullQData(oldp+99,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                             [0U]),34);
    bufp->fullQData(oldp+101,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                              [1U]),34);
    bufp->fullCData(oldp+103,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements),2);
    bufp->fullIData(oldp+104,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__restore_pc),32);
    bufp->fullIData(oldp+105,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+106,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+107,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+108,(vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk6__DOT__i),32);
    bufp->fullBit(oldp+109,(vlSymsp->TOP__tb_reorder_buffer__DOT__flush_if.flush_out));
    bufp->fullIData(oldp+110,(vlSymsp->TOP__tb_reorder_buffer__DOT__flush_if.pc),32);
    bufp->fullCData(oldp+111,((0x1fU & (IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                                [1U] 
                                                >> 0x23U)))),5);
    bufp->fullIData(oldp+112,((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                                      [1U])),32);
    bufp->fullBit(oldp+113,((IData)((((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
                                      >> 1U) & (vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                                [1U] 
                                                >> 0x22U)))));
    bufp->fullCData(oldp+114,((0x1fU & (IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                                [0U] 
                                                >> 0x23U)))),5);
    bufp->fullIData(oldp+115,((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status
                                      [0U])),32);
    bufp->fullBit(oldp+116,((1U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
                                   & (IData)((vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry
                                              [0U] 
                                              >> 0x22U))))));
    bufp->fullCData(oldp+117,(((2U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full))
                                ? 0U : vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                               [1U])),4);
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full) 
                                   >> 1U))));
    bufp->fullCData(oldp+119,(((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full))
                                ? 0U : vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx
                               [0U])),4);
    bufp->fullBit(oldp+120,((1U & (IData)(vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full))));
    bufp->fullBit(oldp+121,(vlSelf->tb_reorder_buffer__DOT__clk));
    bufp->fullBit(oldp+122,(vlSelf->tb_reorder_buffer__DOT__rst));
    bufp->fullIData(oldp+123,(vlSelf->tb_reorder_buffer__DOT__cycle_count),32);
}
