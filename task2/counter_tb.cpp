#include "Vcounter.h" // ignore source error, since files are created upon code execution 
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vcounter* top = new Vcounter;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("counter.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("lab 1: Counter");

    // initialize simulation inputs 
    top->clk = 1;
    top->rst = 0;
    top->en = 0;

    // run simulation for many clock systems 
    for (i= 0; i<1000; i++) {

        // dump variables for many clock cycles
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk); // in pico seconds
            top->clk = !top->clk;
            top->eval ();
        }

        // send count val to Vbuddy

        // plots count on a xy plane representing cycle and value between 0 and 255
        vbdPlot(int(top->count), 0, 255);

        // vbdHex(4, (int(top->count) >> 16) & 0xF);
        // vbdHex(3, (int(top->count) >> 8) & 0xF);
        // vbdHex(2, (int(top->count) >> 4) & 0xF);
        // vbdHex(1, int(top->count) & 0xF);
        // vbdCycle(i+1);
        // end

        // change input stimuli
        // top->rst = (i<2) | (i==15);
        top->en = vbdFlag();
        if (Verilated::gotFinish()) exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}