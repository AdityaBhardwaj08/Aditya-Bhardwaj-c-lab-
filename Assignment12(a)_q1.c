/*A1. Student Record
• Task: Define a structure named Student containing the roll number, student name, and marks in three subjects. Write a C program to read one student record and display the total marks, average marks, and grade.
*/
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks[3];
};

int main() {
    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter marks in three subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &student.marks[i]);
    }

    float total = 0;
    for (int i = 0; i < 3; i++) {
        total += student.marks[i];
    }

    float average = total / 3;

    char grade;
    if (average >= 80) {
        grade = 'A';
    } else if (average >= 60) {
        grade = 'B';
    } else {
        grade = 'C';
    }

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}