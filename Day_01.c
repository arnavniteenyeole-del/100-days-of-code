// Day 1

#include <stdio.h>
#include <math.h>

int main() {
    // Q1: Input two numbers and display their sum.
    printf("\n-- Q1 --\n");
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);

    // Q2: Input two numbers and display sum, diff, product, quotient. Handle division by zero.
    printf("\n-- Q2 --\n");
    int x,y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Sum=%d, Diff=%d, Product=%d, ", x+y, x-y, x*y);
    if (y!=0) printf("Quotient=%d\n", x/y);
    else printf("Quotient=Undefined (Division by zero)\n");

    return 0;
}
