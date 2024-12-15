#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    int choice;

    printf("Enter the value of A: ");
    scanf("%d", &A);

    printf("Enter the value of B: ");
    scanf("%d", &B);

    printf("Select the operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result of addition: %d\n", A + B);
            break;
        case 2:
            printf("Result of subtraction: %d\n", A - B);
            break;
        case 3:
            printf("Result of multiplication: %d\n", A * B);
            break;
        case 4:
            if (B != 0) {
                printf("Result of division: %.2f\n", (float) A / B);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;
        case 5:
            printf("Result of power: %.2f\n", pow(A, B));
            break;
        default:
            printf("Invalid choice. Please select a number from 1 to 5.\n");
    }

    return 0;
}
