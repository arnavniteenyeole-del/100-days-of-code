// Q149 (Dynamic Struct with malloc)
// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Allocate memory dynamically for one Student structure
    struct Student *ptr = (struct Student*) malloc(sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input using pointer and -> operator
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Output
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", ptr->name);
    printf("Roll No   : %d\n", ptr->roll_no);
    printf("Marks     : %.2f\n", ptr->marks);

    // Free memory
    free(ptr);

    return 0;
}
