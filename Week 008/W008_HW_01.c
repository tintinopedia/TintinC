/*
Square Star Pattern
Output
*****
*****
*****
*****
*****
Hint
• Rows = 5
• Stars per row = 5
• Outer loop → rows
• Inner loop → print *
Think:
for rows
for stars
*/

#include <stdio.h>
int main() {
    int col;
    int row;
    for (col = 1; col <= 5; col++) {
        for (row = 1; row <=5; row++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}