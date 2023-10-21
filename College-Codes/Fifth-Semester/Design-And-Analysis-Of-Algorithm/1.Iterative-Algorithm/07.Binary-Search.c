#include <stdio.h>
#include<conio.h>
int main()
{
    int i, low, high, mid, n, key, array[100];
    printf("Enter Number of Elements, n:");
    scanf("%d",&n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
    printf("Enter value to find:\n");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high)
    {
        if(array[mid] < key)
        low = mid + 1;
        else if (array[mid] == key)
        {
            printf("%d found at location %d\n", key, mid+1);
            break;
        }
    else
        high = mid - 1;
        mid = (low + high)/2;
    }
    if(low > high){printf("Not found! %d isn't present in the list\n", key);}
    printf("Student's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}