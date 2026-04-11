/*
Weather Decision Game
Idea
Take:
• Temperature
• Is raining (1/0)
Task
• If temp < 20 AND raining → "Stay home"
• Else if temp < 20 OR raining → "Carry umbrella"
• Else → "Go outside"
*/

#include <stdio.h>

int main() {
    int temperature;
    int is_raining;

    printf("Enter the current temperature: ");
    scanf("%d", &temperature);

    printf("Is it raining? (Enter 1 for Yes, 0 for No): ");
    scanf("%d", &is_raining);

    if (temperature < 20 && is_raining == 1)
        {
        printf("\nResult: Stay home\n");
        }
    else if (temperature < 20 || is_raining == 1)
        {
        printf("\nResult: Carry umbrella\n");
        }
    else
        {
        printf("\nResult: Go outside\n");
        }

    return 0;
}