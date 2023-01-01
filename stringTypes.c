#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {

    char name[25], *nPtr;
    
    printf("Enter a string: ");
    scanf("%s", name);

    int len = strlen(name);

    // Code starting here
    for (int i = 0; i < len; i++) {
        nPtr = name + i;
        if (!isalpha(*nPtr) > 0) {
            printf("%c is not a letter\n", *nPtr);
        }
        else if (islower(*nPtr) > 0) {
            printf("%c is lowercase\n", *nPtr);
        }
        else if (isupper(*nPtr) > 0) {
            printf("%c is uppercase\n", *nPtr);
        }
    }
    // End coding here
}