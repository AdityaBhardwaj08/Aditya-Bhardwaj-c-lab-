/*Automatic and Static Variables
Write a C program that calls the same function several times and compares the behaviour of an automatic variable with a static variable.
*/
#include <stdio.h>

void demo()
{
    int autoVar = 0;
    static int staticVar = 0;

    autoVar++;
    staticVar++;

    printf("Automatic = %d, Static = %d\n",
           autoVar, staticVar);
}

int main()
{
    demo();
    demo();
    demo();

    return 0;
}