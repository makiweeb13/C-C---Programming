#include <stdio.h>

int main() {
    int i = 0, j = 1, k = 0, n = 0, num;
    printf("Enter n: ");
    scanf("%d", &num);
    
    while (n < num) {
        if (n <= 1) {
            n == 0 ? printf("%d ", i) : 
            n == 1 ? printf("%d ", j) : n;
        } else {
            k = i + j;
            printf("%d ", k);
            i = j;
            j = k;
        }
        n++;
    }
    return 0;
}