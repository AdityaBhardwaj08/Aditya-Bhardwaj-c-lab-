/*5.	Character-Frequency Analysis
Write a C program to count the frequency of every character in a string. Treat uppercase and lowercase forms of a letter as the same character, and do not display the same character more than once.
*/
#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;
        }
        freq[(int)ch]++;
    }

    printf("Character Frequency:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && ((i >= 'a' && i <= 'z') || (i >= '0' && i <= '9') || (i == ' '))) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}