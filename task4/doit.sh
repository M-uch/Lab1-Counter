rm -rf obj_dir
rm -f top.vcd

verilator --cc counter.sv
verilator --cc bin2bcd.sv
verilator -Wall --cc --trace top.sv --exe top_tb.cpp 

make -j -C obj_dir/ -f Vtop.mk Vtop

obj_dir/Vtop

# use source ./doit.sh to run