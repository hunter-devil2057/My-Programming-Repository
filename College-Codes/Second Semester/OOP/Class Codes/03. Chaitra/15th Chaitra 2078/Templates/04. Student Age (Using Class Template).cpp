#include<iostream>
#include<string>
using namespace std;
template <class T>

class Array
{
    T defined_array[5];
public:
    void insert(T elements, int i)
    {
        defined_array[i]=elements;
    }

    void display()
    {
        for(int i=0; i<5; i++)
        {
            cout<<defined_array[i]<<" ";
        }
        cout<<endl;
    }


    void sort()
    {
            for(int i=0; i<5; i++)
            {
                for(int j=0; j<5; j++)
                {
                    if(defined_array[i]>defined_array[j])
                    {
                        T temp;
                        temp=defined_array[i];
                        defined_array[i]=defined_array[j];
                        defined_array[j]=temp;
                    }
                }
            }
    }
};

int main()
{
    Array<char>object;
    char value;
    cout<<"Enter any five character values you want to check:"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>value;
        object.insert(value, i);
    }
    cout<<"Before Sorting: "<<endl;
    object.display();
    cout<<"After Sorting (in Descending Order): "<<endl;
    object.sort();
    object.display();
}

/*
______________________________________________
Class Template
template <class Ttype>
class class_name
{
    .
    .
    .
    .

}

Ttype=placeholder
*/
