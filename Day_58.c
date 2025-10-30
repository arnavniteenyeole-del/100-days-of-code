// Day 58

#include <stdio.h>
#include <math.h>

int main() {
    // Q108: Product of array except self (without division) O(n)
    printf("\n-- Q108 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int nums[200]; for (int i=0;i<n;i++) scanf("%d", &nums[i]);
    long long prefix[200]; long long suffix[200];
    prefix[0]=1; for (int i=1;i<n;i++) prefix[i]=prefix[i-1]*nums[i-1];
    suffix[n-1]=1; for (int i=n-2;i>=0;i--) suffix[i]=suffix[i+1]*nums[i+1];
    for (int i=0;i<n;i++) { if (i) printf(" "); printf("%lld", prefix[i]*suffix[i]); } printf("\n");

    return 0;
}
