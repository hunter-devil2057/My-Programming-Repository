#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("nagarjuna.txt", ios::out);

    if(file)
    {
        file<<"Testing Append.";
    }
    file.close();

}

