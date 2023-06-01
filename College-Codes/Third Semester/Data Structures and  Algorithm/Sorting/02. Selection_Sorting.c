#include<stdio.h>
int main()
{
    int a[50],n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("\n Enter %d elements of list:\n",n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    selection(a,n);
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