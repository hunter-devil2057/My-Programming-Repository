#include<stdio.h>
#include<conio.h>

int main()
{
    int firstNumber, secondNumber;
    printf("Enter First Number:\n");
    scanf("%d", &firstNumber);
    printf("Enter Second Number:\n");
    scanf("%d", &secondNumber);
    // Operator pair '?;' is called as Conditional Operators 
    // takes three operators so, called ternary operators.
    /*
    Syntax for Conditional Operators:
        expression1 ? expression2 : expression3
        Here, expression1 is evaluated first 
        if expression1 appears as true then the value of expression2 is the value of conditional expression.
        if expression1 appears as false then the value of expression3 is the value of conditional expression.
    */ 
   int larger=firstNumber>secondNumber?firstNumber:secondNumber;
//    if firstNumber>secondNumber is true, then larger=firstNumber, else larger=secondNumber
   printf("Therefore, the larger number is: %d", larger);
   getch();
   return 0;
}