// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_EXECUTE_ALU__SYMS_H_
#define VERILATED_VTB_EXECUTE_ALU__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_fst_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_execute_alu.h"

// INCLUDE MODULE CLASSES
#include "Vtb_execute_alu___024root.h"
#include "Vtb_execute_alu___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_execute_alu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_execute_alu* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_execute_alu___024root      TOP;
    Vtb_execute_alu___024unit      TOP____024unit;

    // CONSTRUCTORS
    Vtb_execute_alu__Syms(VerilatedContext* contextp, const char* namep, Vtb_execute_alu* modelp);
    ~Vtb_execute_alu__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
