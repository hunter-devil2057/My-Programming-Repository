#include<stdio.h>
#include<conio.h>
void main()
{
    int setA[10], setB[10], num1, num2, i, j;
    // First Set
    printf("How many Elements do you have in Set A?\n");
    scanf("%d",&num1);  //Reading the number of elements present in Set A
    printf("Enter %d Elements present in set A:\n",num1);
    for(i=0; i<num1; i++)
    {
        scanf("%d",&setA[i]);   //Reading the elements present in Set A
    }

    // Second Set
    printf("How many Elements do you have in Set B?\n");
    scanf("%d",&num2);  //Reading the number of elements present in Set B
    printf("Enter %d Elements present in Set B:\n",num2);
    for(j=0; j<num2; j++)
    {
        scanf("%d",&setB[j]);   //Reading the elements present in Set B
    }

    // Resultant Cartesian Product
    printf("\nTherefore, the required Cartesian Product of two sets is:\n");
    printf("{");
    for(i=0; i<num1; i++)
    {
        for(j=0; j<num2; j++)
        {
            printf("(%d,%d)",setA[i],setB[j]);
            printf(",");
        }
    }
    printf("}");
    getch();
}
