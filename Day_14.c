// Day 14

#include <stdio.h>
#include <math.h>

int main() {
    // Q27: Sum of first n odd numbers.
    printf("\n-- Q27 --\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum=0;
    for (int i=0;i<n;i++) sum += 2*i + 1;
    printf("Sum = %d\n", sum);

    // Q28: Product of even numbers from 1 to n.
    printf("\n-- Q28 --\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    long long prod=1;
    int found=0;
    for (int i=2;i<=n;i+=2){ prod*=i; found=1; }
    if (!found) printf("No even numbers in range\n");
    else printf("Product of evens = %lld\n", prod);

    return 0;
}
