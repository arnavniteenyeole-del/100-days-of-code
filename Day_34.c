// Day 34

#include <stdio.h>
#include <math.h>

int main() {
    // Q67: Insert element at given position.
    printf("\n-- Q67 --\n");
    int n; printf("Enter size of array: "); scanf("%d", &n);
    int arr[200]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int pos, val; printf("Enter position (0-based) and value: "); scanf("%d %d", &pos, &val);
    if (pos<0 || pos>n) printf("Invalid position\n");
    else { for (int i=n;i>pos;i--) arr[i]=arr[i-1]; arr[pos]=val; n++; printf("Array: "); for (int i=0;i<n;i++) printf("%d ", arr[i]); printf("\n"); }

    // Q68: Delete element from array.
    printf("\n-- Q68 --\n");
    int n; printf("Enter size of array: "); scanf("%d", &n);
    int arr[100]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int pos; printf("Enter position to delete (0-based): "); scanf("%d", &pos);
    if (pos<0 || pos>=n) printf("Invalid pos\n");
    else { for (int i=pos;i<n-1;i++) arr[i]=arr[i+1]; n--; printf("Array after deletion: "); for (int i=0;i<n;i++) printf("%d ", arr[i]); printf("\n"); }

    return 0;
}
