/*
Same Row Numbers
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
Hint: Print i in inner loop.
*/

#include <stdio.h>

int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= rows; j++)
                {
                    printf("%d ", i);
                }
        printf("\n");
        }
    return 0;
}