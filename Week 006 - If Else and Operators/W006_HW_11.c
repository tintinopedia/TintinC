/*
Birthday Treat
Take input:
• Is birthday (1/0)

• Has money (1/0)
Rules:
• If birthday AND money → "Give treat"
• Else if birthday OR money → "Small treat"
• Else → "No treat"
*/

#include <stdio.h>
int main() {
    int birthday;
    int money;
    printf("Is it your birthday? Choose from these: (1 == yes | 0 == no). \n");
    scanf("%d", &birthday);
    printf("Do you have money? Choose from these: (1 == yes | 0 == no). \n");
    scanf("%d", &money);

    if (birthday == 1 && money == 1)
        printf("Give Treat!!! \n");
    else if (birthday == 1 || money == 1)
        printf("Small treat!!! \n");
    else
        printf("No treat. \n");
    return 0;
}