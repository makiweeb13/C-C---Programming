#include <stdio.h>
#define NUM 15

// void main() {
//     int x = NUM;
//     printf("%d", x); //16
//     printf("%x", x); //10
// }

void main() {
    int x = 5;
    if (x++ <= 5) {
        printf("%d", ++x); //7
        printf("%d", x++); //7
    }
}