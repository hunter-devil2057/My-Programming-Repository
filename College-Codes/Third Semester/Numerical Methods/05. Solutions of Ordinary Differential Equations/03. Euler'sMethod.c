#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x, y) 2*y/x

int main()
{
    float x, xp, x0, y0, y, h;
    printf("Enter the Initial Values of x and y:\n");
    scanf("%f%f", &x0, &y0);
    printf("Enter the value of x at which function is to be evaluated:\n");
    scanf("%f", &xp);
    printf("Enter the Step Size:\n");
    scanf("%f", &h);
    x=x0;
    y=y0;
    for (x=x0; x<xp; x=x+h)
    {
        y=y+f(x, y)*h;
    }
    printf("The Functional Value at x=%.3f is %f .\n", xp, y);
    
}