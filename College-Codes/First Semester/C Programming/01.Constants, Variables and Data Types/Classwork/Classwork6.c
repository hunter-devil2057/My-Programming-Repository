#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.14

int main()
{
    float radiusLarge, radiusSmall, areaLarge, areaSmall, actualArea;
    printf("Enter Radius of Large Circle:\n");
    scanf("%f", &radiusLarge);      //receiving radius of large circle
    printf("Enter Radius of Small Circle:\n");
    scanf("%f", &radiusSmall);      //receiving radius of small circle.
    // Calculation Part
    areaLarge=PI*pow(radiusLarge, 2);       //Calculating Area of Large Circle
    areaSmall=PI*pow(radiusSmall, 2);       //Calculating Area of Small Circle
    actualArea=areaLarge-areaSmall;     // finding area between two circles. 
    // Displaying Results
    printf("Area of Large Circle: %.2f sq. m", areaLarge);
    printf("\nArea of Small Circle: %.2f sq. m", areaSmall);
    printf("\nArea between two circles: %.2f sq. m", actualArea);
    getch();
    return 0;
}