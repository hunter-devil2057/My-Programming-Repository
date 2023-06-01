#include <iostream>
using namespace std;
// Function with reference variable as paramters

void calculate(int x, int y, int &sum, int &product)

{
// Changing reference variable changes original variable too
sum = x + y;
product = x * y;
}

int main()
{
int a = 90, b = 75, add, multiply;
// Function call by value and reference
calculate(a, b, add, multiply);
cout << "Sum = " << add << endl;
cout << "Product = " << multiply << endl;
}