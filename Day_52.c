// Day 52

#include <stdio.h>
#include <math.h>

int main() {
    // Q102: Ceil of x in sorted array: index of smallest element >= x
    printf("\n-- Q102 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[200]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int x; printf("Enter x: "); scanf("%d", &x);
    int idx=-1; for (int i=0;i<n;i++) if (arr[i]>=x){ idx=i; break; }
    if (idx==-1) printf("-1\n"); else printf("%d\n", idx);

    return 0;
}
