#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
public:
    Rectangle(int length, int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }

    friend void showArea(Rectangle temp);//show area is not an member but it can access the private function.
};

void showArea(Rectangle temp)
{
    cout<<"Area= "<<temp.length*temp.breadth<<" sq. m"<<endl;
}
int main()
{
    Rectangle r(20, 20);
    showArea(r);
}
