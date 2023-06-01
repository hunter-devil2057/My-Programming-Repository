#include<stdio.h>
#include<conio.h>
int GCD(int, int);
int main()
{
    int a, b, g;
    printf("Enter any two numbers:\n");
    scanf("%d%d", &a, &b);
    g=GCD(a, b);
    printf("Therefore, GCD of two numbers is:%d", g);
    return 0;
}

int GCD(int x, int y)
{
    if (y==0)
    {
        return x;
    }
    else
    {
        return(GCD(y, x%y));
    }
}