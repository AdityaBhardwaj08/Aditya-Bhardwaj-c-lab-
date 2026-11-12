/*A2. Array of Structures
• Task: Store the details of n students using an array of structures. Calculate the average marks of every student and display the student with the highest average.
• Tie handling: If two or more students have the same highest average, display all such students.
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks[3];
    float average;
};

int main() {
    struct Student s[100];
    int n, i, j;
    float sum, highest;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        sum = 0;

        printf("Enter marks in 3 subjects: ");
        for (j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            sum += s[i].marks[j];
        }

        s[i].average = sum / 3;
    }
    highest = s[0].average;

    for (i = 1; i < n; i++) {
        if (s[i].average > highest) {
            highest = s[i].average;
        }
    }

    printf("\n--- Student Averages ---\n");

    for (i = 0; i < n; i++) {
        printf("%s (Roll No: %d) - Average: %.2f\n",
               s[i].name, s[i].roll, s[i].average);
    }

    printf("\n--- Highest Average ---\n");
    printf("Highest Average: %.2f\n", highest);

    for (i = 0; i < n; i++) {
        if (s[i].average == highest) {
            printf("Name: %s, Roll No: %d\n",
                   s[i].name, s[i].roll);
        }
    }

    return 0;
}