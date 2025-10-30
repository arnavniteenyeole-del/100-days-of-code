// Day 66

#include <stdio.h>
#include <math.h>

int main() {
    // Q116: Two-sum indices (brute force)
    printf("\n-- Q116 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[500]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int target; printf("Enter target: "); scanf("%d", &target);
    int found_i=-1, found_j=-1;
    for (int i=0;i<n;i++) for (int j=i+1;j<n;j++) if (arr[i]+arr[j]==target){ found_i=i; found_j=j; break; }
    if (found_i==-1) printf("-1 -1\n"); else printf("%d %d\n", found_i, found_j);

    return 0;
}
