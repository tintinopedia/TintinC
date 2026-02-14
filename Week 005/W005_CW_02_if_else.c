#include <stdio.h>
int main()
{
    int a;
    printf("Enter your choice. (1 == Red Light | 2 == Yellow Light | 3 == Green Light) \n");
    scanf("%d",&a);
    if(a == 1)
    printf("Stop! \n");
    else if(a==2)
    printf("Wait! \n");
    else if(a == 3)
    printf("Go! \n");
    else
        printf("Invalid choice. \n");
    return 0;
}