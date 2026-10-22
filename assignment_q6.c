/*Occurrences of the Maximum Element
Write a C program to find the maximum element in an array and count the number of times it occurs using recursion.
*/
#include <stdio.h>

void findMax(int arr[], int n, int i, int *max, int *count) {
    if (i == n)
        return;

    if (arr[i] > *max) {
        *max = arr[i];
        *count = 1;
    }
    else if (arr[i] == *max) {
        (*count)++;
    }

    findMax(arr, n, i + 1, max, count);
}

int main() {
    int n, i, arr[100], max, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    findMax(arr, n, 0, &max, &count);

    printf("Maximum element = %d\n", max);
    printf("Number of occurrences = %d", count);

    return 0;
}