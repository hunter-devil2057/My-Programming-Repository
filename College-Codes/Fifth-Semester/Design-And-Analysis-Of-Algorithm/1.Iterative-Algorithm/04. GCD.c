#include <stdio.h>
void gcd(int a, int b)
{
	if(a == 0) printf("%d is gcd", b);
	else if(b == 0) printf("%d is gcd", a);
	else
	{
		while(b != 0)
		{
			int r = a % b;
			a = b;
			b = r;
		}
		printf("%d is gcd", a);
	}
}
int main()
{
    int n1, n2;
    printf("Enter two positive integers:\n");
    scanf("%d %d",&n1,&n2);
	gcd(n1, n2);
	printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}