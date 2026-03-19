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

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}