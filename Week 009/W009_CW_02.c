/*
PROJECT 2:
Sum Calculator
Idea
Add numbers from 1 to n
Requirements Input n Use for loop
Calculate sum If sum > 50 → “Large sum” Else → “Small sum”
*/

#include <stdio.h>
int main() {
    float num,sum = 0;
    int i;
    printf("enter a number; \n");
    scanf("%f",&num);
    for (i = 1; i <= num; i++) {
        sum = sum + i;
    }
    printf("The total sum is %.2f💲\n",sum);
    if (sum > 50)
        printf("Large sum \n");
    else
        printf("Small sum \n");
    return 0;
}