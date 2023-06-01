#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
}
int main()
{
  int a=10, b=20;
  cout<<"Before swap:"<<endl;
  cout<<"a= "<<a<<"\nb= "<<b<<endl;
  swap(a, b);
  cout<<"\n\nAfter swap:"<<endl;
  cout<<"a= "<<a<<"\nb= "<<b<<endl;
}