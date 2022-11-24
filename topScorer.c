#include <stdio.h>

int main() {
    int n, score, highest, invalid = 0;
    printf("Enter the number of goal-scorers: ");
    scanf("%d", &n);
    int scorers[n];
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            printf("Score of player #%d: ", i+1);
            scanf("%d", &score);
            scorers[i] = score;
            if (score < 0 || score > 2147483647) {
                invalid++;
            }
            
        }
        if (invalid == 0) {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (scorers[i] < scorers[j]) {
                        highest = scorers[i];
                        scorers[i] = scorers[j];
                        scorers[j] = highest;
                    }
                }
            }
            printf("\nHighest to lowest:\n");
            for (int i = 0; i < n; i++) {
                printf("Player #%d: %d\n", i+1, scorers[i]);
            }
        } else {
            printf("\nInvalid score.");
        }
        
    } else {
        printf("\nNumber of goal-scorers must be greater than zero!");
    }
    
    
    return 0;
}