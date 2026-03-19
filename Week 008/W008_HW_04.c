/*
Number Triangle
Output
1
12
123
1234
12345
Hint
• Rows = 5
• Inner loop prints numbers
Think:
printf("%d", j);
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
                {
                    printf("%d ", j);
                }
             printf("\n");
        }
    return 0;
}