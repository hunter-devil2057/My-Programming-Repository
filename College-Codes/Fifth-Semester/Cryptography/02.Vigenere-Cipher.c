#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void vigenereEncrypt(char text[], char key[]){
    int i;
    int textLen = strlen(text);
    int keyLen = strlen(key);
    char encrypted[textLen];
    for (i = 0; i < textLen; i++) {
        char currentChar = text[i];
        char keyChar = key[i % keyLen];
        if (isalpha(currentChar)) {
            char base = isupper(currentChar) ? 'A' : 'a';
            encrypted[i] = (char)((currentChar + keyChar - 2 * base) % 26 + base);
        } else {
            encrypted[i] = currentChar; // Keep non-alphabetic characters unchanged
        }
    }
    encrypted[i] = '\0';
    
    printf("Encrypted Text: %s\n", encrypted);
}

void vigenereDecrypt(char encryptedText[], char key[]) {
    int i;
    int textLen = strlen(encryptedText);
    int keyLen = strlen(key);
    char decrypted[textLen];
    
    for (i = 0; i < textLen; i++) {
        char currentChar = encryptedText[i];
        char keyChar = key[i % keyLen];
        
        if (isalpha(currentChar)) {
            char base = isupper(currentChar) ? 'A' : 'a';
            decrypted[i] = (char)((currentChar - keyChar + 26) % 26 + base);
        } else {
            decrypted[i] = currentChar; // Keep non-alphabetic characters unchanged
        }
    }
    decrypted[i] = '\0';
    
    printf("Decrypted Text: %s\n", decrypted);
}

int main() {
    char text[100];
    char key[100];
    int choice;
    
    printf("Enter the text to be encrypted/decrypted:\n");
    gets(text);
    printf("Enter the key:\n");
    gets(key);
    
    printf("Menu:\n");
    printf("1. Encrypt Text\n");
    printf("2. Decrypt Text\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            vigenereEncrypt(text, key);
            break;
        case 2:
            vigenereDecrypt(text, key);
            break;
        default:
            printf("Invalid Choice\n");
    }
    printf("Student's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}
