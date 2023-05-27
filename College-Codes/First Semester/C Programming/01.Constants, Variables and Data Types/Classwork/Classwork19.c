#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.14

int main()
{
    float radius,volume, area;
    printf("Enter Radius of Sphere:\n");
    scanf("%f", &radius);
    area=4*PI*pow(radius, 2);
    volume=(4*PI*pow(radius,3))/3;
    printf("Therefore,\n\tVolume = %.2f cu. m \n\tArea = %.2f sq. m", volume, area);
    getch();
    return 0;
}