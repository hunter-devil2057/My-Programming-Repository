//Write a C++ program to calculate the area of triangle using semu-perimeter
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float first_side, second_side, third_side, perimeter, semi_perimeter, s, a, b, c, operation, area;
    cout<<"Enter the length of first side (a):"<<endl;
    cin>>first_side;
    cout<<"Enter the length of second side (a):"<<endl;
    cin>>second_side;
    cout<<"Enter the length of third side (a):"<<endl;
    cin>>third_side;
    //For Perimeter
    perimeter=first_side+second_side+third_side;
    //For Semi-Perimeter
    semi_perimeter=perimeter/2;
    s=semi_perimeter;
    //Defining the variable inside sqrt for making it simple
    operation=s*(s-first_side)*(s-second_side)*(s-third_side);
    //Exploring the formula for area of a triangle
    area=sqrt(operation);
    //Finally, displaying area of a triangle.
    cout<<"Thus, the area of the triangle is: "<<area<<" sq. m"<<endl;
}

/*
Write a C++ program for:
a) function overloading
b) function overriding
c) function template
d) class template
*/
