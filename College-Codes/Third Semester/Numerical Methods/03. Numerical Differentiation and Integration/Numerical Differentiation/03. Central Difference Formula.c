#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 2*pow(x, 2)+1

int main()
{
    float x, h, d;
    printf("Enter the value at which derivative is required:\n");
    scanf("%f", &x);
    printf("Enter step-wise increment (h):\n");
    scanf("%f", &h);
    d=((f(x+h))-(f(x-h)))/(2*h);
    printf("Therefore, the value of derivative is: %f .\n", d);
    getch();
    return 0;
}