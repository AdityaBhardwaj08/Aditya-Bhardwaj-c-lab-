/*5. Unique ID Generator Using static
Write a C program using a static variable to generate a unique identification number every time a function is called.
*/
#include <stdio.h>

int generateUniqueID() {
    static int id = 1000;
    return id++;
}

int main() {
    printf("Unique ID 1: %d\n", generateUniqueID());
    printf("Unique ID 2: %d\n", generateUniqueID());
    printf("Unique ID 3: %d\n", generateUniqueID());
    return 0;
}