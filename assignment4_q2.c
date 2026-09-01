// Write a C program that accepts an integer and a floating-point number from the user. Perform arithmetic operations between them using both: Implicit type conversion and Explicit type conversion  
#include <stdio.h>
int main() { 
    int intNum;
    float floatNum;

    printf("Enter an integer: ");
    scanf("%d", &intNum);
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNum);

    float implicitResult = intNum + floatNum;
    printf("Result of implicit type conversion (int + float): %.2f\n", implicitResult);

    int explicitResult = (int)floatNum + intNum; 
    printf("Result of explicit type conversion (float to int + int): %d\n", explicitResult);

    return 0;
}