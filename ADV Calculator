#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /, %, ^, s for sine, c for cosine, t for tangent, l for log, p for power): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
            }
            break;
        case '%':
            printf("%.2lf %% %.2lf = %.2lf", num1, num2, fmod(num1, num2));
            break;
        case '^':
            printf("%.2lf ^ %.2lf = %.2lf", num1, num2, pow(num1, num2));
            break;
        case 's':
            printf("sin(%.2lf) = %.2lf", num1, sin(num1 * M_PI / 180)); // Convert degrees to radians
            break;
        case 'c':
            printf("cos(%.2lf) = %.2lf", num1, cos(num1 * M_PI / 180));
            break;
        case 't':
            printf("tan(%.2lf) = %.2lf", num1, tan(num1 * M_PI / 180));
            break;
        case 'l':
            if (num1 <= 0) {
                printf("Error: Logarithm of non-positive number\n");
            } else {
                printf("log(%.2lf) = %.2lf", num1, log10(num1));
            }
            break;
        case 'p':
            printf("%.2lf ^ %.2lf = %.2lf", num1, num2, pow(num1, num2));
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

