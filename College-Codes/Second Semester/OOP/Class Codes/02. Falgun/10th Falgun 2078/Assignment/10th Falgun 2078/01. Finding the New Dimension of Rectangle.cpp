// Program to add corresponding data members of two objects
#include <iostream>
using namespace std;

class Rectangle
{
	int length;
	int breadth;
	public:
		Rectangle(){}								// Default Constructor
		Rectangle(int l, int b)						// Parameterized Constructor
		{
			length = l;
			breadth = b;
		}
		Rectangle operator +(Rectangle &a);			// Operator overloading function
		void display();
};
int main()
{
	Rectangle r1(3, 4), r2(5, 6), r3;
	r1.display();
	r2.display();
	r3 = r1 + r2;									// '+' is overloaded operator
	// r3 = r1.operator +(r2);						// Equivalent to "r3 = r1 + r2;"
	cout << "Sum of corresponding length and breadth is: " << endl;
	r3.display();
	return 0;
}
Rectangle Rectangle :: operator +(Rectangle &a)
{
	Rectangle temp;
	temp.length = length + a.length;
	temp.breadth = breadth + a.breadth;
	// Entire object is returned
	return temp;							
}
void Rectangle :: display()
{
	cout << "Length: " << length << endl;
	cout << "Breadth: " << breadth << endl;
}