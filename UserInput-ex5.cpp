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
    int N;
    
    // Prompt user for input
    printf("Please enter an integer value: ");
    scanf("%d", &N);
    
    // Calculate factorial
    int fact = factorial(N);
    
    // Print the result
    printf("The value you entered is %d and its factorial is %d\n", N, fact);
    
    return 0; // Indicate successful program execution
}

