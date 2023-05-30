// C program for calculating integral by using two-point Gaussian Quadrature
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) (pow(x, 3)+1)

int main()
{
    float a, b, z1, z2, c1, c2, x1, x2, v;
    printf("Enter the value of Lower and Upper Limit of Integration:\n");
    scanf("%f%f", &a, &b);
    // Setting the Value of Parameters
    c1=1;
    c2=1;
    z1=-0.57735;
    z2=0.57735;

    // Calculating xi
    x1=((b-a)/2*z1)+((b+a)/2);
    x2=((b-a)/2*z2)+((b+a)/2);

    // Calculating Integral Value as, 
    v=((b-a)/2)*((f(x1))+(f(x2)));
    printf("Therefore, the value of integration is: %f .", v);
    getch();
    return 0;
}