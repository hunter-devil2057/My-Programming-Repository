#include<stdio.h>
#include <conio.h>

int main()
{
    int a[50],n,i,j,temp;
    printf("Enter the number of Data item:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    for(i=1;i<n;++i)
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    printf("Data after sorting: ");
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
    printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}