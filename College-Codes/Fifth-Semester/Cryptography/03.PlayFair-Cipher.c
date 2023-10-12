#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5

char playfairMatrix[SIZE][SIZE];

void initializePlayfairMatrix(char key[]) {
    char uniqueChars[26] = {0};
    int i, j, k = 0;

    for (i = 0; i < strlen(key); i++) {
        if (key[i] != 'j' && !uniqueChars[key[i] - 'a']) {
            playfairMatrix[k / SIZE][k % SIZE] = key[i];
            uniqueChars[key[i] - 'a'] = 1;
            k++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (i != ('j' - 'a') && !uniqueChars[i]) {
            playfairMatrix[k / SIZE][k % SIZE] = 'a' + i;
            k++;
        }
    }
}

void prepareMessage(char text[], char digraphs[]) {
    int i, j = 0;
    for (i = 0; i < strlen(text); i += 2) {
        char first = text[i];
        char second = (text[i + 1] == '\0') ? 'x' : text[i + 1];

        if (first == second) {
            second = 'x';
            i--;
        }

        digraphs[j++] = first;
        digraphs[j++] = second;
    }
    digraphs[j] = '\0';
}

void findPosition(char ch, int *row, int *col) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (playfairMatrix[i][j] == ch) {
                *row = i;
                *col = j;
                return;
            }
        }
    }
}

void playfairEncrypt(char digraphs[]) {
    char encryptedDigraphs[strlen(digraphs)];
    int i, row1, col1, row2, col2;

    for (i = 0; i < strlen(digraphs); i += 2) {
        findPosition(digraphs[i], &row1, &col1);
        findPosition(digraphs[i + 1], &row2, &col2);

        if (row1 == row2) {
            encryptedDigraphs[i] = playfairMatrix[row1][(col1 + 1) % SIZE];
            encryptedDigraphs[i + 1] = playfairMatrix[row2][(col2 + 1) % SIZE];
        } else if (col1 == col2) {
            encryptedDigraphs[i] = playfairMatrix[(row1 + 1) % SIZE][col1];
            encryptedDigraphs[i + 1] = playfairMatrix[(row2 + 1) % SIZE][col2];
        } else {
            encryptedDigraphs[i] = playfairMatrix[row1][col2];
            encryptedDigraphs[i + 1] = playfairMatrix[row2][col1];
        }
    }
    encryptedDigraphs[i] = '\0';
    printf("Encrypted Text: %s", encryptedDigraphs);
}

void playfairDecrypt(char digraphs[]) {
    char decryptedDigraphs[strlen(digraphs)];
    int i, row1, col1, row2, col2;

    for (i = 0; i < strlen(digraphs); i += 2) {
        findPosition(digraphs[i], &row1, &col1);
        findPosition(digraphs[i + 1], &row2, &col2);

        if (row1 == row2) {
            decryptedDigraphs[i] = playfairMatrix[row1][(col1 - 1 + SIZE) % SIZE];
            decryptedDigraphs[i + 1] = playfairMatrix[row2][(col2 - 1 + SIZE) % SIZE];
        } else if (col1 == col2) {
            decryptedDigraphs[i] = playfairMatrix[(row1 - 1 + SIZE) % SIZE][col1];
            decryptedDigraphs[i + 1] = playfairMatrix[(row2 - 1 + SIZE) % SIZE][col2];
        } else {
            decryptedDigraphs[i] = playfairMatrix[row1][col2];
            decryptedDigraphs[i + 1] = playfairMatrix[row2][col1];
        }
    }
    decryptedDigraphs[i] = '\0';
    printf("Decrypted Text: %s", decryptedDigraphs);
}

int main() {
    char key[100], text[100], digraphs[100];
    int choice;

    printf("Enter the text: ");
    scanf("%s", text);

    printf("Enter the key: ");
    scanf("%s", key);

    initializePlayfairMatrix(key);
    prepareMessage(text, digraphs);

    printf("Menu:\n");
    printf("1. Encrypt Text\n");
    printf("2. Decrypt Text\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            playfairEncrypt(digraphs);
            break;
        case 2:
            playfairDecrypt(digraphs);
            break;
        default:
            printf("Invalid Choice\n");
    }
    printf("\nDone By: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}
