/*
 Continuous Numbers
 Pattern
 1
 2 3
 4 5 6
 7 8 9 10
 Hint: Use variable num++.
 */

#include <stdio.h>
int main() {
 int num = 1;
 for (int i = 1; i <= 4; i++) {
  for (int j = 1; j <= i; j++) {
   printf("%d ",num);
   num++;
  }
  printf("\n");
 }
 return 0;
}