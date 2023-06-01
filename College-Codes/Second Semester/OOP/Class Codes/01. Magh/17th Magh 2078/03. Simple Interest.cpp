#include<iostream>
using namespace std;
int main()
{
    float principal, time, rate, simple_interest;
    cout <<"Enter Principal: Rs.";
    cin>>principal;
    cout <<"Enter Time:";
    cin>>time;
    cout <<"Enter Rate of Interest: ";
    cin>>rate;
    // can also write cin>>principal>>time>>rate;
    simple_interest=(principal*time*rate)/100;
    cout <<"Simple Interest = Rs. "<<simple_interest<<endl;//performs write function equivalent to printf in C
}