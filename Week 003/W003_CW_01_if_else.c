/*
Take marks and:
• If marks ≥ 90 → print "Excellent"
• If marks ≥ 60 → print "Good"
• Else → print "Needs Practice"
*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter your first exam's marks:");
    scanf("%d",&num);
    
    if(num >= 90)
        printf("Exellent! \n");
    else if(num >= 60)
        printf("Good! \n");
    else
        printf("Needs Practice! \n");        
}