/*2.	Fibonacci Sequence
Write a C program to input the number of terms and display the Fibonacci sequence using a loop.
*/
#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");

    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
