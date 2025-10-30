// Day 51

#include <stdio.h>
#include <math.h>

int main() {
    // Q101: First and last occurrence of target in sorted array. Print indices or -1 -1.
    printf("\n-- Q101 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[200]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int target; printf("Enter target: "); scanf("%d", &target);
    int first=-1, last=-1;
    for (int i=0;i<n;i++) if (arr[i]==target){ if (first==-1) first=i; last=i; }
    if (first==-1) printf("-1 -1\n"); else printf("%d %d\n", first, last);

    return 0;
}
