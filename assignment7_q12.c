/*12.	Row-wise and Column-wise Sums
Write a C program to input an m by n matrix. Calculate and display the sum of the elements in each row and each column.
*/
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    
    int matrix[m][n];
    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Row-wise sums:\n");
    for(i = 0; i < m; i++) {
        int rowSum = 0;
        for(j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }
    
    printf("Column-wise sums:\n");
    for(j = 0; j < n; j++) {
        int colSum = 0;
        for(i = 0; i < m; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, colSum);
    }
    
    return 0;
}