// Implementing string editing algorithm(leveshtein algorithm) in C
#include <string.h>
#include <stdio.h>

static int distance (char * word1, int len1,char * word2,int len2)
{
    int i, j, matrix[len1 + 1][len2 + 1];
    for (i = 0; i <= len1; i++) {
        matrix[i][0] = i;
    }
    for (i = 0; i <= len2; i++) {
        matrix[0][i] = i;
    }
    for (i = 1; i <= len1; i++) {
        char c1, c2;
        c1 = word1[i-1];
        for (j = 1; j <= len2; j++) {
            c2 = word2[j-1];
            if (c1 == c2) {
                matrix[i][j] = matrix[i-1][j-1];
            }
            else {
                int delete = matrix[i-1][j] + 1;
                int insert = matrix[i][j-1] + 1;
                int replace = matrix[i-1][j-1] + 1;
                int minimum = delete;
                if (insert < minimum) minimum = insert;
                if (replace < minimum) minimum = replace;
                matrix[i][j] = minimum;
            }
        }
    }
    return matrix[len1][len2];
}

int main ()
{
    char * word1, * word2;
    word1 = "manish";
    word2 = "shiwakoti";
    int len1 = strlen (word1);
    int len2 = strlen (word2);
    int d = distance (word1, len1, word2, len2);
    printf ("Minimum number of operations is %d.",d);
	printf("\nStudent's Name: Manish Shiwakoti\nSymbol No.: 26448/077");
    return 0;
}