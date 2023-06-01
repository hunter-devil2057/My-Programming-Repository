#include<iostream>
using namespace std;
int main()
{
  int a=10, *p;
  p=&a;
  cout<<"a= "<<a<<endl;
  cout<<"a= "<<*p<<endl;
  cout<<"a= "<<(&p)<<endl;
  cout<<"\n\nAddress of a= "<<&a<<endl;
  cout<<"Address of a= "<<p<<endl;
  int ar[]={10, 20, 30};
  int *pointer=ar;
  cout <<"Base address of arrays = "<<pointer<<endl;
  cout<<"Value at index 0: "<<*(pointer+0)<<endl;
  cout<<"Value at index 1: "<<*(pointer+1)<<endl;
  cout<<"Value at index 2: "<<*(pointer+1)<<endl;
  cout<<"Base address of array= "<<pointer<<endl;
  cout<<*pointer<<endl;
  pointer++;
  cout<<*pointer<<endl;
  pointer--;
  cout<<*pointer<<endl;
}
// return by reference code
// scope and storage presentation