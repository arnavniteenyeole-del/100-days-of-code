// Day 57

#include <stdio.h>
#include <math.h>

int main() {
    // Q107: Previous greater element for each element (brute force)
    printf("\n-- Q107 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[200]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    for (int i=0;i<n;i++){
        int pge = -1;
        for (int j=i-1;j>=0;j--) if (arr[j] > arr[i]){ pge = arr[j]; break; }
        if (i) printf(", ");
        printf("%d", pge);
    }
    printf("\n");

    return 0;
}
