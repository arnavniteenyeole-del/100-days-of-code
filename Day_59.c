// Day 59

#include <stdio.h>
#include <math.h>

int main() {
    // Q109: Maximum sum of all subarrays of size k.
    printf("\n-- Q109 --\n");
    int n,k; printf("Enter n and k: "); scanf("%d %d", &n, &k);
    int arr[500]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    long long sum=0; for (int i=0;i<k;i++) sum+=arr[i];
    long long maxs=sum;
    for (int i=k;i<n;i++){ sum += arr[i] - arr[i-k]; if (sum>maxs) maxs=sum; }
    printf("Max sum of subarray size %d = %lld\n", k, maxs);

    return 0;
}
