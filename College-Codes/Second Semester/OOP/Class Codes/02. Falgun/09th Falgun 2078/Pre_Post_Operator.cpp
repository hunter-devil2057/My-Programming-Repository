// Program representing pre and post increment operator 
#include <iostream>
using namespace std;

int main()
{
	int p = 10, q, r = 12, s;
	q = ++p;
	s = r++;
	cout << p << endl;
	cout << q << endl;
	cout << r << endl;
	cout << s << endl;

	return 0;
}