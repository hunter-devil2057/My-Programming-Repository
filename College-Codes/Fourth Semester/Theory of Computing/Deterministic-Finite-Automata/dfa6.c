// Implementation of DFA That ends with 3 consecutive a's
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[50],state='A';
    int i,j,k;
    printf("Enter string : \n");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        switch(state)
        {
            //q0
            case 'A':
            if(str[i]=='a')
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
            if(str[i]=='a')
            {
                state = 'C';
            }
            else
            {
                state='A';
            }
            break;
            //q2
            case 'C':
            if(str[i]=='a')
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
            if(str[i]=='A')
            {
                state = 'D';
            }
            else
            {
                state='B';
            }
            break;
        }
    }
    if(state=='D')
    {
        printf("Given string is accepted");
    }
    else
    {
        printf("Given string is rejected");
    }
}