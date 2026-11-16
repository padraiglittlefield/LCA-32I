// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_scheduler__Syms.h"


VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_scheduler___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__0(Vtb_scheduler___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_init_sub__TOP__0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_scheduler___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_scheduler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+133,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+135,0,"local_ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"global_ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+13,0,"disp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("disp_pkt", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+14,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+17,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+18,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+20,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+27,0,"dependency_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"rs_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+30,0,"rs_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"rr_fire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rr_pkt", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+32,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+33,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+35,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+36,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+38,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+0,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+131,0,"test_select_grant__Vstatic__granted_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"test5_dispatched_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"test_fill_rs__Vstatic__valid_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+3,0,"test_fill_rs__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+4,0,"test_fill_rs__Vstatic__dst_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"test_fill_rs__Vstatic__src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"test_fill_rs__Vstatic__src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"test_fill_rs__Vstatic__pc_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"test_dispatch_when_full__Vstatic__valid_count_before",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+9,0,"test_dispatch_when_full__Vstatic__valid_count_after",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+10,0,"test_dispatch_when_full__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"local_ready_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"global_ready_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+13,0,"disp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("disp_pkt_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+14,0,"opcode",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"dst_areg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"dst_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+17,0,"src1_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+18,0,"src1_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"src2_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+20,0,"src2_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"imm_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"instr_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"alu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"br_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+27,0,"dependency_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"rs_entry_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+30,0,"rs_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"rr_fire_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rr_pkt_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+32,0,"opcode",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+33,0,"dst_areg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"dst_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+35,0,"src1_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+36,0,"src1_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"src2_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+38,0,"src2_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"imm_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"alu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+45,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"grant_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"retire_rs_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+137,0,"retire_rs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"rs_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"reqs_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"reqs_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("payload_ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+49,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+50,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+52,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+53,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+55,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+62,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+63,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+65,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+66,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+68,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+70,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+75,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+76,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+77,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+78,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+79,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+81,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+83,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+88,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+89,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+91,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+92,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+94,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+96,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+97,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("payload_ram_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+101,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+102,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+103,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+104,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+105,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+107,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"reqs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"grant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("request_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+138,0,"NUM_REQUESTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"gnt_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+115,0,"curr_priority",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"masked_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+117,0,"curr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+118,0,"flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wakeup", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"disp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"dependency_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"free_entry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+30,0,"full_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"reqs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"grant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"grant_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"ready_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+136,0,"retire_entry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+137,0,"retire_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"entry_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"entry_granted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"free_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+122,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dependency_matrix_row", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+123+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+127,0,"granted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_scheduler___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+139,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+143,0,"[0]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"[1]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"[2]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"[3]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+142,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_init_top(Vtb_scheduler___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_init_top\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scheduler___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_scheduler___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_scheduler___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_scheduler___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_scheduler___024root__trace_register(Vtb_scheduler___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_register\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_scheduler___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_scheduler___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_scheduler___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_scheduler___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_const_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_scheduler___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_const_0\n"); );
    // Body
    Vtb_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_scheduler___024root*>(voidSelf);
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_scheduler___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_const_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_const_0_sub_0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+132,(0x00000014U),32);
    bufp->fullDouble(oldp+133,(5.00000000000000000e-01));
    bufp->fullCData(oldp+135,(0U),4);
    bufp->fullCData(oldp+136,(0U),2);
    bufp->fullBit(oldp+137,(0U));
    bufp->fullIData(oldp+138,(4U),32);
    bufp->fullIData(oldp+139,(2U),32);
    bufp->fullIData(oldp+140,(0x00000040U),32);
    bufp->fullIData(oldp+141,(0x00000020U),32);
    bufp->fullIData(oldp+142,(0x00000010U),32);
    bufp->fullCData(oldp+143,(0U),2);
    bufp->fullCData(oldp+144,(1U),2);
    bufp->fullIData(oldp+145,(0x00000080U),32);
    bufp->fullIData(oldp+146,(6U),32);
    bufp->fullIData(oldp+147,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_full_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_scheduler___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_full_0\n"); );
    // Body
    Vtb_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_scheduler___024root*>(voidSelf);
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_scheduler___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_scheduler___024root__trace_full_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_full_0_sub_0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.tb_scheduler__DOT__pass_count),32);
    bufp->fullIData(oldp+1,(vlSelfRef.tb_scheduler__DOT__fail_count),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i),32);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__dst_val),6);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__src1_val),6);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__src2_val),6);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__pc_val),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i),32);
    bufp->fullBit(oldp+11,(vlSelfRef.tb_scheduler__DOT__rst));
    bufp->fullSData(oldp+12,(vlSelfRef.tb_scheduler__DOT__global_ready_mask),16);
    bufp->fullBit(oldp+13,(vlSelfRef.tb_scheduler__DOT__disp_valid));
    bufp->fullIData(oldp+14,(vlSelfRef.tb_scheduler__DOT__disp_pkt[3U]),32);
    bufp->fullCData(oldp+15,((vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                              >> 0x0000001bU)),5);
    bufp->fullCData(oldp+16,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                             >> 0x00000015U))),6);
    bufp->fullCData(oldp+17,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                             >> 0x0000000fU))),6);
    bufp->fullBit(oldp+18,((1U & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                  >> 0x0000000eU))));
    bufp->fullCData(oldp+19,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                             >> 8U))),6);
    bufp->fullBit(oldp+20,((1U & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                  >> 7U))));
    bufp->fullCData(oldp+21,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+22,(((vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                               << 0x0000001dU) | (vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+23,((1U & (vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] 
                                  >> 2U))));
    bufp->fullIData(oldp+24,(((vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+25,((1U & (vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+26,((1U & vlSelfRef.tb_scheduler__DOT__disp_pkt[0U])));
    bufp->fullSData(oldp+27,(vlSelfRef.tb_scheduler__DOT__dependency_mask),16);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry),2);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_scheduler__DOT__rs_entry_idx),2);
    bufp->fullBit(oldp+30,(vlSelfRef.tb_scheduler__DOT__rs_full));
    bufp->fullBit(oldp+31,(vlSelfRef.tb_scheduler__DOT__rr_fire_valid));
    bufp->fullIData(oldp+32,(vlSelfRef.tb_scheduler__DOT__rr_pkt[3U]),32);
    bufp->fullCData(oldp+33,((vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                              >> 0x0000001bU)),5);
    bufp->fullCData(oldp+34,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                             >> 0x00000015U))),6);
    bufp->fullCData(oldp+35,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                             >> 0x0000000fU))),6);
    bufp->fullBit(oldp+36,((1U & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                  >> 0x0000000eU))));
    bufp->fullCData(oldp+37,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                             >> 8U))),6);
    bufp->fullBit(oldp+38,((1U & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                  >> 7U))));
    bufp->fullCData(oldp+39,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+40,(((vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                               << 0x0000001dU) | (vlSelfRef.tb_scheduler__DOT__rr_pkt[1U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+41,((1U & (vlSelfRef.tb_scheduler__DOT__rr_pkt[1U] 
                                  >> 2U))));
    bufp->fullIData(oldp+42,(((vlSelfRef.tb_scheduler__DOT__rr_pkt[1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_scheduler__DOT__rr_pkt[0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+43,((1U & (vlSelfRef.tb_scheduler__DOT__rr_pkt[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+44,((1U & vlSelfRef.tb_scheduler__DOT__rr_pkt[0U])));
    bufp->fullCData(oldp+45,(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant),2);
    bufp->fullBit(oldp+46,(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid));
    bufp->fullCData(oldp+47,(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out),4);
    bufp->fullCData(oldp+48,(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in),4);
    bufp->fullIData(oldp+49,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][3U]),32);
    bufp->fullCData(oldp+50,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                              >> 0x0000001bU)),5);
    bufp->fullCData(oldp+51,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                             >> 0x00000015U))),6);
    bufp->fullCData(oldp+52,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                             >> 0x0000000fU))),6);
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                  >> 0x0000000eU))));
    bufp->fullCData(oldp+54,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                             >> 8U))),6);
    bufp->fullBit(oldp+55,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                  >> 7U))));
    bufp->fullCData(oldp+56,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+57,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                               << 0x0000001dU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][1U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+58,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][1U] 
                                  >> 2U))));
    bufp->fullIData(oldp+59,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+60,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+61,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][0U])));
    bufp->fullIData(oldp+62,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][3U]),32);
    bufp->fullCData(oldp+63,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                              >> 0x0000001bU)),5);
    bufp->fullCData(oldp+64,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                             >> 0x00000015U))),6);
    bufp->fullCData(oldp+65,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                             >> 0x0000000fU))),6);
    bufp->fullBit(oldp+66,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                  >> 0x0000000eU))));
    bufp->fullCData(oldp+67,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                             >> 8U))),6);
    bufp->fullBit(oldp+68,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                  >> 7U))));
    bufp->fullCData(oldp+69,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+70,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                               << 0x0000001dU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][1U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+71,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][1U] 
                                  >> 2U))));
    bufp->fullIData(oldp+72,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+74,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][0U])));
    bufp->fullIData(oldp+75,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][3U]),32);
    bufp->fullCData(oldp+76,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                              >> 0x0000001bU)),5);
    bufp->fullCData(oldp+77,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                             >> 0x00000015U))),6);
    bufp->fullCData(oldp+78,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                             >> 0x0000000fU))),6);
    bufp->fullBit(oldp+79,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                  >> 0x0000000eU))));
    bufp->fullCData(oldp+80,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                             >> 8U))),6);
    bufp->fullBit(oldp+81,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                  >> 7U))));
    bufp->fullCData(oldp+82,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+83,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                               << 0x0000001dU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][1U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+84,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][1U] 
                                  >> 2U))));
    bufp->fullIData(oldp+85,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+87,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][0U])));
    bufp->fullIData(oldp+88,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][3U]),32);
    bufp->fullCData(oldp+89,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                              >> 0x0000001bU)),5);
    bufp->fullCData(oldp+90,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                             >> 0x00000015U))),6);
    bufp->fullCData(oldp+91,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                             >> 0x0000000fU))),6);
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                  >> 0x0000000eU))));
    bufp->fullCData(oldp+93,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                             >> 8U))),6);
    bufp->fullBit(oldp+94,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                  >> 7U))));
    bufp->fullCData(oldp+95,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+96,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] 
                               << 0x0000001dU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][1U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+97,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][1U] 
                                  >> 2U))));
    bufp->fullIData(oldp+98,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+100,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][0U])));
    bufp->fullIData(oldp+101,(vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                              [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][3U]),32);
    bufp->fullCData(oldp+102,((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                               [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+103,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                              [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                              >> 0x00000015U))),6);
    bufp->fullCData(oldp+104,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                              [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                              >> 0x0000000fU))),6);
    bufp->fullBit(oldp+105,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                   [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                   >> 0x0000000eU))));
    bufp->fullCData(oldp+106,((0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                              [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                              >> 8U))),6);
    bufp->fullBit(oldp+107,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                   [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                   >> 7U))));
    bufp->fullCData(oldp+108,((0x0000000fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                              [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                              >> 3U))),4);
    bufp->fullIData(oldp+109,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U] 
                                << 0x0000001dU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                                   [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][1U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+110,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                   [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][1U] 
                                   >> 2U))));
    bufp->fullIData(oldp+111,(((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][1U] 
                                << 0x0000001eU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                                   [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][0U] 
                                                   >> 2U))),32);
    bufp->fullBit(oldp+112,((1U & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                   [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+113,((1U & vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                             [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][0U])));
    bufp->fullCData(oldp+114,((0x0fU >> (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority))),4);
    bufp->fullCData(oldp+115,(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority),2);
    bufp->fullCData(oldp+116,(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req),4);
    bufp->fullCData(oldp+117,(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req),4);
    bufp->fullBit(oldp+118,(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag));
    bufp->fullCData(oldp+119,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid),4);
    bufp->fullCData(oldp+120,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted),4);
    bufp->fullCData(oldp+121,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry),2);
    bufp->fullBit(oldp+122,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full));
    bufp->fullSData(oldp+123,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0]),16);
    bufp->fullSData(oldp+124,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1]),16);
    bufp->fullSData(oldp+125,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2]),16);
    bufp->fullSData(oldp+126,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3]),16);
    bufp->fullBit(oldp+127,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted));
    bufp->fullBit(oldp+128,(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag));
    bufp->fullBit(oldp+129,(vlSelfRef.tb_scheduler__DOT__clk));
    bufp->fullIData(oldp+130,(vlSelfRef.tb_scheduler__DOT__cycle_count),32);
    bufp->fullCData(oldp+131,(vlSelfRef.tb_scheduler__DOT__test_select_grant__Vstatic__granted_entry),2);
}
