/*
Count Numbers
Write a C program to print numbers from 1 to n, where n is entered by the user.
*/

#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter the value of n: ");
    scanf("%d", &num);

    printf("Numbers from 1 to %d are:\n", num);

    for (i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}