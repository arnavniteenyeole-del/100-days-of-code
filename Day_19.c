// Day 19

#include <stdio.h>
#include <math.h>

int main() {
    // Q37: LCM of two numbers
    printf("\n-- Q37 --\n");
    int a,b; printf("Enter two integers: "); scanf("%d %d", &a, &b);
    int ga = a, gb = b;
    int x = abs(a), y = abs(b);
    while (y) { int t = x % y; x = y; y = t; }
    int gcd = x;
    long long lcm = (long long)ga / gcd * gb;
    if (gcd==0) printf("LCM = 0\n"); else printf("LCM = %lld\n", llabs(lcm));

    // Q38: Sum of digits of a number.
    printf("\n-- Q38 --\n");
    int n; printf("Enter integer: "); scanf("%d", &n);
    int sum=0, t=abs(n);
    while(t){ sum += t%10; t/=10; }
    printf("Sum of digits = %d\n", sum);

    return 0;
}
