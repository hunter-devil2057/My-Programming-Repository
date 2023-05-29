#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter the value(n):");
    scanf("%d", &num);
    printf("integer Occupies=> %d bytes\n", sizeof(num));
    printf("double Constant Occupies=> %d bytes\n", sizeof(16.18));
    printf("long int Data Type Qualifier Occupies=> %d bytes\n", sizeof(15L));
    printf("float Data Type Occupies=> %d bytes", sizeof(float));
    getch();
    return 0;
}
/*
sizeof operator
    - used with an operand to return the number of bytes the operand occupies.
    Syntax: sizeof(variable_name/constant);
    - It is a compile time operator.
    - The operand may be a constant, variable or a data type qualifier.
    - determines the length of arrays and structures when their sizes are unknown to the programmer.
    - also used to allocate memory space dynamically to variables during program execution. 
*/ 