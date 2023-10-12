#include <stdio.h>
#include <conio.h>
#include <string.h>

void caesarEncrypt(char text[], int shift, char encryptedText[]) {
    int len = strlen(text);
    for (int i = 0; i < len; i++) {
        if (isalpha(text[i])) {
            char base = isupper(text[i]) ? 'A' : 'a';
            encryptedText[i] = (char)(((text[i] - base + shift) % 26) + base);
        } else {
            encryptedText[i] = text[i];
        }
    }
    encryptedText[len] = '\0';
}

void caesarDecrypt(char encryptedText[], int shift, char decryptedText[]) {
    int len = strlen(encryptedText);
    for (int i = 0; i < len; i++) {
        if (isalpha(encryptedText[i])) {
            char base = isupper(encryptedText[i]) ? 'A' : 'a';
            decryptedText[i] = (char)(((encryptedText[i] - base - shift + 26) % 26) + base);
        } else {
            decryptedText[i] = encryptedText[i];
        }
    }
    decryptedText[len] = '\0';
}

int main() {
    char text[100], encryptedText[100], decryptedText[100];
    int shift=3, choice;
    
    printf("Enter the text: ");
    gets(text);
    
    printf("Menu:\n");
    printf("1. Encrypt Text\n");
    printf("2. Decrypt Text\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            caesarEncrypt(text, shift, encryptedText);
            printf("Encrypted Text: %s", encryptedText);
            break;
        case 2:
            caesarDecrypt(text, shift, decryptedText);
            printf("Decrypted Text: %s", decryptedText);
            break;
        default:
            printf("Invalid Choice\n");
    }
    printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}
