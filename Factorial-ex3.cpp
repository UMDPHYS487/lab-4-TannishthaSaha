#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("The loop count is: %d\n", i);
        printf("Factorial of %d is %d\n", i, factorial(i));
    }
    return 0;
}
