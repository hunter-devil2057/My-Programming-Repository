#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("nagarjuna.txt", ios::app);
    {
        if(file)
    {
        file<<"\nTesting Append.";
    }
    file.close();
    }
}
/*
For Next WeeK: 
Project name as a Student management system, 
1st: create a class called as "student" 
2nd: define all the required methods like student register, display student name or search by it's name and display all records. total marks, percentage
3rd: Write all the student's records into a file 
4th: While displaying the results, we have to serach the information from a file by open the file 
submission date: next sunday;

Practice Questions:
2076 Q.No.1, 2: 
2078: Q.No. 1, 3 and 11.



*/
