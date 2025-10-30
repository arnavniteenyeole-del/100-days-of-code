// Day 69

#include <stdio.h>
#include <math.h>

int main() {
    // Q119: Find the repeated element (one element repeated) in single pass using XOR trick not applicable; using boolean array
    printf("\n-- Q119 --\n");
    int n; printf("Enter size: "); scanf("%d", &n);
    int arr[500]; for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    int seen[100000]={0}; int rep=-1;
    for (int i=0;i<n;i++){ if (seen[arr[i]]){ rep=arr[i]; break; } seen[arr[i]]=1; }
    if (rep==-1) printf("No repeated found\n"); else printf("Repeated element = %d\n", rep);

    return 0;
}
