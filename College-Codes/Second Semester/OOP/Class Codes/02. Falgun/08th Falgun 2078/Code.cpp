#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:
       void print_info()
       {
           cout << "Length: " << length << endl;
           cout << "Breadth: " << breadth << endl;
       }
       int get_area();
};
int Rectangle :: get_area()
{
    return (length * breadth);
}
int main()
{
    Rectangle R1;
    cout << "Area of rectangle 1 is : " << R1.get_area() << endl;
}

