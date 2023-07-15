#include <stdio.h>
#include <string.h>

#define SIZE 10
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int usedDigits[SIZE] = {0};

int isValidSolution(int* solution, char* uniqueLetters) {
    int s, e, n, d, m, o, r, y;
    s = solution[uniqueLetters[0] - 'A'];
    e = solution[uniqueLetters[1] - 'A'];
    n = solution[uniqueLetters[2] - 'A'];
    d = solution[uniqueLetters[3] - 'A'];
    m = solution[uniqueLetters[4] - 'A'];
    o = solution[uniqueLetters[5] - 'A'];
    r = solution[uniqueLetters[6] - 'A'];
    y = solution[uniqueLetters[7] - 'A'];

    int send = s * 1000 + e * 100 + n * 10 + d;
    int more = m * 1000 + o * 100 + r * 10 + e;
    int money = m * 10000 + o * 1000 + n * 100 + e * 10 + y;

    return (send + more == money);
}

void solveCryptarithmetic(char* uniqueLetters, int* solution, int letterIndex, int numLetters) {
    if (letterIndex == numLetters) {
        if (isValidSolution(solution, uniqueLetters)) {
            printf("Valid solution found:\n");
            for (int i = 0; i < numLetters; i++) {
                printf("%c = %d\n", uniqueLetters[i], solution[uniqueLetters[i] - 'A']);
            }
        }
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        if (!usedDigits[i]) {
            usedDigits[i] = 1;
            solution[uniqueLetters[letterIndex] - 'A'] = i;

            solveCryptarithmetic(uniqueLetters, solution, letterIndex + 1, numLetters);

            usedDigits[i] = 0;
        }
    }
}

int main() {
    char equation[] = "SEND + MORE = MONEY";
    int solution[SIZE] = {0};
    char uniqueLetters[SIZE] = {0};

    int numLetters = 0;
    int len = strlen(equation);

    for (int i = 0; i < len; i++) {
        if (equation[i] >= 'A' && equation[i] <= 'Z') {
            int j;
            for (j = 0; j < numLetters; j++) {
                if (uniqueLetters[j] == equation[i])
                    break;
            }
            if (j == numLetters) {
                uniqueLetters[numLetters] = equation[i];
                numLetters++;
            }
        }
    }

    solveCryptarithmetic(uniqueLetters, solution, 0, numLetters);

    return 0;
}