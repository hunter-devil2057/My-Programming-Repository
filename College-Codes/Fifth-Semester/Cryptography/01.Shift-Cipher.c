#include <stdio.h>
#include <conio.h>ss
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Function to perform Shift Cipher encryption
void encrypt(char message[], int shift)
{
    int length = strlen(message);
    for (int i = 0; i < length; i++)
    {
        if (isalpha(message[i]))
        {
            char base = islower(message[i]) ? 'a' : 'A';
            message[i] = (message[i] - base + shift) % 26 + base;
        }
    }
}

// Function to perform Shift Cipher decryption
void decrypt(char message[], int shift)
{
    int length = strlen(message);
    for (int i = 0; i < length; i++)
    {
        if (isalpha(message[i]))
        {
            char base = islower(message[i]) ? 'a' : 'A';
            message[i] = (message[i] - base - shift + 26) % 26 + base;
        }
    }
}

int main()
{
    int shift, choice;
    char message[1000];

    printf("Enter your choice:\n");
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    scanf("%d", &choice);

    printf("Enter the message: ");
    scanf(" %[^\n]s", message);

    printf("Enter the shift key (0-25): ");
    scanf("%d", &shift);

    switch (choice)
    {
        case 1:
            encrypt(message, shift);
            printf("Encrypted message: %s\n", message);
            break;
        case 2:
            decrypt(message, shift);
            printf("Decrypted message: %s\n", message);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    printf("Student's Name: Manish Shiwakoti\nRoll No.: 26448/077");
    return 0;
}