#include<iostream>
using namespace std;
class Parent
{
public:
    Parent()//constructor; same name as class name,
    {
        cout<<"The base class constructor is called."<<endl;
    }
    virtual ~Parent()//FOR DESTRUCTOR
    {
        cout<<"The base class destructor is called."<<endl;
    }
};//creating a pointer of parent's class
//creating child class
class Child:public Parent
{
public:
    Child()
    {
        cout<<"Derived class constructor is called."<<endl;
    }
    ~Child()//Child class's destructor is not called.
    {
        cout<<"Derived class destructor is called."<<endl;
    }
};

int main()
{
    //creating a pointer of parent's class
    Parent *ptr=new Child;
    delete ptr;
}
