// Q129 (File Handling)
// A file numbers.txt contains a list of integers separated by spaces.
// Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;  // use long long to handle large sums
    double avg;

    // Open the file in read mode
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file 'numbers.txt'.\n");
        return 1;  // exit the program if file doesn't exist
    }

    // Read integers until end of file (EOF)
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Check if any numbers were read
    if (count == 0) {
        printf("No numbers found in the file.\n");
        fclose(fp);
        return 0;
    }

    // Compute average
    avg = (double)sum / count;

    // Display results
    printf("Total numbers read: %d\n", count);
    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", avg);

    // Close the file
    fclose(fp);
    return 0;
}
