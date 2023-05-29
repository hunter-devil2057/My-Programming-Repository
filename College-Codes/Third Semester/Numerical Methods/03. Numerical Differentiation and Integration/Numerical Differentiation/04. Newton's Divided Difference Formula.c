// C program for computing differentiation using divided difference polynomial
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, k, n;
    float factor, term, vod, xv, x[10], fx[10], a[10];
    printf("Enter the number of points:\n");
    scanf("%d", &n);
    printf("Enter the values of data point:\n");
    for (i=0; i<n; i++)
    {
        scanf("%f%f", &x[i], &fx[i]);
    }
    printf("Enter the value at which derivative is required:\n");
    scanf("%f", &xv);
    // Calculating Divided Differences
    for (i=0; i<n; i++)
    {
        a[i]=fx[i];
    }
    for (i=0; i<n; i++)
    {
        for (j=n-1; j>i; j--)
        {
            a[j]=(a[j]-a[j-1])/(x[j]-x[j-1-i]);
        }      
    }
    // Calculating the value of derivative
    vod=a[1];
    for (i=2; i<n; i++)
    {
        term=0;
        for (j=0; j<i; j++)
        {
            factor=1;
            for (k=0; k<i; k++)
            {
                if(k!=j)
                    factor=factor*(xv-x[k]);
            }
            term=term+factor;
        }
        vod=vod+(a[i]*term);
    }
    printf("Therefore, the value of first derivative is: %f .", vod);
        getch();
        return 0;
}