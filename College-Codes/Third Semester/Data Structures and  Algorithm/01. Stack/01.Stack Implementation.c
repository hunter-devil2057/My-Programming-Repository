// Simple C program for Stack Implementation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
struct stack
{
    int item[MAX];
    int tos;
};
typedef struct stack st;
void push();
int pop(st*);
void display(st*);

void main()
{
    int data, choice, x;
    st *s;
    s->tos=-1;  //Creating Empty Stack
    printf("------------------------------Menu for Program----------------------------\n");
    printf("1: PUSH\n2: POP\n3: Display\n4: Exit\n");
    do
    {
        printf("Enter your Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to be inserted:\n");
            scanf("%d", &data);
            push(s, data);
            break;
        case 2:
            x=pop(s);
            printf("\nThe popped item is:");
            printf("%d\n",x);
            break;
        case 3:
            display(s);
            break;
        default:
            exit(1);
        }
    } while (choice<4);
    getch();
}

// Function for performing PUSH Function 
void push(st *s, int d)
{
    if (s->tos==MAX-1)
    {
        printf("Stack is Full.\n");
    }
    else
    {
        ++s->tos;
        s->item[s->tos]=d;
    }
}

// Function for Performing POP function
int pop(st *s)
{
    int itm;
    if (s->tos==-1)
    {
        printf("Stack is Empty.\n");
        return (0);
    }
    else
    {
        itm=s->item[s->tos];
        s->tos--;
        return(itm);
    }
}

void display(st *s)
{
    int i;
    if (s->tos==-1)
    {
        printf("There is no data item to display.\n");
    }
    else
    {
        for (i = s->tos; i>=0; i++)
        {
            printf("%d\t",s->item[i]);
        }
    }
}