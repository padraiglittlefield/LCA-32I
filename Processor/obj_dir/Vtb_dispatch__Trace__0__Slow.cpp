// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_dispatch__Syms.h"


VL_ATTR_COLD void Vtb_dispatch___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_dispatch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_dispatch___024root__trace_init_sub__TOP__0(Vtb_dispatch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_dispatch___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_dispatch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+188,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+184,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+190,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+190,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+191,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rename_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+193+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_disp_pkt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+195,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+199,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_queue_full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+203,0,"disp_ldq_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+204,0,"disp_sdq_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+205,0,"ldq_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"sdq_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"disp_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"disp_is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"disp_store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"disp_sdq_marker",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+211,0,"disp_rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("disp_pkt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+3,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+7,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+11,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+15,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("disp_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dependency_mask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_entry_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+212+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+216+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_fire_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_dst_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+29+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wb_en", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_entry_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+220+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+222+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+184,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rename_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+193+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_pkt_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+195,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+199,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_queue_full_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("disp_pkt_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+3,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+7,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+11,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+15,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("disp_valid_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dependency_mask_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_entry_idx_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+212+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_full_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+216+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_fire_valid_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_dst_reg_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+29+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_wb_en_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_entry_idx_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+220+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_full_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+222+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+203,0,"disp_ldq_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+204,0,"disp_sdq_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+205,0,"ldq_full_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"sdq_full_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"disp_vld_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"disp_is_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"disp_store_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"disp_sdq_marker_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+211,0,"disp_rob_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+224,0,"dispatch_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("instr_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_pkt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+35,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+39,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->popPrefix();
    tracep->pushPrefix("new_disp_pkt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+43,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+47,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("required_fu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+51,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+53,0,"pipe_free",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("assigned_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+54+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("assignment_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+56+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("pipe_claimed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+58+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("fire_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+60+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_dst_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+62+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_fire_loc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+64+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_src1_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+66+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_src2_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+68+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_src1_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+70+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_src2_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+72+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_dependency_mask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_exec_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+225+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dm_exec_dst_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+229+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dmt_update", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_disp_pkt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pipe_steering", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pipeline_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+77,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+78,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dmt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+184,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fire_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+79+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dst_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+81+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("fire_loc_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+83+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("src1_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+85+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("src1_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+87+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("src2_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("src2_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+91+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dependency_mask_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("exec_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+234+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("exec_dst_preg_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+238+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("src1_dmt_entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+95,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("src2_dmt_entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+97,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+98,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("build_dependency_map", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+242,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("write_dependency", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+99,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_instr_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+243,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rename_vld_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+193+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_pkt_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+195,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+199,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->popPrefix();
    tracep->pushPrefix("full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dispatch_en_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+102+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_vld_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_pkt_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+35,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+39,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->popPrefix();
    tracep->declBus(c+244,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"head_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+106,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+110,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+114,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+118,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+122,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+126,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+130,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+134,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+138,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+142,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+146,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+150,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+154,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+158,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+162,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->declArray(c+166,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 126,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_queue_full", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+170+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+172,0,"num_allocated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+173,0,"alloc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("alloc_ptr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+174+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alloc_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+176+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+178,0,"num_dispatched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+179,0,"dispatch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dispatch_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+180+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_dispatch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+245,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+248,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+248,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+248,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+249,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+243,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_init_top(Vtb_dispatch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_init_top\n"); );
    // Body
    Vtb_dispatch___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_dispatch___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_dispatch___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_dispatch___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_dispatch___024root__trace_register(Vtb_dispatch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_dispatch___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_dispatch___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_dispatch___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_dispatch___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_const_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_dispatch___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_const_0\n"); );
    // Init
    Vtb_dispatch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dispatch___024root*>(voidSelf);
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_dispatch___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_const_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+187,(0x14U),32);
    bufp->fullDouble(oldp+188,(5.00000000000000000e-01));
    bufp->fullIData(oldp+190,(0U),32);
    bufp->fullBit(oldp+191,(vlSelf->tb_dispatch__DOT__stall));
    bufp->fullBit(oldp+192,(vlSelf->tb_dispatch__DOT__flush));
    bufp->fullBit(oldp+193,(vlSelf->tb_dispatch__DOT__rename_vld[0]));
    bufp->fullBit(oldp+194,(vlSelf->tb_dispatch__DOT__rename_vld[1]));
    bufp->fullWData(oldp+195,(vlSelf->tb_dispatch__DOT__rename_disp_pkt
                              [0U]),127);
    bufp->fullWData(oldp+199,(vlSelf->tb_dispatch__DOT__rename_disp_pkt
                              [1U]),127);
    bufp->fullCData(oldp+203,(vlSelf->tb_dispatch__DOT__disp_ldq_idx),4);
    bufp->fullCData(oldp+204,(vlSelf->tb_dispatch__DOT__disp_sdq_idx),4);
    bufp->fullBit(oldp+205,(vlSelf->tb_dispatch__DOT__ldq_full));
    bufp->fullBit(oldp+206,(vlSelf->tb_dispatch__DOT__sdq_full));
    bufp->fullBit(oldp+207,(vlSelf->tb_dispatch__DOT__disp_vld));
    bufp->fullBit(oldp+208,(vlSelf->tb_dispatch__DOT__disp_is_store));
    bufp->fullIData(oldp+209,(vlSelf->tb_dispatch__DOT__disp_store_data),32);
    bufp->fullCData(oldp+210,(vlSelf->tb_dispatch__DOT__disp_sdq_marker),5);
    bufp->fullCData(oldp+211,(vlSelf->tb_dispatch__DOT__disp_rob_idx),4);
    bufp->fullCData(oldp+212,(vlSelf->tb_dispatch__DOT__rs_entry_idx[0]),2);
    bufp->fullCData(oldp+213,(vlSelf->tb_dispatch__DOT__rs_entry_idx[1]),2);
    bufp->fullCData(oldp+214,(vlSelf->tb_dispatch__DOT__rs_entry_idx[2]),2);
    bufp->fullCData(oldp+215,(vlSelf->tb_dispatch__DOT__rs_entry_idx[3]),2);
    bufp->fullBit(oldp+216,(vlSelf->tb_dispatch__DOT__rs_full[0]));
    bufp->fullBit(oldp+217,(vlSelf->tb_dispatch__DOT__rs_full[1]));
    bufp->fullBit(oldp+218,(vlSelf->tb_dispatch__DOT__rs_full[2]));
    bufp->fullBit(oldp+219,(vlSelf->tb_dispatch__DOT__rs_full[3]));
    bufp->fullCData(oldp+220,(vlSelf->tb_dispatch__DOT__rob_entry_idx[0]),4);
    bufp->fullCData(oldp+221,(vlSelf->tb_dispatch__DOT__rob_entry_idx[1]),4);
    bufp->fullBit(oldp+222,(vlSelf->tb_dispatch__DOT__rob_full[0]));
    bufp->fullBit(oldp+223,(vlSelf->tb_dispatch__DOT__rob_full[1]));
    bufp->fullBit(oldp+224,(vlSelf->tb_dispatch__DOT__dut__DOT__dispatch_stall));
    bufp->fullBit(oldp+225,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_vld[0]));
    bufp->fullBit(oldp+226,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_vld[1]));
    bufp->fullBit(oldp+227,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_vld[2]));
    bufp->fullBit(oldp+228,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_vld[3]));
    bufp->fullCData(oldp+229,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[0]),6);
    bufp->fullCData(oldp+230,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[1]),6);
    bufp->fullCData(oldp+231,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[2]),6);
    bufp->fullCData(oldp+232,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[3]),6);
    bufp->fullIData(oldp+233,(2U),32);
    bufp->fullBit(oldp+234,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[0]));
    bufp->fullBit(oldp+235,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[1]));
    bufp->fullBit(oldp+236,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[2]));
    bufp->fullBit(oldp+237,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[3]));
    bufp->fullCData(oldp+238,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[0]),6);
    bufp->fullCData(oldp+239,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[1]),6);
    bufp->fullCData(oldp+240,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[2]),6);
    bufp->fullCData(oldp+241,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[3]),6);
    bufp->fullIData(oldp+242,(1U),32);
    bufp->fullIData(oldp+243,(0x10U),32);
    bufp->fullIData(oldp+244,(4U),32);
    bufp->fullIData(oldp+245,(2U),32);
    bufp->fullIData(oldp+246,(0x40U),32);
    bufp->fullIData(oldp+247,(0x20U),32);
    bufp->fullCData(oldp+248,(0U),2);
    bufp->fullCData(oldp+249,(1U),2);
    bufp->fullIData(oldp+250,(0x80U),32);
    bufp->fullIData(oldp+251,(6U),32);
    bufp->fullIData(oldp+252,(0x16U),32);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_full_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_dispatch___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_full_0\n"); );
    // Init
    Vtb_dispatch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dispatch___024root*>(voidSelf);
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_dispatch___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_dispatch___024root__trace_full_0_sub_0(Vtb_dispatch___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_dispatch__DOT__instr_queue_full[0]));
    bufp->fullBit(oldp+2,(vlSelf->tb_dispatch__DOT__instr_queue_full[1]));
    bufp->fullWData(oldp+3,(vlSelf->tb_dispatch__DOT__disp_pkt
                            [0U]),128);
    bufp->fullWData(oldp+7,(vlSelf->tb_dispatch__DOT__disp_pkt
                            [1U]),128);
    bufp->fullWData(oldp+11,(vlSelf->tb_dispatch__DOT__disp_pkt
                             [2U]),128);
    bufp->fullWData(oldp+15,(vlSelf->tb_dispatch__DOT__disp_pkt
                             [3U]),128);
    bufp->fullBit(oldp+19,(vlSelf->tb_dispatch__DOT__disp_valid[0]));
    bufp->fullBit(oldp+20,(vlSelf->tb_dispatch__DOT__disp_valid[1]));
    bufp->fullBit(oldp+21,(vlSelf->tb_dispatch__DOT__disp_valid[2]));
    bufp->fullBit(oldp+22,(vlSelf->tb_dispatch__DOT__disp_valid[3]));
    bufp->fullSData(oldp+23,(vlSelf->tb_dispatch__DOT__dependency_mask[0]),16);
    bufp->fullSData(oldp+24,(vlSelf->tb_dispatch__DOT__dependency_mask[1]),16);
    bufp->fullSData(oldp+25,(vlSelf->tb_dispatch__DOT__dependency_mask[2]),16);
    bufp->fullSData(oldp+26,(vlSelf->tb_dispatch__DOT__dependency_mask[3]),16);
    bufp->fullBit(oldp+27,(vlSelf->tb_dispatch__DOT__rob_fire_valid[0]));
    bufp->fullBit(oldp+28,(vlSelf->tb_dispatch__DOT__rob_fire_valid[1]));
    bufp->fullCData(oldp+29,(vlSelf->tb_dispatch__DOT__rob_dst_reg[0]),5);
    bufp->fullCData(oldp+30,(vlSelf->tb_dispatch__DOT__rob_dst_reg[1]),5);
    bufp->fullBit(oldp+31,(vlSelf->tb_dispatch__DOT__rob_wb_en[0]));
    bufp->fullBit(oldp+32,(vlSelf->tb_dispatch__DOT__rob_wb_en[1]));
    bufp->fullBit(oldp+33,(vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[0]));
    bufp->fullBit(oldp+34,(vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[1]));
    bufp->fullWData(oldp+35,(vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                             [0U]),127);
    bufp->fullWData(oldp+39,(vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                             [1U]),127);
    bufp->fullWData(oldp+43,(vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
                             [0U]),128);
    bufp->fullWData(oldp+47,(vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
                             [1U]),128);
    bufp->fullCData(oldp+51,(vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                             [0U]),2);
    bufp->fullCData(oldp+52,(vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                             [1U]),2);
    bufp->fullCData(oldp+53,(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free),4);
    bufp->fullCData(oldp+54,(vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0]),2);
    bufp->fullCData(oldp+55,(vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1]),2);
    bufp->fullBit(oldp+56,(vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0]));
    bufp->fullBit(oldp+57,(vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1]));
    bufp->fullCData(oldp+58,(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[0]),4);
    bufp->fullCData(oldp+59,(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[1]),4);
    bufp->fullBit(oldp+60,(vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[0]));
    bufp->fullBit(oldp+61,(vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[1]));
    bufp->fullCData(oldp+62,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[0]),6);
    bufp->fullCData(oldp+63,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[1]),6);
    bufp->fullCData(oldp+64,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[0]),4);
    bufp->fullCData(oldp+65,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[1]),4);
    bufp->fullCData(oldp+66,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[0]),6);
    bufp->fullCData(oldp+67,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[1]),6);
    bufp->fullCData(oldp+68,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[0]),6);
    bufp->fullCData(oldp+69,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[1]),6);
    bufp->fullBit(oldp+70,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[0]));
    bufp->fullBit(oldp+71,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[1]));
    bufp->fullBit(oldp+72,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[0]));
    bufp->fullBit(oldp+73,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[1]));
    bufp->fullSData(oldp+74,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[0]),16);
    bufp->fullSData(oldp+75,(vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[1]),16);
    bufp->fullIData(oldp+76,(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_steering__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+77,(vlSelf->tb_dispatch__DOT__dut__DOT__pipeline_register__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+78,(vlSelf->tb_dispatch__DOT__dut__DOT__pipeline_register__DOT__unnamedblk7__DOT__i),32);
    bufp->fullBit(oldp+79,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0]));
    bufp->fullBit(oldp+80,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[1]));
    bufp->fullCData(oldp+81,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0]),6);
    bufp->fullCData(oldp+82,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1]),6);
    bufp->fullCData(oldp+83,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0]),4);
    bufp->fullCData(oldp+84,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[1]),4);
    bufp->fullCData(oldp+85,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0]),6);
    bufp->fullCData(oldp+86,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1]),6);
    bufp->fullBit(oldp+87,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0]));
    bufp->fullBit(oldp+88,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1]));
    bufp->fullCData(oldp+89,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0]),6);
    bufp->fullCData(oldp+90,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1]),6);
    bufp->fullBit(oldp+91,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0]));
    bufp->fullBit(oldp+92,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1]));
    bufp->fullSData(oldp+93,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0]),16);
    bufp->fullSData(oldp+94,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1]),16);
    bufp->fullCData(oldp+95,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
                             [0U]),5);
    bufp->fullCData(oldp+96,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
                             [1U]),5);
    bufp->fullCData(oldp+97,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
                             [0U]),5);
    bufp->fullCData(oldp+98,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
                             [1U]),5);
    bufp->fullIData(oldp+99,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+100,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+101,(vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk5__DOT__i),32);
    bufp->fullBit(oldp+102,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0]));
    bufp->fullBit(oldp+103,(vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1]));
    bufp->fullCData(oldp+104,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr),5);
    bufp->fullCData(oldp+105,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr),5);
    bufp->fullWData(oldp+106,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [0U]),127);
    bufp->fullWData(oldp+110,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [1U]),127);
    bufp->fullWData(oldp+114,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [2U]),127);
    bufp->fullWData(oldp+118,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [3U]),127);
    bufp->fullWData(oldp+122,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [4U]),127);
    bufp->fullWData(oldp+126,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [5U]),127);
    bufp->fullWData(oldp+130,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [6U]),127);
    bufp->fullWData(oldp+134,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [7U]),127);
    bufp->fullWData(oldp+138,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [8U]),127);
    bufp->fullWData(oldp+142,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [9U]),127);
    bufp->fullWData(oldp+146,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [0xaU]),127);
    bufp->fullWData(oldp+150,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [0xbU]),127);
    bufp->fullWData(oldp+154,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [0xcU]),127);
    bufp->fullWData(oldp+158,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [0xdU]),127);
    bufp->fullWData(oldp+162,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [0xeU]),127);
    bufp->fullWData(oldp+166,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                              [0xfU]),127);
    bufp->fullBit(oldp+170,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0]));
    bufp->fullBit(oldp+171,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1]));
    bufp->fullCData(oldp+172,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated),2);
    bufp->fullCData(oldp+173,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en),2);
    bufp->fullCData(oldp+174,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0]),5);
    bufp->fullCData(oldp+175,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1]),5);
    bufp->fullCData(oldp+176,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0]),4);
    bufp->fullCData(oldp+177,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1]),4);
    bufp->fullCData(oldp+178,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched),2);
    bufp->fullCData(oldp+179,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en),2);
    bufp->fullCData(oldp+180,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0]),4);
    bufp->fullCData(oldp+181,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1]),4);
    bufp->fullIData(oldp+182,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+183,(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__unnamedblk5__DOT__i),32);
    bufp->fullBit(oldp+184,(vlSelf->tb_dispatch__DOT__clk));
    bufp->fullBit(oldp+185,(vlSelf->tb_dispatch__DOT__rst));
    bufp->fullIData(oldp+186,(vlSelf->tb_dispatch__DOT__cycle_count),32);
}
