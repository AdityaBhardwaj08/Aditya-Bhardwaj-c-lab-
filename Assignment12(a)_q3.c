/*A3. Nested Structure
• Task: Define a Date structure containing day, month, and year. Place it inside an Employee structure containing the employee name, employee ID, salary, and date of joining.
• Input and output: Read and display three employee details.
*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);

        printf("Enter joining date (DD MM YYYY): ");
        scanf("%d %d %d",
              &emp[i].joiningDate.day,
              &emp[i].joiningDate.month,
              &emp[i].joiningDate.year);
    }

    printf("\n--- Employee Details ---\n");

    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("Employee ID: %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);

        printf("Date of Joining: %02d/%02d/%04d\n",
               emp[i].joiningDate.day,
               emp[i].joiningDate.month,
               emp[i].joiningDate.year);
    }

    return 0;
}