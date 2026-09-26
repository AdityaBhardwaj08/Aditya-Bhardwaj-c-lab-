/*13.	Transpose and Symmetry of a Matrix
Write a C program to input a square matrix and find its transpose. Compare the original matrix with its transpose and determine whether the matrix is symmetric, skew-symmetric, or neither. Display the transpose and the result.
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int transpose[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    int isSymmetric = 1;
    int isSkewSymmetric = 1;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != transpose[i][j]) {
                isSymmetric = 0;
            }
            if(matrix[i][j] != -transpose[i][j]) {
                isSkewSymmetric = 0;
            }
        }
    }

    if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else if(isSkewSymmetric) {
        printf("The matrix is skew-symmetric.\n");
    } else {
        printf("The matrix is neither symmetric nor skew-symmetric.\n");
    }

    return 0;
}