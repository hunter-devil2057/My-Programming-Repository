#include<stdio.h>
#include<conio.h>

int main()
{
    float a, b, sum;
    // clrscr();
    // clrscr is only used only in older version of C .i.e., like Turbo C/C++
    a=10.5;
    b=30.52;
    sum=a+b;
    printf("Therefore, the sum of two number is:\n %.2f + %.2f = %.2f ");
    getch();        //this function in C program, keeps the terminal alive untill we press any key
    //getch()=> getcharacter
    return 0;
}