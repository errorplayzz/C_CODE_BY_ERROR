//Write a program in C to swap two numbers. 

#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display original numbers
    printf("Original numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display swapped numbers
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
