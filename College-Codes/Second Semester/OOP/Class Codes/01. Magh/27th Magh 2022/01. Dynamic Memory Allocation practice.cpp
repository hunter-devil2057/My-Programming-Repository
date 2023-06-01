#include<iostream>
using namespace std;
int main()
{
  int number;
  // data type *variable_Name=address of variable_name;
  // ampersand operator or address of 
  int *pointer_variable=NULL;
  pointer_variable=new int;//new keyword allocates 4 bytes of memory of size int 
  if (pointer_variable==NULL)
  {
    cout <<"Error Allocation.\n No Free Space"<<endl;
  }
  else
  {
      *pointer_variable=20;
      cout <<"The value = "<<*pointer_variable<<endl;
  }
// Pointer variable stores the address

  double*qtr=new double(20.45);
  cout<<"The float value="<<*qtr<<endl;
  
  // block of memory for array
  int size=4;
  int *a=new(nothrow)int[size];

  if (!a)
  {
    cout<<"No Free Space"<<endl;
  }
  else
  {
    for (int i=0; i < size; i++)
    {
      cout<<"Enter a number: ";
      cin>>number;
      *(a+i)=number;
    }
    cout<<endl<<"Array elements are: "<<endl;
    for (int i=0; i < size; i++)
    {
      cout<<*(a+i)<<endl;
    }
  } 
  delete pointer_variable;
  delete qtr;
  delete []a;
}