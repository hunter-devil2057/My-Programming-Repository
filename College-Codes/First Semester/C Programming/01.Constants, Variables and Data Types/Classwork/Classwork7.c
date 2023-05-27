#include<stdio.h>
#include<conio.h>

int main()
{
    float centigrade, fahrenheit;
    printf("Enter Temperature in Centigrade:\n");
    scanf("%f", &centigrade);
    fahrenheit=((9*centigrade)/5)+32;
    printf("Therefore,\n\t%.2f centigrade = %.2f fahrenheit", centigrade, fahrenheit);
    getch();
    return 0;
}