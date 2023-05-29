#include<stdio.h>
#include<conio.h>

int main()
{
    int firstNum=60, secondNum=15, AND, OR, XOR;
    AND=firstNum&secondNum;
    OR=firstNum|secondNum;
    XOR=firstNum^secondNum;
    printf("Bitwise AND => %d", AND);
    printf("\nBitwise OR => %d", OR);
    printf("\nBitwise XOR => %d", XOR);
    getch();
    return 0;
}

/*
Bitwise Logical Operators
    - Bitwise logical operators perform logical tests between two integer-type operands.
    - These operators work on their operands bit-by-bit starting from the LSB (i.e., the rightmost bit).
    - Bitwise AND(&), Bitwise OR(|) and Bitwise Exclusive OR/Bitwise XOR (^) are three logical bitwise operators.

    - Bitwise AND (&) Operators:
        - The bitwise AND performs logical ANDing between two operands.
        - The result ANDing operation is 1 if both the bits have a value of 1; otherwise it is 0.
        For Example:
            If 
                num1 =  0101 0000 0000 0010 and num2 = 0001 0010  1100   1010
                Then, 
                    num=(num1&num2);
                Gives, 
                        0001 0000 0000 0010
        
        - Bitwise OR(|)
            - The bitwise AND performs logical ANDing between two operands.
            - The result ANDing operation is 1 if both the bits have a value of 1; otherwise it is 0.
            For Example:
                If
                    num1 =  0101 0000 0000 0010 and num2 = 0001 0010 1100 1010
                    Then,
                            num=(num1|num2) gives, 
                               = 0101 0010 1100 1010
        - Bitwise Exclusive OR/Bitwise XOR(^)
            - The bitwise XOR performs logical XORing between two operands.
            - The result of XORing operation is 1 only if one of the bits have a value of 1; otherwise it is 0.
            For Example:
                If 
                    num1 =  0101 0000 0000 0010 and num2 = 0001 0010 1100 1010
                    Then,
                            num=(num1^num2); gives,
                               = 0100 0010 1100 1000
*/ 