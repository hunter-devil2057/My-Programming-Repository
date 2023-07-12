// Program to design NFA that accepts set of all strings containing with 001 as substring
#include <stdio.h>
#include<conio.h>

int state[50], newState[50];
enum STATES{q0,q1,q2,q3};
char inputs[2] = {'0', '1'};
int initial = q0;
int final[] = {q3};
int n = 1;
int lenX = 0, lenY = 0, len0 = 0, len1 = 0, len2 = 0, len3 = 0;

void tq0(char input)
{
	len0 = 0;
	if (input == inputs[0])
	{
		newState[len0++] = q0;
		newState[len0++] = q1;
	}
	else if (input == inputs[1])
	{
		newState[len0++] = q0;
	}
}
void tq1(char input)
{
	len1 = 0;
	if (input == inputs[0])
	{
		newState[len1++] = q2;
	}
}
void tq2(char input)
{
	len2 = 0;
	if (input == inputs[1])
	{
		newState[len2++] = q3;
	}
}
void tq3(char input)
{
	len3 = 0;
	if (input == inputs[0] || input == inputs[1])
	{
		newState[len3++] = q3;
	}
}

void merge_states(int array1[50], int array2[50], int n1, int n2)
{
	int i, j, k = n1;
	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < n1; j++)
		{
			if (array1[j] == array2[i]) break;
		}
		if (j == n1) array1[k++] = array2[i];
	}
	lenX = k;
	lenY = k;
}

int main()
{
	int i, j, k, l;
	char string[20];
	char choice;

	while (choice != 'n' && choice != 'N')
	{
		int isAccepted = 0;
		lenX = 0;
		fflush(stdin);
		// __fpurge(stdin); // Alternative of fflush(stdin);
		printf("Enter a string: ");
		gets(string);
		// Initialize state
		state[lenX++] = initial;
		for (i = 0; string[i] != '\0'; i++)
		{
			int totalState[50], len;
			k = lenX;
			lenY = 0;
			for (j = 0; j < k; j++)
			{
				if (state[j] == q0)
				{
					tq0(string[i]);
					len = len0;
				}
				else if (state[j] == q1)
				{
					tq1(string[i]);
					len = len1;
				}
				else if (state[j] == q2)
				{
					tq2(string[i]);
					len = len2;
				}
				else if (state[j] == q3)
				{
					tq3(string[i]);
					len = len3;
				}
				merge_states(totalState, newState, lenY, len);
			}
			for (l = 0; l < lenX; l++)
			{
				state[l] = totalState[l];
			}
		}
		for (i = 0; i < lenX; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (state[i] == final[j])
				{
					printf("\nString Accepted");
					isAccepted = 1;
					break;
				}
			}
		}
		if (isAccepted == 0) printf("\nString Rejected");
		printf("\nContinue? (Y/N): ");
		scanf(" %c", &choice);
	}
	return 0;
}