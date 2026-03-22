/*
Star + Number Mix
*
1 2
* * *
1 2 3 4
Hint: Odd row stars, even row numbers.
*/

#include <stdio.h>
int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0)
                printf("%d ",j);
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}