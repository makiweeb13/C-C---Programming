#include <stdio.h>
#include <stdlib.h>

int* inputData();
void displayArray(int*, int);
void findElem(int*, int, int);
void exchange(int*, int);
int findSmallest(int*, int);

int main() {

    printf("Task 1:\n");
    int* array = inputData();

    printf("Task 2:\n");
    displayArray(array, array[0]);
    
    printf("Task 3:\n");
    findElem(array, array[0], 5);
    findElem(array, array[0], 10);

    int smallestIndex = findSmallest(array, array[0]);
    exchange(array, smallestIndex);
    displayArray(array, array[smallestIndex + 1]);
    printf("Element at index 0: %d", array[0]);
    
    return 0;
}

int* inputData() {
    int *p, n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    p = (int*) malloc(sizeof(int) * n);
    *p = n;
    for (i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
    }

    return p;
}

void displayArray(int arr[], int arrSize) {
    int i; 
    printf("[");
    for (i = 1; i <= arrSize; i++) {
        printf("|%d|", arr[i]);
    }
    printf("]\n");
}

void findElem(int arr[], int size, int elem) {
    int i = 1, n = 0;
    while (size > 0) {
        if (arr[i] == elem) {
            size = 0;
            n++;
        } 
        size--;
        i++;
    }
    if (n > 0) {
        printf("Element is found\n");
    } else {
        printf("Element is not found\n");
    }
}

void exchange(int arr[], int i) {
    int temp = arr[0];
    arr[0] = arr[i+1];
    arr[i+1] = temp;
}

int findSmallest(int arr[], int size) {
    int smallest = arr[1], temp = arr[0], index, i;

    for (i = 2; i <= size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    for (i = 1; i <= size; i++) {
        if (arr[i] == smallest) {
            index = i-1;
        }
    }

    return index;
}
