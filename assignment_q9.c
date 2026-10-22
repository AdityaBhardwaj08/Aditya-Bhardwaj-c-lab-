/*Column with Minimum Sum
Write a C program to find the column having the minimum sum in a matrix using recursion.
*/
#include <stdio.h>
#include <limits.h>

int findMinColumnSum(int matrix[][10], int rows, int cols, int col, int currentSum, int minSum, int minColumn) {
    if (col == cols) {
        return minColumn;
    }

    if (currentSum < minSum) {
        minSum = currentSum;
        minColumn = col;
    }

    return findMinColumnSum(matrix, rows, cols, col + 1, 0, minSum, minColumn);
}

int main() {
    int rows, cols, i, j, matrix[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int minColumn = findMinColumnSum(matrix, rows, cols, 0, 0, INT_MAX, -1);

    printf("Column with minimum sum is: %d", minColumn);

    return 0;
}