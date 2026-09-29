/*3.	Manual String Concatenation
Write a C program to concatenate two strings manually. Ensure that the destination array has enough space to hold the combined string. Do not use strcat().
*/
#include <stdio.h>
int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';

    printf("Concatenated string: %s", result);

    return 0;
}