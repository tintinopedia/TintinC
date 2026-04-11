/*
🍬 PROJECT 2: Candy Shop Calculator
Idea

User buys candies → calculate total

Requirements
Input: number of candies
Each candy = ₹10
Use for loop to show count
Total = candies × 10
******************************************
HW If total ≥ 100 → “Big purchase”
Else → “Small purchase”
*/

#include <stdio.h>
int main() {
    int candy,i,total;
    printf("Enter the number of candies you want? \n");
    scanf("%d",&candy);
    printf("I am counting the candies!!! \n");
    for (i = 1; i <= candy; i++) {
        printf("candy %d \n",i);

    }
    total = candy * 10;
    printf("total amount is %d₹ \n",total);
    if (total > 100)
        printf("Big purchase!!! \n");
    else
        printf("Small purchase!!! \n");
    return 0;
}