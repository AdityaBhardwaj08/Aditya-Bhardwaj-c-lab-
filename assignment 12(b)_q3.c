/*A3. Tagged Union
• Task: Create a tagged union that stores either an integer, a floating-point number, or a character.
• Tag: Use enum Type { INT_VALUE, FLOAT_VALUE, CHAR_VALUE } as the tag.
• Key points: Safe union usage, enum tag, and switch statement.
• Implementation guidance: Store the tag in a separate field and write printValue() using switch(tag).
*/
#include <stdio.h>

enum Type {
    INT_VALUE,
    FLOAT_VALUE,
    CHAR_VALUE
};

union Data {
    int i;
    float f;
    char c;
};

struct TaggedValue {
    enum Type tag;
    union Data value;
};

void printValue(struct TaggedValue v) {
    switch (v.tag) {
        case INT_VALUE:
            printf("Integer value: %d\n", v.value.i);
            break;

        case FLOAT_VALUE:
            printf("Float value: %.2f\n", v.value.f);
            break;

        case CHAR_VALUE:
            printf("Character value: %c\n", v.value.c);
            break;

        default:
            printf("Invalid type\n");
    }
}

int main() {
    struct TaggedValue v;

    v.tag = INT_VALUE;
    v.value.i = 25;
    printValue(v);

    v.tag = FLOAT_VALUE;
    v.value.f = 12.5;
    printValue(v);

    v.tag = CHAR_VALUE;
    v.value.c = 'A';
    printValue(v);

    return 0;
}