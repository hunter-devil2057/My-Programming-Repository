#include <stdio.h>
#include <conio.h>

int compute(int a, int m, int n){
    int r;
    int y = 1; 
    while (m > 0)    {
        r = m % 2;
        if (r == 1) {
            y = (y*a) % n;
        }
        a = a*a % n;
        m = m / 2;
    }
    return y;
}

int main(){
    int p = 15;        // modulus
    int g = 2;        // base
    int a, b;    // `a` – Alice's secret key, `b` – Bob's secret key.
    int A, B;    // `A` – Alice's public key, `B` – Bob's public key
    a = 6;        // or, use `rand()`
    A = compute(g, a, p);
    b = 15;        // or, use `rand()`
    B = compute(g, b, p);
    int keyA = compute(B, a, p);
    int keyB = compute(A, b, p);
    printf("Alice's secret key is %d\nBob's secret key is %d", keyA, keyB);
    printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}
