// Day 67

#include <stdio.h>
#include <math.h>

int main() {
    // Q117: Merge two sorted arrays into sorted merged array.
    printf("\n-- Q117 --\n");
    int m,n; printf("Enter m and n: "); scanf("%d %d", &m, &n);
    int a[200], b[200];
    for (int i=0;i<m;i++) scanf("%d", &a[i]);
    for (int i=0;i<n;i++) scanf("%d", &b[i]);
    int i=0,j=0;
    printf("Merged: ");
    while (i<m && j<n){ if (a[i]<=b[j]) printf("%d ", a[i++]); else printf("%d ", b[j++]); }
    while (i<m) printf("%d ", a[i++]);
    while (j<n) printf("%d ", b[j++]);
    printf("\n");

    return 0;
}
