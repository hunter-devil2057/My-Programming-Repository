#include<stdio.h>
int main()
{
    int a[50],n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter %d elements of list:\n",n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    selection(a,n);
    printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}
void selection(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
    printf("\nArray after sorting:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}