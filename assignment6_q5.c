/*5.	Prime Numbers in a Range
Write a C program to input two integers representing the lower and upper limits. Display all prime numbers within the given range and print the total number of prime numbers found. Use nested loops.
*/
#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime, count = 0;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++) {
        if (i == 1) {
            continue;
        }
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal number of prime numbers found: %d\n", count);

    return 0;
}