#include<stdio.h>       //linking header file for standard I/O, also known as preprocessor directives.
#include<conio.h>       //linking header file for console I/O, also known as preprocessor directives.
#include<math.h>        //linking header file math for performing pow(expression, power); function 

#define PI 3.1428       //this is symbolic constant/Constant Values of PI 
#define SIZE 80         //this is symbolic constant/Constant values of SIZE

int main()
{
    float r1, r2, r3, a1, a2, a3;
    printf("Enter radius of three different circles:\n");
    scanf("%f%f%f", &r1,&r2,&r3);       //receiving three input radius at a time. 
    a1=PI*pow(r1,2);        //Area of First Circle
    a2=PI*pow(r2,2);        //Area of Second Circle
    a3=PI*pow(r3,2);    //Area of Third Circle

    // Displaying the values
    printf("Therefore,\n");
    printf("\tArea of First Circle= %.2f sq. m", a1);
    printf("\n\tArea of First Circle= %.2f sq. m", a2);
    printf("\n\tArea of First Circle= %.2f sq. m", a3);
}