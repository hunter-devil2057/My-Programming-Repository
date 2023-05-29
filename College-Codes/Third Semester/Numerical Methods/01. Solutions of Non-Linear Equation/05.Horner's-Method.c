// C program for Evaluating Polynomial using Horner's Method
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define P(x) (a[4]*pow(x, 4)+a[3]*pow(x, 3)+a[2]*pow(x, 2)+a[1]*x+a[0])

float a[100], b[100];

int main()
{
    float x;
    int n, i;
    printf("Enter the Degree of Polynomial:\n");
    scanf("%d", &n);
    printf("Enter the coefficients of divided polynomial:\n");
    for (i=n; i>=0; i--)
    scanf("%f", &a[i]);
    printf("Enter the value at which polynomial is to be evaluated:\n");
    scanf("%f", &x);
    b[n]=a[n];
    while (n>0)
    {
        b[n-1]=a[n-1]+b[n]*x;
        n--;
    }
    printf("Therefore, the value of polynomial is,\n p(%f)=%f", x, b[0]);
    
}