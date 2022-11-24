#include <stdio.h>

void checkTriangle (int a, int b, int c);

int main() {
    int a, b, c;
    printf("Enter the angles of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    checkTriangle(a, b, c);
    return 0;
}

void checkTriangle (int a, int b, int c) {
    (a > 0 && b > 0 && c > 0 && a+b+c == 180) ?
        printf("It's a triangle!") :
        printf("The triangle is not valid!");
}