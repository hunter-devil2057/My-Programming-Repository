#include<iostream>
using namespace std;
class B;
class A
{
    int x;
public:
    A()
    {
        x=42;
    }
    friend void show(A ob1, B ob2);
};

class B
{
    int x;
public:
    B()
    {
        x=95;
    }
    friend void show(A ob1, B ob2);
};

void show(A ob1, B ob2)
{
    if(ob1.x>ob2.x)
    cout<<ob1.x<<" is greater than "<<ob2.x<<endl;
    else
        cout<<ob2.x<<" is greater than "<<ob1.x<<endl;
}
int main()
{
    A c;
    B d;
    show(c, d);
}
