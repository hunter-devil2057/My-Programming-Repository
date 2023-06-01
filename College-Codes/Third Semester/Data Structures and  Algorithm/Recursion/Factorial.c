#include<stdio.h>
#include<conio.h>
int main()
{
    int num; 
    long int fact;
    long int factorial (int n);
    printf("Enter the value of n:\n");
    scanf("%d", &num);
    fact=factorial(num);
    printf("Factorial of %d = %ld", num, fact);
    getch();
}

long int factorial(int n)
{
    long int fact=1;
    int i;
    if (n==0)
    {
        return 1;
    }
    else
    {
        for (i=1; i<=n; i++)
        {
            fact=fact*i;
        }
        return fact;
    }
    
}