// Day 23

#include <stdio.h>
#include <math.h>

int main() {
    // Q45: Sum of series 2/3 + 4/7 + 6/11 + ... up to n terms.
    printf("\n-- Q45 --\n");
    int n; printf("Enter number of terms: "); scanf("%d", &n);
    double sum = 0.0;
    int num = 2, den = 3;
    for (int i=0;i<n;i++) { sum += (double)num/den; num += 2; den += 4; }
    printf("Sum = %.4f\n", sum);

    // Q46: Print 5x5 stars square
    printf("\n-- Q46 --\n");
    for (int i=0;i<5;i++){ for(int j=0;j<5;j++) putchar('*'); putchar('\n'); }

    return 0;
}
