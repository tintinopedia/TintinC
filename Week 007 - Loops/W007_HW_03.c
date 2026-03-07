/*
Print Numbers in Reverse
Write a C program to print numbers from 10 to 1 using a for loop.
*/

#include <stdio.h>
int main() {
    int number;
    for (number = 10; number >= 1; number--) {
        printf("%d \n" , number);
    }
    return 0;
}