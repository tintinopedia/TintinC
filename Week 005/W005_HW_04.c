/*
Write a C program that takes water level as input.
Rules:

• If level is less than 3, print "Low water"
• Else if level is between 3 and 7, print "Medium water"
• Else, print "High water"
*/

#include <stdio.h>

int main()
{
    float level;

    printf("Enter the water level: ");
    scanf("%f", &level);

    if (level < 3)
    {
        printf("Low water\n");
    }
    else if (level >= 3 && level <= 7)
    {
        printf("Medium water\n");
    }
    else
    {
        printf("High water\n");
    }

    return 0;
}