#include<stdio.h>
#include<conio.h>

int main()
{
    float centigrade, fahrenheit;
    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f", &fahrenheit);
    centigrade=((fahrenheit-32)*5)/9;
    printf("Therefore,\n\t%.2f fahrenheit = %.2f centigrade", fahrenheit, centigrade);
    getch();
    return 0;
}