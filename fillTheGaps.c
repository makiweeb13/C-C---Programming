#include<stdio.h>
#define MAX 100

int* sortElements(int arr[], int size);
void determineGaps(int arr[], int size);

int main(void) {
    // Start typing your C code here...
    // Use the given code lines and functions
    int found[MAX];
    int count = 0, num, i, j = 0, digit;
    int* ptr1;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 2147483647) {
        printf("Foundation Codes:\n");
        while (num > 0) {
            digit = num%10;
            found[j] = digit;
            if (found[j] != 0) {
                printf("%d\t", found[j]);
                count += 1;
            }
            num/=10;
            j++;
        }
        ptr1 = sortElements(found, count);
        printf("\nSorted Codes:\n");
        for(i=0; i<count; i++) {
            if (found[i] != 0) {
                printf("%d\t", found[i]);
            }
        }
        // Determine the gaps
        determineGaps(ptr1, count);
    }
    return 0;
}

int* sortElements(int arr[], int size) {
    // Write your codes here for sorting the elements
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

void determineGaps(int arr[], int size) {
    // Write your codes here for determining the gaps
    int count = 10;
    int j = 0, k = 0;
    int gaps[count]; 
    printf("\nGaps:\n");
    for(int i=0; i<count || k<10 ; i++) {
        if (arr[j] != k) {
            gaps[i] = k; 
            printf("%d\t", gaps[i]);
        } else {
            j++;
        }
        if (arr[j] != arr[j-1]) {
            k++;
        }
    }
}