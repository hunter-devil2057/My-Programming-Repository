#include<iostream>
using namespace std;
template<class T>T sum(T a, T b)
{
    T result;
    result=a+b;
    return result;
}

template<class T, class K>K sum(T a, K b)
{
    K result;
    result=a+b;
    return result;
}

int main()
{
    cout<<"The sum of two integer is: "<<sum(10, 20)<<endl;
    cout<<"The sum of two decimal number is: "<<sum(10.50, 20.55)<<endl;
    cout<<"The sum of two numbers is: "<<sum(10, 20.055)<<endl;
}
