#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int comparison = 0, swap = 0;

int partition(int a[50], int l, int r)
{
    int pivot = a[l];
    int i = l, j;
    for(j = i + 1; j <= r; j++)
    {
		comparison++;
        if(a[j] <= pivot)
        {
            i++;
			swap++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
	swap++;
    int temp = a[l];
    a[l] = a[i];
    a[i] = temp;
    return i;
}
int randomized_partition(int a[50], int p, int r)
{
	// Generate random number within range of 'p' and 'r'
    int k = (rand() % (r - p + 1)) + p;
	swap++;
    int temp = a[p];
    a[p] = a[k];
    a[k] = temp;
    return partition(a, p, r);
}
int r_selection(int a[], int p, int r, int i)
{
	comparison++;
	if(p == r) return a[p];
	int q = randomized_partition(a, p, r);
	int k = q - p + 1;
	if(i == k) return a[q];
	if(i < k) return r_selection(a, p, q - 1, i);
	if(i > k) return r_selection(a, q + 1, r, i - k);
}

int main()
{
	int a[10], num, i, l, r, result;
	printf("Enter the size of array:\n");
	scanf("%d", &num);

	printf("Enter the elements of array: \n");
	for(i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
	l = 0;
	r = num - 1;
	printf("Enter value of i for r_selectioning: ");
	scanf("%d", &i);
	result = r_selection(a, l, r, i);
	printf("Smallest r_selectioned element of Index %d is: %d", i, result);
	printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
}