#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, mid, *ptr, j = 0, k = 1, n;
    start:
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 1 || num > 40) {
        goto start;
    }
    ptr = (int*)malloc(num*sizeof(int));
    printf("Fibonacci Numbers:\n");
    for (int i = 0; i < num; i++) {
        if (i < 2) {
            if (i == 0) {
                ptr[i] = j;
            } else if (i == 1) {
                ptr[i] = k;
            } 
        } else {
            n = j + k;
            ptr[i] = n;
            j = k;
            k = n;
        }
        if ((i+1)%10 != 0) {
            printf("%d  ", ptr[i]);
        } else {
            printf("%d\n", ptr[i]);
        } 
    }
    mid = num/2;
    if (num%2 == 0) {
        printf("\nMiddle numbers: %d & %d", ptr[mid-1], ptr[mid]);
    } else {
        printf("\nMiddle number: %d", ptr[mid]);
    }
    free(ptr);
    return 0;
}