/*10.	Addition of Two Matrices
Write a C program to input two matrices of the same order. Calculate their sum and display the resulting matrix. If the matrices have different orders, display an appropriate message.
*/
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j;
    
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);
    
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);
    
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrices must have the same order for addition.\n");
        return 1;
    }
    
    int matrix1[rows1][cols1], matrix2[rows2][cols2], sum[rows1][cols1];
    
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("Resulting sum matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}