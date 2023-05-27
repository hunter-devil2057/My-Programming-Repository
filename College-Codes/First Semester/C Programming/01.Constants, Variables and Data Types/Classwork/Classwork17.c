#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float firstSide, secondSide, thirdSide, perimeter, semiPerimeter, area;
    printf("Enter First Side of a Triangle:");
    scanf("%f", &firstSide);
    printf("Enter Second Side of a Triangle:");
    scanf("%f", &secondSide);
    printf("Enter Third Side of a Triangle:");
    scanf("%f", &thirdSide);
    perimeter=firstSide+secondSide+thirdSide;       //finding perimeter of a triangle
    semiPerimeter=perimeter/2;      //finding semi-perimeter of a triangle
    area=sqrt(semiPerimeter*(semiPerimeter-firstSide)*(semiPerimeter-secondSide)*(semiPerimeter-thirdSide));        //finding area of a triangle
    printf("Therefore, the area of a Scalene Triangle is: %.2f sq. m", area);
    getch();
    return 0;
}