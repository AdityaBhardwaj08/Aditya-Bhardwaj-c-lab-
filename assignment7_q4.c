/*4.	Delete an Element from an Array
Write a C program to input n elements into an array. Input the position of the element to be deleted. Delete the element from the specified position by shifting the remaining elements to the left. Display the updated array. If the entered position is invalid, display an appropriate message.
*/
#include <stdio.h>
int main() {
    int n, pos, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position of the element to be deleted (1 to %d): ", n);
    scanf("%d", &pos);
    
    if(pos < 1 || pos > n) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
    } else {
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the size of the array
        
        printf("Updated array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}