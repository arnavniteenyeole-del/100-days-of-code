// Day 18

#include <stdio.h>
#include <math.h>

int main() {
    // Q35: Print all factors of a number.
    printf("\n-- Q35 --\n");
    int n; printf("Enter integer: "); scanf("%d", &n);
    for (int i=1;i<=abs(n);i++) if (n % i == 0) printf("%d ", i);
    printf("\n");

    // Q36: HCF (GCD) of two numbers using Euclid's algorithm.
    printf("\n-- Q36 --\n");
    int a,b; printf("Enter two integers: "); scanf("%d %d", &a, &b);
    int x = abs(a), y = abs(b);
    while (y != 0) { int t = x % y; x = y; y = t; }
    printf("GCD = %d\n", x);

    return 0;
}
