#include <stdio.h>

int main() {
    int width, height, i;

    printf("Enter the width: ");
    scanf("%d", &width);
    printf("Enter the height: ");
    scanf("%d", &height);
    i = (width/2);

    //Code for the TOP of the tower:

    while (i > 0) {
        printf(" ");
        i--;
    }

    if (width%2 == 0) {
        printf("**\n");
    } else {
        printf(" *\n");
    }

    //for the BODY of the tower:

    for (int h = height; h > 2; h--) {
        for (int w = width; w >= 0; w--) {
            if (w == width) {
                printf(" ");
            } else {
                printf("*");
            }
         }  
         printf("\n");
    }
    
    //for the BASE of the tower:

    for (int b = width; b > 0; b--) {
        printf("*");
    }

    printf("**");
    return 0;
}