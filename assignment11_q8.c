/*8. Volatile Storage Class
Write a C program using the volatile storage class to handle a variable that might be changed by external factors.
*/
#include <stdio.h>

int main() {
    volatile int externalVariable = 10;
    printf("Initial value: %d\n", externalVariable);
    externalVariable = 20;
    printf("Modified value: %d\n", externalVariable);
    return 0;
}