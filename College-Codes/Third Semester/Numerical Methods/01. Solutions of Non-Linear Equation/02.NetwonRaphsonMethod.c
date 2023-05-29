#include<stdio.h>
#include<conio.h>
#include<math.h>

#define F(x) (a3*pow(x, 3)+a2*pow(x, 2)+a1*x+a0)
#define FD(x) (3*a3*pow(x, 2)+2*a2*x+1)     //derivative fo f(x)

float a0, a1, a2, a3;

int main()
{
    int i;
    float x0, x1, fx0, fdx0, E, Er;
    printf("Enter the coefficients of a3, a2, a1 and a0:\n");
    scanf("%f%f%f%f", &a3, &a2, &a1, &a0);
    printf("Enter the initial guess and E:\n");
    scanf("%f%f", &x0, &E);
    while (1)
    {
        fx0=F(x0);
        fdx0=FD(x0);
        x1=x0-fx0/fdx0;
        Er=(x1-x0)/x1;
        if (fabs(Er)<E)
        {
            printf("Root=%f\n", x1);
            break;
        }
        x0=x1;
        if (i==50)
        {
            break;
        }
        i++;
    }
    getch();
    return 0;
}