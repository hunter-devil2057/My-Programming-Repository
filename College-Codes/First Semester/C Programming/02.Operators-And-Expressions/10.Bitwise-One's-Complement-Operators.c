#include<stdio.h>
#include<conio.h>

int main()
{
    unsigned int firstNum = 57;
    printf("The default value is:\nnum1 =>%u", firstNum);
    unsigned int secondNum;
    secondNum = ~firstNum;       //~ is a bitwise one's-complement operator
    printf("\nnum2 => %u", secondNum);
    // %u is a conversion character for unsigned int.
getch();
return 0;
}

/*
Bitwise-One's Complement Operators:
    - Unary operator
    - inverts all the bits represented by its operand.
    - This means that, 0's are changed into 1's and 1's are changed into 0's.
    -  For Example:
        If n1=60, then if we execute the statement,
            n2=~n1;
            then the result is calculated as, 
            n1 -> 0000 0000 0011 1100
            n2 -> 1111 1111 1100 0011
        The resulting bit pattern represents the decimal -61.
*/ 