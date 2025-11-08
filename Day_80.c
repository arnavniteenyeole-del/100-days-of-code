// Q130 (File Handling)
// Store multiple student records (name, roll number, marks) into a file
// using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *filename = "students.txt";
    FILE *fp;
    int n;

    printf("How many student records will you enter? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }

    // consume leftover newline from scanf
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    // Open file for writing (overwrite if exists)
    fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Unable to open file for writing");
        return 1;
    }

    printf("Enter records (name, roll, marks).\n");
    for (int i = 0; i < n; ++i) {
        char name[100];
        int roll, marks;

        printf("Student %d name: ", i + 1);
        if (fgets(name, sizeof(name), stdin) == NULL) {
            printf("Input error.\n");
            fclose(fp);
            return 1;
        }
        // remove trailing newline
        name[strcspn(name, "\n")] = '\0';

        printf("Student %d roll number: ", i + 1);
        if (scanf("%d", &roll) != 1) { printf("Invalid roll.\n"); fclose(fp); return 1; }
        printf("Student %d marks: ", i + 1);
        if (scanf("%d", &marks) != 1) { printf("Invalid marks.\n"); fclose(fp); return 1; }

        // consume newline before next fgets
        while ((ch = getchar()) != '\n' && ch != EOF);

        // write record as: name|roll|marks\n
        fprintf(fp, "%s|%d|%d\n", name, roll, marks);
    }

    fclose(fp);
    printf("\nRecords saved to %s\n\n", filename);

    // Now read and display them using fscanf
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Unable to open file for reading");
        return 1;
    }

    printf("Reading records from %s:\n", filename);
    printf("---------------------------------\n");
    char name_read[200];
    int roll_read, marks_read;
    int recno = 0;

    // Use scanset to read name up to '|' and then two integers
    while (fscanf(fp, " %[^|]|%d|%d%*c", name_read, &roll_read, &marks_read) == 3) {
        recno++;
        printf("Record %d:\n", recno);
        printf("  Name : %s\n", name_read);
        printf("  Roll : %d\n", roll_read);
        printf("  Marks: %d\n\n", marks_read);
    }

    if (recno == 0) {
        printf("No records found.\n");
    }

    fclose(fp);
    return 0;
}
