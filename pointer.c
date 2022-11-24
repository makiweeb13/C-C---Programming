#include <stdio.h>

// int main() {
//     int myAge = 19;
//     int* ptr = &myAge;

//     printf("Value of myAge is %d\n", myAge);
//     printf("Value of &myAge is %p\n", &myAge);
//     printf("Value of ptr is %p\n", ptr);
//     printf("Value of *ptr is %d\n", *ptr);

//     *ptr = 20;

//     printf("Value of myAge is %d\n", myAge);
//     printf("Value of &myAge is %p\n", &myAge);
//     printf("Value of ptr is %p\n", ptr);
//     printf("Value of *ptr is %d\n", *ptr);

//     return 0;
// }

// void doubleSalary(double* ptr);

// int main() {
//     double salary;
//     printf("Enter salary: ");
//     scanf("%lf", &salary);
//     double* ptr = &salary;

//     printf("\nSalary: %.2lf", *ptr);
//     doubleSalary(ptr);
//     printf("\nDoubled Salary: %.2lf", *ptr);
//     return 0;
// }

// void doubleSalary(double* ptr) {
//     *ptr *= 2;
// }

int* multiply(int* num1, int* num2, int* product) {
    *product = *num1 * *num2;
    return product;
}

int main() {
    int num1 = 3;
    int num2 = 9;
    int product;

    int* result = multiply(&num1, &num2, &product);
    printf("Product is %d", product);
    return 0;
}
