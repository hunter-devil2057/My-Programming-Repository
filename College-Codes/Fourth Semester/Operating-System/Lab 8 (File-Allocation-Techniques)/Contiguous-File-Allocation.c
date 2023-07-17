#include <stdio.h>
#include<conio.h>

int memory[100];

int main()
{
    int blocks,start,length,i,n,j;
    char file[100];
    printf("Enter The Number Of Blocks In The Memory:\n");
    scanf("%d",&blocks);
    printf("\n-----Initialization-----\n");
    for(i=0;i<blocks;i++)
    {
        memory[i]=0;
    }
    printf("Enter The Number Of Inputs:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter The Name Of The File %d:\n",i+1);
        scanf("%s",&file[i]);
        printf("\nEnter The Starting Block Of The File:\n");
        scanf("%d",&start);
        printf("\nEnter The Length Of The File:\n");
        scanf("%d",&length);
        for(j=start;j<start+length;j++)
        {
            memory[j]=1;
        }
    }
    printf("\n-----Output-----\n");
    for(i=0;i<blocks;i++)
    {
        printf("%d ",memory[i]);
    }
}