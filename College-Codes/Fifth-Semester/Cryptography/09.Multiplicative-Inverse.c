#include <stdio.h>
#include <conio.h>

int main()
{
    int i,num,multiplicativeInverse;
    printf("Enter number to get multiplicative Inverse:\n");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        multiplicativeInverse=((i*26)+1);
        if(multiplicativeInverse%num==0)
        {
            break;
        }
    }
    multiplicativeInverse=multiplicativeInverse/num;
    printf("Multiplicative inverse of %d is %d\n",num,multiplicativeInverse);
    return 0;
}