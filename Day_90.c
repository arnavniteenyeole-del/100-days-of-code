// Q140 (Enum + Struct)
// Define a struct with enum Gender and print person's gender.

#include <stdio.h>

int main(void) {

    // Define enum for gender
    enum Gender { MALE = 1, FEMALE, OTHER };

    // Define struct containing enum
    struct Person {
        char name[50];
        enum Gender gender;
    };

    struct Person p;

    // Input
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (1 = MALE, 2 = FEMALE, 3 = OTHER): ");
    scanf("%d", (int*)&p.gender);

    // Output
    printf("\nName: %s\n", p.name);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
}
