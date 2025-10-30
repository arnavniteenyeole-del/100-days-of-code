// Day 17

#include <stdio.h>
#include <math.h>

int main() {
    // Q33: Armstrong number (for n-digit number check)
    printf("\n-- Q33 --\n");
    int num; printf("Enter integer: "); scanf("%d", &num);
    int t = abs(num), sum=0, temp=t;
    int digits=0; while(temp){ digits++; temp/=10; } if (digits==0) digits=1;
    temp = t;
    while(temp){ int d = temp%10; sum += (int)pow(d, digits); temp/=10; }
    if (sum == t) printf("Armstrong\n"); else printf("Not Armstrong\n");

    // Q34: Check prime
    printf("\n-- Q34 --\n");
    int n; printf("Enter positive integer: "); scanf("%d", &n);
    if (n<=1) { printf("Not prime\n"); }
    else {
        int isprime=1;
        for (int i=2;i<=sqrt(n);i++) if (n%i==0) { isprime=0; break; }
        printf(isprime?"Prime\n":"Not prime\n");
    }

    return 0;
}
