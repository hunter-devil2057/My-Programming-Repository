#include<iostream>
using namespace std;
int main()
{
  int a=10;
  cout<<"a= "<<a<<endl;
  int &b=a;//b and a points to same memory location
   b=20;
   cout<<"Value of a= "<<a<<endl;
   cout<<"Value of b= "<<b<<endl;
}