//C++ code to demonstrate implicit/automatic type conversion
#include<iostream>
using namespace std;
//  Syntax of Explicit: b = (data_type) a;(forcefully typecasting)
int main()
{
    int a=10;
    float b;
    //First Case: No Data Loss, float -> int)
    b=a;
    cout<<"a="<<a<<", b="<<b<<endl;
    //Second Case: Data Loss, int -> float)
    b=20.75;
    a=b;
    cout<<"a="<<a<<", b="<<b<<endl;
}
