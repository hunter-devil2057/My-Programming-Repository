#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float principal, time, rate, compoundInterest;
    printf("Enter Principal: Rs.");
    scanf("%f", &principal);
    printf("Enter Time: ");
    scanf("%f", &time);
    printf("Enter Rate of Interest per annum: ");
    scanf("%f", &rate);
    compoundInterest=principal*(pow((1+rate/100), time)-1);
    printf("Therefore, Compound Interest = Rs. %.2f", compoundInterest);
    getch();
    return 0;
}