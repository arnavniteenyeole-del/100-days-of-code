// Q146 (Struct with Nested Struct)
// Create Employee structure with nested Date structure for joining date
// and print all details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining;   // nested structure
};

int main(void) {
    struct Employee e;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    // Input joining date
    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    // Display details
    printf("\n--- Employee Details ---\n");
    printf("Name          : %s\n", e.name);
    printf("ID            : %d\n", e.id);
    printf("Salary        : %.2f\n", e.salary);
    printf("Joining Date  : %02d-%02d-%04d\n",
            e.joining.day,
            e.joining.month,
            e.joining.year);

    return 0;
}
