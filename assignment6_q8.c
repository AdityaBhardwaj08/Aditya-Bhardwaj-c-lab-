/*8.	Series Evaluation
Write a C program to input x and n and evaluate the following series:
                                  S = x − (x^2)/2! + (x^3)/3! − (x^4)/4! +⋯+(−1)^(n+1) (x^n)/n!.
Calculate powers and factorials using loops without using pow() or a separate user-defined function.
*/
#include <stdio.h>
int main() {
    int x, n;
    double S = 0.0;
    int sign = 1;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int power = 1;
        for (int j = 0; j < i; j++) {
            power *= x;
        }
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        S += sign * ((double)power / factorial);
        sign *= -1;
    }

    printf("The value of the series S is: %.6lf\n", S);

    return 0;
}