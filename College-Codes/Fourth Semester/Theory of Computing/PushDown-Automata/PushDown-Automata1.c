#include <stdio.h>
#include<conio.h>
#include <string.h>

#define MAX 100

enum states
{
    q0
};

struct stack
{
    char symbols[MAX];
    int top;
};

struct stack s;

enum states delta(enum states s, char ch, char st_top)
{
    enum states curr_state;
    switch (s)
    {
    case q0:
        if (ch == 'e' && st_top == 'e')
        {
            curr_state = q0;
            push('$');
        }
        else if (ch == '0' && (st_top == '$' || st_top == '0'))
        {
            curr_state = q0;
            push(ch);
        }
        else if (ch == '1' && (st_top == '$' || st_top == '1'))
        {
            curr_state = q0;
            push(ch);
        }
        else if (ch == '1' && st_top == '0' || ch == '0' && st_top == '1')
        {
            curr_state = q0;
            pop();
        }
        else if (ch == '\0' && st_top == '$')
        {
            curr_state = q0;
        }
        break;
    }
    return curr_state;
}

char get_stack_top()
{
    return (s.symbols[s.top]);
}

void push(char ch)
{
    if (s.top < MAX - 1)
    {
        s.symbols[++s.top] = ch;
    }
    else
    {
        printf("\n Stack Full.");
    }
}

void pop()
{
    if (s.top > -1)
    {
        s.symbols[s.top] = ' ';
       s.top--;
    }
    else
        printf("\n Stack Empty.");
}

int main()
{
    char input[20];
    enum states curr_state = q0;
    while(1){
    s.top = -1;
    int i = 0;
    char ch = 'e';
    char st_top = 'e';
    curr_state = delta(curr_state, ch, st_top);
    printf("Enter a binary string:\n");
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
    if (s.symbols[s.top] == '$')
        printf("The string %s is accepted. \n", input);
    else
        printf("The string %s is not accepted.\n", input);
    }
    return 0;
}