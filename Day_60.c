// Day 60

#include <stdio.h>
#include <math.h>

int main() {
    // Q110: Maximum in each subarray of size k (sliding window - brute force)
    printf("\n-- Q110 --\n");
    int n,k; printf("Enter n and k: "); scanf("%d %d", &n, &k);
    int arr[500]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    for (int i=0;i<=n-k;i++){
        int mx = arr[i];
        for (int j=i;j<i+k;j++) if (arr[j]>mx) mx=arr[j];
        if (i) printf(" ");
        printf("%d", mx);
    }
    printf("\n");

    return 0;
}
