#include<stdio.h>
#include<string.h>

void salter(char pass[30], char salt[10]);

int main() {
    char password[30];
    char salt[10];
    printf("Enter your password (without salt): ");
    scanf("%s", password);
    printf("Enter the salt: ");
    scanf("%s", salt);

    salter(password, salt);

    return 0;
}

void salter(char pass[30], char salt[10]) {
    char passcopy[30];
    strcpy(passcopy, pass);
    strcat(passcopy, salt);

    printf("Your new password is: %s", passcopy);
}
