//Create an array of size 3 and try to insert the elements at 4 and handle the error at its
#include<iostream>
using namespace std;
int main()
{
    int number[3], i;
    for(i=0; i<5; i++)
    {
        try
        {
            if(i>=3)
            {
                throw 404;
            }
            else
            {
                number[i]=i;
            }
        }

        catch(int error)
        {
            cout<<"Array index out of bound."<<endl;
        }
    }

    cout<<"Hello! World"<<endl;
}


