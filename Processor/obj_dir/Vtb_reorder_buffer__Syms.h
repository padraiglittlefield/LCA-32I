// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_REORDER_BUFFER__SYMS_H_
#define VERILATED_VTB_REORDER_BUFFER__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_reorder_buffer.h"

// INCLUDE MODULE CLASSES
#include "Vtb_reorder_buffer___024root.h"
#include "Vtb_reorder_buffer___024unit.h"
#include "Vtb_reorder_buffer_reorder_buffer_flush_unit_if.h"
#include "Vtb_reorder_buffer_dispatch_reorder_buffer_if.h"
#include "Vtb_reorder_buffer_execute_reorder_buffer_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_reorder_buffer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_reorder_buffer* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_reorder_buffer___024root   TOP;
    Vtb_reorder_buffer_dispatch_reorder_buffer_if TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__;
    Vtb_reorder_buffer_dispatch_reorder_buffer_if TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__;
    Vtb_reorder_buffer_execute_reorder_buffer_if TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__;
    Vtb_reorder_buffer_execute_reorder_buffer_if TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__;
    Vtb_reorder_buffer_execute_reorder_buffer_if TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__;
    Vtb_reorder_buffer_reorder_buffer_flush_unit_if TOP__tb_reorder_buffer__DOT__flush_if;

    // CONSTRUCTORS
    Vtb_reorder_buffer__Syms(VerilatedContext* contextp, const char* namep, Vtb_reorder_buffer* modelp);
    ~Vtb_reorder_buffer__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
