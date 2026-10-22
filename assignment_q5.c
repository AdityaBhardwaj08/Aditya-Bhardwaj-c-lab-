/*Recursive Binary Search
Write a C program to search for a given element in a sorted array using recursive binary search.
*/
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] > target)
        return binarySearch(arr, low, mid - 1, target);
    else
        return binarySearch(arr, mid + 1, high, target);
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78, 89, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);

    return 0;
}