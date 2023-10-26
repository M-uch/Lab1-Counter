// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbin2bcd.h for the primary calling header

#include "verilated.h"

#include "Vbin2bcd___024root.h"

VL_INLINE_OPT void Vbin2bcd___024root___combo__TOP__0(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___combo__TOP__0\n"); );
    // Init
    IData/*19:0*/ bin2bcd__DOT__result;
    // Body
    bin2bcd__DOT__result = 0U;
    bin2bcd__DOT__result = ((0xfff00U & bin2bcd__DOT__result) 
                            | (IData)(vlSelf->x));
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 8U)))) {
        bin2bcd__DOT__result = ((0xff0ffU & bin2bcd__DOT__result) 
                                | (0xf00U & (((IData)(3U) 
                                              + (bin2bcd__DOT__result 
                                                 >> 8U)) 
                                             << 8U)));
    }
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 0xcU)))) {
        bin2bcd__DOT__result = ((0xf0fffU & bin2bcd__DOT__result) 
                                | (0xf000U & (((IData)(3U) 
                                               + (bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    bin2bcd__DOT__result = (0xfffffU & (bin2bcd__DOT__result 
                                        << 1U));
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 8U)))) {
        bin2bcd__DOT__result = ((0xff0ffU & bin2bcd__DOT__result) 
                                | (0xf00U & (((IData)(3U) 
                                              + (bin2bcd__DOT__result 
                                                 >> 8U)) 
                                             << 8U)));
    }
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 0xcU)))) {
        bin2bcd__DOT__result = ((0xf0fffU & bin2bcd__DOT__result) 
                                | (0xf000U & (((IData)(3U) 
                                               + (bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    bin2bcd__DOT__result = (0xfffffU & (bin2bcd__DOT__result 
                                        << 1U));
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 8U)))) {
        bin2bcd__DOT__result = ((0xff0ffU & bin2bcd__DOT__result) 
                                | (0xf00U & (((IData)(3U) 
                                              + (bin2bcd__DOT__result 
                                                 >> 8U)) 
                                             << 8U)));
    }
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 0xcU)))) {
        bin2bcd__DOT__result = ((0xf0fffU & bin2bcd__DOT__result) 
                                | (0xf000U & (((IData)(3U) 
                                               + (bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    bin2bcd__DOT__result = (0xfffffU & (bin2bcd__DOT__result 
                                        << 1U));
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 8U)))) {
        bin2bcd__DOT__result = ((0xff0ffU & bin2bcd__DOT__result) 
                                | (0xf00U & (((IData)(3U) 
                                              + (bin2bcd__DOT__result 
                                                 >> 8U)) 
                                             << 8U)));
    }
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 0xcU)))) {
        bin2bcd__DOT__result = ((0xf0fffU & bin2bcd__DOT__result) 
                                | (0xf000U & (((IData)(3U) 
                                               + (bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    bin2bcd__DOT__result = (0xfffffU & (bin2bcd__DOT__result 
                                        << 1U));
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 8U)))) {
        bin2bcd__DOT__result = ((0xff0ffU & bin2bcd__DOT__result) 
                                | (0xf00U & (((IData)(3U) 
                                              + (bin2bcd__DOT__result 
                                                 >> 8U)) 
                                             << 8U)));
    }
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 0xcU)))) {
        bin2bcd__DOT__result = ((0xf0fffU & bin2bcd__DOT__result) 
                                | (0xf000U & (((IData)(3U) 
                                               + (bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    bin2bcd__DOT__result = (0xfffffU & (bin2bcd__DOT__result 
                                        << 1U));
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 8U)))) {
        bin2bcd__DOT__result = ((0xff0ffU & bin2bcd__DOT__result) 
                                | (0xf00U & (((IData)(3U) 
                                              + (bin2bcd__DOT__result 
                                                 >> 8U)) 
                                             << 8U)));
    }
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 0xcU)))) {
        bin2bcd__DOT__result = ((0xf0fffU & bin2bcd__DOT__result) 
                                | (0xf000U & (((IData)(3U) 
                                               + (bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    bin2bcd__DOT__result = (0xfffffU & (bin2bcd__DOT__result 
                                        << 1U));
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 8U)))) {
        bin2bcd__DOT__result = ((0xff0ffU & bin2bcd__DOT__result) 
                                | (0xf00U & (((IData)(3U) 
                                              + (bin2bcd__DOT__result 
                                                 >> 8U)) 
                                             << 8U)));
    }
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 0xcU)))) {
        bin2bcd__DOT__result = ((0xf0fffU & bin2bcd__DOT__result) 
                                | (0xf000U & (((IData)(3U) 
                                               + (bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    bin2bcd__DOT__result = (0xfffffU & (bin2bcd__DOT__result 
                                        << 1U));
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 8U)))) {
        bin2bcd__DOT__result = ((0xff0ffU & bin2bcd__DOT__result) 
                                | (0xf00U & (((IData)(3U) 
                                              + (bin2bcd__DOT__result 
                                                 >> 8U)) 
                                             << 8U)));
    }
    if ((5U <= (0xfU & (bin2bcd__DOT__result >> 0xcU)))) {
        bin2bcd__DOT__result = ((0xf0fffU & bin2bcd__DOT__result) 
                                | (0xf000U & (((IData)(3U) 
                                               + (bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    bin2bcd__DOT__result = (0xfffffU & (bin2bcd__DOT__result 
                                        << 1U));
    vlSelf->BCD = (0xfffU & (bin2bcd__DOT__result >> 8U));
}

void Vbin2bcd___024root___eval(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval\n"); );
    // Body
    Vbin2bcd___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vbin2bcd___024root___eval_debug_assertions(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
