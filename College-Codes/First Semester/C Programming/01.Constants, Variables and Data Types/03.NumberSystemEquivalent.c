#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    a=10;       //Here, 10 is decimal 
    b=10;       //Here, 010 is an octal 
    c=0xFF;         //0xFF is a hexadecimal 
    printf("Decimal Integer is: %d", a);
    printf("\nOctal Integer equivalent in decimal is: %d", b);
    printf("\nHexadecimal integer equivalent in decimal is: %d", c);
    return 0;
}