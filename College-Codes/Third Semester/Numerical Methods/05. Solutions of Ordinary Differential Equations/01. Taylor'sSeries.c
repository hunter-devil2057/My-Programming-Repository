#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int n)
{  
    if (n==1)
    {
        return 1;
    }
    else
    {
        return(n*fact(n-1));
    }
}

int main()
{
    float x, x0, yx0, yx, fdy, sdy, tdy;
    printf("Enter the Initial Values of x and y:\n");
    scanf("%f%f", &x0, &yx0);
    printf("Enter the value of x at which function is to be evaluated:\n");
    scanf("%f", &x);
    fdy=(x0)*(x0)+(yx0);    //This is the first derivative
    sdy=2*(x0)+2*(yx0)*fdy;     //This is the second derivative
    tdy=2+2*yx0*sdy+2*pow(fdy, 2);
    yx=yx0+(x-x0)*fdy+(pow((x-x0), 2)*sdy)/fact(2)+(pow((x-x0), 3)*tdy)/fact(3);
    printf("The Functional Value at x=%.4f is: %f\n", x, yx);
    getch();
    return 0;
}