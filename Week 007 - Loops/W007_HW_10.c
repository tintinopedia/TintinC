/*
Sum of Numbers
Write a C program to find the sum of numbers from 1 to 10 using a for loop.
*/

#include <stdio.h>
int main()
{
    int number,sum;
    for (number = 1; number <= 10; number++) {
        sum = sum + number;
    }
    printf("%d \n", sum);
    return 0;
}