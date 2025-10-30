// Day 56

#include <stdio.h>
#include <math.h>

int main() {
    // Q106: Next greater element for each element (brute force)
    printf("\n-- Q106 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[200]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    for (int i=0;i<n;i++){
        int nge = -1;
        for (int j=i+1;j<n;j++) if (arr[j] > arr[i]){ nge = arr[j]; break; }
        if (i) printf(", ");
        printf("%d", nge);
    }
    printf("\n");

    return 0;
}
