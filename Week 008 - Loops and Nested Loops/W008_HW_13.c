/*
Alternate 0 and 1 Pattern
1
0 1
1 0 1
0 1 0 1
Hint: Use (i + j) % 2.
*/

#include <stdio.h>
int main() {
    for (int i = 1; i <= 4; i++) {
       for (int j = 1; j <= i; j++) {
           if ((i+j)%2 == 0) {
               printf("1 ");
               }else {
                   printf("0 ");
               }
       }
        printf("\n");
    }
    return 0;
}