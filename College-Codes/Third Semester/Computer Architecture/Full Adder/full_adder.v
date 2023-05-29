// Here, or_gate is user defined module name
// "a", "b", "sum", "carry" are userdefined port names
module full_adder (a, b, cin, sum, cout);
input a, b, cin;
output sum, cout;
assign sum = (a ^ b) ^ cin;

assign cout = (a & b) | ((a ^ b) & cin);	// AND
endmodule