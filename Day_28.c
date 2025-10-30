// Day 28

#include <stdio.h>
#include <math.h>

int main() {
    // Q55: Print all prime numbers from 1 to n.
    printf("\n-- Q55 --\n");
    int n; printf("Enter n: "); scanf("%d", &n);
    for (int i=2;i<=n;i++){
        int isprime=1;
        for (int j=2;j<=sqrt(i);j++) if (i%j==0){ isprime=0; break; }
        if (isprime) printf("%d ", i);
    }
    printf("\n");

    // Q56: Read and print elements of 1D array.
    printf("\n-- Q56 --\n");
    int n; printf("Enter number of elements: "); scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    printf("Elements: ");
    for (int i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
