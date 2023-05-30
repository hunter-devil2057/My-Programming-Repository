#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n, i, j, k, p, q;
    float pivot, term, sum=0,a[10][10],b[10],x[10];
    printf("Enter the Dimension of System of Equations:\n");
    scanf("%d",&n);
    printf("Enter coefficients row-wise:\n");
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            scanf("%f", &a[i][j]);
        }
        printf("Enter R.H.S. vector:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%f", &b[i]);
        }
        for (k = 0; k <= n-2; k++)
        {
            pivot=a[k][k];
            if (fabs(pivot)<0.000001)
            {
                printf("Method Failed\n");
            }
            else
            {
                for (i=k+1; i<n; i++)
                {
                    term=a[i][k]/pivot;
                    for (j = 0; j < n; j++)
                    {
                        a[i][j]=a[i][j]-a[k][j]*term;
                    }
                    b[i]=b[i]-b[k]*term;
                }
            }
            x[n-1]=b[n-1]/a[n-1][n-1];
            for (i=n-2; i>=0; i--)
            {
                sum=0;
                for (j = i+1; j<=n-1; j++)
                {
                    sum=sum+a[i][j]*x[j];
                }
                x[i]=(b[i]-sum)/a[i][i];
            }
        }
        printf("Therefore, the required solution of the given equation is: \n");
        for (i = 0; i < n; i++)
        {
            printf("\t\tx%d=%.2f\n",i+1,x[i]);
        }
    getch();
   return 0;
}