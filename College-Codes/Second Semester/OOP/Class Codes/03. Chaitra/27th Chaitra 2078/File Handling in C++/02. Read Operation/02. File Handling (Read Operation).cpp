//Simple C++ program to reads the content of the file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f;
    char character;
    //file should exist
    f.open("nagarjuna.txt", ios::in);
    //if file exists
    if(f)
    {
        while(!f.eof())
        {
            f>>character;//reads the content character by character
            cout<<character;//displays content in the terminal without considering \n
        }
    }
    f.close();
}
