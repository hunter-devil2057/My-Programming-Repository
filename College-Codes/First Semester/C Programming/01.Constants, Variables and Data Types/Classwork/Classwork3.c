#include<stdio.h>
#include<conio.h>

int main()
{
    float firstNum, secondNum, result;
    printf("Enter First Number:\n");
    scanf("%f", &firstNum);     //receiving first number.
    printf("Enter Second Number:\n");
    scanf("%f", &secondNum);        //receiving second number...
    // 
    result=firstNum+secondNum;      //performing addition operation. 
    // Displaying result...
    printf("Therefore, the sum of two numbers is:\n\t%.2f + %.2f = %.2f", firstNum, secondNum, result);
    getch();
    return 0;
}