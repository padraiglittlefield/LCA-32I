// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_cache_controller__Syms.h"


VL_ATTR_COLD void Vtb_cache_controller___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_cache_controller___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_init_sub__TOP__0(Vtb_cache_controller___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_init_sub__TOP__0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_cache_controller___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_cache_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+168,0,"DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+170,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+170,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"lsu_req_vld_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"lsu_req_wr_rd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"lsu_req_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"lsu_req_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"lsu_req_rob_idx_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+46,0,"mem_req_vld_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"mem_req_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"mem_resp_vld_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8,0,"mem_resp_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+48,0,"mem_wb_vld_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+49,0,"mem_wb_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+53,0,"cmt_ld_vld_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"cmt_ld_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"cmt_rob_idx_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+56,0,"stall_controller_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"lsu_req_vld_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"lsu_req_wr_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"lsu_req_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"lsu_req_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"lsu_req_rob_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+46,0,"mem_req_vld_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"mem_req_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"mem_resp_vld_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8,0,"mem_resp_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+48,0,"mem_wb_vld_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+49,0,"mem_wb_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+53,0,"cmt_ld_vld_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"cmt_ld_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"cmt_rob_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+56,0,"stall_controller_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"repair_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+166,0,"repair_state_next",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("rd_data_wire", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+12,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_tag_wire", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+16,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+17,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wr_data_wire", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+58,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->declBus(c+62,0,"wr_addr_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"is_repair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_repair_dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"stall_controller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rd_data_reg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+19,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_tag_reg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+23,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+24,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+26,0,"req_vld_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"req_rd_wr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"req_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"req_st_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"req_rob_idx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"req_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+32,0,"req_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"store_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("write_block", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+67,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->declBus(c+171,0,"write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"write_block_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+33,0,"ld_alloc_mshr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"st_alloc_mshr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"ld_mshr_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"st_mshr_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"mshr_repair_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"mshr_repair_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"mshr_repair_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"mshr_repair_rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+78,0,"mshr_repair_is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"ctrl_repair_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"ctrl_repair_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"ctrl_repair_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"ctrl_repair_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"ctrl_repair_rob_idx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+65,0,"ctrl_repair_is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+82,0,"mem_resp_block_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("repair_wr_data", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+86,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->declBus(c+47,0,"repair_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"cmt_block_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"lsu_req_vld_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"lsu_req_wr_rd_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"lsu_req_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"lsu_req_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"lsu_req_rob_idx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("mshr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"ld_alloc_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"ld_alloc_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"ld_alloc_rob_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+34,0,"st_alloc_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"st_alloc_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"st_alloc_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"ld_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"st_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"repair_complete_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"repair_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"repair_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"repair_req_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"repair_req_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"repair_req_rob_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+78,0,"repair_is_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mshr_ld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+91,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+95,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+99,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+103,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+107,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+111,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+115,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+119,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"rob_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mshr_st", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+123,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+126,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+129,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+132,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+135,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+141,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+144,0,"valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+147,0,"mshr_ld_free",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"ld_alloc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+149,0,"ld_alloc_idx_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"mshr_st_free",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"st_alloc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+152,0,"st_alloc_idx_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"repairing_ld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"repairing_st",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"start_repair_ld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"start_repair_st",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"repair_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"repair_ptr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"ld_repair_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"st_repair_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_data_cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"is_repair_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_repair_dirty_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"wr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wr_data_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+58,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->declBit(c+35,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rd_data_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+12,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_tag_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+16,0,"tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+17,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"dirty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+48,0,"wb_evicted_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wb_evicted_block", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+157,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->declBus(c+161,0,"write_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+162,0,"write_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+163,0,"write_block_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("write_tag_block", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+172,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+173,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+43,0,"read_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+44,0,"read_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+45,0,"read_block_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+175,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_cache_controller___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+176,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+181,0,"[0]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+181,0,"[1]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+181,0,"[2]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+182,0,"[3]",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+180,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_init_top(Vtb_cache_controller___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_init_top\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cache_controller___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_cache_controller___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_cache_controller___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_cache_controller___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_register(Vtb_cache_controller___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_register\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_cache_controller___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_cache_controller___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_cache_controller___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_cache_controller___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_const_0_sub_0(Vtb_cache_controller___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_const_0\n"); );
    // Body
    Vtb_cache_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cache_controller___024root*>(voidSelf);
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_cache_controller___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_const_0_sub_0(Vtb_cache_controller___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_const_0_sub_0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+167,(0x00000014U),32);
    bufp->fullDouble(oldp+168,(5.00000000000000000e-01));
    bufp->fullIData(oldp+170,(0U),32);
    bufp->fullIData(oldp+171,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_addr),32);
    bufp->fullIData(oldp+172,((0x003fffffU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__write_tag_block 
                                              >> 2U))),22);
    bufp->fullBit(oldp+173,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__write_tag_block 
                                   >> 1U))));
    bufp->fullBit(oldp+174,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__write_tag_block)));
    bufp->fullIData(oldp+175,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__read_data),32);
    bufp->fullIData(oldp+176,(2U),32);
    bufp->fullIData(oldp+177,(0x00000040U),32);
    bufp->fullIData(oldp+178,(0x00000020U),32);
    bufp->fullIData(oldp+179,(4U),32);
    bufp->fullIData(oldp+180,(0x00000010U),32);
    bufp->fullCData(oldp+181,(0U),2);
    bufp->fullCData(oldp+182,(1U),2);
    bufp->fullIData(oldp+183,(0x00000080U),32);
    bufp->fullIData(oldp+184,(6U),32);
    bufp->fullIData(oldp+185,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_full_0_sub_0(Vtb_cache_controller___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_full_0\n"); );
    // Body
    Vtb_cache_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cache_controller___024root*>(voidSelf);
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_cache_controller___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_full_0_sub_0(Vtb_cache_controller___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root__trace_full_0_sub_0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_cache_controller__DOT__rst));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_cache_controller__DOT__flush));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i));
    bufp->fullIData(oldp+4,(vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i),32);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_cache_controller__DOT__lsu_req_rob_idx_i),4);
    bufp->fullBit(oldp+7,(vlSelfRef.tb_cache_controller__DOT__mem_resp_vld_i));
    bufp->fullWData(oldp+8,(vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i),128);
    if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg) {
        __Vtemp_2[0U] = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
            [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                             >> 4U))][0U];
        __Vtemp_2[1U] = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
            [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                             >> 4U))][1U];
        __Vtemp_2[2U] = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
            [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                             >> 4U))][2U];
        __Vtemp_2[3U] = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
            [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                             >> 4U))][3U];
    } else {
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
    }
    bufp->fullWData(oldp+12,(__Vtemp_2),128);
    bufp->fullIData(oldp+16,((0x003fffffU & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg)
                                               ? vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                                              [(0x0000003fU 
                                                & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                                   >> 4U))]
                                               : 0U) 
                                             >> 2U))),22);
    bufp->fullBit(oldp+17,((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg)
                                    ? vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                                   [(0x0000003fU & 
                                     (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                      >> 4U))] : 0U) 
                                  >> 1U))));
    bufp->fullBit(oldp+18,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg)
                             ? (1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                                 >> 4U))])
                             : 0U)));
    bufp->fullWData(oldp+19,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg),128);
    bufp->fullIData(oldp+23,((0x003fffffU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
                                             >> 2U))),22);
    bufp->fullBit(oldp+24,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
                                  >> 1U))));
    bufp->fullBit(oldp+25,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg)));
    bufp->fullBit(oldp+26,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_vld_reg));
    bufp->fullBit(oldp+27,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg));
    bufp->fullIData(oldp+28,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_st_data_reg),32);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg),4);
    bufp->fullIData(oldp+31,((vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                              >> 0x0000000aU)),22);
    bufp->fullBit(oldp+32,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit));
    bufp->fullBit(oldp+33,(((~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg)) 
                            & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0))));
    bufp->fullBit(oldp+34,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0) 
                            & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg))));
    bufp->fullBit(oldp+35,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg));
    bufp->fullBit(oldp+36,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg));
    bufp->fullIData(oldp+37,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg),32);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg),4);
    bufp->fullBit(oldp+40,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st));
    bufp->fullCData(oldp+42,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg),3);
    bufp->fullIData(oldp+43,((vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                              >> 0x0000000aU)),22);
    bufp->fullCData(oldp+44,((0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                             >> 4U))),6);
    bufp->fullCData(oldp+45,((3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                    >> 2U))),2);
    bufp->fullBit(oldp+46,(vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o));
    bufp->fullIData(oldp+47,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg),32);
    bufp->fullBit(oldp+48,(vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o));
    bufp->fullWData(oldp+49,(vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block),128);
    bufp->fullBit(oldp+53,(vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o));
    bufp->fullIData(oldp+54,(vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o),32);
    bufp->fullCData(oldp+55,(vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o),4);
    bufp->fullBit(oldp+56,(vlSelfRef.tb_cache_controller__DOT__stall_controller_o));
    bufp->fullCData(oldp+57,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state),2);
    bufp->fullWData(oldp+58,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire),128);
    bufp->fullIData(oldp+62,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire),32);
    bufp->fullBit(oldp+63,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_en));
    bufp->fullBit(oldp+64,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair));
    bufp->fullBit(oldp+65,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store));
    bufp->fullBit(oldp+66,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__store_wr_en));
    bufp->fullWData(oldp+67,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block),128);
    bufp->fullCData(oldp+71,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block_offset),2);
    bufp->fullBit(oldp+72,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ld_mshr_full));
    bufp->fullBit(oldp+73,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__st_mshr_full));
    bufp->fullBit(oldp+74,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr_repair_req));
    bufp->fullIData(oldp+75,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld)
                               ? ((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                                   [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][2U] 
                                   << 0x0000001cU) 
                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                                     [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][1U] 
                                     >> 4U)) : ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st)
                                                 ? vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st
                                                [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][1U]
                                                 : 0U))),32);
    bufp->fullIData(oldp+76,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st)
                               ? vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st
                              [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][0U]
                               : 0U)),32);
    bufp->fullCData(oldp+77,(((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld)
                               ? (0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                                  [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][0U])
                               : 0U)),4);
    bufp->fullBit(oldp+78,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st));
    bufp->fullBit(oldp+79,((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state))));
    bufp->fullIData(oldp+80,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_data_reg),32);
    bufp->fullCData(oldp+81,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_rob_idx_reg),4);
    bufp->fullWData(oldp+82,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg),128);
    bufp->fullWData(oldp+86,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data),128);
    bufp->fullCData(oldp+90,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset),2);
    bufp->fullBit(oldp+91,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] 
                                  >> 4U))));
    bufp->fullIData(oldp+92,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] 
                               << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][1U] 
                                                  >> 4U))),32);
    bufp->fullIData(oldp+93,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][1U] 
                               << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][0U] 
                                                  >> 4U))),32);
    bufp->fullCData(oldp+94,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][0U])),4);
    bufp->fullBit(oldp+95,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] 
                                  >> 4U))));
    bufp->fullIData(oldp+96,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] 
                               << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][1U] 
                                                  >> 4U))),32);
    bufp->fullIData(oldp+97,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][1U] 
                               << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][0U] 
                                                  >> 4U))),32);
    bufp->fullCData(oldp+98,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][0U])),4);
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] 
                                  >> 4U))));
    bufp->fullIData(oldp+100,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][1U] 
                                                   >> 4U))),32);
    bufp->fullIData(oldp+101,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][1U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][0U] 
                                                   >> 4U))),32);
    bufp->fullCData(oldp+102,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][0U])),4);
    bufp->fullBit(oldp+103,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] 
                                   >> 4U))));
    bufp->fullIData(oldp+104,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][1U] 
                                                   >> 4U))),32);
    bufp->fullIData(oldp+105,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][1U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][0U] 
                                                   >> 4U))),32);
    bufp->fullCData(oldp+106,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][0U])),4);
    bufp->fullBit(oldp+107,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U] 
                                   >> 4U))));
    bufp->fullIData(oldp+108,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][1U] 
                                                   >> 4U))),32);
    bufp->fullIData(oldp+109,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][1U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][0U] 
                                                   >> 4U))),32);
    bufp->fullCData(oldp+110,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][0U])),4);
    bufp->fullBit(oldp+111,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] 
                                   >> 4U))));
    bufp->fullIData(oldp+112,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][1U] 
                                                   >> 4U))),32);
    bufp->fullIData(oldp+113,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][1U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][0U] 
                                                   >> 4U))),32);
    bufp->fullCData(oldp+114,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][0U])),4);
    bufp->fullBit(oldp+115,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] 
                                   >> 4U))));
    bufp->fullIData(oldp+116,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][1U] 
                                                   >> 4U))),32);
    bufp->fullIData(oldp+117,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][1U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][0U] 
                                                   >> 4U))),32);
    bufp->fullCData(oldp+118,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][0U])),4);
    bufp->fullBit(oldp+119,((1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] 
                                   >> 4U))));
    bufp->fullIData(oldp+120,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][1U] 
                                                   >> 4U))),32);
    bufp->fullIData(oldp+121,(((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][1U] 
                                << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][0U] 
                                                   >> 4U))),32);
    bufp->fullCData(oldp+122,((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][0U])),4);
    bufp->fullBit(oldp+123,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][2U])));
    bufp->fullIData(oldp+124,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][1U]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][0U]),32);
    bufp->fullBit(oldp+126,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][2U])));
    bufp->fullIData(oldp+127,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][1U]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][0U]),32);
    bufp->fullBit(oldp+129,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][2U])));
    bufp->fullIData(oldp+130,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][1U]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][0U]),32);
    bufp->fullBit(oldp+132,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][2U])));
    bufp->fullIData(oldp+133,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][1U]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][0U]),32);
    bufp->fullBit(oldp+135,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][2U])));
    bufp->fullIData(oldp+136,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][1U]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][0U]),32);
    bufp->fullBit(oldp+138,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][2U])));
    bufp->fullIData(oldp+139,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][1U]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][0U]),32);
    bufp->fullBit(oldp+141,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][2U])));
    bufp->fullIData(oldp+142,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][1U]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][0U]),32);
    bufp->fullBit(oldp+144,((1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][2U])));
    bufp->fullIData(oldp+145,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][1U]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][0U]),32);
    bufp->fullCData(oldp+147,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free),8);
    bufp->fullCData(oldp+148,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx),3);
    bufp->fullBit(oldp+149,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found));
    bufp->fullCData(oldp+150,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free),8);
    bufp->fullCData(oldp+151,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx),3);
    bufp->fullBit(oldp+152,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found));
    bufp->fullBit(oldp+153,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld));
    bufp->fullCData(oldp+154,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr),3);
    bufp->fullCData(oldp+155,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req),8);
    bufp->fullCData(oldp+156,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req),8);
    bufp->fullWData(oldp+157,(vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block),128);
    bufp->fullIData(oldp+161,((vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                               >> 0x0000000aU)),22);
    bufp->fullCData(oldp+162,((0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                              >> 4U))),6);
    bufp->fullCData(oldp+163,((3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                     >> 2U))),2);
    bufp->fullBit(oldp+164,(vlSelfRef.tb_cache_controller__DOT__clk));
    bufp->fullIData(oldp+165,(vlSelfRef.tb_cache_controller__DOT__cycle_count),32);
    bufp->fullCData(oldp+166,(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state_next),2);
}
