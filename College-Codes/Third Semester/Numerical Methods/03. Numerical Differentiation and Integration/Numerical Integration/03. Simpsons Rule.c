#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 3*pow(x, 2)+2*x-5
int main()
{
    float h, x0, x1, x2, fx0, fx1, fx2, v;
    int n=2;
    printf("Enter the value of Lower and Upper Limit of Integration:\n");
    scanf("%f%f", &x0, &x2);
    h=(x2-x0)/n;
    x1=x0+h;
    fx0=f(x0);
    fx1=f(x1);
    fx2=f(x2);
    v=(h/3)*(fx0+fx2+4*fx1);
    printf("Therefore, the value of integration is:%f\n", v);
    getch();
    return 0;
}