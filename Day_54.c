// Day 54

#include <stdio.h>
#include <math.h>

int main() {
    // Q104: Pivot integer x such that sum 1..x == sum x..n
    printf("\n-- Q104 --\n");
    long n; printf("Enter n: "); scanf("%ld", &n);
    long total = n*(n+1)/2;
    int found = -1;
    for (long x=1;x<=n;x++){
        long left = x*(x+1)/2;
        long right = total - (x-1)*x/2;
        if (left == right){ found = x; break; }
    }
    if (found==-1) printf("-1\n"); else printf("%d\n", found);

    return 0;
}
