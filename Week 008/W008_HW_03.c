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
    int row,col;
    for (col = 5; col >= 5; col++){
        for (row = 5; row >= 5; row--){
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}