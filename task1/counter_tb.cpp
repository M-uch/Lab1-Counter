#include "Vcounter.h" // ignore source error, since files are created upon code execution 
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {
    int i;
    int j = 0;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vcounter* top = new Vcounter;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("counter.vcd");

    // initialize simulation inputs 
    top->clk = 1;
    top->rst = 1;
    top->en = 1;

    // run simulation for many clock systems 
    for (i= 0; i<300; i++) {

        // dump variables for many clock cycles
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        // challenge 1
        if ((top->count == 9)&&(j<3)){
            top->en = 0;
            j++;
        }
        else{
            top->en = 1;

        }

        // challenge 2 test asynchronous reset 
        top->rst = (i==30);

        // top->rst = (i<2) | (i==15); // keeps counter at 0 until cycle 2 and resets to 0 at cycle 15
        // top->en = (i>4); // starts counting at cycle 4
        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}