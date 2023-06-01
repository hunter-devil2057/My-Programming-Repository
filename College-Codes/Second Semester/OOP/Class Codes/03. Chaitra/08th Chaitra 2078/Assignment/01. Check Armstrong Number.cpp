// This is a Simple C++ Program to check whether a number is armstrong or not.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number, remainder, sum = 0;
	cout << "Enter any number: ";
	cin >> number;
	int temporary_value = number;
	while(temporary_value != 0)
	{
		remainder = temporary_value % 10;
		sum = sum + pow(remainder, 3);
		temporary_value = temporary_value / 10;
	}
	if(sum == number)
	{
		cout << "The number is an Armstrong Number" << endl;
	}
	else
	{
		cout << "The number is not an Armstrong Number" << endl;
	}
	return 0;
}