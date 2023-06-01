#include<iostream>
using namespace std;
int main()
{
    //First value
    char ch='a';
    //Adjusting the width of the next value to be displayed to 5 columns
    cout.width(5);
    //Adjusted width of the first value
    cout<<ch<<"\n";
    //Second value
    int i=1;
    //Width of the second value to be displayed in the output will not be adjusted to 5 columns
    cout<<i;
}
