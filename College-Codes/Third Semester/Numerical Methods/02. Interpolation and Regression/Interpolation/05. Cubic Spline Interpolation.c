#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n, i, j, k, xp;
    float val, pivot, sum;
    float h[10], x[10], fx[10], u[10], v[10], b[10], m[10][10], r[10], e[10];
    printf("Enter the Number of Points:\n");
    scanf("%d", &n);
    printf("Enter the Sample Points:\n");
    for (i=0; i<n; i++)
    {
        scanf("%f%f", &x[i], &fx[i]);
    }
    printf("Enter the Interpolation Point:\n");
    scanf("%d", &xp);
    for (i = 0; i <n-1; i++)
    {
        h[i]=x[i+1]-x[i];
        b[i]=(fx[i+1]-fx[i])/h[i];
    }
    
    for (i = 1; i <=n-1; i++)
    {
        u[i]=2*(h[i-1]+h[i]);
        v[i]=6*(b[i]-b[i-1]);
    }
    
    for (i = 1; i < n-1; i++)
    {
        // Construction of Matrix in L.H.S.
        m[i][i]=u[i];
        if (i!=1)
        {
            m[i][i-1]=h[i-1];
            m[i-1][i]=h[i-1];
        }
        r[i]=v[i];          //R.H.S. Vector
    }

    // Forward Elimination
    for (k = 1; k < n-2; k++)
    {
        pivot=m[k][k];
        if (pivot<0.000001)
        {
            printf("Method Failed.\n");
        }
        else
        {
            for (i = k+1; i < n-1; i++)
            {
                for (j=1; j<n-1; j++)
                {
                    m[i][j]=m[i][j]-m[k][j]*m[i][k]/pivot;
                }
                r[i]=r[i]-r[k]*m[i][k]/pivot;
            }
        }
    }
    e[n-2]=r[n-2]/m[n-2][n-2];

    // Backward Substitution
    for (i=n-3; i>=1; i--)
    {
        sum=0;
        for (j=i+1; j<n-1; j++)
        {
            sum=sum+m[i][j]*e[j];
        }
        e[i]=(r[i]-sum)/m[i][i];
    }
    // Locating the interval in which interpolation point lies
    for (i=0; i<=n-1; i++)
        if (xp<=x[i])
            break;
        i=i-1;
        
    // Calculation of Interpolation Value
    val=(e[i+1]/(6*h[i])*pow((xp-x[i]), 3))+(e[i]/(6*h[i])*pow((x[i+1]-xp), 3))+(((fx[i+1]/h[i])-(e[i+1]*h[i]/6))*(xp-x[i]))+(((fx[i]/h[i])-(e[i]*h[i]/6))*(x[i+1]-xp));
    printf("Therefore, the Interpolated Value is: %f .\n", val);
    getch();
    return 0;
}