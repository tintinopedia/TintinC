#include <stdio.h>
int main() {
    int homework;
    int time;
    printf("Did you do your homework? (1 = Yes | 0 = No). \n");
    scanf("%d",&homework);
    printf("What is the time at your place. options: (1 - Morning | 2 - Afternoon | 3 - Evening | 4 - Night). \n");
    scanf("%d",&time);

    if (homework == 1 && time == 3)
        printf("Play outside! \n");
    else if (homework == 0 || time == 3)
        printf("Play inside! \n");
    else if (homework == 0 || time == 1)
        printf("Complete your homework. \n");
    else if (time == 2 && time == 3)
        printf("Take a nap and wake up in the evening. \n");
    else if (time == 4)
        printf("Have your dinner! \n");
    else
        printf("Sleep! \n");
    return 0;

}