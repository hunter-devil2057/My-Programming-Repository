#include<stdio.h>
#include<conio.h>
#include<math.h>
int a0, a1, a2, a3;
float f(float x)
{
    return (a3*pow(x, 3)+a2*pow(x, 2)+a1*x+a0);
}

int main()
{
    float xl, xm, xu, fxl, fxm, fxu, E, Era;
    printf("Enter the coefficients of a3, a2, a1 and a0:\n");
    scanf("%f%f%f%f", &a3, &a2, &a1, &a0);
    printf("Enter Initial Values and E\n");
    scanf("%f%f%f", &xl, &xm, &E);
    fxl=f(xl);
    fxu=f(xu);
    while (1)
    {
        fxl=f(xl);
        fxu=f(xu);
        xm=(xl+xm)/2;
        fxm=f(xm);
        if ((fxl*fxm)==0)
        {
            printf("Root=%f\n", xm);
        }
        else if((fxl*fxm)<0)
        {
            xu=xm;
        }
        else
        {
            xl=xm;
        }
        Era=(xu-xl)/xu;
        if (Era<E)
        {
            printf("Root=%f\n",xm);
            break;
        }
        getch();
        return 0;
    }   
}