// Day 4

#include <stdio.h>
#include <math.h>

int main() {
    // Q7: Swap two numbers without using a third variable.
    printf("\n-- Q7 --\n");
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a=%d b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: a=%d b=%d\n", a, b);

    // Q8: Sum of first n natural numbers.
    printf("\n-- Q8 --\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    long sum = (long)n * (n + 1) / 2;
    printf("Sum of first %d natural numbers = %ld\n", n, sum);

    return 0;
}
