// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fwrd_unit__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtb_fwrd_unit::Vtb_fwrd_unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fwrd_unit__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_fwrd_unit::Vtb_fwrd_unit(const char* _vcname__)
    : Vtb_fwrd_unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fwrd_unit::~Vtb_fwrd_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fwrd_unit___024root___eval_debug_assertions(Vtb_fwrd_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fwrd_unit___024root___eval_static(Vtb_fwrd_unit___024root* vlSelf);
void Vtb_fwrd_unit___024root___eval_initial(Vtb_fwrd_unit___024root* vlSelf);
void Vtb_fwrd_unit___024root___eval_settle(Vtb_fwrd_unit___024root* vlSelf);
void Vtb_fwrd_unit___024root___eval(Vtb_fwrd_unit___024root* vlSelf);

void Vtb_fwrd_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fwrd_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fwrd_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_fwrd_unit___024root___eval_static(&(vlSymsp->TOP));
        Vtb_fwrd_unit___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_fwrd_unit___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_fwrd_unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_fwrd_unit::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_fwrd_unit::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_fwrd_unit::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_fwrd_unit::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fwrd_unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_fwrd_unit___024root___eval_final(Vtb_fwrd_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_fwrd_unit::final() {
    Vtb_fwrd_unit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fwrd_unit::hierName() const { return vlSymsp->name(); }
const char* Vtb_fwrd_unit::modelName() const { return "Vtb_fwrd_unit"; }
unsigned Vtb_fwrd_unit::threads() const { return 1; }
void Vtb_fwrd_unit::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fwrd_unit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_fwrd_unit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_fwrd_unit___024root__trace_decl_types(VerilatedFst* tracep);

void Vtb_fwrd_unit___024root__trace_init_top(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_fwrd_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fwrd_unit___024root*>(voidSelf);
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_fwrd_unit___024root__trace_decl_types(tracep);
    Vtb_fwrd_unit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root__trace_register(Vtb_fwrd_unit___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_fwrd_unit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_fwrd_unit::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 58);
    Vtb_fwrd_unit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
