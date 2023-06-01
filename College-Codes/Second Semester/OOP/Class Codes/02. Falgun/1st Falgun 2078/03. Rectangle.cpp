#include<iostream>
using namespace std;
class Rectangle
{
public:
    double length;
    double breadth;
    //member functions
    void setLength(double l);
    void setBreadth(double b);
    double getLength();
    double getBreadth();
    double getArea();
};

void Rectangle::setLength(double l)
{

    length=l;
}

void Rectangle::setBreadth(double b)
{

    breadth=b;
}

double Rectangle::getLength()
{

    return length;
}

double Rectangle::getBreadth()
{

    return breadth;
}

double Rectangle::getArea()
{

    return (length*breadth);
}

int main()
{

    Rectangle r;
    double l, b;
    cout<<"Enter length:"<<endl;
    cin>>l;
    cout<<"Enter breadth:"<<endl;
    cin>>b;cout<<"Enter length"<<endl;
    cin>>l;
    r.setLength(l);
    r.setBreadth(b);
    cout<<"Length: "<<r.getLength()<<endl<<"Breadth: "<<r.getBreadth()<<endl;
    cout<<"Area= "<<r.getArea()<<endl;


}
