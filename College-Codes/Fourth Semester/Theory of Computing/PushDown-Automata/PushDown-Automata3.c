/* TOC Lab : Implement a PDA for L = { set of all strings over {0,1} such that  n number of as followed by m number of bs ,
where n < m and n, m > 1, acceptance by final state */
#include <stdio.h>
#include<conio.h>
#include <string.h>
#define MAX 100
enum states{q0,q1,q2,qf};
void push(char ch);
void pop();
char get_stack_top();
enum states delta(enum states, char, char);

struct stack
{
	char symbols[MAX];
	int top;
};
struct stack s;

int main()
{
	char input[20];
	enum states curr_state = q0;
	s.top = -1;
	int i = 0;
	char ch = 'e'; // e indicating epsilon
	char st_top = 'e';
	curr_state = delta(curr_state, ch, st_top);

	printf("Enter a string:\n");
	gets(input);

	ch = input[i];
	st_top = get_stack_top();
	int c = 0;

	while (c <= strlen(input))
	{
		curr_state = delta(curr_state, ch, st_top);
		ch = input[++i];
		st_top = get_stack_top();
		c++;
	}
	if (curr_state == qf)
		printf("\n The string %s is accepted.\n", input);
	else
		printf("\n The string %s is not accepted.\n", input);

	return 0;
}

enum states delta(enum states s, char ch, char st_top)
{
	enum states curr_state;
	switch (s)
	{
	case q0:
		if (ch == 'e' && st_top == 'e')
		{
			curr_state = q0;
			push('$'); // $ is stack bottom marker
		}
		else if(ch == 'a' && (st_top == '$' || st_top == 'a'))
		{
			curr_state = q0;
			push(ch);
		}
		else if (ch == 'b' && st_top == 'a')
		{
			curr_state = q1;
			pop();
		}
		break;
	case q1:
		if (ch == 'b' && st_top == 'a')
		{
			curr_state = q1;
			pop();
		}
		else if (ch == 'b' && st_top == '$')
		{
			curr_state = q2;
		}
		break;
	case q2:
		if(ch == 'b' && st_top == '$')
		{
			curr_state = q2;
		}
		else if (ch == '\0' && st_top == '$')
		{
			curr_state = qf;
		}
		else if (ch == 'a')
		{
			curr_state = -1;			// We should not get 'a' after 'b'. So, make it invalid 
		}
		break;
	}
	return curr_state;
}

// function to get stack top symbol
char get_stack_top()
{
	return (s.symbols[s.top]);
}

// push function
void push(char ch)
{
	if (s.top < MAX - 1)
	{
		s.symbols[++s.top] = ch;
	}
	else
	{
		printf("Stack Full.");
	}
}

// pop function
void pop()
{
	if (s.top > -1)
	{
		s.symbols[s.top] = ' ';
		s.top--;
	}
	else
		printf("Stack Empty.");
}