#include <stdio.h>
int main() {
    int day;
    int weather;
    printf("Enter the day in the form of 1 - 7. \n");
    scanf("%d",&day);
    printf("Enter the weather in the form of (1 - Summer | 2 - Monsoon | 3 - Winter). \n");
    scanf("%d",&weather);

    if (weather == 1 && day == 7)
        printf("Go to park. \n");
    else if (weather == 1 || day == 7)
        printf("Go outside anywhere you want. \n");
    else if (day != 7)
        printf("Stay at home. \n");
    else
        printf("Sleep.\n");
    return 0;
}
//
// Created by avish on 21-02-2026.
//