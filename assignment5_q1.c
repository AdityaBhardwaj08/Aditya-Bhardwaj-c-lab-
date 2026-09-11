/* Write a C program that accepts input as day, month, and year. Determine whether the date is valid. Consider:
•	Months with 30 or 31 days
•	February with 28 days
•	February with 29 days in a leap year
•	Invalid years, months, and days
Use nested if statements without switch-case
*/
#include <stdio.h>
int main() 
{
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (year < 1) { 
        printf("Invalid year\n");
    } else {
        if (month < 1 || month > 12) {
            printf("Invalid month\n");
        } else {
            if (month == 2) {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    if (day < 1 || day > 29) {
                        printf("Invalid day for February in a leap year\n");
                    } else {
                        printf("Valid date: %02d/%02d/%04d\n", day, month, year);
                    }
                } else {
                    if (day < 1 || day > 28) {
                        printf("Invalid day for February\n");
                    } else {
                        printf("Valid date: %02d/%02d/%04d\n", day, month, year);
                    }
                }
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                if (day < 1 || day > 30) {
                    printf("Invalid day for the given month\n");
                } else {
                    printf("Valid date: %02d/%02d/%04d\n", day, month, year);
                }
            } else {
                if (day < 1 || day > 31) {
                    printf("Invalid day for the given month\n");
                } else {
                    printf("Valid date: %02d/%02d/%04d\n", day, month, year);
                }
            }
        }
    }
    return 0;
}