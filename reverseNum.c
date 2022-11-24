#include <stdio.h>

int reverseNum (int);

int main() {
    int num;
    printf("Number to reverse: ");
    scanf("%d", &num);
    printf("%d", reverseNum(num));
    return 0;
}

int reverseNum (int num) {
    int digit, reverse = 0;
    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return reverse;
}