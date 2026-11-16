// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dispatch.h for the primary calling header

#ifndef VERILATED_VTB_DISPATCH___024ROOT_H_
#define VERILATED_VTB_DISPATCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_dispatch_CORE_PKG;


class Vtb_dispatch__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dispatch___024root final {
  public:
    // CELLS
    Vtb_dispatch_CORE_PKG* __PVT__CORE_PKG;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_dispatch__DOT__clk;
        CData/*0:0*/ tb_dispatch__DOT__rst;
        CData/*0:0*/ tb_dispatch__DOT__stall;
        CData/*0:0*/ tb_dispatch__DOT__flush;
        CData/*3:0*/ tb_dispatch__DOT__disp_ldq_idx;
        CData/*3:0*/ tb_dispatch__DOT__disp_sdq_idx;
        CData/*0:0*/ tb_dispatch__DOT__ldq_full;
        CData/*0:0*/ tb_dispatch__DOT__sdq_full;
        CData/*0:0*/ tb_dispatch__DOT__disp_vld;
        CData/*0:0*/ tb_dispatch__DOT__disp_is_store;
        CData/*4:0*/ tb_dispatch__DOT__disp_sdq_marker;
        CData/*0:0*/ tb_dispatch__DOT__dut__DOT__dispatch_stall;
        CData/*3:0*/ tb_dispatch__DOT__dut__DOT__pipe_free;
        CData/*4:0*/ tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr;
        CData/*4:0*/ tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr;
        CData/*1:0*/ tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated;
        CData/*1:0*/ tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en;
        CData/*1:0*/ tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched;
        CData/*1:0*/ tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_dispatch__DOT__cycle_count;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__rename_vld;
        VlUnpacked<VlWide<4>/*126:0*/, 2> tb_dispatch__DOT__rename_disp_pkt;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__instr_queue_full;
        VlUnpacked<VlWide<4>/*127:0*/, 4> tb_dispatch__DOT__disp_pkt;
        VlUnpacked<CData/*0:0*/, 4> tb_dispatch__DOT__disp_valid;
        VlUnpacked<SData/*15:0*/, 4> tb_dispatch__DOT__dependency_mask;
        VlUnpacked<CData/*1:0*/, 4> tb_dispatch__DOT__rs_entry_idx;
        VlUnpacked<CData/*0:0*/, 4> tb_dispatch__DOT__rs_full;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__rob_fire_valid;
        VlUnpacked<CData/*4:0*/, 2> tb_dispatch__DOT__rob_dst_reg;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__rob_wb_en;
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__rob_entry_idx;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__rob_full;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__rename_vld_i;
        VlUnpacked<VlWide<4>/*126:0*/, 2> tb_dispatch__DOT__dut__DOT__rename_pkt_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__instr_queue_full_o;
        VlUnpacked<VlWide<4>/*127:0*/, 4> tb_dispatch__DOT__dut__DOT__disp_pkt_o;
        VlUnpacked<CData/*0:0*/, 4> tb_dispatch__DOT__dut__DOT__disp_valid_o;
        VlUnpacked<SData/*15:0*/, 4> tb_dispatch__DOT__dut__DOT__dependency_mask_o;
        VlUnpacked<CData/*1:0*/, 4> tb_dispatch__DOT__dut__DOT__rs_entry_idx_i;
        VlUnpacked<CData/*0:0*/, 4> tb_dispatch__DOT__dut__DOT__rs_full_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__rob_fire_valid_o;
        VlUnpacked<CData/*4:0*/, 2> tb_dispatch__DOT__dut__DOT__rob_dst_reg_o;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__rob_wb_en_o;
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__dut__DOT__rob_entry_idx_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__rob_full_i;
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o;
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__instr_vld;
        VlUnpacked<VlWide<4>/*126:0*/, 2> tb_dispatch__DOT__dut__DOT__instr_pkt;
        VlUnpacked<VlWide<4>/*127:0*/, 2> tb_dispatch__DOT__dut__DOT__new_disp_pkt;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i;
        VlUnpacked<CData/*1:0*/, 2> tb_dispatch__DOT__dut__DOT__required_fu;
        VlUnpacked<CData/*1:0*/, 2> tb_dispatch__DOT__dut__DOT__assigned_pipe;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__assignment_vld;
    };
    struct {
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__dut__DOT__pipe_claimed;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__fire_vld;
        VlUnpacked<CData/*5:0*/, 2> tb_dispatch__DOT__dut__DOT__dm_dst_preg;
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__dut__DOT__dm_fire_loc;
        VlUnpacked<CData/*5:0*/, 2> tb_dispatch__DOT__dut__DOT__dm_src1_preg;
        VlUnpacked<CData/*5:0*/, 2> tb_dispatch__DOT__dut__DOT__dm_src2_preg;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__dm_src1_vld;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__dm_src2_vld;
        VlUnpacked<SData/*15:0*/, 2> tb_dispatch__DOT__dut__DOT__dm_dependency_mask;
        VlUnpacked<CData/*0:0*/, 4> tb_dispatch__DOT__dut__DOT__dm_exec_vld;
        VlUnpacked<CData/*5:0*/, 4> tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg;
        VlUnpacked<SData/*15:0*/, 2> tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i;
        VlUnpacked<CData/*5:0*/, 2> tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i;
        VlUnpacked<CData/*5:0*/, 2> tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i;
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i;
        VlUnpacked<CData/*5:0*/, 2> tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_vld_i;
        VlUnpacked<VlWide<4>/*126:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o;
        VlUnpacked<VlWide<4>/*126:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o;
        VlUnpacked<VlWide<4>/*126:0*/, 16> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full;
        VlUnpacked<CData/*4:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr;
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx;
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i;
        VlUnpacked<CData/*5:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i;
        VlUnpacked<CData/*3:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i;
        VlUnpacked<CData/*5:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i;
        VlUnpacked<CData/*5:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i;
        VlUnpacked<CData/*0:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i;
        VlUnpacked<SData/*15:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o;
        VlUnpacked<CData/*0:0*/, 4> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i;
        VlUnpacked<CData/*5:0*/, 4> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i;
        VlUnpacked<CData/*4:0*/, 64> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt;
        VlUnpacked<CData/*4:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry;
        VlUnpacked<CData/*4:0*/, 2> tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h04a12510__0;

    // INTERNAL VARIABLES
    Vtb_dispatch__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_dispatch___024root(Vtb_dispatch__Syms* symsp, const char* namep);
    ~Vtb_dispatch___024root();
    VL_UNCOPYABLE(Vtb_dispatch___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
