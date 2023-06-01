//Write a C+ program to print all the even numbers from 1 to 100 using do while loop
#include<iostream>
using namespace std;
int main()
{
    int initial_count=0;
    do
    {
        if(initial_count%2==0)
        {
            cout<<"List of Even Numbers are:"<<initial_count<<endl;
            initial_count++;
        }
    }
    while(initial_count<=100);
}
