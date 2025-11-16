// Q137 (Enum)
// Create an enum for user roles (ADMIN, USER, GUEST)
// and display messages based on the role.

#include <stdio.h>

int main(void) {

    enum Role { ADMIN = 1, USER, GUEST };
    enum Role r;

    int choice;
    printf("Enter role (1 = ADMIN, 2 = USER, 3 = GUEST): ");
    scanf("%d", &choice);

    r = choice;  // assign selected role

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! You have full system access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have read-only access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
