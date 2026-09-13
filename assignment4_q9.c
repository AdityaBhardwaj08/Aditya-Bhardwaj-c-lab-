/*Operator Precedence Write a C program to verify operator precedence using the following expression: result1 = a + b * c - d / e + f % g; Take values of a, b, c, d, e, f, g from the user. result2 = a + (b * c) - (d / e) + (f % g); Display both result1 and result2. If both results are the same, operator precedence is verified. Your program must also check:  If e = 0, display “Division by zero error”  If g = 0, display “Modulus by zero error” */
#include <stdio.h>
int main() {
    int a, b, c, d, e, f, g;
    int result1, result2;

    printf("Enter values for a, b, c, d, e, f, g: ");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

    if (e == 0) {
        printf("Division by zero error\n");
        return 1; // Exit the program with an error code
    }

    if (g == 0) {
        printf("Modulus by zero error\n");
        return 1; // Exit the program with an error code
    }

    result1 = a + b * c - d / e + f % g;
    result2 = a + (b * c) - (d / e) + (f % g);

    printf("Result1: %d\n", result1);
    printf("Result2: %d\n", result2);

    if (result1 == result2) {
        printf("Operator precedence is verified.\n");
    } else {
        printf("Operator precedence is not verified.\n");
    }

    return 0;
}