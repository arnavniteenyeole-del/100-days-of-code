// Q139 (Enum)
// Show that enums store integers by printing assigned values.

#include <stdio.h>

int main(void) {

    // Enum with explicitly assigned and auto-incremented values
    enum Test {
        X = 5,
        Y = 10,
        Z,      // becomes 11
        W = 20,
        V       // becomes 21
    };

    printf("X = %d\n", X);
    printf("Y = %d\n", Y);
    printf("Z = %d\n", Z);   // auto-incremented
    printf("W = %d\n", W);
    printf("V = %d\n", V);   // auto-incremented

    return 0;
}
