//C++ code to convert user-defined data type int basic data type
#include<iostream>
using namespace std;
class Weight
{
    int kilogram;
public:
    Weight(int kg):kilogram(kg)
    {

    }
    operator float()//defining operator; syntax: operator data_type ()
    {
        float gm;
        gm=kilogram*1000;
        return gm;
    }
};

int main()
{
    Weight w(2);
    float gram_value=w;
    cout<<"2kg = "<<gram_value<<"gm"<<endl;
}
