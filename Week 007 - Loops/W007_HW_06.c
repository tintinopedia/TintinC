/*
Print Odd Numbers
Write a C program to print odd numbers from 1 to 19 using a for loop.
*/

#include <stdio.h>
int main()
{
    int number;
    for (number = 1; number <= 19; number = number + 2)
        {
            printf("%d \n" , number);
        }
    return 0;
}