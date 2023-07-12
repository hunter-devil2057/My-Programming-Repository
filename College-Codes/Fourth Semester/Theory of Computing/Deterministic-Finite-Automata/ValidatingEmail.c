#include <stdio.h>
#include<conio.h>
#include <string.h>
//VALID EMAILS ARE OF DOMAIN gmail.com outlook.com yahoo.com edu.np //examples:
// abc@gmail.com
// abc@edu.np
// abc@yahoo.com
void check(char password[])
{
    int at_place = 0, i,j=0;
    char domain[50];
    for(i=0;i<strlen(password);i++)
    {
        if(password[i]=='@')
        {
            at_place = ++i;
        }
    }
    for(i=at_place;i<strlen(password);i++)
    {
        domain[j] = password[i];
        j++;
    }
    domain[j] = '\0';
    // printf("%s",domain);
    if(!strcmp(domain,"gmail.com") || !strcmp(domain,"outlook.com") || !strcmp(domain,"edu.np") || !strcmp(domain,"yahoo.com") )
    {
        printf("Email validated.");
    }
    else
    {
        printf("Invalid email");
    }
}
//bhm@gmail.com

int main()
{
    char password[50];
        // printf("Password should contain uppercase, lowercase, number, @, _, . , # \n");
    printf("Enter email : ");
    gets(password);
    check(password);
}