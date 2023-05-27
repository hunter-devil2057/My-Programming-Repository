#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;
    printf("Enter the coefficients of x^2:\n");
    scanf("%f", &a);
    printf("Enter the coefficients of x:\n");
    scanf("%f", &b);
    printf("Enter the value of constants:\n");
    scanf("%f", &c);
    discriminant=pow(b,2)-(4*a*c);
    root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);
    printf("Therefore, the roots of given equation is:");
    printf("\n\tRoot1 = %.2f\n\tRoot2 = %.2f", root1, root2);
    getch();
    return 0;
}