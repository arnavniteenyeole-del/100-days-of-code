// Day 32

#include <stdio.h>
#include <math.h>

int main() {
    // Q63: Merge two arrays.
    printf("\n-- Q63 --\n");
    int m,n;
    printf("Enter sizes m and n: "); scanf("%d %d", &m, &n);
    int a[100], b[100];
    printf("Enter first array: "); for (int i=0;i<m;i++) scanf("%d", &a[i]);
    printf("Enter second array: "); for (int i=0;i<n;i++) scanf("%d", &b[i]);
    printf("Merged: "); for (int i=0;i<m;i++) printf("%d ", a[i]); for (int i=0;i<n;i++) printf("%d ", b[i]); printf("\n");

    // Q64: Digit that occurs most in an integer.
    printf("\n-- Q64 --\n");
    long long num; printf("Enter integer: "); scanf("%lld", &num);
    int freq[10]={0}; long long t = llabs(num);
    if (t==0) freq[0]=1;
    while (t){ freq[t%10]++; t/=10; }
    int maxf=0, digit=0;
    for (int i=0;i<10;i++) if (freq[i]>maxf){ maxf=freq[i]; digit=i; }
    printf("Digit %d occurs most (%d times)\n", digit, maxf);

    return 0;
}
