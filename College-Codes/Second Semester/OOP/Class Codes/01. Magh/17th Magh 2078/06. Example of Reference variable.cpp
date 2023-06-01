#include<iostream>
using namespace std;
int main()
{
    int x=10;
    cout << "x="<<x<<endl;
    int &y=x;//y is reference vaariable here
    cout <<"y="<<y<<endl;
    x=x+2;
    cout <<"x= "<<"y= "<<y<<endl;
}