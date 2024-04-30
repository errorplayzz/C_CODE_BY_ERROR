// Write a program in C to find whether a number is even or odd.

#include <stdio.h>

int main() {
    int number;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
