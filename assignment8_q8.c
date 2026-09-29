/*8.	Search for a Character
Write a C program to input a string and a character. Use strchr() to find the first occurrence of the character. If found, display its position; otherwise, display an appropriate message.
*/
#include <stdio.h>
#include <string.h> 

int main() {
    char str[100];
    char ch;
    char *pos;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to search for: ");
    scanf(" %c", &ch);

    pos = strchr(str, ch);

    if (pos != NULL) {
        printf("Character '%c' found at position %ld.\n", ch, pos - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}