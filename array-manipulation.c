#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void initialize(int arr[], int* count);
void display(int arr[], int count);

int searchElem(int arr[], int count, int elem);
int insertLast(int arr[], int* count, int elem);
int insertFirst(int arr[], int* count, int elem);
int insertAtPos(int arr[], int* count, int elem, int pos);
int removeLast(int arr[], int* count);
int removeFirst(int arr[], int* count);
int removeAtPos(int arr[], int* count, int pos);
int removeElem(int arr[], int* count, int elem);
int getRange(int arr[], int count);
int* getEven(int arr[], int count);
int isSortedAscending(int arr[], int count);

void moveSmallestToFirst(int array[], int count);
void sortArray(int arr[], int count);

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
    printf("\nIndex of 6 is %d\n", searchElem(array2, count, 6));

    insertLast(array2, &count, 6);
    display(array2, count);
    printf("\nCount: %d\n", count);

    insertFirst(array2, &count, 20);
    display(array2, count);
    printf("\nCount: %d\n", count);

    insertAtPos(array2, &count, 30, 3);
    display(array2, count);
    printf("\nCount: %d\n", count);

    removeLast(array2, &count);
    display(array2, count);
    printf("\nCount: %d\n", count);

    removeFirst(array2, &count);
    display(array2, count);
    printf("\nCount: %d\n", count);

    removeAtPos(array2, &count, 2);
    display(array2, count);
    printf("\nCount: %d\n", count);

    removeElem(array2, &count, 3);
    display(array2, count);
    printf("\nCount: %d\n", count);

    printf("\nRange is %d", getRange(array2, count));
    printf("\nCount: %d\n", count);

    display(getEven(array2, count), count);
    printf("\nCount: %d\n", count);

    printf("\nSorted: %d\n", isSortedAscending(array2, count));

    int array3[] = {5, 10, 30, 4, 2, 20};
    count = 6;

    display(array3, count);
    moveSmallestToFirst(array3, count);
    display(array3, count);
    printf("\nCount: %d\n", count);

    sortArray(array3, count);
    display(array3, count);
    printf("\nCount: %d\n", count);

    return 0;
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
            i = count; //Alternative to using break
        } else if (i == (count - 1)) {
            return -1;
        }
    }
}

int insertLast(int arr[], int* count, int elem) {
    if (*count == 10) {
        printf("\nList is full");
        return 0;
    } else if (searchElem(arr, *count, elem) > 0) {
        printf("\nElement already exists");
        return 0;
    } else {
        arr[*count] = elem;
        *count += 1;
        return 1;
    }
}

int insertFirst(int arr[], int* count, int elem) {
    if (*count == 10) {
        printf("\nList is full");
        return 0;
    } else if (searchElem(arr, *count, elem) > 0) {
        printf("\nElement already exists");
        return 0;
    } else {
        for (int i = *count; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = elem;
        *count += 1;
        return 1;

        //Shifting on the right most element first makes it easier to insert the new element at the beginning
        //It also makes the code so much simpler and efficient
    }
}

int insertAtPos(int arr[], int* count, int elem, int pos) {
    if (*count == 10) {
        printf("\nList is full");
        return 0;
    } else if (pos < 0 || pos > *count) { //Arrays are zero-indexed, which means position must be >= 0 and < the size of the array
        printf("Invalid position");
        return 0;
    } else if (searchElem(arr, *count, elem) > 0) {
        printf("\nElement already exists");
        return 0;
    } else {
        for (int i = *count; i > pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos] = elem;
        *count += 1;
        return 1;
    }
}

int removeLast(int arr[], int* count) {
    if (*count == 0) {
        printf("LIst is empty"); //There are no elements, so there is nothing to remove
        return 0;
    } else {
        arr[*count - 1] = 0; //If the current element is 0, then this can be optional
        *count -= 1;
        return 1;
    }
}

int removeFirst(int arr[], int* count) {
    if (*count == 0) {
        printf("LIst is empty");
        return 0;
    } else {
        for (int i = 0; i < *count; i++) {
            arr[i] = arr[i + 1]; 
        }
        *count -= 1;
        return 1;
    }
    //Shifting from the leftmost element covers the first element naturally, which greatly reduces complexity
}

int removeAtPos(int arr[], int* count, int pos) {
    if (*count == 0) {
        printf("\nList is empty");
        return 0;
    } else if (pos < 0 || pos > *count) {
        printf("Invalid position");
        return 0;
    } else {
        for (int i = pos; i < *count; i++) {
            arr[i] = arr[i + 1]; 
        }
        *count -= 1;
        return 1;
    }
    //This function works the same way with removeFirst except it starts at a specific index
}

int removeElem(int arr[], int* count, int elem) {
    int elemIndex = searchElem(arr, *count, elem);
    if (*count == 0) {
        printf("\nList is empty");
        return 0;
    } else if (elemIndex < 0) {
        printf("Element does not exist");
        return 0;
    } else {
        for (int i = elemIndex; i < *count; i++) {
            arr[i] = arr[i + 1]; 
        }
        *count -= 1;
        return 1;
    }
}

int getRange(int arr[], int count) {
    int min = arr[0], max = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] <= min) {
            min = arr[i];
        } else {
            max = arr[i];
        }
    }
    return max - min;
}

int* getEven(int arr[], int count) {
    int *array, even = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i]%2 == 0) 
        even++;
    }
    array = malloc(even*sizeof(int));
    int i = count, j = even;
    while (i > 0) {
        if (arr[i]%2 == 0) {
            array[j] = arr[i];
            j--;
        }
        i--;
    }
    array[even] = -1;
    return array;
    free(array);
}

int isSortedAscending(int arr[], int count) {
    int n = 0, i = 0, j = 1;
    if (count == 0) {
        printf("\nList is empty");
        return 0;
    } else {
        while ( i < count && j < count) {
            if (arr[i] > arr[j]) n++;
            i++;
            j++;
        }
        if (n > 0) {
            return 0;
        } else {
            return 1;
        }
    }
}

void moveSmallestToFirst(int array[], int count) {
    int smallest = array[0], temp;
    for (int i = 1; i < count; i++) {
        if (smallest > array[i]) {
            smallest = array[i];
        }
    }
    for (int i = 0; i < count; i++) {
        if (array[i] == smallest) {
            temp = array[0];
            array[0] = smallest;
            array[i] = temp;
        }
    }
}

void sortArray(int arr[], int count) {
    int n = 0;
    do {
        moveSmallestToFirst(arr + n, count);
        count--;
        n++;
    } while (count > 0);
}