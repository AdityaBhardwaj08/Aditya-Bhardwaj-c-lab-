/*A4. Structure Passed to Functions
• Task: Define a Student structure containing roll number, name, marks in three subjects, and grade. Demonstrate passing a structure by value and passing it by reference.
• Functions: Write displayStudent(struct Student s), totalMarks(struct Student s), and updateGrade(struct Student *s, char newGrade).
*/
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    char grade;
};

void displayStudent(struct Student s) {
    int i;

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);

    printf("Marks: ");
    for (i = 0; i < 3; i++) {
        printf("%.2f ", s.marks[i]);
    }

    printf("\nGrade: %c\n", s.grade);
}

float totalMarks(struct Student s) {
    return s.marks[0] + s.marks[1] + s.marks[2];
}

void updateGrade(struct Student *s, char newGrade) {
    s->grade = newGrade;
}

int main() {
    struct Student s;
    float total;
    char newGrade;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f",
          &s.marks[0],
          &s.marks[1],
          &s.marks[2]);

    printf("Enter grade: ");
    scanf(" %c", &s.grade);

    displayStudent(s);

    total = totalMarks(s);
    printf("\nTotal Marks: %.2f\n", total);

    printf("\nEnter new grade: ");
    scanf(" %c", &newGrade);

    updateGrade(&s, newGrade);

    printf("\nAfter updating grade:");
    displayStudent(s);

    return 0;
}