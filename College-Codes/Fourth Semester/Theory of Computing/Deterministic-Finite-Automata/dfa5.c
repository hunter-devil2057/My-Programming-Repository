// C program for implementation of DFA that accepts a set of all string that does not contain 101 as a substring
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[50],state='A';
    int i,j,k;
    printf("Enter string: \n");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        switch(state)
        {
            //q0
            case 'A':
            if(str[i]=='1')
            {
                state = 'B';
            }
            else
            {
                state='A';
            }
            break;
            //q1
            case 'B':
            if(str[i]=='1')
            {
                state = 'B';
            }
            else
            {
                state='C';
            }
            break;
            //q2
            case 'C':
            if(str[i]=='1')
            {
                state = 'D';
            }
            else
            {
                state='A';
            }
            break;
            //q3
            case 'D':
            if(str[i]=='1')
            {
                state = 'D';
            }
            else
            {
                state='D';
            }
            break;
        }
    }
    if(state!='D')
    {
        printf("Given string is accepted");
    }
    else
    {
        printf("Given string is rejected");
    }
}