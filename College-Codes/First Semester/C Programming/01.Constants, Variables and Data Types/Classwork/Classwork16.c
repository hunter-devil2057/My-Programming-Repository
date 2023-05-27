#include<stdio.h>
#include<conio.h>

int main()
{
    float height, base, area;
    printf("Enter Height:\n");
    scanf("%f", &height);
    printf("Enter Base:\n");
    scanf("%f", &base);
    area=0.5*base*height;
    printf("Therefore, the area of triangle is: %.2f sq. m", area);
    getch();
    return 0;
}