// C program for Matrix Factorization by using Do-Little LU Decomposition
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n, i, j, k;
    float sum=0, a[10][10], u[10][10], l[10][10];
    printf("Enter Dimension of a Matrix:\n");
    scanf("%d", &n);
    printf("Enter Elements of a Matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    // Calculate the Elements of L and U Matrix
    for (j=0; j<n; j++)
        u[0][j]=a[0][j];
    for (i=0; i<n; i++)
        l[i][i]=1;
    for (i=0; i<n; i++)
        l[i][0]=a[i][0]/u[0][0];
    for (j=1; j<n; j++)
    {
        for (i=0; i<=j; i++)
        {
            for (k=0; k<=i-1; k++)
            {
                sum=sum+(l[i][k]*u[k][j]);
            }
            u[i][j]=a[i][j]-sum;
            sum=0;
        }
        for (i=j+1; i<n; i++)
        {
            for (k=0; k<=j-1; k++)
            {
                sum=sum+(l[i][k]*u[k][j]);
            }
            l[i][j]=(a[i][j]-sum)/u[j][j];
            sum=0;
        }       
    }
    printf("****** L Matrix ******\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("\t%f", l[i][j]);
        }
        printf("\n");
    }
    printf("****** U Matrix ******\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("\t%f", u[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
    
    
    
}