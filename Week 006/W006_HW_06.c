/*
School Award System
Take input:
• Attendance percentage
• Marks percentage
Rules:
• If attendance ≥ 75 AND marks ≥ 80 → "Gold award"
• Else if attendance ≥ 75 OR marks ≥ 80 → "Silver award"
• Else → "No award"
*/

#include <stdio.h>
int main() {
    int attendance;
    int marks;
    printf("Enter attendance: \n");
    scanf("%d",&attendance);
    printf("Enter marks: \n");
    scanf("%d",&marks);

    if (attendance > 75 && marks > 80)
        printf("Gold award!! \n");
    else if (attendance > 75 || marks > 80)
        printf("Silver avard! \n");
    else
        printf("No award. \n");
    return 0;
}