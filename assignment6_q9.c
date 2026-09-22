/*Menu-Driven Number Operations
Write a C program that repeatedly displays the following menu:
1. Check Palindrome
2. Check Armstrong Number
3. Check Prime Number
4. Find Sum of Digits
5. Count the number of Digits of an integer
6. Exit

Requirements:
•	Use a do-while loop to display the menu repeatedly.
•	Use switch-case to perform the selected operation.
•	Continue until the user selects Exit.
•	Display an error message for an invalid choice.

*/
#include <stdio.h>

int main()
{
    int choice, num, temp, rem;
    int reverse, sum, count, i, prime;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count Number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                reverse = 0;

                while(temp != 0)
                {
                    rem = temp % 10;
                    reverse = reverse * 10 + rem;
                    temp = temp / 10;
                }

                if(reverse == num)
                    printf("%d is a Palindrome.\n", num);
                else
                    printf("%d is not a Palindrome.\n", num);

                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                sum = 0;

                while(temp != 0)
                {
                    rem = temp % 10;
                    sum = sum + (rem * rem * rem);
                    temp = temp / 10;
                }

                if(sum == num)
                    printf("%d is an Armstrong Number.\n", num);
                else
                    printf("%d is not an Armstrong Number.\n", num);

                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                prime = 1;

                if(num <= 1)
                    prime = 0;
                else
                {
                    for(i = 2; i < num; i++)
                    {
                        if(num % i == 0)
                        {
                            prime = 0;
                            break;
                        }
                    }
                }

                if(prime == 1)
                    printf("%d is a Prime Number.\n", num);
                else
                    printf("%d is not a Prime Number.\n", num);

                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                sum = 0;

                while(temp != 0)
                {
                    rem = temp % 10;
                    sum = sum + rem;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &num);

                temp = num;
                count = 0;

                if(temp == 0)
                {
                    count = 1;
                }
                else
                {
                    while(temp != 0)
                    {
                        count++;
                        temp = temp / 10;
                    }
                }

                printf("Number of digits = %d\n", count);

                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please enter a number from 1 to 6.\n");
        }

    } while(choice != 6);

    return 0;
}