// Simple C program for Language that accepts and ends with different symbols over {a, b}
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[50],state='A';
    int i,j,k;
    printf("Symbols Allowed={a,b}\nEnter string:\n");
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
                state='C';
            }
            break;
            //q1
            case 'B':
            if(str[i]=='a')
            {
                state = 'B';
            }
            else
            {
                state='D';
            }
            break;
            //q2
            case 'C':
            if(str[i]=='b')
            {
                state = 'C';
            }
            else
            {
                state='E';
            }
            break;
        //q3
            case 'D':
            if(str[i]=='b')
            {
                state = 'D';
            }
            else
            {
                state='B';
            }
            break;
            case 'E':
            if(str[i]=='b')
            {
                state = 'C';
            }
            else
            {
                state='E';
            }
            break;
        }
    }
    if(state=='D' || state=='E')
    {
        printf("Given string is accepted");
    }
    else
    {
        printf("Given string is rejected");
    }
}