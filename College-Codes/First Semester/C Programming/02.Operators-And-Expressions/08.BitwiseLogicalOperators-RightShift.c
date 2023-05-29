#include<stdio.h>
#include<conio.h>

int main()
{
    int firstNum=57;
    printf("First Default Number:%d", firstNum);
    int secondNum=firstNum>>3;
    printf("\nTherefore,\n\tSecond Number:%d", secondNum);
    // right shift operation means such type of operation which causes the operand to be shifted to the right by some bit positions.
    /*
    Syntax of Right Shift Operations: operand<<n;
    Note:
        - Bits in the operand are shifted to the left by n positions. 
        - The rightmost n bits in the original bit pattern will be lost and the leftmost n bits empty positions will be filled with O's.
    */ 
   getch();
   return 0;
}