/*8.	Merging Two Arrays
Write a C program to input two arrays, merge their elements into a third array, and display the resulting merged array.
*/
#include <stdio.h>
int main() {
    int n1, n2, i, j;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int mergedArray[n1 + n2];
    
    for(i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }
    
    for(j = 0; j < n2; j++) {
        mergedArray[n1 + j] = arr2[j];
    }
    
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    
    return 0;
}