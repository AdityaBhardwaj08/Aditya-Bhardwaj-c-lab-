/*C1. Shared Memory Demonstration
• Task: Define a union named Data containing int i, float f, and char c.
• Assignments: Assign 25 to i, 7.5f to f, and A to c. Display each value immediately after its assignment.
• Size: Display the size of the union using sizeof.
• Explanation: Explain the shared-memory and overwrite behaviour of union members.
*/
#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 25;
    printf("Integer value: %d\n", d.i);

    d.f = 7.5f;
    printf("Float value: %.2f\n", d.f);

    d.c = 'A';
    printf("Character value: %c\n", d.c);

    printf("Size of union Data: %zu bytes\n", sizeof(union Data));

    return 0;
}