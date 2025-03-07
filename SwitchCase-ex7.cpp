#include <stdio.h>

int main() {
    int num;
    
    // Prompt user for input
    printf("Please enter an integer value: ");
    scanf("%d", &num);
    
    // Switch case logic
    switch (num) {
        case 0: case 2: case 4: case 6: case 8:
            printf("%d squared is %d\n", num, num * num);
            break;
        default:
            if (num % 2 != 0) {
                printf("%d divided by 2 is %.1f\n", num, num / 2.0);
            } else {
                printf("hahaha\n");
            }
            break;
    }
    
    return 0; // Indicate successful program execution
}


