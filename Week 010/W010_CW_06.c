/*
Number Filter Machine
Idea
Take number n
Task
• Use for loop from 1 to n
• If number divisible by 2 → print
• If divisible by 3 → print
• Use AND / OR
Example:
• If divisible by 2 AND 3 → "Special number"
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the limit (n): ");
    scanf("%d", &n);

    printf("\n--- Filtering Numbers ---\n");

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            printf("%d: Special number (Divisible by 2 AND 3)\n", i);
        }
        else if (i % 2 == 0 || i % 3 == 0) {
            printf("%d: Divisible by 2 OR 3\n", i);
        }
    }

    return 0;
}