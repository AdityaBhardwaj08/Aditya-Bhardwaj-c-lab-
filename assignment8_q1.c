/*1.	Manual String Length
Write a C program to find the length of a string manually by traversing it until the null character '\0' is encountered. Do not use strlen().
*/
#include <stdio.h>
int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length - 1);
    return 0;
}