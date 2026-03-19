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

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            {
            printf("*");
            }

        printf("\n");
    }
    return 0;
}