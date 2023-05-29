// C program for computing integral value by using Composite Simpson's 1/3 Rule
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 1/(1+x)

int main()
{
    int i, k;
    float a, h, x0, xn, fx0, fxn, term, v;
    printf("Enter the value of Lower and Upper Limit of Integration:\n");
    scanf("%f%f", &x0, &xn);
    printf("Enter the Number of Segments:\n");
    scanf("%d", &k);
    h=(xn-x0)/k;
    fx0=f(x0);
    fxn=f(xn);
    term=f(x0)+f(xn);
    for (i=1; i<=k-1; i=i+2)
    {
        a=x0+i*h;
        term=term+4*(f(a));
    }
    for (i=2; i<=k-2; i=i+2)
    {
        a=x0+i*h;
        term=term+2*(f(a));
    }
    v=(h/3)*term;
    printf("Therefore, the value of integration is: %f .\n", v);
    getch();
    return 0;
}