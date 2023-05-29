#include<stdio.h>
#include<conio.h>

int main()
{
    int male, female;
    float ratio;
    printf("Enter Number of Males:\n");
    scanf("%d", &male);
    printf("Enter Number of Females:\n");
    scanf("%d", &female);
    ratio=(float) male/female;      //explicit type conversion...
    printf("Ratio: %.2f", ratio);
    getch();
    return 0;
}

/*
Explicit Type Conversion
    - in this conversion, type conversion is forcibly converted into one data type into another data type.
    - explicit type conversion or casting a value. 
    - Syntax: (type-name) expression(may be a constant, variable or an expression.)
    Examples: 
    n1=(int) 9.3;        9.3 is converted into integer by truncating i.e., value becomes 9
    n2=(int)16.4/(int) 6.5;     Evaluation is done as 16/6, by resulting 2.
    n3=(double) sum/n;      sum is casted to double and division operation is performed in floating mode. 
    n4=(int) (a+b);     The result of a+b is converted into integer.
    n5=(int) a+b;       a is converted to integer and then added to b.
    n6=sin((double) x);     x is converted to double and the sine value is found.
*/ 