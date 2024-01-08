#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random password
void generatePassword(int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";
    int charsetSize = sizeof(charset) - 1;

    srand(time(NULL));

    printf("Generated Password: ");
    for (int i = 0; i < length; ++i) {
        putchar(charset[rand() % charsetSize]);
    }
    printf("\n");
}

int main() {
    int passwordLength;

    printf("Enter the length of the password: ");
    scanf("%d", &passwordLength);

    if (passwordLength <= 0) {
        printf("Invalid password length. Please enter a positive number.\n");
        return 1; // Exit with an error code
    }

    generatePassword(passwordLength);

    return 0;
}

