/*
Smart Door System
Idea
Take:
• Password correct (1/0)
• Face recognized (1/0)
Task
• If both true → "Door opens"
• Else if one true → "Wait"
• Else → "Access denied"
*/

#include <stdio.h>

int main() {
    int password_correct;
    int face_recognized;

    printf("Is password correct? (1 for Yes, 0 for No): ");
    scanf("%d", &password_correct);

    printf("Is face recognized? (1 for Yes, 0 for No): ");
    scanf("%d", &face_recognized);

    if (password_correct && face_recognized)
        {
        printf("\nResult: Door opens\n");
        }
    else if (password_correct || face_recognized)
        {
        printf("\nResult: Wait\n");
        }
    else
        {
        printf("\nResult: Access denied\n");
        }

    return 0;
}