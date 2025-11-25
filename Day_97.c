// Q147 (Binary File Handling)
// Store employee data in a binary file using fwrite()
// and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    // ------------------------------
    // Write to binary file
    // ------------------------------
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data written to employee.dat successfully.\n");

    // ------------------------------
    // Read from binary file
    // ------------------------------
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Print read data
    printf("\n--- Employee Data Read from File ---\n");
    printf("Name   : %s\n", e_read.name);
    printf("ID     : %d\n", e_read.id);
    printf("Salary : %.2f\n", e_read.salary);

    return 0;
}
