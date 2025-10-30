// Day 55

#include <stdio.h>
#include <math.h>

int main() {
    // Q105: Majority element (> n/2 times) else -1
    printf("\n-- Q105 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[200]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int candidate = arr[0], count = 1;
    for (int i=1;i<n;i++){ if (arr[i]==candidate) count++; else { count--; if (count==0){ candidate=arr[i]; count=1; } } }
    int freq=0; for (int i=0;i<n;i++) if (arr[i]==candidate) freq++;
    if (freq > n/2) printf("%d\n", candidate); else printf("-1\n");

    return 0;
}
