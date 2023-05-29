#include <stdio.h>
#include <conio.h>
int gcdExtended(int a, int b, int *x, int *y)
 {
    if (a == 0) 
   {
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1; 
    int gcd = gcdExtended(b%a, a, &x1, &y1);    
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}

// main function
int main()
{
    int x, y, a, b;
    printf("Enter value of a:\n");
    scanf("%d", &a);
    printf("Enter value of b:\n");
    scanf("%d", &b);
    int g = gcdExtended(a, b, &x, &y);
    printf("gcd(%d, %d) = %d, x = %d, y = %d", a, b, g, x, y);
    return 0;
}
