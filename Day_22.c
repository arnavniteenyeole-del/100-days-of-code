// Day 22

#include <stdio.h>
#include <math.h>

int main() {
    // Q43: Strong number (sum of factorials of digits equals number)
    printf("\n-- Q43 --\n");
    int n; printf("Enter integer: "); scanf("%d", &n);
    int t = abs(n), sum=0;
    while(t){ int d=t%10; int fact=1; for(int i=1;i<=d;i++) fact*=i; sum+=fact; t/=10; }
    if (sum == abs(n)) printf("Strong number\n"); else printf("Not strong\n");

    // Q44: Sum of series 1 + 3/4 + 5/6 + ... up to n terms.
    printf("\n-- Q44 --\n");
    int n; printf("Enter number of terms: "); scanf("%d", &n);
    double sum = 0.0;
    for (int i=1;i<=n;i++) { double num = 2*i - 1; double den = 2*i; sum += num/den; }
    printf("Sum = %.4f\n", sum);

    return 0;
}
