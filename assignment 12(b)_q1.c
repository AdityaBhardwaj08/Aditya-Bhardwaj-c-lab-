/*A1. Basic Enumeration
• Task: Declare enum Day with seven days. Read a number from 1 to 7 and print the corresponding day using switch.
• Key points: Enumeration constants, switch statement, and input validation
*/
#include <stdio.h>

enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    int choice;

    printf("Enter a number (1-7): ");
    scanf("%d", &choice);

    switch (choice) {
        case MONDAY:
            printf("Monday");
            break;
        case TUESDAY:
            printf("Tuesday");
            break;
        case WEDNESDAY:
            printf("Wednesday");
            break;
        case THURSDAY:
            printf("Thursday");
            break;
        case FRIDAY:
            printf("Friday");
            break;
        case SATURDAY:
            printf("Saturday");
            break;
        case SUNDAY:
            printf("Sunday");
            break;
        default:
            printf("Invalid input! Please enter a number from 1 to 7.");
    }

    return 0;
}