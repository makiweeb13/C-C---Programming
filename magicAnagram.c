#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word1[10];
    char word2[10];
    
    printf("Enter the first word: ");
    scanf("%s", &word1);
    printf("Enter the second word: ");
    scanf("%s", &word2);

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    int c1, c2, low1, low2;

    for (int i = 0; i < len1; i++) {
        if (isalpha(word1[i]) != 0) {
            low1 = tolower(word1[i]);
            c1 += low1;
        }
    }

    for (int i = 0; i < len2; i++) {
        if (isalpha(word2[i]) != 0) {
            low2 = tolower(word2[i]);
            c2 += low2;
        }
    }
    
    if ((c1 == c2) && (len1 == len2)) {
        printf("anagram");
    } else {
        printf("not anagram");
    }
    
    return 0;
}