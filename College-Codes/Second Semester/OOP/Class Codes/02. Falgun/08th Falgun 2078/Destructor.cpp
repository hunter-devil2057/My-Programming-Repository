
#include <iostream>
using namespace std;

class Student
{
    string name;
    double marks;
    public:
       Student(string n, double m);
       Student(const Student &obj);             // Copy Constructor
       Student compare(Student p, Student q);
        ~Student();                      // Destructor
       void display()
       {
           cout << "Name: " << name << endl;
           cout << "Marks: " << marks << endl;
       }

};
Student :: ~Student()
{
    cout << "Object is destroyed" << endl;
}
Student Student :: compare(Student p, Student q)
{
    if(p.marks > q.marks)
    {
        return p;
    }
    else
    {
        return q;
    }
}
Student :: Student(const Student &obj)
{
    name = obj.name;
    marks = obj.marks;
}
Student :: Student(string n, double m)
{
    name = n;
    marks = m;
}
int main()
{
    Student S1("Ram", 80);
    S1.display();
    Student S2 = S1;
    S2.display();
    Student S3("Alex", 90);
    S3.display();
    Student temp = S3.compare(S1, S3);
    cout << "High marks scorer is: " << endl;
    temp.display();
    cout << endl;
}
