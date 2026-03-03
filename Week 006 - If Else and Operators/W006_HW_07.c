/*
Mobile Phone Use
Take input:
• Homework done (1/0)
• Battery charged (1/0)
Rules:
• If homework AND battery → "Use phone"
• Else if homework OR battery → "Wait"
• Else if NOT homework → "Do homework"
• Else → "No phone"
*/

#include <stdio.h>
int main()
{
    int homework;
    int battery;
    printf("Have you done your homework choose from these: (1 - Yes/0 - No). \n");
    scanf("%d",&homework);
    printf("Have you charged your phone? choose from these: (1 - Yes/ == 1 &&0 - No \n");
    scanf("%d",&battery);

    if (homework == 1 && battery == 1)
        printf("Use phone! \n");
    else if (homework == 1 || battery == 1)
        printf("Wait! \n");
    else
        printf("No phone. \n");
    return 0;
}