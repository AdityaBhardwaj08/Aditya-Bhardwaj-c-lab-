/*9.	Search for a Substring
Write a C program to input a sentence and a word. Use strstr() to determine whether the word occurs in the sentence. If found, display the starting position of its first occurrence.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100], word[50];
    char *pos;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter a word to search for: ");
    fgets(word, sizeof(word), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    pos = strstr(sentence, word);

    if (pos != NULL) {
        printf("Word '%s' found at position %ld.\n", word, pos - sentence);
    } else {
        printf("Word '%s' not found in the sentence.\n", word);
    }

    return 0;
}