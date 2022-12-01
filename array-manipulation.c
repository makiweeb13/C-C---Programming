#include <stdio.h>
#define MAX 10

void initialize(int arr[], int* count);
void display(int arr[], int count);
int searchElem(int arr[], int count, int elem);
int insertLast(int arr[], int* count, int elem);
int insertFirst(int arr[], int* count, int elem);

int main() {
    int array1[MAX];
    int count;
    initialize(array1, &count);
    display(array1, count);
    printf("\nCount: %d\n", count);

    int array2[MAX] = {1, 2, 3, 4, 5};
    count = 5;
    display(array2, count);
    printf("\nCount: %d\n", count);

    printf("\nIndex of 3 is %d", searchElem(array2, count, 3));
    printf("\nIndex of 6 is %d", searchElem(array2, count, 6));

    insertLast(array2, &count, 6);
    printf("\nCount: %d\n", count);
}

void initialize(int arr[], int* count) {
    for (int i = 0; i < MAX; i++) {
        arr[i] = 0;
    }
    *count = 0;
}

void display(int arr[], int count) {
    if (count == 0) {
        printf("\nList is empty");
    } else if (count > 0) {
        printf("\nElements: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", arr[i]);
        }
    }
}

int searchElem(int arr[], int count, int elem) {
    for (int i = 0; i < count; i++) {
        if (arr[i] == elem) {
            return i;
            i = count;
        } else if (i == (count - 1)) {
            return -1;
        }
    }
}

int insertLast(int arr[], int* count, int elem) {
    if (*count == 10) {
        printf("\nList is full");
    } else if (searchElem(arr, *count, elem) > 0) {
        printf("\nElement already exists");
    } else {
        arr[*count] = elem;
        *count += 1;
        display(arr, *count);
    }
}

int insertFirst(int arr[], int* count, int elem) {

}

