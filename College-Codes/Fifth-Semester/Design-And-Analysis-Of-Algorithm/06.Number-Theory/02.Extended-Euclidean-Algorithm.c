#include <stdio.h>
#include <conio.h>
int ExtendedEuclideanAlgorithm(int a, int b, int *x, int *y)
{
	if (b == 0)
	{
		*x = 1;
		*y = 0;
		return a;
	}
	int x1, y1;
	int gcd = ExtendedEuclideanAlgorithm(b, a % b, &x1, &y1);
	*x = y1;
	*y = x1 - (a / b) * y1;
	return gcd;
}

int main()
{
	int a, m, x, y;
	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("Enter a modulus: ");
	scanf("%d", &m);
	int gcd = ExtendedEuclideanAlgorithm(a, m, &x, &y);
	printf("Value of x: %d\n", x);
	printf("Value of y: %d\n", y);
	printf("GCD of %d mod %d using Extended Euclidean: %d", a, m, gcd);
	printf("\nName: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
	return 0;
}