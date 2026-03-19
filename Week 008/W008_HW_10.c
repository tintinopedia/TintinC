/*
Triangle with Spaces
Output
*
**
***
****
*****
Hint
• Two inner loops
• First → spaces
• Second → stars
Think:
spaces = rows - i
stars = i
*/


#include <stdio.h>

int main() {
    // Outer loop for Rows
    for (int i = 1; i <= 3; i++) {

        // Inner loop for Columns
        for (int j = 1; j <= 3; j++) {
            printf("* ");
        }

        // Move to a new line after each row is finished
        printf("\n");
    }
    return 0;
}