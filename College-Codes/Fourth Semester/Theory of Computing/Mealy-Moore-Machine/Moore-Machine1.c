// Program to design Moore Machine that outputs "a" if set of all strings starts with 01.  Otherwise, it outputs "b"
#include <stdio.h>
#include<conio.h>

int state = -1;						
enum STATES{q0, q1, q2, q3};				
char inputs[2] = {'0', '1'};		
int initial = q0;					
int final[] = {q2};					// Set of final states
int n = 1;							// No. of final states

void transition_q0(char input)
{
	if(input == inputs[0]) state = q1;
	else if(input == inputs[1]) state = q3;
	else state = -1;
}
void transition_q1(char input)
{
	if(input == inputs[0]) state = q3;
	else if(input == inputs[1]) state = q2;
	else state = -1;
}
void transition_q2(char input)
{
	if(input == inputs[0] || input == inputs[1]) state = q2;
	else state = -1;
}
void transition_q3(char input)
{
	if(input == inputs[0] || input == inputs[1]) state = q3;
	else state = -1;
}

int main()
{
	int i;
	char string[20];
	char choice;

	while(choice != 'n' && choice != 'N')
	{
		fflush(stdin);
		printf("Enter a string: ");
		gets(string);				// Reads Character even after whitespace

		state = initial;			// Initialize state
		for(i = 0; string[i] != '\0'; i++)
		{
			if(state == q0)
			{
			 	printf("b");
				transition_q0(string[i]);
			}
			else if(state == q1)
			{
			 	printf("b");
				transition_q1(string[i]);
			}
			else if(state == q2)
			{
			 	printf("a");
				transition_q2(string[i]);
			}
			else if(state == q3)
			{
			 	printf("b");
				transition_q3(string[i]);
			}
			else break;
		}
		if(state == q0) printf("b");
		else if(state == q1) printf("b");
		else if(state == q2) printf("a");
		else if(state == q3) printf("b");
		printf("\nContinue? (Y/N): ");
		scanf(" %c", &choice);
	}
	return 0;
}
