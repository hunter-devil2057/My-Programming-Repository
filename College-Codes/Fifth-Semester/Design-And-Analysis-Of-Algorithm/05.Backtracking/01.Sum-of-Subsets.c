#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

int flag = 0;

void subsetSum(int i, int n, int set[], int sum, int subset[], int subSize){
    // If sum is zero, then there exists a subset
    if (sum == 0)
    {
        flag = 1;
        printf("[ ");
        for (int i = 0; i < subSize; i++)
        {
            printf("%d ", subset[i]);
        }
        printf("]\n");
        return;
    }
    // If we have reached the end of the array, return
    if (i == n) return;
    // Not considering the current element
    subsetSum(i + 1, n, set, sum, subset, subSize);
    // Consider the current element if it is less than or equal to sum
    if (set[i] <= sum)
    {
        // Push the current element into the subset
        subset[subSize] = set[i];
        // Recursive call to consider the current element
        subsetSum(i + 1, n, set, sum - set[i], subset, subSize + 1);
        // Pop-back the element after the recursive call to restore the subset's original configuration
    }
}

int main()
{
    int set[] = {1, 2, 1};
    int sum = 3;
    int n = sizeof(set)/sizeof(set[0]);
    int subset[n];
    printf("Subsets for sum are:\n");
    subsetSum(0, n, set, sum, subset, 0);
	 printf("\nName: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}