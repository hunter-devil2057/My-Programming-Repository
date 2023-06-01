#include<iostream>
using namespace std;
class point
{
    int val;
public:
    point()
    {

    }
    point (int i):val(i){}
    int getValue();
    void operator ++()
    {
        ++val;
    }
    void operator ++(int a)
    {
        val++;
    }
    point operator +(const point &x)
    {
        point temp;
        temp.val=val+x.val;
        return temp;
    }
};
int point::getValue()
{
    return val;
}

int main()
{
    point p(10), q(10), r;
    cout<<"Value= "<<p.getValue()<<endl;
    ++p;
    cout<<"Value= "<<p.getValue()<<endl;
    p++;
    cout<<"Value= "<<p.getValue()<<endl;
    r=p+q;
    cout<<"p= "<<p.getValue()<<", q= "<<q.getValue()<<", Sum= "<<r.getValue()<<endl;
}
