// C program for calculating derivative by using forward difference formula
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.1415
#define f(x) sin(x)+1

int main()
{
    float angle, h, x, d;
    printf("Enter Angle in Degree:\n");
    scanf("%f", &angle);
    printf("Enter step-wise Increment(h):\n");
    scanf("%f", &h);
    x=PI/180*angle;            //Convert in to Radian
    d=((f(x+h))-(f(x)))/h;
    printf("Therefore, the value of derivative is: %f .\n", d);
    getch();
    return 0;
}