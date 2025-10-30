// Day 21

#include <stdio.h>
#include <math.h>

int main() {
    // Q41: Swap first and last digit of a number.
    printf("\n-- Q41 --\n");
    long long n; printf("Enter integer: "); scanf("%lld", &n);
    long long sign = n<0? -1:1; long long t = llabs(n);
    long long last = t % 10;
    long long first = t;
    int digits = 0;
    while (first >= 10) { first /= 10; digits++; }
    digits++; // total digits
    long long rest = t % (long long)pow(10, digits-1);
    long long result = last * (long long)pow(10, digits-1) + rest/10 * 10 + first;
    printf("Result = %lld\n", result * sign);

    // Q42: Perfect number check
    printf("\n-- Q42 --\n");
    int n; printf("Enter integer: "); scanf("%d", &n);
    int sum=0;
    for (int i=1;i<=n/2;i++) if (n%i==0) sum+=i;
    if (sum==n) printf("Perfect number\n"); else printf("Not perfect\n");

    return 0;
}
