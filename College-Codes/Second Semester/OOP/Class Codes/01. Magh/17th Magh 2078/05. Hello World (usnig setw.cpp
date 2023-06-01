#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout <<"Hello World";
    cout<<setw(20)<<"Hello, World!"<<endl;
    // setw reserves 20 bits  of memory
    cout<<setw(20)<<setfill('#')<<"Hello, World!"<<endl;
    // setfills the character inside reserved space/memory
}