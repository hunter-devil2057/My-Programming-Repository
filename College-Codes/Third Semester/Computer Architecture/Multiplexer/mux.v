// "a", "b", "sum", "carry" are user-defined port names
module mux (a, b, sum, carry_out);
input a, b, sum;
output out;
assign out = ((!sum) & a) | (sum & b);
endmodule