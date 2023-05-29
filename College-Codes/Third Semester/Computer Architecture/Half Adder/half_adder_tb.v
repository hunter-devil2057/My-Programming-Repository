`include "half_adder.v"
module half_adder_tb;
reg a,b;
wire sum,carry;
half_adder h1(a,b,sum,carry);//calling a module
// half_adder xor1(sum,a,b);
// half_adder and1(carry,a,b);
// Providing value from beginning |
initial 
begin
    $dumpfile("half_adder.vcd");
    $dumpvars(0,half_adder_tb);
    //these two lines are important for all files 
    a=0;b=0;//inserting values of a and b
    #10         //indicates the time delay of 10 nanoseconds (ns)
    a=0;b=1;//inserting values of a and b
    #10
    a=1;b=0;//inserting values of a and b
    #10
    a=1;b=1;//inserting values of a and b
end
endmodule