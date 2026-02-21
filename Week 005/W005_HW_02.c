/*
Write a C program that takes pocket money as input.
Rules:
• If money is less than 50, print "Save money"
• Else if money is between 50 and 200, print "Can buy snacks"
• Else, print "Can buy a toy"
*/

#include <stdio.h>

int main()

{
    int money;

    printf("Enter your pocket money amount: ");
    scanf("%d", &money);

    if (money < 50)
    {
        printf("Save money\n");
    }
    else if (money >= 50 && money <= 200)
    {
        printf("Can buy snacks\n");
    }
    else
    {
        printf("Can buy a toy\n");
    }

    return 0;
}