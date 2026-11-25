/*A2. Student Result Status
• Task: Use enum Result { FAIL, PASS, DISTINCTION } and write a function that returns the result status from marks.
• Key points: Enumeration as a function return type and result classification.
• Implementation guidance: Return DISTINCTION for average >= 75, PASS for average >= 40, and FAIL otherwise. Print both the label and numeric value.
*/
#include <stdio.h>

enum Result {
    FAIL = 0,
    PASS = 1,
    DISTINCTION = 2
};

enum Result getResult(float average) {
    if (average >= 75) {
        return DISTINCTION;
    } else if (average >= 40) {
        return PASS;
    } else {
        return FAIL;
    }
}

int main() {
    float average;
    enum Result result;

    printf("Enter the average marks: ");
    scanf("%f", &average);

    result = getResult(average);

    switch (result) {
        case FAIL:
            printf("Result: FAIL (Numeric Value: %d)\n", result);
            break;
        case PASS:
            printf("Result: PASS (Numeric Value: %d)\n", result);
            break;
        case DISTINCTION:
            printf("Result: DISTINCTION (Numeric Value: %d)\n", result);
            break;
    }

    return 0;
}