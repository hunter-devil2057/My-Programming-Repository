`include "or_gate.v"//linking or including file "or-gate.v" to this file
module or_gate_tb; //defining a module named or_gate_tb
reg a,b;   //reg is a keyword used for holding/storing data
wire out;
or_gate or1(a,b,out); //passes the values of a, b in or_1 of file or_gate.v, provides the value of testbench to the structure 
// Providing value from beginning |
initial 
begin
    $dumpfile("or_gate.vcd");//creating dump file to store tested values, which file to dump
    $dumpvars(0,or_gate_tb);//0 means to dump all variables, which variables to dump
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