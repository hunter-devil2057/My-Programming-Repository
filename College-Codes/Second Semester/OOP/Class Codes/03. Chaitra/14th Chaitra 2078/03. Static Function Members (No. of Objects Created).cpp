//Write down a C++ program to count number of objects created.
#include <iostream>
using namespace std;
class A
{
public:
    static int counter;
    A()
    {
        counter++;
    }

    static void ObjCounter()
    {
        cout<<"Number of Objects="<<A::counter<<endl;
    }
};

int A::counter=0;
//When an constructor is created an object is called.

int main()
{
    A a;
    A b;
    //cALLING oBJECT cOUNTER
    A::ObjCounter();
    A c;
    A d;
    A::ObjCounter();
    cout<<"Number of Objects="<<A::counter<<endl;
}
