/*
Exam Promotion Check
Take input:
• Math marks
• Science marks
Rules:
• If Math ≥ 40 AND Science ≥ 40 → "Promoted"
• Else if Math ≥ 40 OR Science ≥ 40 → "Compartment"
• Else → "Repeat class"
*/

#include <stdio.h>
int main() {
    int Maths_marks;
    int Science_marks;
    printf("Enter your Math's marks: \n");
    scanf("%d",&Maths_marks);
    printf("Enter your Science marks: \n");
    scanf("%d",&Science_marks);

    if (Maths_marks > 40 && Science_marks > 40)
        printf("Promoted. \n");
    else if (Maths_marks > 40 || Science_marks > 40)
        printf("Compartment. \n");
    else
        printf("Repeat class. \n");
    return 0;
}