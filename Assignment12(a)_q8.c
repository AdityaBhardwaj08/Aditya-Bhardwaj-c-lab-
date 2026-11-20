/*C2. Array of Unions
• Task: Define a union named Number containing int i and float f. Create an array of three union variables.
• Integer values: Store three integers in the array and display them.
• Overwrite operation: Overwrite the second element with a floating-point value and display that value.
• Explanation: Explain the effect of overwriting a union member and how memory is reused.
*/
#include <stdio.h>

union Number {
    int i;
    float f;
};

int main() {
    union Number num[3];

    num[0].i = 10;
    num[1].i = 20;
    num[2].i = 30;

    printf("Integer values:\n");
    printf("%d\n", num[0].i);
    printf("%d\n", num[1].i);
    printf("%d\n", num[2].i);

    num[1].f = 7.5f;

    printf("\nAfter overwriting second element:\n");
    printf("Float value: %.2f\n", num[1].f);

    return 0;
}
