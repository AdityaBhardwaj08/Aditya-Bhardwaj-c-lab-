/*Increment and Decrement Operators Write a C program to demonstrate the difference between: ++a, a++, --a, a-- Use suitable values and print the result after each operation. */
#include <stdio.h>
int main() {
    int a = 5;

    printf("Initial value of a: %d\n", a);

    // Pre-increment
    printf("Pre-increment (++a): %d\n", ++a); // a becomes 6

    // Post-increment
    printf("Post-increment (a++): %d\n", a++); // prints 6, then a becomes 7

    // Pre-decrement
    printf("Pre-decrement (--a): %d\n", --a); // a becomes 6

    // Post-decrement
    printf("Post-decrement (a--): %d\n", a--); // prints 6, then a becomes 5

    printf("Final value of a: %d\n", a); // prints 5

    return 0;
}