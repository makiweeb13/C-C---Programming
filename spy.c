#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col, num, n = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    int count[10] = {0};
    int loc[row][col];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &loc[i][j]);
            for (int k = 0; k <= 10; k++) {
                if(loc[i][j] == k) {
                    count[k]++;
                }
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] == 1) n++;
    }

    n > 0 ? printf("SPY") : printf("NONE");
    return 0;
}