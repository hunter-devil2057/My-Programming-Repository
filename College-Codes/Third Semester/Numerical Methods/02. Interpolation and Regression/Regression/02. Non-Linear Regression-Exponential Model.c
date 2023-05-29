#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n, i, j, k;
    float a=0, b=0, r, x[10], y[10], sx=0, slgy=0, sxy=0, sx2=0;
    printf("Enter the Number of Points:\n");
    scanf("%d", &n);
    printf("Enter the value at x and fx:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f%f", &x[i], &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        sx=sx+x[i];
        slgy=slgy+log(y[i]);
        sxy=sxy+x[i]*log(y[i]);
        sx2=sx2+x[i]*x[i];
    }
    b=((n*sxy)-(sx*slgy))/((n*sx2)-pow(sx, 2));;
    r=(slgy/n)-(b*sx/n);
    a=exp(r);
    printf("Therefore, the fitted curve is:\n\ty=%fe^%fx", a, b);
    getch();
    return 0;
}