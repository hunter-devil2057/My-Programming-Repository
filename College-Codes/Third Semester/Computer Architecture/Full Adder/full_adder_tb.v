`include "full_adder.v"
module full_adder_tb;
reg a, b, cin;
wire sum, cout;
full_adder full_adder1(a, b, cin, sum, cout);

initial begin
$dumpfile("full_adder.vcd");
$dumpvars(0, full_adder_tb);    
a = 0; b = 0; cin = 0;
#10
a = 0; b = 1; cin = 1;
#10
a = 1; b = 0; cin = 0;
#10
a = 1; b = 1; cin = 1;
end
endmodule