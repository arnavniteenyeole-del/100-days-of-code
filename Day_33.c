// Day 33

#include <stdio.h>
#include <math.h>

int main() {
    // Q65: Binary search in sorted array.
    printf("\n-- Q65 --\n");
    int n; printf("Enter number of elements: "); scanf("%d", &n);
    int arr[100]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int key; printf("Enter key to search: "); scanf("%d", &key);
    int l=0, r=n-1, found=-1;
    while (l<=r){ int mid=(l+r)/2; if (arr[mid]==key){ found=mid; break; } else if (arr[mid]<key) l=mid+1; else r=mid-1; }
    if (found==-1) printf("Not found\n"); else printf("Found at index %d\n", found);

    // Q66: Insert element in sorted array at appropriate position.
    printf("\n-- Q66 --\n");
    int n; printf("Enter number of elements in sorted array: "); scanf("%d", &n);
    int arr[200]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int x; printf("Enter element to insert: "); scanf("%d", &x);
    int i = n-1; while (i>=0 && arr[i]>x){ arr[i+1]=arr[i]; i--; }
    arr[i+1]=x; n++;
    printf("Array after insertion: "); for (int j=0;j<n;j++) printf("%d ", arr[j]); printf("\n");

    return 0;
}
