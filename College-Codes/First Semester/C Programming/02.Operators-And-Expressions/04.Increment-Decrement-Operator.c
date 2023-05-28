#include<stdio.h>
#include<conio.h>

int main()
{
    int a=5;
    printf("The default value of a is:\n\ta = %d", a);
    printf("\nFor Increment Operators,");
    printf("\nWhen a=a++, the value of a is: %d", a++);
    printf("\nWhen a=++a, the value of a is: %d", ++a);
    printf("\nFor Decrement Operators,");
    printf("\nWhen a=a--, the value of a is: %d", a--);
    printf("\nWhen a=--a, the value of a is: %d", --a);
    getch();
    return 0;
}