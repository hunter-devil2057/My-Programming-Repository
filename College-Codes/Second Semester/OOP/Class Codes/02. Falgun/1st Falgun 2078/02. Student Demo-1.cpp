
#include<iostream>
#include<string>
using namespace std;
    class Student
{
    public:
    string name;
    int age;
    double marks;
    void display()
    {
        cout<<endl<<endl<<"Following are student information:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
    double getPercent();
    //Method can be defined within a class or without a class
};

double Student::getPercent()
{

    return(marks/3);
}

int main()
{
    Student s;   //Syntax of Object: Class_name object_name
    s.name="Manish Shiwakoti";
    s.age=21;
    s.marks=20.40;
    cout<<"Name:"<<s.name<<endl;
    cout<<"Age:"<<s.age<<endl;
    cout<<"Obtained Marks:"<<s.marks<<endl;
    s.display();
    cout<<"Percentage Scored: "<<s.getPercent()<<endl;
}


/*


#include<iostream>
#include<string>
using namespace std;
    class student{
        public:
        string name;
        int age;
        double marks;
        void display()
        {
    cout<<"following are the student info:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Obtained Marks:"<<marks<<endl;


        }
        double getPercent();

};
 double student::getPercent()
 {

     return(marks/3);
 }
int main()
{
    student s;
    s.name="test";
    s.age=18;
    s.marks=20.45;
    cout<<"Name:"<<s.name<<endl;
    cout<<"Age:"<<s.age<<endl;
    cout<<"Obtained Marks:"<<s.marks<<endl;
    s.display();
    cout<<"percentage obtained:"<<s.getPercent()<<endl;

}

*/
