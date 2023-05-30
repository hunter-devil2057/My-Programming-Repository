// C program for computing integral value by using Simpson's 3/8 Rule
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) (pow(x, 3)+1)

int main()
{
    float h, x0, x1, x2, x3, fx0, fx1, fx2, fx3, v;
    int n=3;
    printf("Enter the value of Lower and Upper Limit of Integration:\n");
    scanf("%f%f", &x0, &x3);
    h=((x3-x0)/n);
    x1=x0+h;
    x2=x0+2*h;
    fx0=f(x0);
    fx1=f(x1);
    fx2=f(x2);
    fx3=f(x3);
    v=0.375*h*(fx0+fx3+3*(fx1+fx2));
    printf("Therefore, the value of integration is: %f\n", v);
    getch();
    return 0;
}