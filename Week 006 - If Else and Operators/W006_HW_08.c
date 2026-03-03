/*
Class Entry
Take input:
• On time (1/0)
• Uniform worn (1/0)
Rules:
• If on time AND uniform → "Enter class"
• Else if on time OR uniform → "Warning"
• Else → "Not allowed"
*/

#include <stdio.h>
int main()
{
    int on_time;
    int uniform;
    printf("Are you on time? Choose from these: (1 - Yes/0 - No). \n");
    scanf("%d",&on_time);
    printf("Enter if you have worn your uniform: \n");
    scanf("%d",&uniform);

    if (on_time == 1 && uniform == 1)
        printf("Enter class. \n");
    else if (on_time == 1 || uniform == 1)
        printf("Warning! \n");
    else
        printf("Not allowed. \n");
    return 0;
}