#include <stdio.h>

// #define PI 3.14;
// int twice = 2;

// void main() {
//     float radius;
//     printf("Enter radius:")
//     scanf("%f", &radius);
//     printf("%8.4f", circum(&radius))
// }

// float circum (rad) {
//     return twice * rad * PI;
// }

int main() {
    int x, y, s, ave;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    s = x + y;
    ave = s / 2;
    printf("%d", ave);
    return 0;

}