#include <stdio.h>

int main() {
    int n, x, y, num;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int* ptr = arr;
    for (int i = 0; i < n; i++) {
        printf("Element #%d: ", i + 1);
        scanf("%d", &num);
        ptr[0] = num;
        ptr++;
    }
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Element #%d = ", i + 1);
        if (arr[i] >= x && arr[i] <= y) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}