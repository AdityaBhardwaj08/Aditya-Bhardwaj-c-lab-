//Write a C program that uses at least 5 C keywords meaningfully. After writing the program, list the keywords used and explain their purpose briefly.

 #include <stdio.h>

int main(void)
{
    const int numberCount = 3;
    int number;
    int index;

    printf("Enter %d integers:\n", numberCount);

    for (index = 1; index <= numberCount; index++) {
        printf("Number %d: ", index);
        if (scanf("%d", &number) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (number > 0) {
            printf("The number is positive.\n");
        } else if (number < 0) {
            printf("The number is negative.\n");
        } else {
            printf("The number is zero.\n");
        }

        switch (number % 2) {
            case 0:
                printf("It is even.\n");
                break;
            case 1:
            case -1:
                printf("It is odd.\n");
                break;
        }

        printf("\n");
    }

    return 0;
}
