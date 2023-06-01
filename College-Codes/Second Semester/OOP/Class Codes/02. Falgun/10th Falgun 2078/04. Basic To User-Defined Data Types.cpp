//C++ program to convert basic data type into User-Defined Data Types
#include<iostream>
using namespace std;
class Distance
{
    int centimeter;
    float meter;
public:
    Distance()
    {
        centimeter=-1;
        meter=-1;
    }
    Distance(int cm):centimeter(cm)
    {
        meter=centimeter/100;
    }
    void display()
    {
        cout<<centimeter<<"cm= "<<meter<<"m"<<endl;
    }
};

int main()
{
    Distance d=100;
    d.display();
}
