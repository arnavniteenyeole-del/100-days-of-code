// Day 31

#include <stdio.h>
#include <math.h>

int main() {
    // Q61: Linear search in array.
    printf("\n-- Q61 --\n");
    int n; printf("Enter number of elements: "); scanf("%d", &n);
    int arr[100]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int key; printf("Enter element to search: "); scanf("%d", &key);
    int idx=-1; for (int i=0;i<n;i++) if (arr[i]==key){ idx=i; break; }
    if (idx==-1) printf("Not found\n"); else printf("Found at index %d\n", idx);

    // Q62: Reverse array in-place.
    printf("\n-- Q62 --\n");
    int n; printf("Enter number of elements: "); scanf("%d", &n);
    int arr[100]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    for (int i=0;i<n/2;i++){ int t=arr[i]; arr[i]=arr[n-1-i]; arr[n-1-i]=t; }
    printf("Reversed: "); for (int i=0;i<n;i++) printf("%d ", arr[i]); printf("\n");

    return 0;
}
