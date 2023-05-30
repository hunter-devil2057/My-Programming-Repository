// C program for computing integral value by using Composite Simpson's 3/8 Rule
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) pow(x, 3)+3*pow(x, 2)

int main()
{
    float a, h, x0, xn, fx0, fxn, term, v;
    int i, k;
    printf("Enter the value of Lower and Upper Integration of Limit:\n");
    scanf("%f%f", &x0, &xn);
    printf("Enter the Number of Segments:\n");
    scanf("%d", &k);
    h=(xn-x0)/k;
    fx0=f(x0);
    fxn=f(xn);
    term=f(x0)+f(xn);
    for (i=1; i<=k-1; i++)
    {
        if (i%3!=0)
        {
            a=x0+i*h;
            term=term+3*(f(a));
        }
        else
        {
            a=x0+i*h;
            term=term+2*(f(a));
        }
    }
    v=3/8.0*h*term;
    printf("Thereforem the value of integration is: %f", v);
    getch();
    return 0;
}