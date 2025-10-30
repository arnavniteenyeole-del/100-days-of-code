// Day 63

#include <stdio.h>
#include <math.h>

int main() {
    // Q113: kth smallest element (simple sort)
    printf("\n-- Q113 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[500]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int k; printf("Enter k: "); scanf("%d", &k);
    // sort
    for (int i=0;i<n-1;i++) for (int j=i+1;j<n;j++) if (arr[i]>arr[j]){ int t=arr[i]; arr[i]=arr[j]; arr[j]=t; }
    if (k>=1 && k<=n) printf("%d\n", arr[k-1]); else printf("Invalid k\n");

    return 0;
}
