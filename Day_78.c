// Q128 (File Handling)
// Read a text file and count how many vowels and consonants are in the file.
// Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>  // for isalpha(), tolower()

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int vowels = 0, consonants = 0;

    // Get filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s.\n", filename);
        return 1;
    }

    // Read characters one by one
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); // convert to lowercase for uniformity

        if (isalpha(ch)) {  // only count letters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Close file
    fclose(fp);

    // Display result
    printf("\nFile: %s\n", filename);
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}
