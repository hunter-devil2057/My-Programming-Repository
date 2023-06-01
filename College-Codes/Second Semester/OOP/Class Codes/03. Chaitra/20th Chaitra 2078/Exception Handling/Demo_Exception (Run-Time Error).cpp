#include<iostream>
using namespace std;
int main()
{
    int a=4, b=0, result;
    try
    {
        if(b==0)
            throw 404;
        else
        {
            result=a/b;
            cout<<result<<endl;
        }
    }
    catch (int code)
    {
        cout<<"Result: "<<code<<"\nDivide by Zero Error."<<endl;
    }
    cout<<"Hello World"<<endl;
    return 0;
}


/*
Types of Error:
Compile Time Error/Syntax Error
Run-Time Error

//Exception Handling: Process to handle runtime errors, events or object which is thrown at runtime,

*/
