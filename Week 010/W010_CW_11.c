#include <stdio.h>
int main() {
    int choice;
    printf("Enter number 1 - 3| \n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Apple \n");
            break;
        case 2:
            printf("Banana \n");
            break;
        case 3:
            printf("Mango \n");
            break;
        default:
            printf("invalid choice \n");
    }
    return 0;
}