#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//  calculates (a * b) % c without overflow
int mulmod(int a, int b, int mod)
{
    int x = 0, y = a % mod;
    while (b > 0){
        if (b % 2 == 1) x = (x + y) % mod;
        y = (y * 2) % mod;
        b /= 2;
    }
    return x % mod;
}
// modular exponentiation without overflow
int modulo(int base, int exponent, int mod)
{
    int x = 1;
    int y = base;
    while (exponent > 0){
        if (exponent % 2 == 1) x = (x * y) % mod;
        y = (y * y) % mod;
        exponent = exponent / 2;
    }
    return x % mod;
}
// 'iteration' means number of steps for accuracy
int miller(int n, int iteration)
{
	long long b;
    int i, m, k = 0;
    if (n < 2) return 0;
    if (n != 2 && n % 2 == 0) return 0;
    m = n - 1;
    while (m % 2 == 0)
    {
        m /= 2;
		k++;
    }
	// We choose small random number for simplicity
	int a = rand() % (5 - 1) + 1;
	while(a > n - 2)
	{a--;}
	// Does b = (a ^ m) % n without overflow
	b = modulo(a, m, n);
	if(b == 1 || b == n - 1) return 1; 
    for (i = 0; i < iteration - 1; i++)
    {
		// Does b = (b * b) % n without overflow
		b = mulmod(b, b, n);
		if(b == n - 1) return 1;
		else if(b == 1) return 0;
    }
    return 0;
}

int main()
{
    int num, iteration = 5;
	printf("Enter integer to test primality: ");
	scanf("%d", &num);
	if (miller(num, iteration)) printf("%d is inconclusive\n", num);
	else printf("%d is composite\n", num);
	printf("Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}