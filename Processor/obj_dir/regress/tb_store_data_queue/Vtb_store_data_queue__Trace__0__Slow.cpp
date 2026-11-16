// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_store_data_queue__Syms.h"


VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_store_data_queue___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_init_sub__TOP__0(Vtb_store_data_queue___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_init_sub__TOP__0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_store_data_queue___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_store_data_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+154,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+149,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+151,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+152,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+157,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"disp_vld_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"exec_store_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"cmit_vld_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"cmit_idx_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"exec_vld_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"exec_sdq_idx_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"exec_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"sdq_alloc_idx_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"sdq_full_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"issue_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"issue_ack_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("issue_entry_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+14,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+21,0,"issue_vld_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"ld_vld_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"ld_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"ld_sdq_marker_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,0,"ld_hit_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"ld_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"exec_rob_idx_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"disp_vld_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"cmit_vld_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"cmit_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"exec_vld_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"exec_store_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"exec_sdq_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"exec_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"exec_rob_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"sdq_alloc_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"sdq_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"issue_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"issue_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("issue_entry_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+14,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"store_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"addr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"committed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"issued",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+21,0,"issue_vld_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"ld_vld_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"ld_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"ld_sdq_marker_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,0,"ld_hit_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"ld_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"ld_ambig_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"SDQ_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"IDX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("sdq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+27,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+34,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+41,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+48,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+55,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+62,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+69,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+76,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+83,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+90,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+97,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+104,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+111,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+118,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+125,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+132,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[16]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+139,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"committed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+26,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"head_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,0,"tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"last_cmit_idx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"prev_st_addr_unresolved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_store_data_queue___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+157,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+163,0,"[0]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"[1]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"[2]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+164,0,"[3]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+158,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_init_top(Vtb_store_data_queue___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_init_top\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_store_data_queue___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_store_data_queue___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_store_data_queue___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_register(Vtb_store_data_queue___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_register\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_store_data_queue___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_store_data_queue___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_store_data_queue___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_store_data_queue___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_const_0_sub_0(Vtb_store_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_const_0\n"); );
    // Body
    Vtb_store_data_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_store_data_queue___024root*>(voidSelf);
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_store_data_queue___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_const_0_sub_0(Vtb_store_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_const_0_sub_0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+153,(0x00000014U),32);
    bufp->fullDouble(oldp+154,(5.00000000000000000e-01));
    bufp->fullBit(oldp+156,(0U));
    bufp->fullIData(oldp+157,(2U),32);
    bufp->fullIData(oldp+158,(0x00000010U),32);
    bufp->fullIData(oldp+159,(5U),32);
    bufp->fullIData(oldp+160,(4U),32);
    bufp->fullIData(oldp+161,(0x00000040U),32);
    bufp->fullIData(oldp+162,(0x00000020U),32);
    bufp->fullCData(oldp+163,(0U),2);
    bufp->fullCData(oldp+164,(1U),2);
    bufp->fullIData(oldp+165,(0x00000080U),32);
    bufp->fullIData(oldp+166,(6U),32);
    bufp->fullIData(oldp+167,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_full_0_sub_0(Vtb_store_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_full_0\n"); );
    // Body
    Vtb_store_data_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_store_data_queue___024root*>(voidSelf);
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_store_data_queue___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_store_data_queue___024root__trace_full_0_sub_0(Vtb_store_data_queue___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root__trace_full_0_sub_0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_store_data_queue__DOT__rst));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_store_data_queue__DOT__disp_vld_i));
    bufp->fullIData(oldp+2,(vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i),32);
    bufp->fullBit(oldp+3,(vlSelfRef.tb_store_data_queue__DOT__cmit_vld_i));
    bufp->fullCData(oldp+4,(vlSelfRef.tb_store_data_queue__DOT__cmit_idx_i),4);
    bufp->fullBit(oldp+5,(vlSelfRef.tb_store_data_queue__DOT__exec_vld_i));
    bufp->fullCData(oldp+6,(vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i),4);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_store_data_queue__DOT__exec_addr_i),32);
    bufp->fullBit(oldp+8,(vlSelfRef.tb_store_data_queue__DOT__issue_en_i));
    bufp->fullBit(oldp+9,(vlSelfRef.tb_store_data_queue__DOT__issue_ack_i));
    bufp->fullBit(oldp+10,(vlSelfRef.tb_store_data_queue__DOT__ld_vld_i));
    bufp->fullIData(oldp+11,(vlSelfRef.tb_store_data_queue__DOT__ld_addr_i),32);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i),4);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_store_data_queue__DOT__exec_rob_idx_i),4);
    bufp->fullBit(oldp+14,((1U & (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+15,(((vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+16,((1U & (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+17,(((vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+18,((1U & (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+19,((1U & (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+20,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U])),4);
    bufp->fullBit(oldp+21,(vlSelfRef.tb_store_data_queue__DOT__issue_vld_o));
    bufp->fullBit(oldp+22,(vlSelfRef.tb_store_data_queue__DOT__ld_hit_o));
    bufp->fullIData(oldp+23,(vlSelfRef.tb_store_data_queue__DOT__ld_data_o),32);
    bufp->fullBit(oldp+24,(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved));
    bufp->fullCData(oldp+25,((0x0000000fU & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr))),4);
    bufp->fullBit(oldp+26,((((1U & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr) 
                                    >> 4U)) != (1U 
                                                & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr) 
                                                   >> 4U))) 
                            & ((0x0000000fU & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)) 
                               == (0x0000000fU & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr))))));
    bufp->fullBit(oldp+27,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+28,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+29,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+30,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+31,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+32,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+33,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U])),4);
    bufp->fullBit(oldp+34,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+35,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+36,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+37,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+38,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+39,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+40,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U])),4);
    bufp->fullBit(oldp+41,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+42,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+43,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+44,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+45,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+47,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U])),4);
    bufp->fullBit(oldp+48,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+49,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+51,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+52,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+54,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U])),4);
    bufp->fullBit(oldp+55,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+56,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+57,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+58,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+59,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+60,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+61,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U])),4);
    bufp->fullBit(oldp+62,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+63,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+64,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+65,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+66,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+67,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+68,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U])),4);
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+70,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+71,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+72,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+74,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+75,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U])),4);
    bufp->fullBit(oldp+76,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+77,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+78,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+79,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+80,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+81,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+82,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U])),4);
    bufp->fullBit(oldp+83,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+84,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+85,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+86,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+87,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+88,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+89,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U])),4);
    bufp->fullBit(oldp+90,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+91,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+93,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                               << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U] 
                                                  >> 6U))),32);
    bufp->fullBit(oldp+94,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+95,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U] 
                                  >> 4U))));
    bufp->fullCData(oldp+96,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U])),4);
    bufp->fullBit(oldp+97,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][2U] 
                                  >> 7U))));
    bufp->fullIData(oldp+98,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][2U] 
                               << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                                                  >> 7U))),32);
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                                  >> 6U))));
    bufp->fullIData(oldp+100,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                                << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U] 
                                                   >> 6U))),32);
    bufp->fullBit(oldp+101,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+102,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+103,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U])),4);
    bufp->fullBit(oldp+104,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][2U] 
                                   >> 7U))));
    bufp->fullIData(oldp+105,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][2U] 
                                << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                                                   >> 7U))),32);
    bufp->fullBit(oldp+106,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                                   >> 6U))));
    bufp->fullIData(oldp+107,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                                << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U] 
                                                   >> 6U))),32);
    bufp->fullBit(oldp+108,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+109,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+110,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U])),4);
    bufp->fullBit(oldp+111,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][2U] 
                                   >> 7U))));
    bufp->fullIData(oldp+112,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][2U] 
                                << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                                                   >> 7U))),32);
    bufp->fullBit(oldp+113,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                                   >> 6U))));
    bufp->fullIData(oldp+114,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                                << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U] 
                                                   >> 6U))),32);
    bufp->fullBit(oldp+115,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+116,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+117,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U])),4);
    bufp->fullBit(oldp+118,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][2U] 
                                   >> 7U))));
    bufp->fullIData(oldp+119,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][2U] 
                                << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                                                   >> 7U))),32);
    bufp->fullBit(oldp+120,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                                   >> 6U))));
    bufp->fullIData(oldp+121,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                                << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U] 
                                                   >> 6U))),32);
    bufp->fullBit(oldp+122,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+123,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+124,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U])),4);
    bufp->fullBit(oldp+125,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][2U] 
                                   >> 7U))));
    bufp->fullIData(oldp+126,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][2U] 
                                << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
                                                   >> 7U))),32);
    bufp->fullBit(oldp+127,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
                                   >> 6U))));
    bufp->fullIData(oldp+128,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
                                << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U] 
                                                   >> 6U))),32);
    bufp->fullBit(oldp+129,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+130,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+131,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U])),4);
    bufp->fullBit(oldp+132,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][2U] 
                                   >> 7U))));
    bufp->fullIData(oldp+133,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][2U] 
                                << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][1U] 
                                                   >> 7U))),32);
    bufp->fullBit(oldp+134,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][1U] 
                                   >> 6U))));
    bufp->fullIData(oldp+135,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][1U] 
                                << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][0U] 
                                                   >> 6U))),32);
    bufp->fullBit(oldp+136,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+137,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+138,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][0U])),4);
    bufp->fullBit(oldp+139,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][2U] 
                                   >> 7U))));
    bufp->fullIData(oldp+140,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][2U] 
                                << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][1U] 
                                                   >> 7U))),32);
    bufp->fullBit(oldp+141,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][1U] 
                                   >> 6U))));
    bufp->fullIData(oldp+142,(((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][1U] 
                                << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][0U] 
                                                   >> 6U))),32);
    bufp->fullBit(oldp+143,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+144,((1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+145,((0x0000000fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[16U][0U])),4);
    bufp->fullCData(oldp+146,(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr),5);
    bufp->fullCData(oldp+147,(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr),5);
    bufp->fullCData(oldp+148,(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__last_cmit_idx_reg),4);
    bufp->fullBit(oldp+149,(vlSelfRef.tb_store_data_queue__DOT__clk));
    bufp->fullIData(oldp+150,(vlSelfRef.tb_store_data_queue__DOT__cycle_count),32);
    bufp->fullIData(oldp+151,(vlSelfRef.tb_store_data_queue__DOT__pass_count),32);
    bufp->fullIData(oldp+152,(vlSelfRef.tb_store_data_queue__DOT__fail_count),32);
}
