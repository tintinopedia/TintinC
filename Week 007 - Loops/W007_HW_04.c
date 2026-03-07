/*
Print Hello with Numbers
Write a C program to print
Hello 1, Hello 2, ... Hello 5 using a for loop.
*/

#include <stdio.h>
int main() {
    int hello_1;
    for (hello_1 = 1; hello_1 <= 5; hello_1++) {
        printf("hello %d \n" ,hello_1);

    }
    return 0;
}