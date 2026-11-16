// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_dispatch__Syms.h"


VL_ATTR_COLD void Vtb_dispatch___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_dispatch___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_dispatch___024root__trace_init_sub__TOP__0(Vtb_dispatch___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_init_sub__TOP__0\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_dispatch___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_dispatch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+595,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+596,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+590,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+592,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+598,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+598,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+599,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rename_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+601+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_disp_pkt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+603,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+604,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+605,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+606,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+607,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+608,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+609,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+610,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+611,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+612,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+614,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+617,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+618,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+619,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+620,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+621,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+622,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+623,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+625,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+626,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+627,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instr_queue_full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+72+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+631,0,"disp_ldq_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+632,0,"disp_sdq_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+633,0,"ldq_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"sdq_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"disp_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"disp_is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"disp_sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("disp_pkt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
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
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
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
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
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
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+114,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+115,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+116,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+117,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+118,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+120,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+122,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+123,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("disp_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+127+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dependency_mask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+131+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_entry_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+635+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+639+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_fire_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+135+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_dst_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+137+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wb_en", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+139+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_entry_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+643+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+645+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+590,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rename_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+0+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_pkt_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+2,0,"opcode",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+3,0,"required_fu",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"dst_areg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"dst_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+6,0,"src1_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"src1_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"src2_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"src2_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+10,0,"imm_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"instr_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"alu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"br_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+16,0,"opcode",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17,0,"required_fu",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"dst_areg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"dst_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+20,0,"src1_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"src1_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+22,0,"src2_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"src2_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+24,0,"imm_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"instr_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"alu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"br_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instr_queue_full_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+141+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_pkt_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+143,0,"opcode",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+144,0,"dst_areg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+145,0,"dst_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+146,0,"src1_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+147,0,"src1_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"src2_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+149,0,"src2_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+151,0,"imm_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"alu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+156,0,"opcode",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+157,0,"dst_areg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+158,0,"dst_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+159,0,"src1_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+160,0,"src1_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"src2_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+162,0,"src2_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"imm_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"alu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+169,0,"opcode",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+170,0,"dst_areg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+171,0,"dst_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+172,0,"src1_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+173,0,"src1_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"src2_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+175,0,"src2_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+177,0,"imm_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"alu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+182,0,"opcode",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+183,0,"dst_areg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+184,0,"dst_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+185,0,"src1_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+186,0,"src1_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"src2_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+188,0,"src2_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"imm_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"alu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("disp_valid_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+195+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dependency_mask_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+199+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_entry_idx_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_full_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+34+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_fire_valid_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+203+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_dst_reg_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+205+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wb_en_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+207+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_entry_idx_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+38+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_full_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_ldq_idx_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+209+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_sdq_idx_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+211+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+631,0,"disp_ldq_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+632,0,"disp_sdq_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+633,0,"ldq_full_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"sdq_full_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"disp_vld_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"disp_is_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"disp_sdq_marker_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+647,0,"dispatch_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("instr_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+213+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_pkt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+215,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+216,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+217,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+218,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+219,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+221,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+223,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+224,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+226,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+229,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+230,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+231,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+232,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+233,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+235,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+237,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+240,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("new_disp_pkt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+243,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+244,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+245,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+246,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+247,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+249,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+251,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+252,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+254,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+256,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+257,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+258,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+259,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+260,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+262,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"rob_entry_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+264,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+265,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("required_fu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+269,0,"[0]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"[1]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+271,0,"pipe_free",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("assigned_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+272+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("assignment_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+274+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("pipe_claimed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+276+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("fire_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+278+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_dst_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+280+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_fire_loc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+282+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_src1_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+284+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_src2_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+286+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_src1_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+288+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_src2_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+290+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_dependency_mask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+292+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_exec_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+648+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_exec_dst_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+652+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("u_dmt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+590,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fire_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+294+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dst_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+296+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("fire_loc_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+298+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("src1_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+300+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("src1_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+302+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("src2_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+304+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("src2_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+306+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dependency_mask_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+308+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("exec_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+656+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("exec_dst_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+660+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("src1_dmt_entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+310,0,"busy_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+311,0,"dependency_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+312,0,"busy_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"dependency_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("src2_dmt_entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+314,0,"busy_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+315,0,"dependency_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+316,0,"busy_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"dependency_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_instr_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+664,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+590,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rename_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+42+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_pkt_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+44,0,"opcode",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+45,0,"required_fu",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"dst_areg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"dst_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+48,0,"src1_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"src1_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+50,0,"src2_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"src2_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+52,0,"imm_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"instr_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"alu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"br_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+58,0,"opcode",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+59,0,"required_fu",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"dst_areg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"dst_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+62,0,"src1_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"src1_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+64,0,"src2_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"src2_preg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+66,0,"imm_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"instr_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"alu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"br_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+318+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dispatch_en_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+320+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_vld_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+322+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_pkt_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+324,0,"opcode",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+325,0,"required_fu",2, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"dst_areg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+327,0,"dst_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+328,0,"src1_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"src1_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+330,0,"src2_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"src2_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+332,0,"imm_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"alu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+338,0,"opcode",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+339,0,"required_fu",2, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+340,0,"dst_areg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+341,0,"dst_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+342,0,"src1_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"src1_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+344,0,"src2_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"src2_preg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+346,0,"imm_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+347,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+349,0,"alu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+665,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+353,0,"head_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+354,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+355,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+356,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+357,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+358,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+359,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+360,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+362,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+363,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+365,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+368,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+369,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+370,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+371,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+372,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+374,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+376,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+377,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+379,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+382,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+384,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+385,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+386,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+388,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+390,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+391,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+393,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+396,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+397,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+398,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+399,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+400,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+401,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+402,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+404,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+405,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+407,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+410,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+411,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+412,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+413,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+414,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+415,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+416,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+418,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+419,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+421,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+424,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+425,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+426,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+427,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+428,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+429,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+430,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+432,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+435,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+438,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+439,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+440,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+441,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+442,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+444,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+446,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+447,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+449,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+452,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+453,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+454,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+455,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+456,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+458,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+459,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+460,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+461,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+463,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+466,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+467,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+468,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+469,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+470,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+472,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+474,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+475,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+476,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+477,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+480,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+481,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+482,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+483,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+484,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+485,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+486,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+487,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+488,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+489,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+491,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+494,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+495,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+496,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+497,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+498,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+499,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+500,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+502,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+503,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+505,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+508,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+509,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+510,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+511,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+512,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+513,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+514,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+515,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+516,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+517,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+518,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+519,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+522,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+523,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+524,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+525,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+526,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+527,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+528,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+529,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+530,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+531,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+532,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+536,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+537,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+538,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+539,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+540,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+542,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+544,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+545,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+546,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+547,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+550,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+551,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+552,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+553,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+554,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+555,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+556,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+558,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+559,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+560,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+561,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+564,0,"opcode",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+565,0,"required_fu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+566,0,"dst_areg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+567,0,"dst_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+568,0,"src1_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"src1_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+570,0,"src2_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,0,"src2_preg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+572,0,"imm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+573,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+574,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+575,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instr_queue_full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+578+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+580,0,"num_allocated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+581,0,"alloc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("alloc_ptr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+582+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alloc_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+584+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+586,0,"num_dispatched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+587,0,"dispatch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dispatch_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+588+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_dispatch___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+666,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+669,0,"[0]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+669,0,"[1]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+669,0,"[2]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+670,0,"[3]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+664,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+671,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+672,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+673,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_init_top(Vtb_dispatch___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_init_top\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_dispatch___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_dispatch___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_dispatch___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_dispatch___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_dispatch___024root__trace_register(Vtb_dispatch___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_register\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_dispatch___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_dispatch___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_dispatch___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_dispatch___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_const_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_dispatch___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_const_0\n"); );
    // Body
    Vtb_dispatch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dispatch___024root*>(voidSelf);
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_dispatch___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_const_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_const_0_sub_0\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+595,(0x00000014U),32);
    bufp->fullDouble(oldp+596,(5.00000000000000000e-01));
    bufp->fullIData(oldp+598,(0U),32);
    bufp->fullBit(oldp+599,(vlSelfRef.tb_dispatch__DOT__stall));
    bufp->fullBit(oldp+600,(vlSelfRef.tb_dispatch__DOT__flush));
    bufp->fullBit(oldp+601,(vlSelfRef.tb_dispatch__DOT__rename_vld[0]));
    bufp->fullBit(oldp+602,(vlSelfRef.tb_dispatch__DOT__rename_vld[1]));
    bufp->fullIData(oldp+603,(((vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+604,((3U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+605,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+606,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+607,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+608,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+609,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+610,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+611,(((vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+612,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+613,(((vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+614,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+615,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+616,((1U & vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][0U])));
    bufp->fullIData(oldp+617,(((vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+618,((3U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+619,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+620,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+621,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+622,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+623,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+624,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+625,(((vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+626,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+627,(((vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+628,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+629,((1U & (vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+630,((1U & vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][0U])));
    bufp->fullCData(oldp+631,(vlSelfRef.tb_dispatch__DOT__disp_ldq_idx),4);
    bufp->fullCData(oldp+632,(vlSelfRef.tb_dispatch__DOT__disp_sdq_idx),4);
    bufp->fullBit(oldp+633,(vlSelfRef.tb_dispatch__DOT__ldq_full));
    bufp->fullBit(oldp+634,(vlSelfRef.tb_dispatch__DOT__sdq_full));
    bufp->fullCData(oldp+635,(vlSelfRef.tb_dispatch__DOT__rs_entry_idx[0]),2);
    bufp->fullCData(oldp+636,(vlSelfRef.tb_dispatch__DOT__rs_entry_idx[1]),2);
    bufp->fullCData(oldp+637,(vlSelfRef.tb_dispatch__DOT__rs_entry_idx[2]),2);
    bufp->fullCData(oldp+638,(vlSelfRef.tb_dispatch__DOT__rs_entry_idx[3]),2);
    bufp->fullBit(oldp+639,(vlSelfRef.tb_dispatch__DOT__rs_full[0]));
    bufp->fullBit(oldp+640,(vlSelfRef.tb_dispatch__DOT__rs_full[1]));
    bufp->fullBit(oldp+641,(vlSelfRef.tb_dispatch__DOT__rs_full[2]));
    bufp->fullBit(oldp+642,(vlSelfRef.tb_dispatch__DOT__rs_full[3]));
    bufp->fullCData(oldp+643,(vlSelfRef.tb_dispatch__DOT__rob_entry_idx[0]),4);
    bufp->fullCData(oldp+644,(vlSelfRef.tb_dispatch__DOT__rob_entry_idx[1]),4);
    bufp->fullBit(oldp+645,(vlSelfRef.tb_dispatch__DOT__rob_full[0]));
    bufp->fullBit(oldp+646,(vlSelfRef.tb_dispatch__DOT__rob_full[1]));
    bufp->fullBit(oldp+647,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dispatch_stall));
    bufp->fullBit(oldp+648,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_exec_vld[0]));
    bufp->fullBit(oldp+649,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_exec_vld[1]));
    bufp->fullBit(oldp+650,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_exec_vld[2]));
    bufp->fullBit(oldp+651,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_exec_vld[3]));
    bufp->fullCData(oldp+652,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[0]),6);
    bufp->fullCData(oldp+653,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[1]),6);
    bufp->fullCData(oldp+654,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[2]),6);
    bufp->fullCData(oldp+655,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[3]),6);
    bufp->fullBit(oldp+656,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[0]));
    bufp->fullBit(oldp+657,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[1]));
    bufp->fullBit(oldp+658,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[2]));
    bufp->fullBit(oldp+659,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[3]));
    bufp->fullCData(oldp+660,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[0]),6);
    bufp->fullCData(oldp+661,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[1]),6);
    bufp->fullCData(oldp+662,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[2]),6);
    bufp->fullCData(oldp+663,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[3]),6);
    bufp->fullIData(oldp+664,(0x00000010U),32);
    bufp->fullIData(oldp+665,(4U),32);
    bufp->fullIData(oldp+666,(2U),32);
    bufp->fullIData(oldp+667,(0x00000040U),32);
    bufp->fullIData(oldp+668,(0x00000020U),32);
    bufp->fullCData(oldp+669,(0U),2);
    bufp->fullCData(oldp+670,(1U),2);
    bufp->fullIData(oldp+671,(0x00000080U),32);
    bufp->fullIData(oldp+672,(6U),32);
    bufp->fullIData(oldp+673,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_full_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_dispatch___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_full_0\n"); );
    // Body
    Vtb_dispatch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dispatch___024root*>(voidSelf);
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_dispatch___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_full_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_full_0_sub_0\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_vld_i[0]));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_vld_i[1]));
    bufp->fullIData(oldp+2,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][3U] 
                              << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                        >> 0x0000001fU))),32);
    bufp->fullCData(oldp+3,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                   >> 0x0000001dU))),2);
    bufp->fullCData(oldp+4,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                            >> 0x00000018U))),5);
    bufp->fullCData(oldp+5,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                            >> 0x00000012U))),6);
    bufp->fullBit(oldp+6,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                 >> 0x00000011U))));
    bufp->fullCData(oldp+7,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                            >> 0x0000000bU))),6);
    bufp->fullBit(oldp+8,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                 >> 0x0000000aU))));
    bufp->fullCData(oldp+9,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                                            >> 4U))),6);
    bufp->fullIData(oldp+10,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
                               << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][1U] 
                                                  >> 4U))),32);
    bufp->fullBit(oldp+11,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][1U] 
                                  >> 3U))));
    bufp->fullIData(oldp+12,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][1U] 
                               << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][0U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+13,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+14,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+15,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][0U])));
    bufp->fullIData(oldp+16,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][3U] 
                               << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                         >> 0x0000001fU))),32);
    bufp->fullCData(oldp+17,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                    >> 0x0000001dU))),2);
    bufp->fullCData(oldp+18,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                             >> 0x00000018U))),5);
    bufp->fullCData(oldp+19,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                             >> 0x00000012U))),6);
    bufp->fullBit(oldp+20,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                  >> 0x00000011U))));
    bufp->fullCData(oldp+21,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                             >> 0x0000000bU))),6);
    bufp->fullBit(oldp+22,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                  >> 0x0000000aU))));
    bufp->fullCData(oldp+23,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                                             >> 4U))),6);
    bufp->fullIData(oldp+24,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
                               << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][1U] 
                                                  >> 4U))),32);
    bufp->fullBit(oldp+25,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][1U] 
                                  >> 3U))));
    bufp->fullIData(oldp+26,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][1U] 
                               << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][0U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+27,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+28,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+29,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][0U])));
    bufp->fullCData(oldp+30,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[0]),2);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[1]),2);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[2]),2);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[3]),2);
    bufp->fullBit(oldp+34,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[0]));
    bufp->fullBit(oldp+35,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[1]));
    bufp->fullBit(oldp+36,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[2]));
    bufp->fullBit(oldp+37,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[3]));
    bufp->fullCData(oldp+38,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_entry_idx_i[0]),4);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_entry_idx_i[1]),4);
    bufp->fullBit(oldp+40,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_full_i[0]));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_full_i[1]));
    bufp->fullBit(oldp+42,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_vld_i[0]));
    bufp->fullBit(oldp+43,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_vld_i[1]));
    bufp->fullIData(oldp+44,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][3U] 
                               << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                         >> 0x0000001fU))),32);
    bufp->fullCData(oldp+45,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                    >> 0x0000001dU))),2);
    bufp->fullCData(oldp+46,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                             >> 0x00000018U))),5);
    bufp->fullCData(oldp+47,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                             >> 0x00000012U))),6);
    bufp->fullBit(oldp+48,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                  >> 0x00000011U))));
    bufp->fullCData(oldp+49,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                             >> 0x0000000bU))),6);
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                  >> 0x0000000aU))));
    bufp->fullCData(oldp+51,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                                             >> 4U))),6);
    bufp->fullIData(oldp+52,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
                               << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][1U] 
                                                  >> 4U))),32);
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][1U] 
                                  >> 3U))));
    bufp->fullIData(oldp+54,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][1U] 
                               << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][0U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+55,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+56,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+57,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][0U])));
    bufp->fullIData(oldp+58,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][3U] 
                               << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                         >> 0x0000001fU))),32);
    bufp->fullCData(oldp+59,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                    >> 0x0000001dU))),2);
    bufp->fullCData(oldp+60,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                             >> 0x00000018U))),5);
    bufp->fullCData(oldp+61,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                             >> 0x00000012U))),6);
    bufp->fullBit(oldp+62,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                  >> 0x00000011U))));
    bufp->fullCData(oldp+63,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                             >> 0x0000000bU))),6);
    bufp->fullBit(oldp+64,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                  >> 0x0000000aU))));
    bufp->fullCData(oldp+65,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                                             >> 4U))),6);
    bufp->fullIData(oldp+66,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
                               << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][1U] 
                                                  >> 4U))),32);
    bufp->fullBit(oldp+67,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][1U] 
                                  >> 3U))));
    bufp->fullIData(oldp+68,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][1U] 
                               << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][0U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+70,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+71,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][0U])));
    bufp->fullBit(oldp+72,(vlSelfRef.tb_dispatch__DOT__instr_queue_full[0]));
    bufp->fullBit(oldp+73,(vlSelfRef.tb_dispatch__DOT__instr_queue_full[1]));
    bufp->fullBit(oldp+74,(vlSelfRef.tb_dispatch__DOT__disp_vld));
    bufp->fullIData(oldp+75,(vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][3U]),32);
    bufp->fullCData(oldp+76,((vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                              >> 0x0000001bU)),5);
    bufp->fullCData(oldp+77,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                             >> 0x00000015U))),6);
    bufp->fullCData(oldp+78,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                             >> 0x0000000fU))),6);
    bufp->fullBit(oldp+79,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                  >> 0x0000000eU))));
    bufp->fullCData(oldp+80,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                             >> 8U))),6);
    bufp->fullBit(oldp+81,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                  >> 7U))));
    bufp->fullCData(oldp+82,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+83,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] 
                               << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][1U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+84,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][1U] 
                                  >> 2U))));
    bufp->fullIData(oldp+85,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+87,((1U & vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][0U])));
    bufp->fullIData(oldp+88,(vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][3U]),32);
    bufp->fullCData(oldp+89,((vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                              >> 0x0000001bU)),5);
    bufp->fullCData(oldp+90,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                             >> 0x00000015U))),6);
    bufp->fullCData(oldp+91,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                             >> 0x0000000fU))),6);
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                  >> 0x0000000eU))));
    bufp->fullCData(oldp+93,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                             >> 8U))),6);
    bufp->fullBit(oldp+94,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                  >> 7U))));
    bufp->fullCData(oldp+95,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                                             >> 3U))),4);
    bufp->fullIData(oldp+96,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] 
                               << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][1U] 
                                                  >> 3U))),32);
    bufp->fullBit(oldp+97,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][1U] 
                                  >> 2U))));
    bufp->fullIData(oldp+98,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][1U] 
                               << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][0U] 
                                                  >> 2U))),32);
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+100,((1U & vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][0U])));
    bufp->fullIData(oldp+101,(vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][3U]),32);
    bufp->fullCData(oldp+102,((vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+103,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                              >> 0x00000015U))),6);
    bufp->fullCData(oldp+104,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                              >> 0x0000000fU))),6);
    bufp->fullBit(oldp+105,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                   >> 0x0000000eU))));
    bufp->fullCData(oldp+106,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                              >> 8U))),6);
    bufp->fullBit(oldp+107,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                   >> 7U))));
    bufp->fullCData(oldp+108,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                              >> 3U))),4);
    bufp->fullIData(oldp+109,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][1U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+110,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][1U] 
                                   >> 2U))));
    bufp->fullIData(oldp+111,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][1U] 
                                << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][0U] 
                                                   >> 2U))),32);
    bufp->fullBit(oldp+112,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+113,((1U & vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][0U])));
    bufp->fullIData(oldp+114,(vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][3U]),32);
    bufp->fullCData(oldp+115,((vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+116,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                              >> 0x00000015U))),6);
    bufp->fullCData(oldp+117,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                              >> 0x0000000fU))),6);
    bufp->fullBit(oldp+118,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                   >> 0x0000000eU))));
    bufp->fullCData(oldp+119,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                              >> 8U))),6);
    bufp->fullBit(oldp+120,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                   >> 7U))));
    bufp->fullCData(oldp+121,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                              >> 3U))),4);
    bufp->fullIData(oldp+122,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][1U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+123,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][1U] 
                                   >> 2U))));
    bufp->fullIData(oldp+124,(((vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][1U] 
                                << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][0U] 
                                                   >> 2U))),32);
    bufp->fullBit(oldp+125,((1U & (vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+126,((1U & vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][0U])));
    bufp->fullBit(oldp+127,(vlSelfRef.tb_dispatch__DOT__disp_valid[0]));
    bufp->fullBit(oldp+128,(vlSelfRef.tb_dispatch__DOT__disp_valid[1]));
    bufp->fullBit(oldp+129,(vlSelfRef.tb_dispatch__DOT__disp_valid[2]));
    bufp->fullBit(oldp+130,(vlSelfRef.tb_dispatch__DOT__disp_valid[3]));
    bufp->fullSData(oldp+131,(vlSelfRef.tb_dispatch__DOT__dependency_mask[0]),16);
    bufp->fullSData(oldp+132,(vlSelfRef.tb_dispatch__DOT__dependency_mask[1]),16);
    bufp->fullSData(oldp+133,(vlSelfRef.tb_dispatch__DOT__dependency_mask[2]),16);
    bufp->fullSData(oldp+134,(vlSelfRef.tb_dispatch__DOT__dependency_mask[3]),16);
    bufp->fullBit(oldp+135,(vlSelfRef.tb_dispatch__DOT__rob_fire_valid[0]));
    bufp->fullBit(oldp+136,(vlSelfRef.tb_dispatch__DOT__rob_fire_valid[1]));
    bufp->fullCData(oldp+137,(vlSelfRef.tb_dispatch__DOT__rob_dst_reg[0]),5);
    bufp->fullCData(oldp+138,(vlSelfRef.tb_dispatch__DOT__rob_dst_reg[1]),5);
    bufp->fullBit(oldp+139,(vlSelfRef.tb_dispatch__DOT__rob_wb_en[0]));
    bufp->fullBit(oldp+140,(vlSelfRef.tb_dispatch__DOT__rob_wb_en[1]));
    bufp->fullBit(oldp+141,(vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_queue_full_o[0]));
    bufp->fullBit(oldp+142,(vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_queue_full_o[1]));
    bufp->fullIData(oldp+143,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][3U]),32);
    bufp->fullCData(oldp+144,((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+145,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                              >> 0x00000015U))),6);
    bufp->fullCData(oldp+146,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                              >> 0x0000000fU))),6);
    bufp->fullBit(oldp+147,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                   >> 0x0000000eU))));
    bufp->fullCData(oldp+148,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                              >> 8U))),6);
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                   >> 7U))));
    bufp->fullCData(oldp+150,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                              >> 3U))),4);
    bufp->fullIData(oldp+151,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][1U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+152,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][1U] 
                                   >> 2U))));
    bufp->fullIData(oldp+153,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][1U] 
                                << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][0U] 
                                                   >> 2U))),32);
    bufp->fullBit(oldp+154,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+155,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][0U])));
    bufp->fullIData(oldp+156,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][3U]),32);
    bufp->fullCData(oldp+157,((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+158,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                              >> 0x00000015U))),6);
    bufp->fullCData(oldp+159,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                              >> 0x0000000fU))),6);
    bufp->fullBit(oldp+160,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                   >> 0x0000000eU))));
    bufp->fullCData(oldp+161,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                              >> 8U))),6);
    bufp->fullBit(oldp+162,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                   >> 7U))));
    bufp->fullCData(oldp+163,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                              >> 3U))),4);
    bufp->fullIData(oldp+164,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][1U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+165,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][1U] 
                                   >> 2U))));
    bufp->fullIData(oldp+166,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][1U] 
                                << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][0U] 
                                                   >> 2U))),32);
    bufp->fullBit(oldp+167,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+168,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][0U])));
    bufp->fullIData(oldp+169,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][3U]),32);
    bufp->fullCData(oldp+170,((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+171,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                              >> 0x00000015U))),6);
    bufp->fullCData(oldp+172,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                              >> 0x0000000fU))),6);
    bufp->fullBit(oldp+173,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                   >> 0x0000000eU))));
    bufp->fullCData(oldp+174,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                              >> 8U))),6);
    bufp->fullBit(oldp+175,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                   >> 7U))));
    bufp->fullCData(oldp+176,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                              >> 3U))),4);
    bufp->fullIData(oldp+177,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][1U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+178,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][1U] 
                                   >> 2U))));
    bufp->fullIData(oldp+179,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][1U] 
                                << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][0U] 
                                                   >> 2U))),32);
    bufp->fullBit(oldp+180,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+181,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][0U])));
    bufp->fullIData(oldp+182,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][3U]),32);
    bufp->fullCData(oldp+183,((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+184,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                              >> 0x00000015U))),6);
    bufp->fullCData(oldp+185,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                              >> 0x0000000fU))),6);
    bufp->fullBit(oldp+186,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                   >> 0x0000000eU))));
    bufp->fullCData(oldp+187,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                              >> 8U))),6);
    bufp->fullBit(oldp+188,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                   >> 7U))));
    bufp->fullCData(oldp+189,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                              >> 3U))),4);
    bufp->fullIData(oldp+190,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][1U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+191,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][1U] 
                                   >> 2U))));
    bufp->fullIData(oldp+192,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][1U] 
                                << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][0U] 
                                                   >> 2U))),32);
    bufp->fullBit(oldp+193,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+194,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][0U])));
    bufp->fullBit(oldp+195,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[0]));
    bufp->fullBit(oldp+196,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[1]));
    bufp->fullBit(oldp+197,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[2]));
    bufp->fullBit(oldp+198,(vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[3]));
    bufp->fullSData(oldp+199,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[0]),16);
    bufp->fullSData(oldp+200,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[1]),16);
    bufp->fullSData(oldp+201,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[2]),16);
    bufp->fullSData(oldp+202,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[3]),16);
    bufp->fullBit(oldp+203,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_fire_valid_o[0]));
    bufp->fullBit(oldp+204,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_fire_valid_o[1]));
    bufp->fullCData(oldp+205,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_dst_reg_o[0]),5);
    bufp->fullCData(oldp+206,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_dst_reg_o[1]),5);
    bufp->fullBit(oldp+207,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_wb_en_o[0]));
    bufp->fullBit(oldp+208,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_wb_en_o[1]));
    bufp->fullCData(oldp+209,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[0]),4);
    bufp->fullCData(oldp+210,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[1]),4);
    bufp->fullCData(oldp+211,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[0]),4);
    bufp->fullCData(oldp+212,(vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[1]),4);
    bufp->fullBit(oldp+213,(vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0]));
    bufp->fullBit(oldp+214,(vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1]));
    bufp->fullIData(oldp+215,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+216,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+217,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+218,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+219,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+220,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+221,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+222,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+223,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+224,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+225,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+226,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+227,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+228,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U])));
    bufp->fullIData(oldp+229,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+230,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+231,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+232,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+233,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+234,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+235,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+236,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+237,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+238,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+239,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+240,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+241,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+242,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U])));
    bufp->fullIData(oldp+243,(vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][3U]),32);
    bufp->fullCData(oldp+244,((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+245,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                              >> 0x00000015U))),6);
    bufp->fullCData(oldp+246,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                              >> 0x0000000fU))),6);
    bufp->fullBit(oldp+247,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                   >> 0x0000000eU))));
    bufp->fullCData(oldp+248,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                              >> 8U))),6);
    bufp->fullBit(oldp+249,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                   >> 7U))));
    bufp->fullCData(oldp+250,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                              >> 3U))),4);
    bufp->fullIData(oldp+251,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+252,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
                                   >> 2U))));
    bufp->fullIData(oldp+253,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
                                << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
                                                   >> 2U))),32);
    bufp->fullBit(oldp+254,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+255,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U])));
    bufp->fullIData(oldp+256,(vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][3U]),32);
    bufp->fullCData(oldp+257,((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+258,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                              >> 0x00000015U))),6);
    bufp->fullCData(oldp+259,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                              >> 0x0000000fU))),6);
    bufp->fullBit(oldp+260,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                   >> 0x0000000eU))));
    bufp->fullCData(oldp+261,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                              >> 8U))),6);
    bufp->fullBit(oldp+262,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                   >> 7U))));
    bufp->fullCData(oldp+263,((0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                              >> 3U))),4);
    bufp->fullIData(oldp+264,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+265,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
                                   >> 2U))));
    bufp->fullIData(oldp+266,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
                                << 0x0000001eU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
                                                   >> 2U))),32);
    bufp->fullBit(oldp+267,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+268,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U])));
    bufp->fullCData(oldp+269,(vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U]),2);
    bufp->fullCData(oldp+270,(vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U]),2);
    bufp->fullCData(oldp+271,(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free),4);
    bufp->fullCData(oldp+272,(vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0]),2);
    bufp->fullCData(oldp+273,(vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1]),2);
    bufp->fullBit(oldp+274,(vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0]));
    bufp->fullBit(oldp+275,(vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1]));
    bufp->fullCData(oldp+276,(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0]),4);
    bufp->fullCData(oldp+277,(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1]),4);
    bufp->fullBit(oldp+278,(vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0]));
    bufp->fullBit(oldp+279,(vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1]));
    bufp->fullCData(oldp+280,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[0]),6);
    bufp->fullCData(oldp+281,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[1]),6);
    bufp->fullCData(oldp+282,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[0]),4);
    bufp->fullCData(oldp+283,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[1]),4);
    bufp->fullCData(oldp+284,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[0]),6);
    bufp->fullCData(oldp+285,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[1]),6);
    bufp->fullCData(oldp+286,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[0]),6);
    bufp->fullCData(oldp+287,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[1]),6);
    bufp->fullBit(oldp+288,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[0]));
    bufp->fullBit(oldp+289,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[1]));
    bufp->fullBit(oldp+290,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[0]));
    bufp->fullBit(oldp+291,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[1]));
    bufp->fullSData(oldp+292,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[0]),16);
    bufp->fullSData(oldp+293,(vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[1]),16);
    bufp->fullBit(oldp+294,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i[0]));
    bufp->fullBit(oldp+295,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i[1]));
    bufp->fullCData(oldp+296,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i[0]),6);
    bufp->fullCData(oldp+297,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i[1]),6);
    bufp->fullCData(oldp+298,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i[0]),4);
    bufp->fullCData(oldp+299,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i[1]),4);
    bufp->fullCData(oldp+300,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i[0]),6);
    bufp->fullCData(oldp+301,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i[1]),6);
    bufp->fullBit(oldp+302,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i[0]));
    bufp->fullBit(oldp+303,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i[1]));
    bufp->fullCData(oldp+304,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i[0]),6);
    bufp->fullCData(oldp+305,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i[1]),6);
    bufp->fullBit(oldp+306,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i[0]));
    bufp->fullBit(oldp+307,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i[1]));
    bufp->fullSData(oldp+308,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o[0]),16);
    bufp->fullSData(oldp+309,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o[1]),16);
    bufp->fullBit(oldp+310,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+311,((0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U])),4);
    bufp->fullBit(oldp+312,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] 
                                   >> 4U))));
    bufp->fullCData(oldp+313,((0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U])),4);
    bufp->fullBit(oldp+314,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+315,((0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U])),4);
    bufp->fullBit(oldp+316,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] 
                                   >> 4U))));
    bufp->fullCData(oldp+317,((0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U])),4);
    bufp->fullBit(oldp+318,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full[0]));
    bufp->fullBit(oldp+319,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full[1]));
    bufp->fullBit(oldp+320,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i[0]));
    bufp->fullBit(oldp+321,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i[1]));
    bufp->fullBit(oldp+322,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o[0]));
    bufp->fullBit(oldp+323,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o[1]));
    bufp->fullIData(oldp+324,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+325,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+326,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+327,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+328,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+329,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+330,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+331,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+332,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+333,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+334,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+335,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+336,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+337,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U])));
    bufp->fullIData(oldp+338,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+339,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+340,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+341,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+342,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+343,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+344,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+345,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+346,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+347,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+348,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+349,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+350,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+351,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U])));
    bufp->fullCData(oldp+352,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr),5);
    bufp->fullCData(oldp+353,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr),5);
    bufp->fullIData(oldp+354,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+355,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+356,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+357,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+358,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+359,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+360,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+361,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+362,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+363,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+364,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+365,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+366,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+367,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U])));
    bufp->fullIData(oldp+368,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+369,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+370,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+371,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+372,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+373,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+374,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+375,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+376,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+377,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+378,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+379,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+380,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+381,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U])));
    bufp->fullIData(oldp+382,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+383,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+384,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+385,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+386,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+387,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+388,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+389,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+390,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+391,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+392,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+393,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+394,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+395,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U])));
    bufp->fullIData(oldp+396,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+397,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+398,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+399,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+400,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+401,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+402,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+403,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+404,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+405,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+406,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+407,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+408,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+409,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U])));
    bufp->fullIData(oldp+410,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+411,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+412,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+413,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+414,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+415,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+416,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+417,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+418,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+419,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+420,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+421,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+422,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+423,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U])));
    bufp->fullIData(oldp+424,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+425,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+426,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+427,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+428,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+429,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+430,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+431,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+432,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+433,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+434,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+435,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+436,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+437,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U])));
    bufp->fullIData(oldp+438,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+439,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+440,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+441,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+442,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+443,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+444,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+445,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+446,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+447,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+448,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+449,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+450,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+451,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U])));
    bufp->fullIData(oldp+452,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+453,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+454,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+455,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+456,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+457,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+458,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+459,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+460,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+461,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+462,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+463,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+464,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+465,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U])));
    bufp->fullIData(oldp+466,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+467,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+468,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+469,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+470,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+471,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+472,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+473,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+474,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+475,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+476,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+477,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+478,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+479,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U])));
    bufp->fullIData(oldp+480,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+481,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+482,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+483,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+484,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+485,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+486,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+487,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+488,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+489,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+490,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+491,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+492,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+493,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U])));
    bufp->fullIData(oldp+494,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+495,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+496,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+497,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+498,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+499,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+500,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+501,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+502,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+503,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+504,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+505,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+506,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+507,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][0U])));
    bufp->fullIData(oldp+508,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+509,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+510,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+511,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+512,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+513,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+514,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+515,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+516,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+517,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+518,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+519,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+520,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+521,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][0U])));
    bufp->fullIData(oldp+522,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+523,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+524,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+525,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+526,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+527,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+528,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+529,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+530,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+531,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+532,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+533,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+534,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+535,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][0U])));
    bufp->fullIData(oldp+536,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+537,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+538,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+539,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+540,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+541,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+542,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+543,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+544,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+545,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+546,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+547,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+548,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+549,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][0U])));
    bufp->fullIData(oldp+550,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+551,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+552,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+553,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+554,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+555,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+556,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+557,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+558,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+559,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+560,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+561,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+562,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+563,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][0U])));
    bufp->fullIData(oldp+564,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][3U] 
                                << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                          >> 0x0000001fU))),32);
    bufp->fullCData(oldp+565,((3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                     >> 0x0000001dU))),2);
    bufp->fullCData(oldp+566,((0x0000001fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                              >> 0x00000018U))),5);
    bufp->fullCData(oldp+567,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                              >> 0x00000012U))),6);
    bufp->fullBit(oldp+568,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                   >> 0x00000011U))));
    bufp->fullCData(oldp+569,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                              >> 0x0000000bU))),6);
    bufp->fullBit(oldp+570,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                   >> 0x0000000aU))));
    bufp->fullCData(oldp+571,((0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                              >> 4U))),6);
    bufp->fullIData(oldp+572,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][1U] 
                                                   >> 4U))),32);
    bufp->fullBit(oldp+573,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][1U] 
                                   >> 3U))));
    bufp->fullIData(oldp+574,(((vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][1U] 
                                << 0x0000001dU) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][0U] 
                                                   >> 3U))),32);
    bufp->fullBit(oldp+575,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+576,((1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+577,((1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][0U])));
    bufp->fullBit(oldp+578,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0]));
    bufp->fullBit(oldp+579,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1]));
    bufp->fullCData(oldp+580,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated),2);
    bufp->fullCData(oldp+581,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en),2);
    bufp->fullCData(oldp+582,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0]),5);
    bufp->fullCData(oldp+583,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1]),5);
    bufp->fullCData(oldp+584,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0]),4);
    bufp->fullCData(oldp+585,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1]),4);
    bufp->fullCData(oldp+586,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched),2);
    bufp->fullCData(oldp+587,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en),2);
    bufp->fullCData(oldp+588,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0]),4);
    bufp->fullCData(oldp+589,(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1]),4);
    bufp->fullBit(oldp+590,(vlSelfRef.tb_dispatch__DOT__clk));
    bufp->fullBit(oldp+591,(vlSelfRef.tb_dispatch__DOT__rst));
    bufp->fullIData(oldp+592,(vlSelfRef.tb_dispatch__DOT__cycle_count),32);
    bufp->fullBit(oldp+593,(vlSelfRef.tb_dispatch__DOT__disp_is_store));
    bufp->fullCData(oldp+594,(vlSelfRef.tb_dispatch__DOT__disp_sdq_marker),5);
}
