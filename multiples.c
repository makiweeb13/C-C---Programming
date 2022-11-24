#include <stdio.h>

int main() {
    int a, b, c;
    printf("Input: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Output: ");
    while (b >= a) {
        if (b%c == 0) {
            printf("%d ", b);
        }
        b--;
    }
    return 0;
}