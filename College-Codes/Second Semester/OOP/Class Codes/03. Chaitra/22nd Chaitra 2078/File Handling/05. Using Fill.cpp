//In C++ the fill() formatted output functions fills the unused white spaces in a value (to be printed at the console), with a character of our choice.
#include<iostream>
using namespace std;
int main()
{
    //First Value
    char ch='a';
    //Calling the fill function to fill the white spaces in a value with a character of our choice.
    cout.fill('(');
    //Setting the width of this value to 10
    cout.width(10);
    //Printing the first value
    cout<<ch<<"\n";

    //Second Value
    int i=1;

    //Once you call the fill() function, you don't have to call it again to fill the white space in a value with the same character
    //Setting the width of this value to 5
    cout.width(5);

    //Printing the second value
    cout<<i;

}
//site:decode java
