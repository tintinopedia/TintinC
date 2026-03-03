/*
Shop Discount Logic
Take input:
• Bill amount
• Member (1/0)

Rules:
• If bill ≥ 1000 AND member → "20% discount"
• Else if bill ≥ 1000 OR member → "10% discount"
• Else → "No discount"
*/

#include <stdio.h>
int main() {
    int bill_amount;
    int member;
    printf("Enter your bill amount: \n");
    scanf("%d",&bill_amount);
    printf("Enter (1/0) if members have come or not: \n");
    scanf("%d",&member);

    if (bill_amount > 1000 && member == 1)
        printf("20 discount! \n");
    else if (bill_amount > 1000 || member == 1)
        printf("10 discount! \n");
    else
        printf("No discount! \n");
    return 0;
}