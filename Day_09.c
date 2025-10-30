// Day 9

#include <stdio.h>
#include <math.h>

int main() {
    // Q17: Roots of quadratic equation
    printf("\n-- Q17 --\n");
    double A,B,C;
    printf("Enter coefficients A B C: ");
    scanf("%lf %lf %lf", &A, &B, &C);
    double disc = B*B - 4*A*C;
    if (disc > 0) {
        double r1 = (-B + sqrt(disc)) / (2*A);
        double r2 = (-B - sqrt(disc)) / (2*A);
        printf("Roots are real and distinct: %.2f and %.2f\n", r1, r2);
    } else if (disc == 0) {
        double r = -B / (2*A);
        printf("Roots are real and equal: %.2f\n", r);
    } else {
        double real = -B / (2*A);
        double imag = sqrt(-disc) / (2*A);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
    }

    // Q18: Grade from percentage
    printf("\n-- Q18 --\n");
    int p;
    printf("Enter percentage (0-100): ");
    scanf("%d", &p);
    if (p>=90 && p<=100) printf("Grade A\n");
    else if (p>=80) printf("Grade B\n");
    else if (p>=70) printf("Grade C\n");
    else if (p>=60) printf("Grade D\n");
    else printf("Grade F\n");

    return 0;
}
