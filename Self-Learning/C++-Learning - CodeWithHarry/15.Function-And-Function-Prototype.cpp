#include<iostream>
using namespace std;
// Function Prototype 
// Syntax for Function Prototype: data_type function_name(argument1, argument2, ....);
// int sum(int, int)    //Acceptable
// int sum(int a, int b)    //Acceptable
// int sum(int a, b)    //Not Acceptable
// int sub(a, int b)    //Not Acceptable

int Sum(int a, int b);

int main()//This is Main Function in C++
{
    int num1, num2;
    cout<<"Enter First Number:"<<endl;
    cin>>num1;
    cout<<"Enter Second Number:"<<endl;
    cin>>num2;
    // Here, num1 and num2 are actual parameters which are passed in Function Sum
    cout<<"Therefore, the Sum of Two Numbers is: "<<Sum(num1, num2)<<endl;
    return 0;       //for OS, it means it has been executed successfully and no error/issue has been faced till now 
}

int Sum(int a, int b)
//Here, Function Sum takes a, b of type int 
{
    // Formal Parameters (a and b) will be taking values from actual parameters num1 and num2
    int c=a+b;
    return c;   //returns value of c 
}

// Formal Parameters are such type of parameters which are made in the function. For Eg: int a and int b in above function 
// Actual Parameters are such type of parameters in which values are passed to the function..