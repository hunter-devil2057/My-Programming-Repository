#include <stdio.h>
void main()
{
	int n = 5, i, max, min;
	int number[10];
	printf("Enter %d numbers: \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &number[i]);
	}
	max = number[0];
	min = number[0];
	for (i = 0; i < n; i++)
	{
		if (number[i] > max)
		{
			max = number[i];
		}
		if (number[i] < min)
		{
			min = number[i];
		}
	}
	printf("The max number is %d\n", max);
	printf("The min number is %d\n", min);
	printf("Student's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
}