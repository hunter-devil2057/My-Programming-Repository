//C++ code to demonstrate explicit type conversion
#include<iostream>
using namespace std;
int main()
{
    float i=20.78;
    int j;
    //C-style type cast
    j=(int) i;
    cout<<"i="<<i<<", j="<<j<<endl;
    char c='a';
    j=(int) c;
    cout<<"c="<<c<<", j="<<j<<endl;
    j=128;
    c=(char)j;
    cout<<"c="<<c<<" , j="<<j<<endl;
    //Function Style Typecasting
    int a=100;
    float b;
    b=float (a);
    cout<<"a= "<<a<<", b="<<b<<endl;
    cout<<"Character= "<<char(a)<<endl;
//Template Style Typecasting
    float f=20.45;
    int k;
    k=static_cast<int>(f);
    cout<<"\n\nf= "<<f<<", k="<<k<<endl;
}
