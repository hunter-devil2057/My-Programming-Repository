// program to demonstrate function overload
#include<iostream>
using namespace std;
int add(int a)
{
  return(a+12);
}

double add(double a)
{
  return (a+25.74);
}

int add(int a, int b)
{
  return (a+b);
}
double add(double a, double b)
{
  cout<<"Functions with float args is called"<<endl;
  return(a+b);
}

double add(double a, double b, double c)
{
  return(a+b+c);
}
int main()
{
  cout <<add(20)<<endl;
  cout <<add(17.50)<<endl;
  cout<<add(10, 20)<<endl;
  cout<<add(10.50, 30.25)<<endl;
  cout<<add(10, 20, 30)<<endl;
}