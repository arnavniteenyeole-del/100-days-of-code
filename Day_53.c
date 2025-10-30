// Day 53

#include <stdio.h>
#include <math.h>

int main() {
    // Q103: Pivot index where left sum equals right sum
    printf("\n-- Q103 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[200]; long total=0;
    for (int i=0;i<n;i++){ scanf("%d", &arr[i]); total+=arr[i]; }
    long left=0; int pivot=-1;
    for (int i=0;i<n;i++){ if (left == total - left - arr[i]){ pivot=i; break; } left += arr[i]; }
    if (pivot==-1) printf("-1\n"); else printf("%d\n", pivot);

    return 0;
}
