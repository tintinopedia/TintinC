/*
Candy Game Counter
Idea
Child enters:
• Number of candies
• Wants to share? (1/0)
Task
• Use for loop to count candies
• If candies ≥ 10 AND sharing → "Good kid"
• Else if candies ≥ 10 OR sharing → "Okay"
• Else → "Keep candies"
Twist
Print:
Candy 1
Candy 2
*/

#include <stdio.h>

int main() {
    int candies, sharing;

    printf("Number of candies: ");
    scanf("%d", &candies);
    printf("Wants to share? (1 for Yes / 0 for No): ");
    scanf("%d", &sharing);

    for (int i = 1; i <= candies; i++)
        {
        printf("Candy %d\n", i);
        }

    printf("\nResult: ");
    if (candies >= 10 && sharing == 1)
        {
        printf("Good kid\n");
        }
    else if (candies >= 10 || sharing == 1)
        {
        printf("Okay\n");
        }
    else
        {
        printf("Keep candies\n");
        }

    return 0;
}