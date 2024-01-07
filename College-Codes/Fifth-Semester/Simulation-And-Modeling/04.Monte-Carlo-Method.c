#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL_POINTS 1000000
double estimatePI(int totalPoints) {
    int pointsInsideCircle = 0;
    double x, y;
    srand(time(NULL)); // Seed for random number generation
    for (int i = 0; i < totalPoints; i++) {
        x = (double)rand() / RAND_MAX; // Random x-coordinate between 0 and 1
        y = (double)rand() / RAND_MAX; // Random y-coordinate between 0 and 1
        // Check if the point is inside the quarter circle (x^2 + y^2 <= 1)
        if (x * x + y * y <= 1) {
            pointsInsideCircle++;
        }
    }
    // Estimating PI: ratio of points inside circle to total points * 4 (as it's a quarter circle)
    return (double)pointsInsideCircle / totalPoints * 4;
}

int main()
{
    double estimatedPI = estimatePI(TOTAL_POINTS);
    printf("Therefore, the Estimated value of PI using Monte Carlo method: %lf\n", estimatedPI);
    return 0;
}