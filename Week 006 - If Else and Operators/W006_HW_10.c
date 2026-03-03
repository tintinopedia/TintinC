/*
Game Download
Take input:
• Internet available (1/0)
• Storage space (1/0)
Rules:
• If internet AND storage → "Download game"
• Else if internet OR storage → "Wait"
• Else → "Cannot download"
*/

#include <stdio.h>
int main() {
    int internet;
    int storage;
    printf("Is the internet available? Choose from these: (1 == yes/0 == no). \n");
    scanf("%d", &internet);
    printf("Do you have storage space? Choose from these: (1 == yes/0 == no). \n");
    scanf("%d", &storage);

    if (internet == 1 && storage == 1)
        printf("Download Game!!! \n");
    else if (internet == 1 || storage == 1)
        printf("Wait! \n");
    else
        printf("Cannot download. \n");
    return 0;
}