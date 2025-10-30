// Day 68

#include <stdio.h>
#include <math.h>

int main() {
    // Q118: Missing number in array containing 0..n except one.
    printf("\n-- Q118 --\n");
    int n; printf("Enter n (array size should be n): "); scanf("%d", &n);
    int arr[500]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    long long total = (long long)(n)*(n+1)/2; // since numbers 0..n except one -> array size n (missing one)
    long long sum=0; for (int i=0;i<n;i++) sum += arr[i];
    printf("Missing = %lld\n", total - sum);

    return 0;
}
