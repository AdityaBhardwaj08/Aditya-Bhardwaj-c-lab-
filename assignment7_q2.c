/*2.	Search an element in an Array
Write a C program to search for a given element in an array. Display all its positions and total number of occurrences. If it is not found, display an appropriate message.
*/
#include <stdio.h>

int main() {
    int n, i, search, count = 0;
    int positions[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            positions[count] = i;
            count++;
        }
    }

    if (count == 0) {
        printf("Element not found.\n");
    } else {
        printf("Element found at positions: ");
        for (i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\nTotal occurrences: %d\n", count);
    }

    return 0;
}