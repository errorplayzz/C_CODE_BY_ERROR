// Write a program in C to find Size of variables. 

#include <stdio.h>

int main() {
    // Define variables of different data types
    int integerVar;
    char charVar;
    float floatVar;
    double doubleVar;

    // Print the size of each variable
    printf("Size of int: %lu bytes\n", sizeof(integerVar));
    printf("Size of char: %lu byte\n", sizeof(charVar));
    printf("Size of float: %lu bytes\n", sizeof(floatVar));
    printf("Size of double: %lu bytes\n", sizeof(doubleVar));

    return 0;
}
