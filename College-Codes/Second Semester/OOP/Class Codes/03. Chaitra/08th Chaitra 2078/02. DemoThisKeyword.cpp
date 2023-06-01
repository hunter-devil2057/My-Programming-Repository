

//This keyword is used to refer the current instance.
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
	void area()
	{
		int area;
		area=this->length*this->breadth;
		cout<<"Area="<<area<<"sq.m"<<endl;
	}
	void display()
	{
		cout<<"Length="<<this->length<<"m"<<endl;
		cout<<"Breadth="<<this->breadth<<"m"<<endl;
		
	}	
};

int main()
{
	Rectangle r(10, 20);
	r.display();
	r.area();
}
