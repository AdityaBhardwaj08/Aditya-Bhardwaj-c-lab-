/*3.	Insert an Element at a Position
Write a C program to input n elements into an array. Input a new element and the position where it should be inserted. Insert the element at the given position by shifting the existing elements to the right. Display the updated array. If the entered position is invalid, display an appropriate message.
*/
#include <stdio.h>
int main() {
    int n, pos, i, newElement;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the new element to be inserted: ");
    scanf("%d", &newElement);
    
    printf("Enter the position where the element should be inserted (1 to %d): ", n + 1);
    scanf("%d", &pos);
    
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
    } else {
        for(i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = newElement;
        n++;
        
        printf("Updated array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}