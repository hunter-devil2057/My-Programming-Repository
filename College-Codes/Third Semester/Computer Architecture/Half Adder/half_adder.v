module half_adder(a,b,sum,carry); //module is a keyword whereas half_adder is an identifier or name
input a,b;//input is a keyword
output sum,carry;//sum and carry is a keyword
xor xor1(sum,a,b);
and and1(carry,a,b);
endmodule //half_adder