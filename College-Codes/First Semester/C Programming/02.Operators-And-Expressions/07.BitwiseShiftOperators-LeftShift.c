#include<stdio.h>
#include<conio.h>

int main()
{
    int num1=57;
    printf("First Default Number:%d", num1);
    int num2=num1<<3;
    printf("\nTherefore,\n\tSecond Number:%d", num2);
    // left shift operation means such type of operation which causes the operand to be shifted to the left by some bit positions.
    /*
    Syntax of Left Shift Operations: operand<<n;
    Note:
        - Bits in the operand are shifted to the left by n positions. 
        - The leftmost n bits in the original bit pattern will be lost and the rightmost n bits empty positions will be filled with 0's.
    */ 
   getch();
   return 0;
}