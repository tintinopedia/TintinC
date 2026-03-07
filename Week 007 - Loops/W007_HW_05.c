/*
Print Even Numbers
Write a C program to print even numbers from 2 to 20 using a for loop.
*/

#include <stdio.h>
int main() {
    int number;
    for (number = 2; number <= 20; number = number + 2) {
        printf("%d \n" , number);
    }
    return 0;
}