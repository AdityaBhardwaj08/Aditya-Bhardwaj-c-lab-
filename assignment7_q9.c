/*9.	Displaying a Two-Dimensional Array
Write a C program to input the number of rows and columns of a two-dimensional array. Enter its elements and display them in matrix form.
*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    
    printf("Enter the elements of the array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The two-dimensional array in matrix form:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}