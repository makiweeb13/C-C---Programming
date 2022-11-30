#include <stdio.h>

int main() {
    int num, i = 0, j = 0, k = 1, n = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int num_table[num][num];

        printf("\nMultiplication Table\n");
        while (i < num) { 
            while (j < num) {
                num_table[i][j] = k;
                printf("%d\t", num_table[i][j]);
                k+=n;
                j++;
            }
            printf("\n");
            n++;
            i++;
            j=0;
            k=n;
        }
    
    return 0;
}