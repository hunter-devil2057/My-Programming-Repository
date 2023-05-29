#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float min(float a, float b);
float max(float a, float b);
int main()
{
     float fa, fb, fi, fu, fac;
     float x = 1.0;
    printf("Enter Membership Function of First Set:\n");
    scanf("%f", &fa);
    printf("Enter Membership Function of Second Set:\n");
    scanf("%f", &fb);
    fi = min(fa, fb);
    fu = max(fa, fb);
    fac = x-fa; 
    printf("The Membership Function of Intersection = %0.1f\n", fi);   
    printf("The Membership Function of Union = %0.1f\n", fu);
    printf("The Membership Function of Complement of First Set = %0.1f\n", fac);
    return 0;
}
float min(float a, float b)
{
   if(a<b)
   return a;
   else
   return b;   
}
 float max(float a, float b)
{
   if(a>b)
   return a;
   else
   return b;   
}   
