// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbin2bcd.h"
#include "Vbin2bcd__Syms.h"

//============================================================
// Constructors

Vbin2bcd::Vbin2bcd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbin2bcd__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , BCD{vlSymsp->TOP.BCD}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbin2bcd::Vbin2bcd(const char* _vcname__)
    : Vbin2bcd(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbin2bcd::~Vbin2bcd() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbin2bcd___024root___eval_initial(Vbin2bcd___024root* vlSelf);
void Vbin2bcd___024root___eval_settle(Vbin2bcd___024root* vlSelf);
void Vbin2bcd___024root___eval(Vbin2bcd___024root* vlSelf);
#ifdef VL_DEBUG
void Vbin2bcd___024root___eval_debug_assertions(Vbin2bcd___024root* vlSelf);
#endif  // VL_DEBUG
void Vbin2bcd___024root___final(Vbin2bcd___024root* vlSelf);

static void _eval_initial_loop(Vbin2bcd__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbin2bcd___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbin2bcd___024root___eval_settle(&(vlSymsp->TOP));
        Vbin2bcd___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vbin2bcd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbin2bcd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbin2bcd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbin2bcd___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vbin2bcd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vbin2bcd::final() {
    Vbin2bcd___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbin2bcd::hierName() const { return vlSymsp->name(); }
const char* Vbin2bcd::modelName() const { return "Vbin2bcd"; }
unsigned Vbin2bcd::threads() const { return 1; }
