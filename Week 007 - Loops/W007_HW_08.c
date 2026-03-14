/*
Print Table of a Number
Write a C program to print the table of a number entered by the user.
*/

#include <stdio.h>

int main()
{
    int i,number;
    printf("Enter a number to multiply the number: \n");
    scanf("%d", &number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n",number,i,number * i);
    }
    return 0;
}