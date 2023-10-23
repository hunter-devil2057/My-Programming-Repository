#include <stdio.h>
int comparison = 0;

void min_max_algo(int a[], int l, int r, int* min, int* max);

int main()
{
    int n = 5, i, min, max;
    int a[10];
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int l = 0, r = n - 1;
    min_max_algo(a, l, r, &min, &max);

    printf("The min number is %d", min);
    printf("\nThe max number is %d", max);
	printf("\nTotal no. of comparisons: %d", comparison);
	printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0; 
}

void min_max_algo(int a[], int l, int r, int* min, int* max)
{
	comparison++;
    if (l == r)
    {
        *min = a[l]; 			
        *max = a[l]; 			
    }
    else if (l == r - 1)
    {
        if (a[l] > a[r])
        {
            *min = a[r]; 		
            *max = a[l]; 		
        }
        else
        {
            *min = a[l]; 		
            *max = a[r]; 		
        }
    }
    else
    {
        int mid = (l + r) / 2;
        int min1, max1, min2, max2;
        min_max_algo(a, l, mid, &min1, &max1);
        min_max_algo(a, mid + 1, r, &min2, &max2);
        *min = (min1 < min2) ? min1 : min2;
        *max = (max1 > max2) ? max1 : max2;
    }
}