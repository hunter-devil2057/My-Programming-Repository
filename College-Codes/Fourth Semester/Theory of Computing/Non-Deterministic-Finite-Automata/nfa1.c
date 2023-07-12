// Program to design NFA that accepts set of all strings ending with 1
#include <stdio.h>
#include<conio.h>

int state[50], newState[50];
enum STATES{q0,q1};
char inputs[2] = {'0', '1'};
int initial = q0;
int final[] = {q1};
int n = 1;
int lenX = 0, lenY = 0, len0 = 0, len1 = 0;

void tq0(char input)
{
	len0 = 0;
	if (input == inputs[0])
	{
		newState[len0++] = q0;
	}
	else if (input == inputs[1])
	{
		newState[len0++] = q0;
		newState[len0++] = q1;
	}
}
void tq1(char input)
{
	len1 = 0;
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
					printf("String Accepted");
					isAccepted = 1;
					break;
				}
			}
		}
		if (isAccepted == 0)
			printf("String Rejected");
		printf("\nContinue? (Y/N): ");
		scanf(" %c", &choice);
	}
	return 0;
}