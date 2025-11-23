// Q144 (Struct + Function)
// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure and prints details
void display(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", s.name);
    printf("Roll No   : %d\n", s.roll_no);
    printf("Marks     : %.2f\n", s.marks);
}

int main(void) {
    struct Student st;

    // Input
    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter roll number: ");
    scanf("%d", &st.roll_no);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    // Call function with structure as argument
    display(st);

    return 0;
}
