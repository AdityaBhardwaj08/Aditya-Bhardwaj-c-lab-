/*B2. Combined Use of typedef, Nested Structures, Arrays, and Pointers
• Task: Define a Date structure to store the date of birth of a student. Using typedef, define a Student structure containing roll number, name, CGPA, and nested date of birth.
• Storage: Store the details of n students in an array of structures.
• Functions: Create functions that receive structure pointers and print the student data.
• Scholarship test: Check whether each student is eligible for a merit scholarship. A student is eligible if CGPA is greater than or equal to 8.5.
*/
#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int roll;
    char name[50];
    float cgpa;
    Date dob;
} Student;

void printStudent(Student *s) {
    printf("\nRoll Number: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("CGPA: %.2f\n", s->cgpa);

    printf("Date of Birth: %02d/%02d/%04d\n",
           s->dob.day,
           s->dob.month,
           s->dob.year);

    if (s->cgpa >= 8.5)
        printf("Scholarship: Eligible\n");
    else
        printf("Scholarship: Not Eligible\n");
}

int main() {
    Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Enter Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d",
              &s[i].dob.day,
              &s[i].dob.month,
              &s[i].dob.year);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < n; i++) {
        printStudent(&s[i]);
    }

    return 0;
}