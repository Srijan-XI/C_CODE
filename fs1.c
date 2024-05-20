#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci series: %d %d ", a, b);
    for (int i = 2; i < n; i++) {
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Number of terms should be at least 1\n");
    } else {
        fibonacci(n);
    }

    return 0;
}
