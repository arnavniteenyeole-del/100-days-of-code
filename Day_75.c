// Q125 (File Handling)
// Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Get filename from user
    printf("Enter filename to append to: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Could not open file %s.\n", filename);
        return 1;
    }

    // Clear input buffer (for safety)
    getchar();

    // Get the text to append
    printf("Enter the line to append: ");
    fgets(text, sizeof(text), stdin);

    // Write to file
    fprintf(fp, "%s", text);

    // Close file
    fclose(fp);

    printf("Text appended successfully to %s!\n", filename);

    return 0;
}
