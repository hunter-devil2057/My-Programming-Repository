#include <stdio.h>
#include<conio.h>
#include <string.h>

void check(char password[] )
{
    int i,j;
    int smallFlag = 0, capitalFlag = 0, charFlag = 0, numFlag=0;
    if(strlen(password)<8)
    {
        printf("Password should be of min 8 characters \n");
    }
    for(i=0;i<strlen(password);i++)
    {
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            smallFlag = 1;
        }
        if((password[i] >= 'A' && password[i] <= 'Z'))
        {
            capitalFlag = 1;
        }
        if((password[i] >= '0' && password[i] <= '9'))
        {
            numFlag = 1;
        }
        if(password[i] == '@' ||password[i] == '_' || password[i] == '.'||password[i] == '#' )
        {
            charFlag = 1;
        }
    }
    if(smallFlag==1 && capitalFlag==1 && charFlag ==1 && numFlag==1)
    {
        printf("Valid password");
    }
    else
    {
        printf("invalid password");
    }
}

int main()
{
    char password[15];
    printf("Password should contain uppercase, lowercase, number, @, _, . , # \n");
    printf("Enter password : ");
    gets(password);
    check(password);
}