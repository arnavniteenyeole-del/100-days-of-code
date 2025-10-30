// Day 29

#include <stdio.h>
#include <math.h>

int main() {
    // Q57: Sum of array elements.
    printf("\n-- Q57 --\n");
    int n; printf("Enter number of elements: "); scanf("%d", &n);
    int arr[100]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    long sum=0; for (int i=0;i<n;i++) sum += arr[i];
    printf("Sum = %ld\n", sum);

    // Q58: Find max and min in array.
    printf("\n-- Q58 --\n");
    int n; printf("Enter number of elements: "); scanf("%d", &n);
    int arr[100]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int mx=arr[0], mn=arr[0];
    for (int i=1;i<n;i++){ if (arr[i]>mx) mx=arr[i]; if (arr[i]<mn) mn=arr[i]; }
    printf("Max = %d, Min = %d\n", mx, mn);

    return 0;
}
