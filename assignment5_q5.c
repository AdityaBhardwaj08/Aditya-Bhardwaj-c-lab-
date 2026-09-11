/*Write a C program to implement a menu-driven banking system with the following options:
•	Check balance 
•	Deposit money 
•	Withdraw money 
•	Calculate annual simple interest 
•	 Exit 
Requirements
•	Initialize the account with a balance of ₹5,000. 
•	Use a loop to display the menu repeatedly until the user selects Exit. 
•	Use a switch-case statement to perform the selected operation.
*/
#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000.0;
    float amount, rate, time, interest;

    do
    {
        printf("\n--- BANKING SYSTEM ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Calculate Annual Simple Interest\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Current Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: Rs. ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance = balance + amount;
                    printf("Money deposited successfully.\n");
                    printf("New Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Invalid deposit amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: Rs. ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid withdrawal amount.\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    balance = balance - amount;
                    printf("Money withdrawn successfully.\n");
                    printf("Remaining Balance = Rs. %.2f\n", balance);
                }
                break;

            case 4:
                printf("Enter annual interest rate: ");
                scanf("%f", &rate);

                printf("Enter time in years: ");
                scanf("%f", &time);

                interest = (balance * rate * time) / 100;

                printf("Simple Interest = Rs. %.2f\n", interest);
                break;

            case 5:
                printf("Thank you for using the banking system.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}