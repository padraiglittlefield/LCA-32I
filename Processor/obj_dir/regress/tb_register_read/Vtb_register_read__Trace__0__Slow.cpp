// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_register_read__Syms.h"


VL_ATTR_COLD void Vtb_register_read___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_register_read___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_register_read___024root__trace_init_sub__TOP__0(Vtb_register_read___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_init_sub__TOP__0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_register_read___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_register_read", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+55,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+50,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+52,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+53,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1,0,"sched_fire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sched_pkt", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+2,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+3,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+6,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+5,0,"rf_src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"rf_src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"rf_src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"rf_src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"fwrd_src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"fwrd_src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+17,0,"fwrd_src1_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"fwrd_src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"fwrd_src2_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"fwrd_src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"exec_fire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("exec_pkt", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+37,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+40,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+41,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+42,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"sched_fire_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sched_pkt_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+2,0,"opcode",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+3,0,"dst_areg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"dst_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"src1_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+6,0,"src1_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"src2_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"src2_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"imm_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"instr_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"alu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"br_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+5,0,"rf_src1_preg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"rf_src2_preg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"rf_src1_val_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"rf_src2_val_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"fwrd_src1_preg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"fwrd_src2_preg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+17,0,"fwrd_src1_hit_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"fwrd_src1_val_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"fwrd_src2_hit_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"fwrd_src2_val_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"exec_fire_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("exec_pkt_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+37,0,"opcode",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"dst_areg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"dst_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+40,0,"src1_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+41,0,"src2_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+42,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"imm_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"src1_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"src2_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"alu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("sched_pkt", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+2,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+3,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+6,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("exec_pkt", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+23,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+24,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+26,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+27,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+21,0,"src1_sel",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+22,0,"src2_sel",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+57,0,"src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_register_read___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_register_read___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+59,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+64,0,"[0]",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"[1]",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"[2]",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"[3]",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+63,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_register_read___024root__trace_init_top(Vtb_register_read___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_init_top\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_register_read___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_register_read___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_register_read___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_register_read___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_register_read___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_register_read___024root__trace_register(Vtb_register_read___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_register\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_register_read___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_register_read___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_register_read___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_register_read___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_register_read___024root__trace_const_0_sub_0(Vtb_register_read___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_register_read___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_const_0\n"); );
    // Body
    Vtb_register_read___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_register_read___024root*>(voidSelf);
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_register_read___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_register_read___024root__trace_const_0_sub_0(Vtb_register_read___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_const_0_sub_0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+54,(0x00000014U),32);
    bufp->fullDouble(oldp+55,(5.00000000000000000e-01));
    bufp->fullIData(oldp+57,(vlSelfRef.tb_register_read__DOT__dut__DOT__src1_val),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_register_read__DOT__dut__DOT__src2_val),32);
    bufp->fullIData(oldp+59,(2U),32);
    bufp->fullIData(oldp+60,(0x00000040U),32);
    bufp->fullIData(oldp+61,(0x00000020U),32);
    bufp->fullIData(oldp+62,(4U),32);
    bufp->fullIData(oldp+63,(0x00000010U),32);
    bufp->fullCData(oldp+64,(0U),2);
    bufp->fullCData(oldp+65,(1U),2);
    bufp->fullIData(oldp+66,(0x00000080U),32);
    bufp->fullIData(oldp+67,(6U),32);
    bufp->fullIData(oldp+68,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_register_read___024root__trace_full_0_sub_0(Vtb_register_read___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_register_read___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_full_0\n"); );
    // Body
    Vtb_register_read___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_register_read___024root*>(voidSelf);
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_register_read___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_register_read___024root__trace_full_0_sub_0(Vtb_register_read___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root__trace_full_0_sub_0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_register_read__DOT__rst));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_register_read__DOT__sched_fire_valid));
    bufp->fullIData(oldp+2,(vlSelfRef.tb_register_read__DOT__sched_pkt[3U]),32);
    bufp->fullCData(oldp+3,((vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                             >> 0x0000001bU)),5);
    bufp->fullCData(oldp+4,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                            >> 0x00000015U))),6);
    bufp->fullCData(oldp+5,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                            >> 0x0000000fU))),6);
    bufp->fullBit(oldp+6,((1U & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                 >> 0x0000000eU))));
    bufp->fullCData(oldp+7,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                            >> 8U))),6);
    bufp->fullBit(oldp+8,((1U & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                 >> 7U))));
    bufp->fullCData(oldp+9,((0x0000000fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                            >> 3U))),4);
    bufp->fullIData(oldp+10,(((vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                               << 0x0000001dU) | (vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+11,((1U & (vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
                                  >> 2U))));
    bufp->fullIData(oldp+12,(((vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+13,((1U & (vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+14,((1U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U])));
    bufp->fullIData(oldp+15,(vlSelfRef.tb_register_read__DOT__rf_src1_val),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_register_read__DOT__rf_src2_val),32);
    bufp->fullBit(oldp+17,(vlSelfRef.tb_register_read__DOT__fwrd_src1_hit));
    bufp->fullIData(oldp+18,(vlSelfRef.tb_register_read__DOT__fwrd_src1_val),32);
    bufp->fullBit(oldp+19,(vlSelfRef.tb_register_read__DOT__fwrd_src2_hit));
    bufp->fullIData(oldp+20,(vlSelfRef.tb_register_read__DOT__fwrd_src2_val),32);
    bufp->fullIData(oldp+21,(((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src1_hit)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+22,(((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src2_hit)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+23,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[5U] 
                               << 2U) | (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                         >> 0x0000001eU))),32);
    bufp->fullCData(oldp+24,((0x0000001fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                             >> 0x00000019U))),5);
    bufp->fullCData(oldp+25,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                             >> 0x00000013U))),6);
    bufp->fullCData(oldp+26,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                             >> 0x0000000dU))),6);
    bufp->fullCData(oldp+27,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                             >> 7U))),6);
    bufp->fullCData(oldp+28,((0x0000000fU & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+29,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
                               << 0x0000001dU) | (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[3U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+30,((1U & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[3U] 
                                  >> 2U))));
    bufp->fullIData(oldp+31,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[3U] 
                               << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
                                                  >> 2U))),32);
    bufp->fullIData(oldp+32,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
                               << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
                                                  >> 2U))),32);
    bufp->fullIData(oldp+33,(((vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+34,((1U & (vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+35,((1U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U])));
    bufp->fullBit(oldp+36,(vlSelfRef.tb_register_read__DOT__exec_fire_valid));
    bufp->fullIData(oldp+37,(((vlSelfRef.tb_register_read__DOT__exec_pkt[5U] 
                               << 2U) | (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                         >> 0x0000001eU))),32);
    bufp->fullCData(oldp+38,((0x0000001fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                             >> 0x00000019U))),5);
    bufp->fullCData(oldp+39,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                             >> 0x00000013U))),6);
    bufp->fullCData(oldp+40,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                             >> 0x0000000dU))),6);
    bufp->fullCData(oldp+41,((0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                             >> 7U))),6);
    bufp->fullCData(oldp+42,((0x0000000fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+43,(((vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                               << 0x0000001dU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+44,((1U & (vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                                  >> 2U))));
    bufp->fullIData(oldp+45,(((vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                               << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                                                  >> 2U))),32);
    bufp->fullIData(oldp+46,(((vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                               << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                                                  >> 2U))),32);
    bufp->fullIData(oldp+47,(((vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+48,((1U & (vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+49,((1U & vlSelfRef.tb_register_read__DOT__exec_pkt[0U])));
    bufp->fullBit(oldp+50,(vlSelfRef.tb_register_read__DOT__clk));
    bufp->fullIData(oldp+51,(vlSelfRef.tb_register_read__DOT__cycle_count),32);
    bufp->fullIData(oldp+52,(vlSelfRef.tb_register_read__DOT__pass_count),32);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_register_read__DOT__fail_count),32);
}
