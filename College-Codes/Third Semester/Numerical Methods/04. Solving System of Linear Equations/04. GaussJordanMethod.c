#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n, i, j, k, p, q;
    float pivot, term, a[10][10];
    printf("Enter the Dimension of System of Equations:\n");
    scanf("%d", &n);
    printf("Enter the Coefficients of Augmented Matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n+1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    for (k=0; k<n; k++)     //Elimination
    {
        pivot=a[k][k];
        for (p=0; p<n+1; p++)
        {
            a[k][p]=a[k][p]/pivot;      //Normalization
        }
        for (i=0; i<n; i++)
        {
            term=a[i][k];
            if (k!=1)
            {
                for (j=0; j<n+1; j++)
                {
                    a[i][j]=a[i][j]-a[k][j]*term;
                }
                
            }
        }
    }
    printf("Therefore, the required solution of the given equation is:\n");
    for (i=0; i<n; i++)
    {
            printf("x%d=%f\n", i+1, a[i][3]);
    }
    getch();
    return 0;   
}