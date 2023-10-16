#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Item
{
    int value, weight;
    double ratio;
};

int compare(const void* a, const void* b)
{
    struct Item* a1 = (struct Item*)a;
    struct Item* b1 = (struct Item*)b;
    return (a1->ratio > b1->ratio);
}

double fractionalKnapsack(int W, struct Item arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i].ratio = (double)arr[i].value / arr[i].weight;
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    double finalvalue = 0.0;
    int curWeight = 0;
    for (int i = 0; i < n; i++)
    {
        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
        else
        {
            int remain = W - curWeight;
            finalvalue += arr[i].value * ((double) remain / arr[i].weight);
            break;
        }
    }
    return finalvalue;
}

int main()
{
    int n;
    printf("Enter the number of items:\n");
    scanf("%d", &n);
    struct Item arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value and weight of item %d:\n", i+1);
        scanf("%d %d", &arr[i].value, &arr[i].weight);
    }
    int W;
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &W);
    double maxValue = fractionalKnapsack(W, arr, n);
    printf("Maximum value: %f", maxValue);
    printf("\nDone By: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}