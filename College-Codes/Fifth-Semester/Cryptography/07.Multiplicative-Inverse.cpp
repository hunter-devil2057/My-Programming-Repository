#include <iostream>
using namespace std;

int Find_mod_Inverse(int a, int m)
{
    for (int i = 1; i < m; i++)
    {
        if (((a % m) * (i % m)) % m == 1) 
        {
            return i;
        }
    }
}

int main() 
{
    int a = 5, m = 7;
    cout<<"The value of x is"<<" ";
    cout << Find_mod_Inverse(a, m);
    printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}
