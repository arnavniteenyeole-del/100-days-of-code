// Q131 (Enum)
// Create an enumeration for days (SUNDAY to SATURDAY)
// and print each day with its integer value.

#include <stdio.h>

int main(void) {
    // Declare enum for days of the week
    enum Day {
        SUNDAY,     // 0
        MONDAY,     // 1
        TUESDAY,    // 2
        WEDNESDAY,  // 3
        THURSDAY,   // 4
        FRIDAY,     // 5
        SATURDAY    // 6
    };

    // Print each day with its integer value
    printf("Days of the week and their integer values:\n\n");
    printf("SUNDAY     = %d\n", SUNDAY);
    printf("MONDAY     = %d\n", MONDAY);
    printf("TUESDAY    = %d\n", TUESDAY);
    printf("WEDNESDAY  = %d\n", WEDNESDAY);
    printf("THURSDAY   = %d\n", THURSDAY);
    printf("FRIDAY     = %d\n", FRIDAY);
    printf("SATURDAY   = %d\n", SATURDAY);

    return 0;
}
