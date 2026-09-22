/*4.	Perfect Number
Write a C program to input a positive integer and determine whether it is a perfect number. A perfect number is equal to the sum of its positive divisors excluding itself. For example:        6=1+2+3.
*/
#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}