`include "mux.v"
module mux_tb;

reg a, b, sum;

wire carry_out;
mux mux1(a, b, s, out);

initial begin

$dumpfile("mux.vcd");
$dumpvars(0, mux_tb);    

a = 0; b = 0; s = 0;
#10
a = 0; b = 1; s = 1;
#10
a = 1; b = 0; s = 1;
#10
a = 1; b = 1; s = 0;
end
endmodule