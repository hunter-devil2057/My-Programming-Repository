#include <stdio.h>
#include <math.h>
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
int selection(int a[], int p, int r, int i)
{
	comparison++;
	if(p == r) return a[p];
	int q = partition(a, p, r);
	int k = q - p + 1;
	if(i == k) return a[q];
	if(i < k) return selection(a, p, q - 1, i);
	if(i > k) return selection(a, q + 1, r, i - k);
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
	printf("Enter the value of i for Selecting: ");
	scanf("%d", &i);
	result = selection(a, l, r, i);
	printf("Index %d smallest selectioned element is: %d", i, result);
	printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No: 26448/077");
}