// C program to calculate Euler's Totient Function
#include <stdio.h>
#include <conio.h>

int phi(int n)
{
    int result = n; // Initialize result as n
    // Consider all prime factors of n and subtract their
    // multiples from result
    for (int p = 2; p * p <= n; ++p)
    {
        // Check if p is a prime factor.
        if (n % p == 0)
        {
            // If yes, then update n and result
            while (n % p == 0)
            {
                n /= p;
                result -= result / p;
            }
        }
    }
    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
    {
        result -= result / n;
    }
 return result;
}

int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("So, the totient of a numbers are:\n");
    for (int i = 1; i<=n; i++)
    {
        printf("phi(%d) = %d\n", i, phi(i));
    }
    printf("Student's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
 return 0;
}