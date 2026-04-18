/*
Mini Table Generator
Idea
Take number
Task
• Use for loop to print table
• If result is even → "Even"
• Else → "Odd"
*/

#include <stdio.h>
int main() {
    int i,num,result;
    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("Table of %d \n",num);
    for (i = 1; i <= 20; i++) {
        result = num*i;
        if (result % 2==0)
            printf("Even \n");
        else
            printf("Odd \n");
    }
    return 0;
}