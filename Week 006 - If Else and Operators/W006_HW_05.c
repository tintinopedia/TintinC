/*
Login Security Check
Take input:
• Correct password (1/0)
• OTP verified (1/0)
Rules:
• If password AND OTP → "Login success"
• Else if password OR OTP → "Verify again"
• Else → "Access denied"
*/

#include <stdio.h>
int main() {
    int password;
    int otp;
    printf("Have you entered the correct password? choices are: (1 - yes/0 -no). \n");
    scanf("%d",&password);
    printf("Did you verify your otp? choose from these: (1 - yes/0 - no). \n");
    scanf("%d",&otp);

    if (password == 1 && otp == 1)
        printf("Login success! \n");
    else if (password == 1 || otp == 1)
        printf("Verify again! \n");
    else
        printf("Access denied! \n");
    return 0;



}