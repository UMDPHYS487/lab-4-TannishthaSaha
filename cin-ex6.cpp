#include <stdio.h>

int main() {
    int y = 10; // Define an integer outside the loop
    int *x = &y; // Define a pointer and set it to point to y
    
    // Print memory address of y
    printf("Memory address of y: %p\n", (void*)&y);
    printf("Memory address of y: %p\n", (void*)&y);
    printf("Memory address of y: %p\n", (void*)&y);
    printf("\n");
    
    // Print value of y and value stored at pointer x
    printf("Initial value of y: %d\n", y);
    printf("Value at pointer x: %d\n", *x);
    printf("\n");
    
    // Change the value of y
    y = 20;
    
    // Print value of y and value stored at pointer x after modification
    printf("Modified value of y: %d\n", y);
    printf("Value at pointer x after modifying y: %d\n", *x);
    printf("\n");
    
}

