/*Symmetric Matrix
Write a C program to check whether a square matrix is symmetric using recursion.
*/
#include <stdio.h>

int isSymmetric(int matrix[][10], int n, int i, int j) {
    if (i >= n || j >= n)
        return 1;

    if (matrix[i][j] != matrix[j][i])
        return 0;

    return isSymmetric(matrix, n, i + 1, j + 1);
}

int main() {
    int n, i, j, matrix[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid matrix size");
        return 0;
    }

    printf("Enter matrix elements: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isSymmetric(matrix, n, 0, 0))
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}