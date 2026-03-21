/*
Even Number Triangle
Output
2
24
246
2468
Hint
• Print even numbers
• Increase by 2
Think:
j = j + 2
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
        {
            int num = 2;
            for (int j = 1; j <= i; j++)
                {
                    printf("%d", num);
 //                 num += 2;
                    num = num + 2;
                }
        printf("\n");
    }
    return 0;
}