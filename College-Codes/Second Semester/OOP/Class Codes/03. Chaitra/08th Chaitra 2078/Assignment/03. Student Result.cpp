/* This is a simple C++ Program to show the result of a student using the concept of class and object. */
#include <iostream>
using namespace std;
#define TOTAL 500

class Student_Details
{
	string student_name;
	int age;
	double total_marks;
	public:
		// Default Consructor
		Student_Details(){}
		Student_Details(string n, int a, double t) : student_name(n), age(a), total_marks(t){}
		double get_percent()
		{
			return ((total_marks / TOTAL) * 100);
		}
		void display()
		{
			cout<<"The details of student are listed below: "<<endl;
			cout << "Name: " << student_name << endl;
			cout << "Age: " << age << endl;
			cout << "Percent: " << get_percent() << " %" << endl;
		}
};

int main()
{
	Student_Details m1("Manish", 21, 490);
	m1.display();
	return 0;
}