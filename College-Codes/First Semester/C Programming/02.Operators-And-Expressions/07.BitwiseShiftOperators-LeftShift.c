#include<stdio.h>
#include<conio.h>

int main()
{
    int firstNum=57;
    printf("First Default Number:%d", firstNum);
    int secondNum=firstNum<<3;
    printf("\nTherefore,\n\tSecond Number:%d", secondNum);
    // left shift operation means such type of operation which causes the operand to be shifted to the left by some bit positions.
    /*
    Syntax of Left Shift Operations: operand<<n;
    Note:
        - Bits in the operand are shifted to the left by n positions. 
        - The leftmost n bits in the original bit pattern will be lost and the rightmost n bits empty positions will be filled with OS.
    */ 
   getch();
   return 0;
}