#include<stdio.h>
#include<conio.h>
int main()
{
    short int s=9;
    int i=1;
    float f=3.0;
    double d=5.0;
    long int l=99;
    s=i+l/d*(f-i);
    printf("Result=%hd", s);
    getch();
    return 0;
}
/*
Implicit Type Conversion:
    - When there are constants and variables of different types in an expression, C automatically converts any intermediate values to the proper type. This conversion assures that the exprsesion can be evaluated without losing any significance. THis automatic conversion is known as implicit type conversion. 
    - During evaluation, if operands are of different types, the 'lower' type is automatically converted into the 'higher' type before the opreation proceeds. The result is of the higher type. 
    - The conversion takes place according to a rule called the conversion hierarchy.
    The conversion hierarchy can be represented as:
    short/char->int->unsigned int->long int->unsigned long int->float->double->long double
*/ 