#include<iostream>
using namespace std; 

class Complex
{
     int a, b; 
     public: 
        int SetNumber(int num1, int num2)
        {
            a=num1; b=num2;
        }

        friend Complex sumComplex(Complex o1, Complex o2);

        int display()
        {
            cout<<"Your Number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.SetNumber((o1.a+o1.b), (o2.a+o2.b));
    return o3;
}

int main()
{
     Complex c1, c2, sum;
     c1.SetNumber(1, 2);
     c1.display();
     c2.SetNumber(2, 3);
     c2.display();
     sum=sumComplex(c1, c2);
     sum.display();
     return 0;
}
