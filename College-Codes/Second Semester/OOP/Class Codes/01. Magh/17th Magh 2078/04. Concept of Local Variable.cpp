#include<iostream>
using namespace std;
int x=45;
int main()
{
    int x=10;// scope of variable x is local to main function
    cout <<x<<endl;
    cout ::<<x<<endl;//this operator is used for scope  resolving, it is called as scope resolution operator
}