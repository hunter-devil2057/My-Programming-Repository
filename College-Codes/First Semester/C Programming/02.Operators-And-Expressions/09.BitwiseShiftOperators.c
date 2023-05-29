#include<stdio.h>
#include<conio.h>

int main()
{
    int number = 57;
    int leftShift, rightShift;
    leftShift = number << 3;
    rightShift = number >> 3;
    printf("Left Shift => %d", leftShift);
    printf("\nRight Shift => %d", rightShift);
    getch();
    return 0;
}