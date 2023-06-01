#include<stdio.h>
#include<conio.h>
#define f(x, y) 2*(x+y)

int main()
{
    float x, xp, x0, y, y0, h, m1, m2, m3, m4;
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
        m2=f(x+0.5*h, y+0.5*h*m1);
        m3=f(x+0.5*h, y+0.5*h*m2);
        m4=f(x+h, y+h*m3);
        y=y+h/6*(m1+2*m2+2*m3+m4);
    }
    printf("The Functional Value of x=%f is %f .\n", xp, y);
    getch();
    return 0;
}