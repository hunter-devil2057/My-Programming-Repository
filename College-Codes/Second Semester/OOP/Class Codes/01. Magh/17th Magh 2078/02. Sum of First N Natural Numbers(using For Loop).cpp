#include<iostream>
using namespace std;
int main()
{
    int number, i;
    int sum=0;
   cout<<"Enter number of terms (n):";
   cin>>number;
     if (number>0)
     {
         for (i = 0; i <= number; i++)  
         {  
        sum = sum + i;
        }  
            cout << "\n Thus, the sum of the first " <<number<<" numbers is:"<< sum<<endl;
        }
    else
        {
           cout << "Please, enter a positive number.";
        }
}