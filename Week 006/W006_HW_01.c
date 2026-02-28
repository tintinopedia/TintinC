/*
Game Score Bonus
Take input:
• Score (integer)
• Bonus card (1/0)
Rules:
• If score ≥ 100 AND bonus card → "Super Bonus"
• Else if score ≥ 100 OR bonus card → "Bonus"
• Else → "No Bonus"
*/

#include <stdio.h>

int main()
{
    int score;
    int card;
    printf("What is your score of the game? \n");
    scanf("%d",&score);
    printf("Do you have a bonus card? options to answer is: (1 - Yes | 0 - No). \n");
    scanf("%b",&card);

    if (score > 100 && card == 1)
        printf("Super Bonus! \n");
    else if (score > 100 || card == 1)
        printf("Bonus! \n");
    else
        printf("No Bonus! \n");
    return 0;



}