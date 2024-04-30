//Write a C program to find perimeter and area of circle

#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, perimeter, area;

    // Input radius of the circle from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate perimeter and area of the circle
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    // Display the results
    printf("Perimeter of the circle: %.2f\n", perimeter);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
