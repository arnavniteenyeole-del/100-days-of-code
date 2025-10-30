// Day 5

#include <stdio.h>
#include <math.h>

int main() {
    // Q9: Simple and Compound Interest.
    printf("\n-- Q9 --\n");
    double P, R;
    int T;
    printf("Enter principal, rate(%%), time(years): ");
    scanf("%lf %lf %d", &P, &R, &T);
    double si = (P * R * T) / 100.0;
    double ci = P * pow(1 + R/100.0, T) - P;
    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    // Q10: Convert seconds to hh:mm:ss
    printf("\n-- Q10 --\n");
    int secs;
    printf("Enter time in seconds: ");
    scanf("%d", &secs);
    int h = secs / 3600;
    int m = (secs % 3600) / 60;
    int s = secs % 60;
    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}
