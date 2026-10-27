/*Automatic Local Variables
Write a C program to demonstrate that an automatic variable is created when a block is entered and destroyed when the block is exited.
*/
#include <stdio.h>

void demo()
{
    auto int x = 10;

    printf("Block entered: x = %d\n", x);
    x++;
    printf("After increment: x = %d\n", x);
}

int main()
{
    demo();
    demo();

    return 0;
}