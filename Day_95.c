// Q145 (Struct + Function Returning Structure)
// Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return the topper
struct Student findTopper(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];   // return the structure
}

int main(void) {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student arr[n];

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", arr[i].name);

        printf("Enter roll number: ");
        scanf("%d", &arr[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &arr[i].marks);
    }

    // Get topper structure
    struct Student topper = findTopper(arr, n);

    // Print topper details
    printf("\n--- Top Student ---\n");
    printf("Name      : %s\n", topper.name);
    printf("Roll No   : %d\n", topper.roll_no);
    printf("Marks     : %.2f\n", topper.marks);

    return 0;
}
