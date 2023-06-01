#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
	public:
		static int objCount;
		Point(int i, int j):x(i), y(j)					// Here, x(i) means x = i and y(j) means y = j
		{
			objCount++;
		}
		static void display_count()
		{
			cout << "Number of object is: " << Point :: objCount << endl;
		}
};

int Point :: objCount = 0;

int main()
{
	Point p1(1, 2), p2(2, 3), p3(4, 5);
	cout << Point :: objCount << endl;					// Accessing static variable
	Point :: display_count();							// Accessing static function
	return 0;
}