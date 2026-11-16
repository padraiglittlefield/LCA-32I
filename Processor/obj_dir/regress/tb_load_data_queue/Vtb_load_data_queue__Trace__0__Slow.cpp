// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_load_data_queue__Syms.h"


VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_load_data_queue___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_init_sub__TOP__0(Vtb_load_data_queue___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_init_sub__TOP__0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_load_data_queue___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_load_data_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+120,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+123,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+123,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+124,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"disp_vld_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"disp_sdq_marker_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"ldq_disp_idx_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"ldq_full_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"exec_vld_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"exec_ldq_idx_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"exec_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"issue_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("issue_entry_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+9,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+15,0,"issue_vld_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"disp_vld_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"disp_sdq_marker_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"ldq_disp_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"ldq_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"exec_vld_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"exec_ldq_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"exec_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"exec_rob_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+125,0,"issue_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"issue_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("issue_entry_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+9,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"addr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"sdq_marker",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,0,"issued",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+15,0,"issue_vld_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ldq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+16,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+22,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+26,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+28,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+32,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+34,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+38,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+40,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+44,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+46,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+52,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+56,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+58,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+62,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+64,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+68,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+70,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+74,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+76,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+80,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+82,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+86,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+88,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+92,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+94,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+98,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+100,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+104,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+106,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+110,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+112,0,"ldq_alloc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"entries_free",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+114,0,"alloc_idx_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ldq_alloc_entry", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+127,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+122,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBus(c+115,0,"entries_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+116,0,"issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_load_data_queue___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+124,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+134,0,"[0]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+134,0,"[1]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+134,0,"[2]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+135,0,"[3]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+133,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_init_top(Vtb_load_data_queue___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_init_top\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_load_data_queue___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_load_data_queue___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_load_data_queue___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_register(Vtb_load_data_queue___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_register\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_load_data_queue___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_load_data_queue___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_load_data_queue___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_load_data_queue___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_const_0_sub_0(Vtb_load_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_const_0\n"); );
    // Body
    Vtb_load_data_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_load_data_queue___024root*>(voidSelf);
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_load_data_queue___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_const_0_sub_0(Vtb_load_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_const_0_sub_0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+119,(0x00000014U),32);
    bufp->fullDouble(oldp+120,(5.00000000000000000e-01));
    bufp->fullBit(oldp+122,(0U));
    bufp->fullIData(oldp+123,(0U),32);
    bufp->fullIData(oldp+124,(2U),32);
    bufp->fullBit(oldp+125,(vlSelfRef.tb_load_data_queue__DOT__issue_en_i));
    bufp->fullBit(oldp+126,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_ack_i));
    bufp->fullBit(oldp+127,(1U));
    bufp->fullIData(oldp+128,(0U),32);
    bufp->fullCData(oldp+129,(0U),4);
    bufp->fullIData(oldp+130,(0x00000040U),32);
    bufp->fullIData(oldp+131,(0x00000020U),32);
    bufp->fullIData(oldp+132,(4U),32);
    bufp->fullIData(oldp+133,(0x00000010U),32);
    bufp->fullCData(oldp+134,(0U),2);
    bufp->fullCData(oldp+135,(1U),2);
    bufp->fullIData(oldp+136,(0x00000080U),32);
    bufp->fullIData(oldp+137,(6U),32);
    bufp->fullIData(oldp+138,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_full_0_sub_0(Vtb_load_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_full_0\n"); );
    // Body
    Vtb_load_data_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_load_data_queue___024root*>(voidSelf);
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_load_data_queue___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_load_data_queue___024root__trace_full_0_sub_0(Vtb_load_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root__trace_full_0_sub_0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_load_data_queue__DOT__rst));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_load_data_queue__DOT__disp_vld_i));
    bufp->fullCData(oldp+2,(vlSelfRef.tb_load_data_queue__DOT__disp_sdq_marker_i),5);
    bufp->fullBit(oldp+3,(vlSelfRef.tb_load_data_queue__DOT__exec_vld_i));
    bufp->fullCData(oldp+4,(vlSelfRef.tb_load_data_queue__DOT__exec_ldq_idx_i),4);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_load_data_queue__DOT__exec_addr_i),32);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_load_data_queue__DOT__rob_entry_idx),4);
    bufp->fullCData(oldp+7,(((IData)(vlSelfRef.tb_load_data_queue__DOT__ldq_full_o)
                              ? 0U : (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx))),4);
    bufp->fullBit(oldp+8,(vlSelfRef.tb_load_data_queue__DOT__ldq_full_o));
    bufp->fullBit(oldp+9,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                         >> 0x0000002bU)))));
    bufp->fullBit(oldp+10,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+11,((IData)((vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+12,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+13,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                                          >> 4U)))));
    bufp->fullCData(oldp+14,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_entry_o))),4);
    bufp->fullBit(oldp+15,(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o));
    bufp->fullBit(oldp+16,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+17,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+18,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+19,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+20,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+21,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U]))),4);
    bufp->fullBit(oldp+22,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+23,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+24,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+25,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+26,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+27,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U]))),4);
    bufp->fullBit(oldp+28,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+29,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+30,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+31,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+32,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+33,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U]))),4);
    bufp->fullBit(oldp+34,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+35,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+36,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+37,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+38,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+39,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U]))),4);
    bufp->fullBit(oldp+40,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+41,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+42,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+43,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+44,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+45,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U]))),4);
    bufp->fullBit(oldp+46,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+47,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+48,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+49,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+50,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+51,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U]))),4);
    bufp->fullBit(oldp+52,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+53,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+54,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+55,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+56,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+57,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U]))),4);
    bufp->fullBit(oldp+58,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+59,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+60,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+61,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+62,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+63,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U]))),4);
    bufp->fullBit(oldp+64,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+65,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+66,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+67,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+68,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+69,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U]))),4);
    bufp->fullBit(oldp+70,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+71,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+72,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+73,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+74,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+75,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U]))),4);
    bufp->fullBit(oldp+76,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+77,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+78,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+79,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+80,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+81,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U]))),4);
    bufp->fullBit(oldp+82,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+83,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+84,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+85,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+86,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+87,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U]))),4);
    bufp->fullBit(oldp+88,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+89,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+90,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+91,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+92,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+93,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U]))),4);
    bufp->fullBit(oldp+94,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                          >> 0x0000002bU)))));
    bufp->fullBit(oldp+95,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                          >> 0x0000002aU)))));
    bufp->fullIData(oldp+96,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                      >> 0x0000000aU))),32);
    bufp->fullCData(oldp+97,((0x0000001fU & (IData)(
                                                    (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                                     >> 5U)))),5);
    bufp->fullBit(oldp+98,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                          >> 4U)))));
    bufp->fullCData(oldp+99,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U]))),4);
    bufp->fullBit(oldp+100,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                           >> 0x0000002bU)))));
    bufp->fullBit(oldp+101,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                           >> 0x0000002aU)))));
    bufp->fullIData(oldp+102,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                       >> 0x0000000aU))),32);
    bufp->fullCData(oldp+103,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                                      >> 5U)))),5);
    bufp->fullBit(oldp+104,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                           >> 4U)))));
    bufp->fullCData(oldp+105,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U]))),4);
    bufp->fullBit(oldp+106,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                           >> 0x0000002bU)))));
    bufp->fullBit(oldp+107,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                           >> 0x0000002aU)))));
    bufp->fullIData(oldp+108,((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                       >> 0x0000000aU))),32);
    bufp->fullCData(oldp+109,((0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                                      >> 5U)))),5);
    bufp->fullBit(oldp+110,((1U & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                           >> 4U)))));
    bufp->fullCData(oldp+111,((0x0000000fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U]))),4);
    bufp->fullCData(oldp+112,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx),4);
    bufp->fullSData(oldp+113,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free),16);
    bufp->fullBit(oldp+114,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found));
    bufp->fullSData(oldp+115,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready),16);
    bufp->fullCData(oldp+116,(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx),4);
    bufp->fullBit(oldp+117,(vlSelfRef.tb_load_data_queue__DOT__clk));
    bufp->fullIData(oldp+118,(vlSelfRef.tb_load_data_queue__DOT__cycle_count),32);
}
