// Q143 (Struct)
// Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find student with maximum marks
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Print topper details
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name      : %s\n", s[maxIndex].name);
    printf("Roll No   : %d\n", s[maxIndex].roll_no);
    printf("Marks     : %.2f\n", s[maxIndex].marks);

    return 0;
}
