#include<stdio.h>
#include<conio.h>

int main()
{
    int firstNum, secondNum;
    float remainder;
    printf("Enter First Integer:\n");
    scanf("%d", &firstNum);
    printf("Enter First Integer:\n");
    scanf("%d", &secondNum);
    remainder=firstNum%secondNum;
    printf("The remainder is: %.2f" , remainder);
    getch();
    return 0;
}