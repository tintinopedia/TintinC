#include <stdio.h>
int main() {
    long long password;
    printf("Enter the password: \n");
    scanf("%lld", &password);
    while (password != 9866714327) {
        printf("Invalid Entry!!! Try again!!! \n");
        scanf("%lld", &password);
    }
    printf("Correct password You are allowed to use this website thank you!!!! \n");
    return 0;
}
