/* Menu-Driven Calculator
Write a C program to create a menu-driven calculator that displays the following menu:
Addition, Subtraction, Multiplication, Division, Modulus, Power, Exit.
Requirements: 
•	Accept the user’s choice and perform the corresponding operation using a switch-case statement. 
•	Take two numbers as input for each calculation.
*/
#include <stdio.h>

int main()
{
    int choice, a, b, i;
    long long power;

    do
    {
        printf("\n--- MENU DRIVEN CALCULATOR ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7)
        {
            printf("Exiting calculator...\n");
            break;
        }

        if (choice < 1 || choice > 7)
        {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (choice)
        {
            case 1:
                printf("Addition = %d\n", a + b);
                break;

            case 2:
                printf("Subtraction = %d\n", a - b);
                break;

            case 3:
                printf("Multiplication = %d\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Division = %.2f\n", (float)a / b);
                else
                    printf("Division by zero is not possible.\n");
                break;

            case 5:
                if (b != 0)
                    printf("Modulus = %d\n", a % b);
                else
                    printf("Modulus by zero is not possible.\n");
                break;

            case 6:
                power = 1;

                if (b >= 0)
                {
                    for (i = 1; i <= b; i++)
                    {
                        power = power * a;
                    }

                    printf("Power = %lld\n", power);
                }
                else
                {
                    printf("Negative exponent is not supported.\n");
                }
                break;
        }

    } while (choice != 7);

    return 0;
}