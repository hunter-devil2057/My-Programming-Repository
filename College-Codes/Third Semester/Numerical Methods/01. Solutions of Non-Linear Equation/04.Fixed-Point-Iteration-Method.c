#include <stdio.h>
#include<conio.h>
#include <math.h>
// Defining function
#define G(x) (a3*pow(x, 3)+a2*pow(x, 2)+a0)/(-a1)
float a0, a1, a2, a3;

int main()
{
    float x0, x1, E, Er;
here:
    printf("Enter the coefficients a3, a2, a1 and a0:\n");
    scanf("%f%f%f%f", &a3, &a2, &a1, &a0);
    printf("Enter Initial Guess and E:\n");
    scanf("%f%f", &x0, &E);
    while (1)
    {
        x1=G(x0);
        Er=(x1-x0)/x1;
        if (fabs(Er)<E)
        {
            printf("Root=%f\n", x1);
            break;
        }
        x0=x1;
    }
    getch();
    return 0;
}