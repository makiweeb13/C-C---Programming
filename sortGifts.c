#include <stdio.h>
#include <string.h>

int main() {
    char arr[30][30], temp[30];
    int n;
    start:
    printf("Enter the number of gifts: ");
    scanf("%d", &n);
    if (n < 1 || n > 30) {
        goto start;
    }
    for (int i = 0; i < n; i++) {
        printf("Gift %d: ", i+1);
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++){
            if(strcmp(arr[i],arr[j]) > 0){
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[j]);
            strcpy(arr[j], temp);
        }
    }
    printf("\nSorted Gifts:");
    for (int i = 0; i < n; i++) {
        printf("\nGift %d: %s", i+1, arr[i]);
    }
    return 0;
}