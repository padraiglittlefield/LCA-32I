// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_execute_alu__Syms.h"


VL_ATTR_COLD void Vtb_execute_alu___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_execute_alu___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_init_sub__TOP__0(Vtb_execute_alu___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_init_sub__TOP__0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_execute_alu___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_execute_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+44,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+39,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+0,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+16,0,"rr_fire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rr_pkt", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+17,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+18,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+20,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+22,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+28,0,"fwrd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"fwrd_dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+41,0,"fwrd_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"rf_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"rf_wr_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+33,0,"rf_wr_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"rob_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"rob_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"rob_br_mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"rob_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+39,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"rr_fire_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rr_pkt_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+17,0,"opcode",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+18,0,"dst_areg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"dst_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+20,0,"src1_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"src2_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+22,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"imm_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"instr_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"src1_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"src2_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"alu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"br_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+28,0,"fwrd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"fwrd_dst_preg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+41,0,"fwrd_val_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"rf_wr_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"rf_wr_preg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+33,0,"rf_wr_val_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"rob_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"rob_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"rob_val_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"rob_br_mispred_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"rob_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("exec_pkt", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+17,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+18,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+20,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+22,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+41,0,"aluout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"aluout_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"br_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"alu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"opcode",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+26,0,"src1_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"src2_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"imm_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"aluout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"aluout_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"br_cond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("send_instruction__Vstatic__unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("new_exec_pkt", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+2,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+3,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"src1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"src2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_execute_alu___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+46,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+51,0,"[0]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"[1]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"[2]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"[3]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+50,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_init_top(Vtb_execute_alu___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_init_top\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_execute_alu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_execute_alu___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_execute_alu___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_execute_alu___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_register(Vtb_execute_alu___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_register\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_execute_alu___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_execute_alu___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_execute_alu___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_execute_alu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_const_0_sub_0(Vtb_execute_alu___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_const_0\n"); );
    // Body
    Vtb_execute_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_execute_alu___024root*>(voidSelf);
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_execute_alu___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_const_0_sub_0(Vtb_execute_alu___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_const_0_sub_0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+43,(0x00000014U),32);
    bufp->fullDouble(oldp+44,(5.00000000000000000e-01));
    bufp->fullIData(oldp+46,(2U),32);
    bufp->fullIData(oldp+47,(0x00000040U),32);
    bufp->fullIData(oldp+48,(0x00000020U),32);
    bufp->fullIData(oldp+49,(4U),32);
    bufp->fullIData(oldp+50,(0x00000010U),32);
    bufp->fullCData(oldp+51,(0U),2);
    bufp->fullCData(oldp+52,(1U),2);
    bufp->fullIData(oldp+53,(0x00000080U),32);
    bufp->fullIData(oldp+54,(6U),32);
    bufp->fullIData(oldp+55,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_full_0_sub_0(Vtb_execute_alu___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_full_0\n"); );
    // Body
    Vtb_execute_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_execute_alu___024root*>(voidSelf);
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_execute_alu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_execute_alu___024root__trace_full_0_sub_0(Vtb_execute_alu___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_full_0_sub_0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.tb_execute_alu__DOT__pass_count),32);
    bufp->fullIData(oldp+1,(vlSelfRef.tb_execute_alu__DOT__fail_count),32);
    bufp->fullIData(oldp+2,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
                              << 2U) | (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                        >> 0x0000001eU))),32);
    bufp->fullCData(oldp+3,((0x0000001fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                            >> 0x00000019U))),5);
    bufp->fullCData(oldp+4,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                            >> 0x00000013U))),6);
    bufp->fullCData(oldp+5,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                            >> 0x0000000dU))),6);
    bufp->fullCData(oldp+6,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                            >> 7U))),6);
    bufp->fullCData(oldp+7,((0x0000000fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                            >> 3U))),4);
    bufp->fullIData(oldp+8,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                              << 0x0000001dU) | (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
                                                 >> 3U))),32);
    bufp->fullBit(oldp+9,((1U & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
                                 >> 2U))));
    bufp->fullIData(oldp+10,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
                               << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
                                                  >> 2U))),32);
    bufp->fullIData(oldp+11,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
                               << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
                                                  >> 2U))),32);
    bufp->fullIData(oldp+12,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+13,((1U & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+14,((1U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U])));
    bufp->fullBit(oldp+15,(vlSelfRef.tb_execute_alu__DOT__rst));
    bufp->fullBit(oldp+16,(vlSelfRef.tb_execute_alu__DOT__rr_fire_valid));
    bufp->fullIData(oldp+17,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                               << 2U) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                         >> 0x0000001eU))),32);
    bufp->fullCData(oldp+18,((0x0000001fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                             >> 0x00000019U))),5);
    bufp->fullCData(oldp+19,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                             >> 0x00000013U))),6);
    bufp->fullCData(oldp+20,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                             >> 0x0000000dU))),6);
    bufp->fullCData(oldp+21,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                             >> 7U))),6);
    bufp->fullCData(oldp+22,((0x0000000fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+23,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                               << 0x0000001dU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+24,((1U & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                  >> 2U))));
    bufp->fullIData(oldp+25,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                               << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                  >> 2U))),32);
    bufp->fullIData(oldp+26,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                               << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                  >> 2U))),32);
    bufp->fullIData(oldp+27,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+28,((1U & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+29,((1U & vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U])));
    bufp->fullIData(oldp+30,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                               << 2U) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                         >> 0x0000001eU))),32);
    bufp->fullBit(oldp+31,(vlSelfRef.tb_execute_alu__DOT__rf_wr_en));
    bufp->fullCData(oldp+32,(vlSelfRef.tb_execute_alu__DOT__rf_wr_preg),6);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_execute_alu__DOT__rf_wr_val),32);
    bufp->fullBit(oldp+34,(vlSelfRef.tb_execute_alu__DOT__rob_valid));
    bufp->fullCData(oldp+35,(vlSelfRef.tb_execute_alu__DOT__rob_idx),4);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_execute_alu__DOT__rob_val),32);
    bufp->fullBit(oldp+37,(vlSelfRef.tb_execute_alu__DOT__rob_br_mispred));
    bufp->fullBit(oldp+38,(vlSelfRef.tb_execute_alu__DOT__rob_exception));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_execute_alu__DOT__clk));
    bufp->fullIData(oldp+40,(vlSelfRef.tb_execute_alu__DOT__cycle_count),32);
    bufp->fullIData(oldp+41,(vlSelfRef.tb_execute_alu__DOT__fwrd_val),32);
    bufp->fullBit(oldp+42,(((0x0000001bU == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                              << 2U) 
                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                >> 0x0000001eU)))
                             ? (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                  >> 2U)) == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                 >> 2U)))
                             : ((0x0000001cU == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                  << 2U) 
                                                 | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                    >> 0x0000001eU)))
                                 ? (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                      << 0x0000001eU) 
                                     | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                        >> 2U)) != 
                                    ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                      << 0x0000001eU) 
                                     | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                        >> 2U))) : 
                                ((0x0000001dU == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                     >> 0x0000001eU)))
                                  ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                  : ((0x0000001eU == 
                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                        << 2U) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                  >> 0x0000001eU)))
                                      ? VL_GTES_III(32, 
                                                    ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                      << 0x0000001eU) 
                                                     | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                        >> 2U)), 
                                                    ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                      << 0x0000001eU) 
                                                     | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                        >> 2U)))
                                      : ((0x0000001fU 
                                          == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                               << 2U) 
                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                 >> 0x0000001eU)))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)
                                          : ((0x00000020U 
                                              == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                     >> 0x0000001eU))) 
                                             & (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                    >> 2U)) 
                                                >= 
                                                ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                    >> 2U)))))))))));
}
