#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Input: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Output: ");
    printf("\n");
    for (int column = 0; column < b; column++) {
        for (int row = 0; row < a; row++){
            printf("%d ", c);
            c += d;
        }
       printf("\n");
    }
    return 0;
}