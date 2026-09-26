/*14.	Diagonal and Triangular Matrix
Write a C program to input a square matrix and calculate the sums of its main and secondary diagonal elements. Also determine whether the given matrix is upper triangular, lower triangular, diagonal, or none of these.
*/
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;
    int isUpperTriangular = 1, isLowerTriangular = 1, isDiagonal = 1;

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if(i == j) {
                mainDiagonalSum += matrix[i][j];
            }
            if(i + j == n - 1) {
                secondaryDiagonalSum += matrix[i][j];
            }
            if(i > j && matrix[i][j] != 0) {
                isUpperTriangular = 0;
            }
            if(i < j && matrix[i][j] != 0) {
                isLowerTriangular = 0;
            }
            if(i != j && matrix[i][j] != 0) {
                isDiagonal = 0;
            }
        }
    }

    printf("Sum of main diagonal elements: %d\n", mainDiagonalSum);
    printf("Sum of secondary diagonal elements: %d\n", secondaryDiagonalSum);

    if(isDiagonal) {
        printf("The matrix is a diagonal matrix.\n");
    } else if(isUpperTriangular) {
        printf("The matrix is an upper triangular matrix.\n");
    } else if(isLowerTriangular) {
        printf("The matrix is a lower triangular matrix.\n");
    } else {
        printf("The matrix is none of these.\n");
    }

    return 0;
}