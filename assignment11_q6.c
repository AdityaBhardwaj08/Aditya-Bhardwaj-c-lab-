/*6. Static Global Variable
Write a C program to demonstrate that a global variable declared with static can be accessed only within the same source file.
*/
#include <stdio.h>

static int num = 100;

void display()
{
    printf("Static global variable = %d\n", num);
}

int main()
{
    display();
    return 0;
}