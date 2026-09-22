/*3.	Palindrome Number
Write a C program to input a positive integer and determine whether it is a palindrome using a loop.
*/
#include <stdio.h>
int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}