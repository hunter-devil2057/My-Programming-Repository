#include<stdio.h>
#include<conio.h>
#include<math.h>        //used for pow(variable, power) function

#define PI 3.14

int main()
{
    float radius, area, circumference;
    printf("Enter Radius of Circle:\n");
    scanf("%f", &radius);
    circumference=2*PI*radius;
    area=PI*pow(radius,2);
    printf("Therefore,\n\tCircumference: %.2f m\n\tArea: %.2f sq. m", circumference, area);
    return 0;
    getch();
}