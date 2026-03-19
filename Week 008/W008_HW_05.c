/*
Same Number Pattern
Output
1
22
333
4444
55555
Hint
• Print row number

• Repeat row number times
Think:
printf("%d", i);
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
                {
                    printf("%d", i);
                }
        printf("\n");
        }
    return 0;
}
