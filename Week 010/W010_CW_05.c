/*
Star Reward System
Idea
Take:
• Marks (0–100)
Task
• Use for loop to print stars
• If marks ≥ 90 → print 5 stars
• Else if ≥ 70 → 3 stars
• Else → 1 star
*/

#include <stdio.h>

int main() {
    int marks;
    int stars = 0;

    printf("Enter marks between 0 and 100: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        stars = 5;
    } else if (marks >= 70) {
        stars = 3;
    } else {
        stars = 1;
    }

    printf("Star Reward: ");
    for (int i = 0; i < stars; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}