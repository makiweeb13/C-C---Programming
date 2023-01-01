#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("-----GPA Calculator-----\n");
    int n;

    start:
    printf("\nEnter 0 to exit program\n");
    printf("\nHow many subjects? ");
    scanf("%d", &n);

    if (n == 0) exit(0);
    
    float grades[n], sum = 0, gpa;

    printf("\nEnter grades\n");
    for (int i = 0; i < n; i++) {
        printf("Subject #%d: ", i+1);
        scanf("%f", &grades[i]);
        grades[i] *= 3;
        sum += grades[i];
    }

    gpa = sum / (float)(n*3);
    printf("\nYour GPA is %.2f\n", gpa);

    goto start;
    return 0;
}
