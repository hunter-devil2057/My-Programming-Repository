#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"Base Class CONSTRUCTOR get called."<<endl;
    }
    ~A()
    {
        cout<<"Base Class DESTRUCTOR get called."<<endl;
    }
};

class B: public A
{
public:
    B()
    {
        cout<<"Derived Class CONSTRUCTOR get called"<<endl;
    }
    ~B()
    {
        cout<<"Derived Class DESTRUCTOR get Called"<<endl;
    }
};

int main()
{
    B b;
}
