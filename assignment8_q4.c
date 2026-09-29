/*4.	Palindrome String
Write a C program to determine whether a given string is a palindrome. Ignore differences between uppercase and lowercase letters. For example, Madam should be treated as a palindrome.
*/
#include <stdio.h>
int main() {    
    char str[100];
    int i = 0, j, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        i++;
    }


    for (i = 0; i < j; i++, j--) {

        char leftChar = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32 : str[i];
        char rightChar = (str[j] >= 'A' && str[j] <= 'Z') ? str[j] + 32 : str[j];

        if (leftChar != rightChar) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}