/*B1. Structure Using typedef
• Task: Use typedef to define a structure named Student without repeatedly writing the struct keyword. Read and display the details of three student records.
• Members: Store roll number, student name, and CGPA.
*/
#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
    float cgpa;
} Student;

int main() {
    Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\n--- Student Records ---\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("CGPA: %.2f\n", s[i].cgpa);
    }

    return 0;
}