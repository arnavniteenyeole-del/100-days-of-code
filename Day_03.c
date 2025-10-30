// Day 3

#include <stdio.h>
#include <math.h>

int main() {
    // Q5: Celsius to Fahrenheit.
    printf("\n-- Q5 --\n");
    double c;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &c);
    printf("%.2f C = %.2f F\n", c, (c * 9.0/5.0) + 32.0);

    // Q6: Swap two numbers using a third variable.
    printf("\n-- Q6 --\n");
    int a,b,temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a=%d b=%d\n", a, b);
    temp = a; a = b; b = temp;
    printf("After swap: a=%d b=%d\n", a, b);

    return 0;
}
