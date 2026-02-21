/*
Write a C program that takes height (in cm) as input.

Rules:
• If height is less than 100, print "Short"
• Else if height is between 100 and 150, print "Medium"
• Else, print "Tall"
*/

#include <stdio.h>

int main()
{
    float height;

    printf("Enter height (in cm:) ");
    scanf("%f", &height);

    if (height < 100) {
        printf("Short\n");
    }
    else if (height >= 100 && height <= 150) {
        printf("Medium\n");
    }
    else {
        printf("Tall\n");
    }

    return 0;
}