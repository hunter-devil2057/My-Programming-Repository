#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define N 10

int check(int array[], int num)
{
    for (int i=0; i<N; i++)
    {
        if (array[i]==num)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

void generateRandomNumber(int a, int x0, int c, int m)
{
    int x1, array[N]; 
    for (int i = 0; i<N; i++)
    {
        x1=(a*x0+c)%m;
        x0=x1;
        if (check(array, x1)==1)
        {
            array[i]=x1;
            printf("%d\t", x1);
        }
        else
        {
            printf("Finish after repeating sequence...");
            break;
        }
    }
    printf("\n-------------------------\n");
}

int main(void)
{
    int a, c, m, seed=27;
    while(1)
    {
        puts("Menu:\n1.Additive LCG\n2.Multiplicative LCG\n3.Mixed LCG\n4.Quit");
        printf("Enter your Choice:\n");
        a=57;
        c=18;
        m=100;
        int choice;
        scanf("%d", &choice);
        if (choice==1)
        {
            a=1;
            generateRandomNumber(a, seed, c, m);
        }
        else if (choice==2)
        {
            c=0;
            generateRandomNumber(a, seed, c, m);
        }
        else if (choice==3)
        {
            generateRandomNumber(a, seed, c, m);
        }
        else if(choice==4)
        {
            break;
        }
        else
        {
            puts("Invalid Choice!!!\nPlease Try Again...");
            return 0;
        }        
    }
}