/*Relational and Logical Operators Write a C program to input marks of a student in three subjects. Use relational and logical operators to check whether the student:   Passed all subjects  Failed in one or more subjects  Scored distinction if average is 75 or above Assume passing marks in each subject is 40. */
#include <stdio.h>
int main() {
    int marks1, marks2, marks3;
    float average;

    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);

    average = (marks1 + marks2 + marks3) / 3.0;

    if (marks1 >= 40 && marks2 >= 40 && marks3 >= 40) {
        printf("The student has passed all subjects.\n");
        if (average >= 75) {
            printf("The student has scored distinction with an average of %.2f.\n", average);
        }
    } else {
        printf("The student has failed in one or more subjects.\n");
    }

    return 0;
}