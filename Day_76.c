// Q126 (File Handling)
// Ask the user for a filename. Check if it exists by trying to open it in read mode.
// If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[200];

    // Ask the user for a filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    fp = fopen(filename, "r");

    // Check if file exists or can be opened
    if (fp == NULL) {
        printf("Error: File '%s' not found or could not be opened.\n", filename);
        return 1;
    }

    printf("\nContents of %s:\n\n", filename);

    // Read and print file contents line by line
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close file
    fclose(fp);

    printf("\n\nFile read successfully!\n");

    return 0;
}
