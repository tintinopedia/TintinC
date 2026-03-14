/*
Print Table of 2
Write a C program to print the table of 2 using a for loop.
*/

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 50; i++) {
        printf("2 x %d = %d \n", i,i * 2);
    }
    return 0;
}