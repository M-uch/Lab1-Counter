module counter #(
    parameter WIDTH = 8
)(
// interface signals
    input logic clk, // clock
    input logic rst, // reset
    input  logic en, // counter enable
    output logic [WIDTH-1:0] count // count output
);

always_ff @ (posedge clk)
    if (rst) count <= {WIDTH{1'b0}};
    // challenge
    else if (en) count <= count + {{WIDTH-1{1'b0}}, en}; // if enable is asserted add 1
    else count <= count - {{WIDTH-1{1'b0}}, ~en}; // if enable is not asserted subtract 1
    // end challenge

    // else count <= count + {{WIDTH-1{1'b0}}, en};

endmodule
