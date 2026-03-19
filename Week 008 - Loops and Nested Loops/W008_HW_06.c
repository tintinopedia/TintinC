/*
Reverse Number Triangle
Output
12345
1234
123
12
1
Hint
• Rows decrease
• Numbers always start from 1
Think:
for rows decreasing
*/

#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
                {
                    printf("%d ", j);
                }

            printf("\n");
        }
    return 0;
}