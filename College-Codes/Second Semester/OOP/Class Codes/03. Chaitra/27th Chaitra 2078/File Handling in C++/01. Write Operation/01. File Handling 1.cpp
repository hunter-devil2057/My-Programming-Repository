#include<iostream>
#include<fstream>//header file for performing file handling
using namespace std;
int main()
{
    fstream file;
    //Creating content

    file.open("nagarjuna.txt", ios::out);//ios::out->allows operation write to the stream.
    if(!file)//if file is not created
    {
        cout<<"Sorry, Your file cannot be created."<<endl;
    }
    //if everything is fine then
    else
    {
        cout<<"Your file has been created."<<endl;
        //Writing the content inside the file
        file<<"First Line\nSecond Line\nThird Line"<<endl;

    }
    file.close();
}
