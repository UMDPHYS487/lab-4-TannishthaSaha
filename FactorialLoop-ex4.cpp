#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) { // Loop from 1 to n
        result *= i; // Multiply result by the current number
    }
    return result; // Return the calculated factorial
}

int main() {
    // Loop to iterate 10 times
    for (int i = 1; i <= 10; i++) {
        int fact = factorial(i); // Call the factorial function
        printf("Loop iteration: %d\n", i); // Print the iteration count
        printf("Factorial of %d is %d\n", i, fact); // Print the factorial result
    }
    return 0; // Indicate successful program execution
}


