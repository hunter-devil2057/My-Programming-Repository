#include<stdio.h>
#include<conio.h>
#include<math.h>

#define y1(x) 2+(x)-2/3*pow(x, 3)
#define y2(x) 2+(x)+pow(x, 2)-2/3*pow(x, 3)+pow(x,4)/4
#define y3(x) 2+(x)+pow(x, 2)-pow(x, 4)/3-pow(x, 5)/15

int main()
{
    float x, x0, y0, y, ny, er;
    printf("Enter the initial values of x and y:\n");
    scanf("%f%f", &x0, &y0);
    printf("Enter the value of x at which function to be evaluated:\n");
    scanf("%f", &x);

    y=y0;
    y=y0+y1(x);         //First Approximation
    y=y0+y2(x);         //Second Approximation
    y=y0+y3(x);         //Third Approximation

    printf("The Functional Value at x=%f is %f\n", x, y);
    getch();
    return 0;
}