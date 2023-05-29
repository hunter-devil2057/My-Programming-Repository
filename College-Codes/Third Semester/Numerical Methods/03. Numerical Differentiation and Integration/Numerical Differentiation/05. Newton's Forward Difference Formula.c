// C program for calculating the value derivative by using forward differences.
#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}

int main()
{
    int n, i, j, k;
    float val=0, p, xp, x[10], fx[10], fd[10], h, s, term1, term2, prev;
    printf("Enter the number of points:\n");
    scanf("%d", &n);
    printf("Enter the values of x and f(x):\n");
    for (i=0; i<n; i++)
    {
        scanf("%f%f", &x[i], &fx[i]);
    }
    printf("Enter the value at which derivative is needed:\n");
    scanf("%f", &xp);
    h=(x[1]-x[0]);
    s=(xp-x[0])/h;
    // Calculation of Forward Differences
    for (i=0; i<n; i++)
    {
        fd[i]=fx[i];
    }
    for (i=0; i<n; i++)
    {
        for (j=n-1; j>i; j--)
        {
            fd[j]=(fd[j]-fd[j-1]);
        }
    }
    // Calculating value of first derivative
    val=fd[1];
    prev=1;
    for (i=2; i<n; i++)
    {
        term1=1;
        for (k=2; k<=i; k++)
        {
            term1=term1*(s-k+2);
        }
        term2=(s-i+1)*prev;
        prev=(term1+term2);
        val=val+(fd[i]*(term1+term2))/fact(i);
    }
    val=val/h;
    printf("Therefore, the value of First Derivative is: %f .\n", val);
    getch();
    return 0;
}