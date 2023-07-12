#include <stdio.h>
#include <string.h>

char keyword[32][10] = {
    "auto", "double", "int", "struct", "break", "else", "long", 
    "switch", "case", "enum", "register", "typedef", "char", "extern", "return", "union", "const", 
    "float", "short", "unsigned", "continue", "for", "signed", "void", "default", "goto", "sizeof", 
    "volatile", "do", "if", "static", "while"
};

enum states {q0, qf, qd};
enum states delta(enum states, char);
int isKeyword(char[]);

int main() {
    enum states currentState = q0;
    char string[20], ch;
    int i = 0;
    printf("Enter a string:\n");
    gets(string);
    ch = string[i];

    if (isKeyword(string)) {
        printf("The string %s is a keyword.\n", string);
    } else {
        while (ch != '\0') {
            currentState = delta(currentState, ch);
            ch = string[++i];
        }
        if (currentState == qf) {
            printf("The string %s is a valid identifier.\n", string);
        } else {
            printf("The string %s is neither a keyword nor a valid identifier.\n", string);
        }
    }
    return 0;
}

// transition function
enum states delta(enum states s, char ch) {
    enum states currentState;
    switch (s) {
        case q0:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch == '_')) {
                currentState = qf; // current state is assumed as final state
            } else {
                currentState = qd;
            }
            break;
        case qf:
            if ((ch >= 'A' && ch <= 'Z' )|| (ch >= 'a' && ch <= 'z') || (ch == '_') || (ch >= '0' && ch <= '9')) {
                currentState = qf; // current state is assumed as final state
            } else {
                currentState = qd;
            }
            break;
        case qd:
            currentState = qd;
            // break;
    }
    return currentState; 
}

int isKeyword(char str[])
{
    for (int i=0; i<32; i++)
    {
        if (strcmp(str, keyword[i])==0)
        {
            return 1;
        }
    }    
    return 0;
}