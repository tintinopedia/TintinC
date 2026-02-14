#include <stdio.h>
int main()
{
    float age;
    printf("Enter your age: (only in desimals examle: 8.0,8.5) \n");
    scanf("%f",&age);
    if(age > 1 && age < 5)
    printf("You are a toddler. \n");
    else if(age > 5 && age < 18)
    printf("You are a child. \n");
    else
        printf("You are a adult. \n");
    return 0;
}