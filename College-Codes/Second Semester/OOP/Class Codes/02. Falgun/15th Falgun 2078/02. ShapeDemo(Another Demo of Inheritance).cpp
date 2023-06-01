#include<iostream>
using namespace std;
class Shape
{
    int length;
    int breadth;
public:
    Shape(int l, int b): length(l), breadth(b)
    {

    }
    void display()
    {
        cout<<"Length: "<<length<<",\nBreadth: "<<breadth<<endl;
    }
     int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }
};

class Cuboid:public Shape
{
    int height;
public:
    Cuboid(int l, int b, int h):Shape(l, b), height(h)//l and b are assets/properties of parent class
    {

    }

    int area()
    {
        int res=getLength()*getBreadth();
        return res;
    }
    int volume()
    {
        int vol=area()*height;
        return vol;
    }
};
int main()
{
    Cuboid ob(10, 20, 30);
    cout<<"Area: "<<ob.area()<<" sq. cm,"<<"\nVolume: "<<ob.volume()<<" cubic cm."<<endl;
}
