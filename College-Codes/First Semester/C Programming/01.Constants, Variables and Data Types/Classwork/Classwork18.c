#include<stdio.h>
#include<conio.h>

int main()
{
    int firstNumber, secondNumber, temp;
    printf("Enter First Number:");
    scanf("%d", &firstNumber);
    printf("Enter Second Number:");
    scanf("%d", &secondNumber);
    printf("Before Swapping, \n\tA = %d and B = %d", firstNumber, secondNumber);
    temp=firstNumber;
    firstNumber=secondNumber;
    secondNumber=temp;
    printf("\nAfter Swapping, \n\tA = %d and B = %d", firstNumber, secondNumber);
    getch();
    return 0;
}