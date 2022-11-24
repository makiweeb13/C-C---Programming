#include <stdio.h>

// Using if-else statements

/* int main() {
    float total_price;
    int option;
    printf("JOLIBEE MENU\nOption\tItem\t\tPrice\t\n1\tJolly Hotdog\t39.00\n2\tBurger Steak\t89.00\n3\tSpaghetti\t89.00\n4\tChicken Joy\t89.00\n5\tExit\n");
    printf("\nEnter your menu option, one order at a time, or enter 5 to exit: \n");
    do {
        scanf("%d", &option);
        if (option == 1) {
            total_price += 39.00;
        } else if (option >= 2 && option < 5) {
            total_price += 89.00;
        } else if (option == 5) {
            printf("Your total order price is P%.2f", total_price);
            break;
        } else {
            printf("Invalid input, try again.\n");
        }
    } while (option != 5);  
    
    return 0;
} */

//Using switch case statements

int main() {
    float total_price;
    int option;
    printf("JOLIBEE MENU\nOption\tItem\t\tPrice\t\n1\tJolly Hotdog\t39.00\n2\tBurger Steak\t89.00\n3\tSpaghetti\t89.00\n4\tChicken Joy\t89.00\n5\tExit\n");
    printf("\nEnter your menu option, one order at a time, or enter 5 to exit: \n");
    do {
        scanf("%d", &option);
        switch (option) {
            case 1:
                total_price += 39.00;
                break;
            case 2:
            case 3:
            case 4:
                total_price += 89.00;
                break;
            case 5:
                printf("Your total order price is P%.2f", total_price);
                break;
            default: printf("Invalid input, try again.\n");
        }
    } while (option != 5);
    
    return 0;
} 