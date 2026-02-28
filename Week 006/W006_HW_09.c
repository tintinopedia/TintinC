/*
Morning Routine
Take input:
• Brushed teeth (1/0)
• Took bath (1/0)
Rules:
• If brushed AND bath → "Ready for school"
• Else if brushed OR bath → "Get ready"
• Else → "Not ready"
*/

#include <stdio.h>
int main()
{
    int brush;
    int bath;
    printf("Did you brush your teeth? Choose from these: (1 yes/0 no). \n");
    scanf("%d", &brush);
    printf("Did you take a bath? Choose from these: (1 yes/0 no). \n");
    scanf("%d", &bath);

    if (brush == 1 && bath == 1)
        printf("Ready for school. \n");
    else if (brush == 1 || bath == 1)
        printf("Get ready. \n");
    else
        printf("Not ready. \n");
    return 0;
}