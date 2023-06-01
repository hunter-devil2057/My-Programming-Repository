#include<iostream>
using namespace std;
template <class T> T sum(T a, T b)
{
    T result;
    result =a+b;
    return result;
}


int main()
{
    cout<<"The sum of two integer number is:"<<sum(10, 20)<<endl;
    cout<<"The sum of two decimal number is:"<<sum(10.30, 20.25)<<endl;//doesn't give accurate result
    cout<<"The sum of two number is (integer and decimal number):"<<sum(10 20.25)<<endl;

}

//Syntax of Function template
/*
template <class type>> return _type function_name (parameter list)
{
        //body of function
}
*/
