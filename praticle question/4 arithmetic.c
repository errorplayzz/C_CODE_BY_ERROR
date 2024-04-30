//Write a C program to Perform all Arithmetic Operations on Two Integers in one program 

#include <stdio.h>

int main() {
    int num1, num2, sum, diff, product;
    float quotient;
    int remainder;

    // Input two integers from user
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;
    remainder = num1 % num2;

    // Display the results
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Difference: %d - %d = %d\n", num1, num2, diff);
    printf("Product: %d * %d = %d\n", num1, num2, product);
    printf("Quotient: %d / %d = %.2f\n", num1, num2, quotient);
    printf("Remainder: %d %% %d = %d\n", num1, num2, remainder);

    return 0;
}
