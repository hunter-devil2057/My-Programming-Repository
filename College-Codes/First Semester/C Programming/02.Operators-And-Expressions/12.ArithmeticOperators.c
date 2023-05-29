#include <stdio.h>
#include <conio.h>
#include<math.h>

float main()
{
    int i=2, j=5, k=7;
    float a=1.5, b=2.5, c=3.5;
    a=c-i/j+c/k;
    printf("\na => %.2f", a);
    a=(c-i)/k+(j+b)/j;
    printf("\na => %.2f", a);
    a=b*b-((i+j)/c);
    printf("\na => %.2f", a);
    a=b-k+j/k+i*c;
    printf("\na => %.2f", a);
    a=fmod(c+k, 2+b);
    // a=c+k%2+b;
    printf("\na => %.2f", a);
    float x=(b+4), y=(c+2);
    // a=x%y;
    a=fmod((b+4), (c+2));
    printf("\na => %.2f", a);
// getch();
return 0;
}
