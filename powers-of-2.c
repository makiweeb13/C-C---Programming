#include <stdio.h>
#include <math.h> 

int main() {
    int size, count = 0, j = 0, n;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size], powers[size];
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = size-1; i >= 0; i--) {
        n = arr[i];
        while (n%2 == 0) {
            n /= 2;
        }
        if (n == 1) {
            powers[j] = arr[i];
            count++;
            j++;
        }
    }
    if (count > 0) {
        printf("Powers of 2 = ");
        for (int i = 0; i < count; i++) {
            printf("%d ", powers[i]);
        }
    } else {
        printf("none");
    }  
} 