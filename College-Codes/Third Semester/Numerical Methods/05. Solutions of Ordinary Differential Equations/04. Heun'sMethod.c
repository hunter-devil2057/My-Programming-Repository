#include<stdio.h>
#include<conio.h>
#define f(x, y) 2*(y)/(x)

int main()
{
    float x, xp, x0, y, y0, h, m1, m2;
    printf("Enter the Initial Values of x and y:\n");
    scanf("%f%f", &x0, &y0);
    printf("Enter the value of x at which function is to be evaluated:\n");
    scanf("%f", &xp);
    printf("Enter Step Size(h):\n");
    scanf("%f", &h);
    x=x0;
    y=y0;
    for (x=x0; x<xp; x=x+h)
    {
        m1=f(x, y);
        m2=f(x+h, y+h*m1);
        y=y+h/2*(m1+m2);
    }
    printf("The Functional Value of x=%f is %f .\n", xp, y);
    getch();
    return 0;
}