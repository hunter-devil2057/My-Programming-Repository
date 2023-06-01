//Simple C program for Tower of Hanoi
/*
1. Move disk 1 from Source, S->A to Target, T->C
2. Move disk 2 from S->A to Auxillary A->B
3. Move disk 1  from T->C to A->B
No. of Disk movement: 2^n-1
*/
#include<stdio.h>
#include<conio.h>
void Transfer(char S, char A, char T, int n)
{
    if(n==1)
    {
        printf("\nMove Disk %d from Peg %c to Peg %c.", n, S, T);
    }
    else
    {
        Transfer(S, T, A, n-1);
        printf("\nMove Disk %d from Peg %c to Peg %c.", n, S, T);
        Transfer(A, S, T, n-1);
    }
}

int main()
{
    int n;
    printf("How many disk do you  have?\n=>");
    scanf("%d", &n);
    Transfer('A', 'B', 'C', n);
    return 0;
}