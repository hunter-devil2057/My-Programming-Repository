#include<stdio.h>
#include<conio.h>

int main()
{
    float principal, rate, time, simpleInterest;
    printf("Enter Principal: Rs.");
    scanf("%f", &principal);
    printf("Enter Time:");
    scanf("%f", &time);
    printf("Enter Rate of Interest per annum: ");
    scanf("%f", &rate);
    simpleInterest=((principal*time*rate)/100);
    printf("Therefore, Simple Interest is: Rs. %.2f", simpleInterest);
    getch();
    return 0;
}