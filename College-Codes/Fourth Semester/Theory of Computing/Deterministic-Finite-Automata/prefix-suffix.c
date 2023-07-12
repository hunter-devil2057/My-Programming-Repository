// C program to find the prefix, suffix and substring
#include<stdio.h>
#include<string.h>

void findPrefix(char string[]);
void findSuffix(char string[]);
void findSubstring(char string[], int, int);

int main()
{
    char string[20];
    int i, j;
    printf("Enter a string:\n");
    gets(string);

    printf("\nPrefixes:");
    findPrefix(string);
    printf("\nSuffixes:");
    findSuffix(string);

    printf("Enter i and j for substring:\n");
    scanf("%d%d", &i, &j);
    findSubstring(string, i, j);
    return 0;
}

void findPrefix(char string[])
{
    int i, j;
    char prefix[20];
    for (i=strlen(string); i>=0; i--)
    {
        for (j=0; j<i; j++)
        {
            prefix[j]=string[j];
        }
        prefix[j]='\0';
        printf("\n%s", prefix);
    }
}

void findSuffix(char string[])
{
    int i, j, k;
    char suffix[20];
    for (i=0; i<=strlen(string); i++)
    {
        k=i;
        for (j=0; j<strlen(string); j++)
        {
            suffix[j]=string[k];
            k++;
        }
        suffix[j]='\0';
        printf("\n%s", suffix);
    }
}

void findSubstring(char string[], int x, int y)
{
    char substring[20];
    int k=0;
    for (int i=x-1;i<y; i++)
    {
        substring[k]=string[i];
        k++;
    }
    substring[k]='\0';
    printf("Substring: %s", substring);
}