// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_cache_controller__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtb_cache_controller::Vtb_cache_controller(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_cache_controller__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_cache_controller::Vtb_cache_controller(const char* _vcname__)
    : Vtb_cache_controller(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_cache_controller::~Vtb_cache_controller() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_cache_controller___024root___eval_debug_assertions(Vtb_cache_controller___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_cache_controller___024root___eval_static(Vtb_cache_controller___024root* vlSelf);
void Vtb_cache_controller___024root___eval_initial(Vtb_cache_controller___024root* vlSelf);
void Vtb_cache_controller___024root___eval_settle(Vtb_cache_controller___024root* vlSelf);
void Vtb_cache_controller___024root___eval(Vtb_cache_controller___024root* vlSelf);

void Vtb_cache_controller::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_cache_controller::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_cache_controller___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_cache_controller___024root___eval_static(&(vlSymsp->TOP));
        Vtb_cache_controller___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_cache_controller___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_cache_controller___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_cache_controller::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_cache_controller::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_cache_controller::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_cache_controller::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_cache_controller::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_cache_controller___024root___eval_final(Vtb_cache_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_cache_controller::final() {
    Vtb_cache_controller___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_cache_controller::hierName() const { return vlSymsp->name(); }
const char* Vtb_cache_controller::modelName() const { return "Vtb_cache_controller"; }
unsigned Vtb_cache_controller::threads() const { return 1; }
void Vtb_cache_controller::prepareClone() const { contextp()->prepareClone(); }
void Vtb_cache_controller::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_cache_controller::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_cache_controller___024root__trace_decl_types(VerilatedFst* tracep);

void Vtb_cache_controller___024root__trace_init_top(Vtb_cache_controller___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_cache_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cache_controller___024root*>(voidSelf);
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_cache_controller___024root__trace_decl_types(tracep);
    Vtb_cache_controller___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_cache_controller___024root__trace_register(Vtb_cache_controller___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_cache_controller::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_cache_controller::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 186);
    Vtb_cache_controller___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
