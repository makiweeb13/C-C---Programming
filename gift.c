#include <stdio.h>
#include <string.h>

void printHorizontal(char name[5]);
void printVertical(char name[5]);
void printHeart(char name[5]);
void printDoubleLine(char name[5]);
void printPS(char name[5]);

int i, j, k, age;

int main() {
    char name[5];
    
    do {
        printf("Enter your name: ");
        scanf("%s", &name);
        if (strlen(name) <= 5) {
            break;
        } else {
            printf("Must not be more than 5 characters!\n");
        }
    } while(1);

    do {
        printf("Enter your age: ");
        scanf("%d", &age);
        if (age > 0 && age <= 99) {
            break;
        } else {
            printf("Invalid age!\n");
        }
    } while (1);
    

    printf("\n\n");
    printHorizontal(name);
    printVertical(name);
    printHorizontal(name);
    printf("\n\n");
    printHeart(name);
    printf("\n\n");
    printDoubleLine(name);
    printHorizontal(name);
    printf("\n\n");
    printPS(name);

    system("pause");
    return 0;
}

void printHorizontal(char name[5]) {
    for (i = 0; i < 2; i++) {
        for (j = 0; j < strlen(name)*2; j++, printf(" "));
        for (j = 0; j < 7; j++, printf("%s", name)); 
        printf("\n");
    }
}

void printVertical(char name[5]) {
    for (i = 0; i < 7; i++) {
        for (j = 0; j < strlen(name)*4; j++, printf(" "));
        for (k = 0; k < 3; k++, printf("%s", name));
        printf("\n");
        }
}

void printHeart(char name[5]) {
    for (i = 0; i <= 10; i++) {
        if (i == 2 || i == 8) {
            printf("%s", name);
        } else {
            for (j = 0; j < strlen(name); j++, printf(" "));
        }
    }
    printf("\n");
    for (i = 0; i <= 10; i++) {
        if ((i > 0 && i < 4) || (i > 6 && i < 10)) {
            printf("%s", name);
        } else {
            for (j = 0; j < strlen(name); j++, printf(" "));
        }
    }
    printf("\n");
    for (i = 0; i <= 10; i++) {
        if (i >= 0 && i <= 10 && i != 5) {
            printf("%s", name);
        } else {
            for (j = 0; j < strlen(name); j++, printf(" "));
        }
    }
    printf("\n");
    for (k = 0; k < 2; k++) {
        for (i = 0; i <= 10; i++) {
            if (i >= 0 && i <= 10) {
                printf("%s", name);
            } else {
                for (j = 0; j < strlen(name); j++, printf(" "));
            }
        }
        printf("\n");
    }
    for (i = 0; i <= 10; i++) {
        if (i > 0 && i < 10) {
            printf("%s", name);
        } else {
            for (j = 0; j < strlen(name); j++, printf(" "));
        }
    }
    printf("\n");
    for (i = 0; i <= 10; i++) {
        if (i > 1 && i < 9) {
            printf("%s", name);
        } else {
            for (j = 0; j < strlen(name); j++, printf(" "));
        }
    }
    printf("\n");
    for (i = 0; i <= 10; i++) {
        if (i > 2 && i < 8) {
            printf("%s", name);
        } else {
            for (j = 0; j < strlen(name); j++, printf(" "));
        }
    }
    printf("\n");
    for (i = 0; i <= 10; i++) {
        if (i > 3 && i < 7) {
            printf("%s", name);
        } else {
            for (j = 0; j < strlen(name); j++, printf(" "));
        }
    }
    printf("\n");
    for (i = 0; i <= 10; i++) {
        if (i == 5) {
            printf("%s", name);
        } else {
            for (j = 0; j < strlen(name); j++, printf(" "));
        }
    }
    printf("\n");
}

void printDoubleLine(char name[5]) {
    for (i = 0; i <= 7; i++) {
        for (j = 0; j <= 10; j++) {
            if ((j > 1 && j < 4) || (j > 6 && j < 9)) {
                printf("%s", name);
            } else {
                for (k = 0; k < strlen(name); k++, printf(" "));
            }
        }
        printf("\n");
    }
}

void printPS(char name[5]) {
    printf("PS: Stay healthy and be happy always. Happy %dth Birthday, %s!", age, name);
    printf("\n\n\"Pursue your dreams and forge ahead.\"  - M.\n\n");
}