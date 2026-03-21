/*
Alphabet Pattern
Output
A
AB
ABC

ABCD
ABCDE
Hint
• Use char
• Start from 'A'
Think:
printf("%c", 'A' + j - 1);
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
                {
                    printf("%c", 'A' + j - 1);
                }
            printf("\n");
        }
    return 0;
}