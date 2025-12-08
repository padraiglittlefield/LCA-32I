// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_scheduler__Syms.h"


VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__disp_if__0(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__exec_if__0(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__reg_read_if__0(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__0(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_scheduler___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_scheduler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+252,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+248,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+254,0,"local_ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+255,0,"global_ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("disp_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__disp_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exec_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__exec_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("reg_read_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__reg_read_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+259,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+259,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+248,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"local_ready_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+255,0,"global_ready_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("disp_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__disp_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exec_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__exec_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("reg_read_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__reg_read_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+1,0,"reqs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"grant_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"retire_rs_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+261,0,"retire_rs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"rs_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+262,0,"all_fu_ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("payload_ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+5,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+8,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+11,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+14,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+17,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+20,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+23,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+26,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+29,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+32,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+35,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+38,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+41,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+44,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+47,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+50,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+53,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+56,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+59,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+62,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+65,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+68,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+71,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+74,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+77,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+80,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+83,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+86,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+89,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+92,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+95,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+98,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->popPrefix();
    tracep->declArray(c+101,0,"payload_ram_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->pushPrefix("select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+248,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"reqs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"grant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("request_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+264,0,"NUM_REQUESTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"gnt_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"curr_priority",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+106,0,"masked_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"curr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+265,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("wakeup", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+248,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"disp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+267,0,"dependency_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+110,0,"free_entry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+111,0,"full_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"reqs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"grant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"grant_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+271,0,"ready_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+260,0,"retire_entry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+261,0,"retire_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"entry_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"entry_granted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"free_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+115,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dependency_matrix_row", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+116+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+244,0,"flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+245,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+275,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+275,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__exec_if__0(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__exec_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+276,0,"retire_rs_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+277,0,"retire_rs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__reg_read_if__0(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__reg_read_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+101,0,"sched_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declBit(c+3,0,"fire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__disp_if__0(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_init_sub__TOP__tb_scheduler__DOT__disp_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+278,0,"disp_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declBit(c+266,0,"disp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"rs_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+111,0,"rs_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+267,0,"dependency_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+281,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_top(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_init_top\n"); );
    // Body
    Vtb_scheduler___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_scheduler___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_scheduler___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_scheduler___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_scheduler___024root__trace_register(Vtb_scheduler___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_scheduler___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_scheduler___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_scheduler___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_scheduler___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_const_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_scheduler___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_const_0\n"); );
    // Init
    Vtb_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_scheduler___024root*>(voidSelf);
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_scheduler___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_const_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    bufp->fullIData(oldp+251,(0x14U),32);
    bufp->fullDouble(oldp+252,(5.00000000000000000e-01));
    bufp->fullIData(oldp+254,(0U),32);
    bufp->fullWData(oldp+255,(vlSelf->tb_scheduler__DOT__global_ready_mask),128);
    bufp->fullIData(oldp+259,(0U),32);
    bufp->fullCData(oldp+260,(0U),5);
    bufp->fullBit(oldp+261,(0U));
    bufp->fullBit(oldp+262,(vlSelf->tb_scheduler__DOT__dut__DOT__all_fu_ready_mask));
    bufp->fullBit(oldp+263,(vlSelf->tb_scheduler__DOT__dut__DOT__valid));
    bufp->fullIData(oldp+264,(0x20U),32);
    bufp->fullIData(oldp+265,(0xffffffffU),32);
    bufp->fullBit(oldp+266,(vlSymsp->TOP__tb_scheduler__DOT__disp_if.disp_valid));
    bufp->fullWData(oldp+267,(vlSymsp->TOP__tb_scheduler__DOT__disp_if.dependency_mask),128);
    __Vtemp_1[0U] = vlSelf->tb_scheduler__DOT__dut__DOT__all_fu_ready_mask;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    bufp->fullWData(oldp+271,(__Vtemp_1),128);
    bufp->fullIData(oldp+275,(0x20U),32);
    bufp->fullCData(oldp+276,(vlSymsp->TOP__tb_scheduler__DOT__exec_if.__PVT__retire_rs_entry),5);
    bufp->fullBit(oldp+277,(vlSymsp->TOP__tb_scheduler__DOT__exec_if.__PVT__retire_rs_valid));
    bufp->fullWData(oldp+278,(vlSymsp->TOP__tb_scheduler__DOT__disp_if.disp_pkt),83);
    bufp->fullIData(oldp+281,(0x40U),32);
    bufp->fullIData(oldp+282,(4U),32);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_full_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_scheduler___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_full_0\n"); );
    // Init
    Vtb_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_scheduler___024root*>(voidSelf);
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_scheduler___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_full_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_scheduler__DOT__dut__DOT__reqs),32);
    bufp->fullCData(oldp+2,(vlSelf->tb_scheduler__DOT__dut__DOT__grant),5);
    bufp->fullBit(oldp+3,(vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid));
    bufp->fullCData(oldp+4,((3U & (IData)(vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__free_entry_out))),2);
    bufp->fullWData(oldp+5,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                            [0U]),83);
    bufp->fullWData(oldp+8,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                            [1U]),83);
    bufp->fullWData(oldp+11,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [2U]),83);
    bufp->fullWData(oldp+14,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [3U]),83);
    bufp->fullWData(oldp+17,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [4U]),83);
    bufp->fullWData(oldp+20,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [5U]),83);
    bufp->fullWData(oldp+23,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [6U]),83);
    bufp->fullWData(oldp+26,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [7U]),83);
    bufp->fullWData(oldp+29,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [8U]),83);
    bufp->fullWData(oldp+32,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [9U]),83);
    bufp->fullWData(oldp+35,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0xaU]),83);
    bufp->fullWData(oldp+38,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0xbU]),83);
    bufp->fullWData(oldp+41,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0xcU]),83);
    bufp->fullWData(oldp+44,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0xdU]),83);
    bufp->fullWData(oldp+47,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0xeU]),83);
    bufp->fullWData(oldp+50,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0xfU]),83);
    bufp->fullWData(oldp+53,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x10U]),83);
    bufp->fullWData(oldp+56,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x11U]),83);
    bufp->fullWData(oldp+59,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x12U]),83);
    bufp->fullWData(oldp+62,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x13U]),83);
    bufp->fullWData(oldp+65,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x14U]),83);
    bufp->fullWData(oldp+68,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x15U]),83);
    bufp->fullWData(oldp+71,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x16U]),83);
    bufp->fullWData(oldp+74,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x17U]),83);
    bufp->fullWData(oldp+77,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x18U]),83);
    bufp->fullWData(oldp+80,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x19U]),83);
    bufp->fullWData(oldp+83,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x1aU]),83);
    bufp->fullWData(oldp+86,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x1bU]),83);
    bufp->fullWData(oldp+89,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x1cU]),83);
    bufp->fullWData(oldp+92,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x1dU]),83);
    bufp->fullWData(oldp+95,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x1eU]),83);
    bufp->fullWData(oldp+98,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                             [0x1fU]),83);
    bufp->fullWData(oldp+101,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                              [vlSelf->tb_scheduler__DOT__dut__DOT__grant]),83);
    bufp->fullIData(oldp+104,((0xffffffffU >> (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority))),32);
    bufp->fullCData(oldp+105,(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority),5);
    bufp->fullIData(oldp+106,(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req),32);
    bufp->fullIData(oldp+107,(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req),32);
    bufp->fullBit(oldp+108,(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag));
    bufp->fullIData(oldp+109,(vlSelf->tb_scheduler__DOT__dut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+110,(vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__free_entry_out),5);
    bufp->fullBit(oldp+111,(vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__full_out));
    bufp->fullIData(oldp+112,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid),32);
    bufp->fullIData(oldp+113,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted),32);
    bufp->fullCData(oldp+114,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry),5);
    bufp->fullBit(oldp+115,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full));
    bufp->fullWData(oldp+116,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0]),128);
    bufp->fullWData(oldp+120,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1]),128);
    bufp->fullWData(oldp+124,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2]),128);
    bufp->fullWData(oldp+128,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3]),128);
    bufp->fullWData(oldp+132,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[4]),128);
    bufp->fullWData(oldp+136,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[5]),128);
    bufp->fullWData(oldp+140,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[6]),128);
    bufp->fullWData(oldp+144,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[7]),128);
    bufp->fullWData(oldp+148,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[8]),128);
    bufp->fullWData(oldp+152,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[9]),128);
    bufp->fullWData(oldp+156,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[10]),128);
    bufp->fullWData(oldp+160,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[11]),128);
    bufp->fullWData(oldp+164,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[12]),128);
    bufp->fullWData(oldp+168,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[13]),128);
    bufp->fullWData(oldp+172,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[14]),128);
    bufp->fullWData(oldp+176,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[15]),128);
    bufp->fullWData(oldp+180,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[16]),128);
    bufp->fullWData(oldp+184,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[17]),128);
    bufp->fullWData(oldp+188,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[18]),128);
    bufp->fullWData(oldp+192,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[19]),128);
    bufp->fullWData(oldp+196,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[20]),128);
    bufp->fullWData(oldp+200,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[21]),128);
    bufp->fullWData(oldp+204,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[22]),128);
    bufp->fullWData(oldp+208,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[23]),128);
    bufp->fullWData(oldp+212,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[24]),128);
    bufp->fullWData(oldp+216,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[25]),128);
    bufp->fullWData(oldp+220,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[26]),128);
    bufp->fullWData(oldp+224,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[27]),128);
    bufp->fullWData(oldp+228,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[28]),128);
    bufp->fullWData(oldp+232,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[29]),128);
    bufp->fullWData(oldp+236,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[30]),128);
    bufp->fullWData(oldp+240,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[31]),128);
    bufp->fullBit(oldp+244,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag));
    bufp->fullIData(oldp+245,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+246,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+247,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+248,(vlSelf->tb_scheduler__DOT__clk));
    bufp->fullBit(oldp+249,(vlSelf->tb_scheduler__DOT__rst));
    bufp->fullIData(oldp+250,(vlSelf->tb_scheduler__DOT__cycle_count),32);
}
