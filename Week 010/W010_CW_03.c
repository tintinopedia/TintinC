/*
Toy Shop Calculator
Idea
Take:
• Number of toys
• Price per toy
Task
• Use arithmetic → total = n * price
• If total ≥ 500 AND toys ≥ 5 → "Big Purchase"
• Else if total ≥ 500 OR toys ≥ 5 → "Medium Purchase"
• Else → "Small Purchase"
*/

#include <stdio.h>

int main() {
    int numToys;
    float pricePerToy, total;

    printf("Enter the number of toys: ");
    if (scanf("%d", &numToys) != 1) {
        printf("Invalid input for number of toys.\n");
        return 1;
    }

    printf("Enter the price per toy: ");
    if (scanf("%f", &pricePerToy) != 1) {
        printf("Invalid input for price.\n");
        return 1;
    }

    total = numToys * pricePerToy;

    printf("\nTotal Cost: ₹%.2f\n", total);

    if (total >= 500 && numToys >= 5) {
        printf("Big Purchase\n");
    }
    else if (total >= 500 || numToys >= 5) {
        printf("Medium Purchase\n");
    }
    else {
        printf("Small Purchase\n");
    }

    return 0;
}