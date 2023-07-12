// Program to design DFA that accepts set of all strings containing odd number of 'a'
#include <stdio.h>
#include<conio.h>

int state = -1;						
enum STATES{q0, q1};				
char inputs[2] = {'a', 'b'};		
int initial = q0;					
int final[] = {q1};					// Set of final states
int n = 1;							// No. of final states

void transition_q0(char input)
{
	if(input == inputs[0]) state = q1;
	else if(input == inputs[1]) state = q0;
	else state = -1;
}
void transition_q1(char input)
{
	if(input == inputs[0]) state = q0;
	else if(input == inputs[1]) state = q1;
	else state = -1;
}

int main()
{
	int i;
	char string[20];
	char choice;

	while(choice != 'n' && choice != 'N')
	{
		int isAccepted = 0;
		fflush(stdin);
		printf("Enter a string: ");
		gets(string);				// Reads Character even after whitespace

		state = initial;			// Initialize state
		for(i = 0; string[i] != '\0'; i++)
		{
			if(state == q0) transition_q0(string[i]);
			else if(state == q1) transition_q1(string[i]);
			else break;
		}
		for(i = 0; i < n; i++)
		{
			if(state == final[i])
			{
				printf("String Accepted");
				isAccepted = 1;
				break;
			}
		}
		if(isAccepted == 0) printf("String Rejected");
		if(state == -1) printf("Invalid String");
		printf("\nContinue? (Y/N): ");
		scanf(" %c", &choice);
	}
	return 0;
}
