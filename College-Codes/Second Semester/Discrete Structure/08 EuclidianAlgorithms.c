#include<stdio.h>
#include<conio.h>
int gcd (int x, int y);
// Main Function
int main()
{ 
    int x, y, g;
    printf("Enter first number\n");
    scanf("%d", &x);  
    printf("Enter second number\n");
    scanf("%d", &y);
    g =gcd(x, y); 
    printf("The gcd of %d and %d = %d\n", x, y, g);    
    getch();
    return 0;
}

// GCD Function 
int gcd(int x, int y)
{
    if(x==0)
    return y;
    else
    return gcd(y%x, x);
}
