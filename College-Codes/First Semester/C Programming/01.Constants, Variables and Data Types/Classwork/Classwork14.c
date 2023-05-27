#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float principal, time, rate, simpleInterest, compoundInterest, compoundAmount, simpleAmount, difference;
    printf("Enter Principal: Rs.");
    scanf("%f", &principal);
    printf("Enter Time (in Year): ");
    scanf("%f", &time);
    printf("Enter Rate in percent per annum: ");
    scanf("%f", &rate);
    simpleInterest=((principal*time*rate)/100);     //Calculating Simple Interest
    compoundInterest=(principal*(pow((1+(rate/100)), time)-1));     //Calculating Compound Interest
    simpleAmount=principal+simpleInterest;      //calculating Simple Amount
    compoundAmount=principal+compoundInterest;      //calculating Compound Amount
    difference=compoundAmount-simpleAmount;
    printf("Simple Interest: Rs. %.2f\nCompound Interest: Rs. %.2f", simpleInterest, compoundInterest);
    printf("\nSimple Amount: Rs. %.2f\nCompound Amount: Rs. %.2f", simpleAmount, compoundAmount);
    printf("\nDifference between Compound Amount and Simple Amount is: Rs. %.2f", difference);
    getch();
    return 0;
}