#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 3*pow(x, 2)+2*x-5

int main()
{
    float a, b, x0, h, xn, fx0, fxn, term, v;
    int i, k;
    printf("Enter the value of  Lower and Upper Limit of Integration:\n");
    scanf("%f%f", &x0, &xn);
    printf("Enter the Number of Segments:\n");
    scanf("%d", &k);
    h=(xn-x0)/k;
    fx0=f(x0);
    fxn=f(xn);
    term=f(x0)+f(xn);
    for (i=1; i<=k-1; i++)
    {
        a=x0+i*h;
        term=term+2*(f(a));
    }
    v=h/2*term;
    printf("Therefore, the integration value is: %f .\n", v);
    getch();
    return 0;
}