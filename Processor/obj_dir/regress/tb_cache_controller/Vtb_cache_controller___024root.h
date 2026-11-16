// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cache_controller.h for the primary calling header

#ifndef VERILATED_VTB_CACHE_CONTROLLER___024ROOT_H_
#define VERILATED_VTB_CACHE_CONTROLLER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_cache_controller___024unit;


class Vtb_cache_controller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cache_controller___024root final {
  public:
    // CELLS
    Vtb_cache_controller___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_cache_controller__DOT__clk;
        CData/*0:0*/ tb_cache_controller__DOT__rst;
        CData/*0:0*/ tb_cache_controller__DOT__flush;
        CData/*0:0*/ tb_cache_controller__DOT__lsu_req_vld_i;
        CData/*0:0*/ tb_cache_controller__DOT__lsu_req_wr_rd_i;
        CData/*3:0*/ tb_cache_controller__DOT__lsu_req_rob_idx_i;
        CData/*0:0*/ tb_cache_controller__DOT__mem_req_vld_o;
        CData/*0:0*/ tb_cache_controller__DOT__mem_resp_vld_i;
        CData/*0:0*/ tb_cache_controller__DOT__mem_wb_vld_o;
        CData/*0:0*/ tb_cache_controller__DOT__cmt_ld_vld_o;
        CData/*3:0*/ tb_cache_controller__DOT__cmt_rob_idx_o;
        CData/*0:0*/ tb_cache_controller__DOT__stall_controller_o;
        CData/*1:0*/ tb_cache_controller__DOT__dut__DOT__repair_state;
        CData/*1:0*/ tb_cache_controller__DOT__dut__DOT__repair_state_next;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__wr_en;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__is_repair;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__req_vld_reg;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg;
        CData/*3:0*/ tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__req_hit;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__store_wr_en;
        CData/*1:0*/ tb_cache_controller__DOT__dut__DOT__write_block_offset;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__ld_mshr_full;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__st_mshr_full;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__mshr_repair_req;
        CData/*3:0*/ tb_cache_controller__DOT__dut__DOT__ctrl_repair_rob_idx_reg;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store;
        CData/*1:0*/ tb_cache_controller__DOT__dut__DOT__cmt_block_offset;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg;
        CData/*3:0*/ tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0;
        CData/*7:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free;
        CData/*2:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found;
        CData/*7:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free;
        CData/*2:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld;
        CData/*0:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st;
        CData/*2:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr;
        CData/*2:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg;
        CData/*7:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req;
        CData/*7:0*/ tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req;
        CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v0;
        CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v8;
        CData/*2:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16;
        CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16;
        CData/*2:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17;
        CData/*2:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v18;
        CData/*3:0*/ __VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v19;
        CData/*2:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v19;
        CData/*2:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20;
        CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20;
        CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v0;
        CData/*2:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8;
        CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8;
        CData/*2:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v9;
        CData/*2:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v10;
        CData/*2:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v11;
        CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v11;
        CData/*0:0*/ __VstlFirstIteration;
    };
    struct {
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_vld_o__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_rob_idx_o__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_req_vld_o__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_wb_vld_o__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_cache_controller__DOT__cycle_count;
        IData/*31:0*/ tb_cache_controller__DOT__lsu_req_addr_i;
        IData/*31:0*/ tb_cache_controller__DOT__lsu_req_data_i;
        VlWide<4>/*127:0*/ tb_cache_controller__DOT__mem_resp_data_i;
        IData/*31:0*/ tb_cache_controller__DOT__cmt_ld_data_o;
        IData/*31:0*/ tb_cache_controller__DOT__dut__DOT__wr_addr_wire;
        IData/*23:0*/ tb_cache_controller__DOT__dut__DOT__rd_tag_reg;
        IData/*31:0*/ tb_cache_controller__DOT__dut__DOT__req_addr_reg;
        IData/*31:0*/ tb_cache_controller__DOT__dut__DOT__req_st_data_reg;
        IData/*31:0*/ tb_cache_controller__DOT__dut__DOT__write_addr;
        IData/*31:0*/ tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg;
        IData/*31:0*/ tb_cache_controller__DOT__dut__DOT__ctrl_repair_data_reg;
        VlWide<4>/*127:0*/ tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg;
        IData/*31:0*/ tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg;
        IData/*31:0*/ tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg;
        IData/*23:0*/ tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__write_tag_block;
        IData/*31:0*/ tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__read_data;
        IData/*31:0*/ __VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17;
        IData/*31:0*/ __VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v9;
        IData/*31:0*/ __VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v10;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_data_o__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__cycle_count__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg__0;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlWide<4>/*127:0*/ tb_cache_controller__DOT__dut__DOT__wr_data_wire;
        VlWide<4>/*127:0*/ tb_cache_controller__DOT__dut__DOT__rd_data_reg;
        VlWide<4>/*127:0*/ tb_cache_controller__DOT__dut__DOT__write_block;
        VlWide<4>/*127:0*/ tb_cache_controller__DOT__dut__DOT__repair_wr_data;
        VlWide<4>/*127:0*/ tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block;
        VlWide<4>/*127:0*/ __Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0;
        VlUnpacked<VlWide<4>/*127:0*/, 64> tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array;
        VlUnpacked<IData/*23:0*/, 64> tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array;
        VlUnpacked<VlWide<3>/*68:0*/, 8> tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld;
        VlUnpacked<VlWide<3>/*64:0*/, 8> tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8138e795__0;
    VlTriggerScheduler __VtrigSched_h8138e465__0;

    // INTERNAL VARIABLES
    Vtb_cache_controller__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cache_controller___024root(Vtb_cache_controller__Syms* symsp, const char* namep);
    ~Vtb_cache_controller___024root();
    VL_UNCOPYABLE(Vtb_cache_controller___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
