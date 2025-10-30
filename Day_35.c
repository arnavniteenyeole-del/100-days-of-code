// Day 35

#include <stdio.h>
#include <math.h>

int main() {
    // Q69: Second largest element in array.
    printf("\n-- Q69 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[100]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int mx = INT_MIN, second = INT_MIN;
    for (int i=0;i<n;i++){ if (arr[i]>mx){ second=mx; mx=arr[i]; } else if (arr[i]>second && arr[i]!=mx) second=arr[i]; }
    if (second==INT_MIN) printf("No second largest\n"); else printf("Second largest = %d\n", second);

    // Q70: Rotate array to the right by k positions.
    printf("\n-- Q70 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[200]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int k; printf("Enter k: "); scanf("%d", &k);
    k = k % n;
    // rotate right by k
    for (int i=0;i<k;i++){
        int last = arr[n-1];
        for (int j=n-1;j>0;j--) arr[j]=arr[j-1];
        arr[0]=last;
    }
    printf("Rotated array: "); for (int i=0;i<n;i++) printf("%d ", arr[i]); printf("\n");

    return 0;
}
