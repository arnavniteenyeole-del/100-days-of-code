// Q138 (Enum)
// Print all enum names and integer values using a loop.

#include <stdio.h>

int main(void) {

    // Define enum
    enum Color { RED = 0, GREEN, BLUE, YELLOW, WHITE };

    // Array of names in same order as enum
    const char *names[] = { "RED", "GREEN", "BLUE", "YELLOW", "WHITE" };

    int total = sizeof(names) / sizeof(names[0]);  // number of items

    printf("Enum names and their integer values:\n\n");

    // Loop to print names and values
    for (int i = 0; i < total; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
