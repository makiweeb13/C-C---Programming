#include <stdio.h>

int main() {
    int num, input, multiples, i = 2, score = 0;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    printf("Enter the succeeding multiples of %d:\n", num);
    if (num < 0) {
        printf("Error: Invalid input. Please try again.");
    } else {
        do {
            scanf("%d", &input);
            multiples = num * i;
            if (multiples == input) {
                score++;
            } else {
                printf("Sorry the next multiple is %d.", multiples);
                break;
            }
            i++;
        } while (1);
    }
    printf("\nYou have obtained %d correct answers.", score);
}