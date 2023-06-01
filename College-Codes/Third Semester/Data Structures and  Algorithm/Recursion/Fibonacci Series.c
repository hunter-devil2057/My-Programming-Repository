#include<stdio.h>
#include<conio.h>
int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}

int main()
{
    int n, i;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Fibonacci Sequence is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d \t", fibo(i));
    }
    return 0;
}