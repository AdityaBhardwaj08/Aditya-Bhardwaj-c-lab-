/*7.	String Copy and Concatenation
Write a C program to input a first name and a last name. Use strcpy() and strcat() to create and display the complete name with a space between the two names.
*/
#include <stdio.h>
#include <string.h> 

int main() {
    char firstName[50], lastName[50], fullName[100];

    printf("Enter the first name: ");
    fgets(firstName, sizeof(firstName), stdin);

    printf("Enter the last name: ");
    fgets(lastName, sizeof(lastName), stdin);

    firstName[strcspn(firstName, "\n")] = '\0';
    lastName[strcspn(lastName, "\n")] = '\0';

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Complete name: %s\n", fullName);

    return 0;
}