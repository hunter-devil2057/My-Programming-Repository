module nand_gate (a, b, out);
input a, b;
output out;
nand nand1(a, b, out);
endmodule //nand_gate