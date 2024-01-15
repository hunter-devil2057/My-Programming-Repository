// C program to demonstrate working of Extended Euclidean Algorithm
#include <stdio.h>
#include <conio.h>

int gcdExtended(int a, int b, int* x, int* y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);
    // Update x and y using results of recursive call
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}

// Driver Program
int main()
{
    int x, y, a, b;
    printf("Enter First Number (a):");
    scanf("%d", &a);
    printf("Enter Second Number (b):");
    scanf("%d", &b);
    int g = gcdExtended(a, b, &x, &y);
    printf("gcd(%d, %d) = %d", a, b, g);
    printf("Student's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}