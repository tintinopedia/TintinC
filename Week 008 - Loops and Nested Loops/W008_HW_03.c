/*
Reverse Triangle

Output
*****
****
***
**
*
Hint
• Start rows from 5
• Decrease each row
Think:
Row 5 → 5 stars
Row 4 → 4 stars
Row 3 → 3 stars
*/

#include <stdio.h>
int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("$ ");
        }
        printf("\n");
    }
    return 0;
}