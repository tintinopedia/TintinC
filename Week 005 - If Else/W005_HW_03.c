/*
Write a C program that takes speed as input.
Rules:
• If speed is less than 30, print "Slow"
• Else if speed is between 30 and 60, print "Normal"
• Else, print "Fast"
*/

#include <stdio.h>

int main()
{
    int speed;

    printf("Enter the speed: ");
    scanf("%d", &speed);

    if (speed < 30)
    {
        printf("Slow\n");
    }
    else if (speed >= 30 && speed <= 60)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Fast\n");
    }

    return 0;
}