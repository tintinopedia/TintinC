/*
Write a C program that takes number of toys as input.
Rules:
• If toys are less than 5, print "Few toys"
• Else if toys are between 5 and 10, print "Some toys"
• Else, print "Many toys"
*/

#include <stdio.h>

int main()
{
    int toys;

    printf("Enter the number of toys: ");
    scanf("%d", &toys);

    if (toys < 5)
    {
        printf("Few toys\n");
    }
    else if (toys >= 5 && toys <= 10)
    {
        printf("Some toys\n");
    }
    else
    {
        printf("Many toys\n");
    }

    return 0;
}