/*A4. Menu-driven Calculator
• Task: Create enum MenuChoice for ADD, SUBTRACT, MULTIPLY, DIVIDE, and EXIT. Use it to control a calculator loop.
• Key points: Enums in menus, loop termination, and division-by-zero checking.
• Implementation guidance: Assign explicit values when menu numbers must match input. Handle EXIT before performing arithmetic.
*/
#include <stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT = 2,
    MULTIPLY = 3,
    DIVIDE = 4,
    EXIT = 5
};

int main() {
    int choice;
    float a, b;

    while (1) {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == EXIT) {
            printf("Exiting calculator...\n");
            break;
        }

        if (choice < ADD || choice > DIVIDE) {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
            case ADD:
                printf("Result = %.2f\n", a + b);
                break;

            case SUBTRACT:
                printf("Result = %.2f\n", a - b);
                break;

            case MULTIPLY:
                printf("Result = %.2f\n", a * b);
                break;

            case DIVIDE:
                if (b == 0)
                    printf("Division by zero is not possible.\n");
                else
                    printf("Result = %.2f\n", a / b);
                break;
        }
    }

    return 0;
}