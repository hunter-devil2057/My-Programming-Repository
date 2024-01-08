#include <stdio.h>
unsigned int seed = 1234;
unsigned int midSquare(unsigned int seed) {
    unsigned int square = seed * seed;
    unsigned int result = square;
    // keep only 4 digits from the middle of the square
    if(square > 999) {
        result = (square / 100) % 10000;
    }
    return result;
}

int main() {
    for(int i = 0; i < 10; i++) {
        seed = midSquare(seed);
        printf("Random number: %u\n", seed);
    }
    return 0;
}