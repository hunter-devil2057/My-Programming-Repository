#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i, j, n;
    float x, l, v=0,ax[10],fx[10],L[10];
    printf("Enter the number of points:\n");
    scanf("%d", &n);
    printf("Enter the value of x:\n");
    scanf("%f", &x);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of x and fx at x=%d:\n",i);
        scanf("%f%f", &ax[i],&fx[i]);
    }
    for(i=0;i<n;i++)
    {
        l=1.0;
        for(j=0;j<n;j++)
        {
            if(j!=i)
                l=l*((x-ax[j])/(ax[i]-ax[j]));
        }
        L[i]=l;
    }
    for(i=0;i<n;i++)
    {
        v=v+fx[i]*L[i];
    }
    printf("Therefore, the interpolated value is: %.2f .",v);
    return 0;
}