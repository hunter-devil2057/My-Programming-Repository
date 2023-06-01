//Class is a template for creating objects.
// Object is instance/example for class.
/*
Employee is a generic term and specific name of employee is an example of term
Syntax of class
class user_defined name
{
    member variables_1;
    member variables_2;
    :        :        :
    :        :        :
    member variables_n;
    member functions(){}
    member functions(){}
};
For Example:

*/
#include<iostream>
#include<string>
using namespace std;
    class Student
{
    public:
    string name;
    int age;
    double marks;
};

int main()
{
    Student s;   //Syntax of Object: Class_name object_name
    s.name="Manish";
    s.age=21;
    s.marks=20.40;
    cout<<"Name:"<<s.name<<endl;
    cout<<"Age:"<<s.age<<endl;
    cout<<"Obtained Marks:"<<s.marks<<endl;
}

