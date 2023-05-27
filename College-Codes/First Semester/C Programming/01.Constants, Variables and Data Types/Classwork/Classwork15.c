#include<stdio.h>
#include<conio.h>

int main()
{
    float length, breadth, area, perimeter; 
    printf("Enter Length:\n");
    scanf("%f", &length);
    printf("Enter Breadth:\n");
    scanf("%f", &breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("Therefore,\n\tPerimeter = %.2f m\n\tArea = %.2f sq. m", perimeter, area);
    getch();
    return 0;
}