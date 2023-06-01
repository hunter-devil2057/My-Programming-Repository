// Program representing operator overloading in unay operator
// The overloaded operator is valid onny for class objects
#include <iostream>
using namespace std;

class Point
{
	int value;
	public:
		Point(int i) : value(i){}
		int get_value();
		void operator ++();
		void operator ++(int);
};
int Point :: get_value()
{
	return value;
}
void Point :: operator ++()			// Operator overloading pre-increment ( i.e; ++i )
{
	++value;
}
void Point :: operator ++(int)		// Operator overloading post-increment ( i.e; ++i )
{
	value++;
}
int main()
{
	Point p1(4);
	cout << "The value of the point is: " << p1.get_value() << endl;
	// p1.operator ++();	// Calling operator function
	// Incrementing an object is only allowed when '++' is oveloaded operator function
	++p1;					// Calling pre-increment operator function
	p1++;					// Calling post-increment operator function
	// p1.operator ++(5);		// Calling post-increment operator function
	cout << "The incremented value of the point is: " << p1.get_value() << endl;

	return 0;
}