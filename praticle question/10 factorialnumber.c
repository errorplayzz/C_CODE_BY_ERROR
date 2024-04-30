// Write a C program to find the factorial of a number using for loop

#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    // Input the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the factorial using a for loop
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    // Display the factorial of the number
    printf("Factorial of %d = %llu\n", number, factorial);

    return 0;
}
