/*
Count Numbers
Write a C program to print numbers from 1 to n, where n is entered by the user.
*/

#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the end number: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d \n",i);
    }
    return 0;
}