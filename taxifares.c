#include <stdio.h>

int main() {
    float kilometers, minutes, total_fare;
    printf("Enter the distance traveled in kilometers: ");
    scanf("%f", &kilometers);
    printf("Enter the estimated journey time in minutes: ");
    scanf("%f", &minutes);
    total_fare = 40 + (2 * (int) minutes) + (13.50 * (int) kilometers);
    printf("Total fare = P%.2f", total_fare);
    return 0;
}