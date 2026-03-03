#include <stdio.h>
int main()
{
    int a;
    printf("Enter your choice. (1 == 30° to 40°| 2 == 25° to 35°| 3 == 10° to 20°)");
    printf("Enter your weather: \n");
    scanf("%d",&a);
    
    if(a == 1)
    printf("It is summer season! \n");
    else if(a == 2)
    printf("It is rainy season! \n");
    else if(a == 3)
    printf("it is winter season! \n");
    else
        printf("Invalid weather. \n");
    return 0;
}