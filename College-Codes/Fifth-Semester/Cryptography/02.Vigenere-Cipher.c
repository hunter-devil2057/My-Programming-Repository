#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

// Function to perform Vigenere Cipher encryption
void vigenereEncrypt(char text[], char key[]) {
    int textLength = strlen(text);
    int keyLength = strlen(key);
    for (int i = 0, j = 0; i < textLength; ++i) {
        char currentChar = text[i];
        if (isalpha(currentChar)) {
            char keyChar = tolower(key[j % keyLength]) - 'a';
            if (isupper(currentChar)) {
                text[i] = (currentChar - 'A' + keyChar) % 26 + 'A';
            } else {
                text[i] = (currentChar - 'a' + keyChar) % 26 + 'a';
            }
            ++j;
        }
    }
}

// Function to perform Vigenere Cipher decryption
void vigenereDecrypt(char text[], char key[])
{
    int textLength = strlen(text);
    int keyLength = strlen(key);
    for (int i = 0, j = 0; i < textLength; ++i)
    {
        char currentChar = text[i];
        if (isalpha(currentChar))
        {
            char keyChar = tolower(key[j % keyLength]) - 'a';
            if (isupper(currentChar))
            {
                text[i] = (currentChar - 'A' - keyChar + 26) % 26 + 'A';
            } else
            {
                text[i] = (currentChar - 'a' - keyChar + 26) % 26 + 'a';
            }
            ++j;
        }
    }
}

int main()
{
    char text[1000];
    char key[100];
    int choice;

    do
    {
        printf("Vigenere Cipher Menu:\n");
        printf("1. Encrypt\n");
        printf("2. Decrypt\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the text to be encrypted: ");
                scanf(" %[^\n]s", text);
                printf("Enter the key: ");
                scanf("%s", key);
                vigenereEncrypt(text, key);
                printf("Encrypted text: %s\n", text);
                break;
            case 2:
                printf("Enter the text to be decrypted: ");
                scanf(" %[^\n]s", text);
                printf("Enter the key: ");
                scanf("%s", key);
                vigenereDecrypt(text, key);
                printf("Decrypted text: %s\n", text);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please choose 1, 2, or 3.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}