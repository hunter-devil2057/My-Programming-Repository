//Simple C++ program that adds two int numbers and return the sum
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int result;
    result=b;
    return result;
}


double sum(double a, double b)
{
    double result;
    result=b;
    return result;
}

int main()
{
    cout<<"The sum of two number is:"<<sum(10, 20)<<endl;
    cout<<"The sum of two decimal number is:"<<sum(10.30, 20.25)<<endl;//doesn't give accurate result

}
