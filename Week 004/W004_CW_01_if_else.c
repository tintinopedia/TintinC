#include <stdio.h>
#include <stdbool.h> // Allows us to use true/false

// Function definition
void checkStudentStatus(bool isPresent, bool isHomeworkDone, bool isBirthday) {
    
    // Rule 1: Present AND Homework Done
    if (isPresent && isHomeworkDone) {
        printf("Good student\n");
    }
    // Rule 2: Present AND Birthday
    else if (isPresent && isBirthday) {
        printf("Happy Birthday\n");
    }
    // Rule 3: NOT Present
    else if (!isPresent) {
        printf("Absent\n");
    }
    // Rule 4: Everything else (Present, but no homework and not birthday)
    else {
        printf("Talk to teacher\n");
    }
}