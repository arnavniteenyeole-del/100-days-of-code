// Q134 (Enum)
// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

int main(void) {

    enum Status { SUCCESS = 1, FAILURE, TIMEOUT };

    enum Status s = FAILURE;   // Change value here for testing

    switch (s) {
        case SUCCESS:
            printf("Operation successful!\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Unknown status.\n");
    }

    return 0;
}
