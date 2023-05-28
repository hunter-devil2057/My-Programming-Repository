#include<stdio.h>
#include<conio.h>

int main()
{
    int a=10, b=5, c=40;
    printf("a=%d\tb=%d\tc=%d", a, b, c);
    printf("\na < b => %d",a<b);
    printf("\na > b => %d",a>b);
    printf("\na < b && a < c => %d",(a<b && a<c));
    printf("\na > b && a > c => %d",(a>b && a>c));
    printf("\na < b || a < c => %d",(a<b || a<c));
    printf("\na > b || a > c => %d",(a>b || a>c));
    printf("\na > b || b < c => %d",(a>b || a<c));
    printf("\na < b || b > c => %d",(a<b || a>c));
    printf("\nNote:\n\t0 represents False\n\t1 represents True");
    getch();
    return 0;
}