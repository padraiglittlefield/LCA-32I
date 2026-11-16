// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_data_cache.h for the primary calling header

#ifndef VERILATED_VTB_DATA_CACHE___024ROOT_H_
#define VERILATED_VTB_DATA_CACHE___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_data_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_data_cache___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_data_cache__DOT__clk;
    CData/*0:0*/ tb_data_cache__DOT__rst;
    CData/*0:0*/ tb_data_cache__DOT__wr_en;
    CData/*0:0*/ tb_data_cache__DOT__is_repair_i;
    CData/*0:0*/ tb_data_cache__DOT__is_repair_dirty_i;
    CData/*0:0*/ tb_data_cache__DOT__rd_en;
    CData/*0:0*/ tb_data_cache__DOT__wb_evicted_en;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_data_cache__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_data_cache__DOT__wr_addr_i;
    IData/*31:0*/ tb_data_cache__DOT__rd_addr_i;
    IData/*23:0*/ tb_data_cache__DOT__dut__DOT__write_tag_block;
    IData/*31:0*/ tb_data_cache__DOT__dut__DOT__read_data;
    IData/*31:0*/ __VactIterCount;
    VlWide<4>/*127:0*/ tb_data_cache__DOT__wr_data_i;
    VlWide<4>/*127:0*/ tb_data_cache__DOT__wb_evicted_block;
    VlUnpacked<VlWide<4>/*127:0*/, 64> tb_data_cache__DOT__dut__DOT__data_array;
    VlUnpacked<IData/*23:0*/, 64> tb_data_cache__DOT__dut__DOT__tag_array;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtb_data_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_data_cache___024root(Vtb_data_cache__Syms* symsp, const char* namep);
    ~Vtb_data_cache___024root();
    VL_UNCOPYABLE(Vtb_data_cache___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
