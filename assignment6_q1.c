/*1.	Multiplication Table
Write a C program that accepts an integer from the user and displays its multiplication table from 1 to 10 using a for loop.
*/
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}