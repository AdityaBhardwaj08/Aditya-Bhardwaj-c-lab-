/*5.	Largest and Smallest Elements in an Array
Write a C program to find the largest, second-largest, smallest, and second-smallest elements in an array without sorting it
*/
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if(n < 2) {
        printf("Array must have at least two elements to find second largest and second smallest.\n");
        return 1;
    }
    
    int largest = arr[0], secondLargest = arr[0];
    int smallest = arr[0], secondSmallest = arr[0];
    
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
        
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    
    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", secondLargest);
    printf("Smallest element: %d\n", smallest);
    printf("Second smallest element: %d\n", secondSmallest);
    
    return 0;
}