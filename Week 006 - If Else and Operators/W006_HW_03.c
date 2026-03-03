/*
Ride Permission
Take input:
• Age
• Helmet worn (1/0)
Rules:
• If age ≥ 18 AND helmet worn → "Ride allowed"
• Else if age ≥ 18 OR helmet worn → "Warning"
• Else → "Ride not allowed"
*/

#include <stdio.h>
int main() {
    int age;
    int helmet;
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("Have you worn your helmet? (1 - yes | 0 - No). \n");
    scanf("%d",&helmet);

    if (age > 18 && helmet == 1)
        printf("Ride allowed. \n");
    else if (age > 18 || helmet == 1)
        printf("Warning! \n");
    else
        printf("Ride not allowed. \n");
    return 0;
}