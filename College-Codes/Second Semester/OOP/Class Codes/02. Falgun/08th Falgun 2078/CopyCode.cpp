
#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:
       Rectangle();
       Rectangle(int l, int b);
       Rectangle(Rectangle &obj);
       void Copy_Data(Rectangle obj);
       void print_info()
       {
           cout << "Length: " << length << endl;
           cout << "Breadth: " << breadth << endl;
       }
       int get_area();
};
int main()
{
    Rectangle R1(12, 15);
    Rectangle R2(R1);
    Rectangle R3;
    R3.Copy_Data(R2);
    R1.print_info();
    cout << endl;
    R2.print_info();
    cout << endl;
    R2.print_info();
    cout << "Area of rectangle 1 is : " << R1.get_area() << endl;
    cout << "Area of rectangle 2 is : " << R2.get_area() << endl;
    cout << "Area of rectangle 3 is : " << R2.get_area() << endl;
}
void Rectangle :: Copy_Data(Rectangle obj)
{
    length = obj.length;
    breadth = obj.breadth;
}
Rectangle :: Rectangle(Rectangle &obj)
{
    length = obj.length;
    breadth = obj.breadth;
}
int Rectangle :: get_area()
{
    return (length * breadth);
}

Rectangle :: Rectangle()
{
    cout << "This is the default constructor" << endl;
    length = 0;
    breadth = 0;
}
Rectangle :: Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}