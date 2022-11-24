#include <stdio.h>

int main() {
    int height, i, j;
    
    printf("Enter n: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        if (i%2 != 0) {
            for (j = 0; j < i; j++, printf("*")); 
            printf("\n");
        }   
    }
    for (i = height; i > 0; i--) {
        if (i%2 == 0) {
            for (j = 0; j < i-1; j++, printf("*")); 
            printf("\n");
        }
    }
    
    return 0;
}