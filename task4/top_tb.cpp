#include "Vtop.h" // ignore source error, since files are created upon code execution 
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vtop* top = new Vtop;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("top.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);

    // set flag mode to one shot
    // vbdSetMode(1);

    vbdHeader("lab 1: Counter");

    // initialize simulation inputs 
    top->clk = 1;
    top->rst = 0;
    top->en = 1;

    // giving a value v for vbuddy counter to reset to 12 in decimal C in hex
    // top->v = 4;

    // run simulation for many clock systems 
    for (i= 0; i<100; i++) {

        // dump variables for many clock cycles
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk); // in pico seconds
            top->clk = !top->clk;
            top->eval ();
        }

        // send count val to Vbuddy

        // plots count on a xy plane representing cycle and value between 0 and 255
        // vbdPlot(int(top->count), 0, 255);

        vbdHex(4, (int(top->bcd) >> 16) & 0xF);
        vbdHex(3, (int(top->bcd) >> 8) & 0xF);
        vbdHex(2, (int(top->bcd) >> 4) & 0xF);
        vbdHex(1, int(top->bcd) & 0xF);
        vbdCycle(i+1);
        // end

        // change input stimuli
        // top->rst = (i<2) | (i==15);
        // top->en = vbdFlag();
        if (Verilated::gotFinish()) exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}