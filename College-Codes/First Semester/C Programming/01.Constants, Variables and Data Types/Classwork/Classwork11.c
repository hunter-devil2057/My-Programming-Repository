#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.1428

int main()
{
    float x, y, r, q, angle;
    printf("Enter the cartesian co-ordinates (x, y):\n");
    scanf("%f%f", &x,&y);
    r=sqrt(pow(x, 2)+pow(y, 2));
    q=atan(y/x);        //provides value of tan inverse (y/x) in radian form
    angle=((180*q)/PI);     //conversion from radian to degree.
    printf("Therefore,\n\tr= %f\n\tAnd, Angle(In Degree) = %.2f degree", r, angle);
    getch();
    return 0;
}