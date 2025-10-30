// Day 62

#include <stdio.h>
#include <math.h>

int main() {
    // Q112: Kadane's algorithm for max subarray sum.
    printf("\n-- Q112 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[500]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    long long max_ending = arr[0], max_so_far = arr[0];
    for (int i=1;i<n;i++){ if (max_ending < 0) max_ending = arr[i]; else max_ending += arr[i]; if (max_ending > max_so_far) max_so_far = max_ending; }
    printf("Maximum subarray sum = %lld\n", max_so_far);

    return 0;
}
