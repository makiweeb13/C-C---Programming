#include <stdio.h>
#include <math.h>

int main() {
    float weight, height, BMI;

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your height in cm: ");
    scanf("%f", &height);

    BMI = weight / pow((height/100), 2);
    printf("Your BMI: %.2f", BMI);

    printf("\nCategory: ");
    if (BMI > 0 && BMI < 18.5) {
        printf("Underweight");
    } else if (BMI >= 18.5 && BMI < 25) {
        printf("Normal");
    } else if (BMI >= 25 && BMI < 30) {
        printf("Overweight");
    } else if (BMI >= 30) {
        printf("Obese");
    } else {
        printf("Invalid BMI");
    }
    
    return 0;
}