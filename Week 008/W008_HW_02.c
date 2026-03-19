/*
Increasing Star Triangle
Output
*
**
***
****
*****
Hint
• Rows = 5
• Stars increase every row
• Inner loop runs up to row number
Think:
Row 1 → 1 star
Row 2 → 2 stars
Row 3 → 3 stars


#include <stdio.h>
int main() {
    int row,col;
    for (col = 1; col >= 5; col++){
        for (row = 1; row >= 5; row++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

#include <stdio.h>

int main()
{
    int rows = 5;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++)
    {

        // Inner loop to print stars
        // It runs from 1 up to the current row number (i)
        for (int j = 1; j <= i; j++)
            {
            printf("*");
            }

        // Move to the next line after printing stars in a row
        printf("\n");
    }

    return 0;
}