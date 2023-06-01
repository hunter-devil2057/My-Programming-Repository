#include<iostream>
using namespace std;
//Abstract Class Shape
class Shape
{
    protected:
    int length;
    int breadth;
public:
    Shape(int l, int b):length(l), breadth(b)
    {

    }
    virtual void area()=0;  //Example of Pure Virtual function/
};

class Rectangle:public Shape
    {

public:
    Rectangle(int l, int b):Shape(l, b)
    {

    }
    void area()
    {
        cout<<"Area= "<<length*breadth<<endl;
    }
};


int main()
{
    Shape *obj;
    Rectangle r(10, 20);
    obj=&r;
    obj->area();//obj pointing to area.
    //  2r.area();

    //Shape ob(5, 10);//cannot create object to the abstract class.
}
