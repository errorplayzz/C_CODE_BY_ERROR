// Write a program in C to make a simple Calculator using switch case

#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Input operator and operands from the user
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform the operation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the second number is not zero to avoid division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                return 1; // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1; // Exit the program with an error code
    }

    // Display the result of the calculation
    printf("Result: %.2f\n", result);

    return 0;
}
