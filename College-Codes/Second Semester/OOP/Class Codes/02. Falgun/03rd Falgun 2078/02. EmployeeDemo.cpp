#include<iostream>|
#include<string>
using namespace std;

class Employee
{
    private:
        string name;
        double salary;
    public:
        Employee(string n, double sal);//This is a constructor. constructor is only called when an object is created.
        void display();
};

Employee::Employee(string n, double sal)
{
    name=n;
    salary=sal;
    cout<<"Constructor got called Automatically."<<endl;
}
void Employee::display()
{
    cout<<"Name: "<<name<<"Salary: Rs. "<<salary<<endl;
}
int main()
{
    Employee e("Manish", 1000);

}
