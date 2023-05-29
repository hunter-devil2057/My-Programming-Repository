// C program for calculating the derivatives by using backward difference difference formula.
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 2*exp(x)

int main()
{
    float h, x, d;
    printf("Enter the value at which derivative is required:\n");
    scanf("%f", &x);
    printf("Enter step-wise increment (h):\n");
    scanf("%f", &h);
    d=((f(x))-(f(x-h)))/h;
    printf("Therefore, the value of derivative is: %f .\n", d);
    getch();
    return 0;
}