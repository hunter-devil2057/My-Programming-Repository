#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    float d, e, f;
    a=10;
    b=3;
    c=5;
    d=20.5;
    e=10.25;
    f=3.5;
    printf("a/b=%d\ta/c=%d\t", a/b, a/c);
    printf("\nd/e=%.2f\td/f=%.2f\td/a=%.2f\t", d/e, d/f, d/a);
    getch();
    return 0;
}