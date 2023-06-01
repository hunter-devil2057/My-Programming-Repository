#include <iostream>
using namespace std;
void display(int a=10, int b=20)
{
  cout<<"a= "<<a<<"\nb= "<<b<<endl;
}

int main()
{
  display();//calling without argument
  display(-7, -10);
  display(-7);
}