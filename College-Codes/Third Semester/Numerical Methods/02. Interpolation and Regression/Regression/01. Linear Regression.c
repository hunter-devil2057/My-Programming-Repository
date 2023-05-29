#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n, i, j, k;
    float a=0, b=0, x[10], y[10], sx=0, sy=0, sxy=0, sx2=0;
    printf("Enter the Number of Points:\n");
    scanf("%d", &n);
    printf("Enter the value of x and fx:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f%f", &x[i], &y[i]);
    }
    
    for (i=0; i<n; i++)
    {
        sx=sx+x[i];
        sy=sy+y[i];
        sxy=sxy+x[i]*y[i];
        sx2=sx2+pow(x[i], 2);
    }
    b=((n*sxy)-(sx*sy))/((n*sx2)-pow(sx, 2));
    a=(sy/n)-(b*sx/n);
    printf("Therefore, the fitted line is:\n%f + %f x", a, b);
    getch();
}