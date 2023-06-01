#include<iostream>
using namespace std;
//Defining Parent Class
class Parent
{
    int a;  //private variable,. no label then the variable is private by default, you can't access private variable
public:
    int x;//variable of parent class

};

//Defining Child Class
class Child:public Parent
{
public:
    int y;
};

int main()
{
    Child c;
    c.x=10; // accessing parent variable in respect to child class
    c.y=20;
    //c.a=-10;  //not allowed, can't access
    cout<<"x= "<<c.x<<",\ny="<<c.y<<endl;
}
