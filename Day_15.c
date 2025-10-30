// Day 15

#include <stdio.h>
#include <math.h>

int main() {
    // Q29: Factorial of a number.
    printf("\n-- Q29 --\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    unsigned long long f=1;
    for (int i=1;i<=n;i++) f*=i;
    printf("Factorial = %llu\n", f);

    // Q30: Reverse a number.
    printf("\n-- Q30 --\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int rev=0, t = abs(num);
    while(t>0){ rev = rev*10 + t%10; t/=10; }
    if (num<0) rev = -rev;
    printf("Reversed = %d\n", rev);

    return 0;
}
