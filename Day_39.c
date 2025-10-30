// Day 39

#include <stdio.h>
#include <math.h>

int main() {
    // Q77: Check if diagonal elements are distinct.
    printf("\n-- Q77 --\n");
    int n; printf("Enter size of square matrix: "); scanf("%d", &n);
    int mat[50][50]; for (int i=0;i<n;i++) for (int j=0;j<n;j++) scanf("%d", &mat[i][j]);
    int seen[10000]={0}; int distinct=1;
    for (int i=0;i<n;i++){ int val = mat[i][i]; if (seen[val]) { distinct=0; break; } seen[val]=1; }
    printf(distinct?"Distinct\n":"Not distinct\n");

    // Q78: Sum of main diagonal elements.
    printf("\n-- Q78 --\n");
    int n; printf("Enter size of square matrix: "); scanf("%d", &n);
    int mat[50][50]; long sum=0;
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) scanf("%d", &mat[i][j]);
    for (int i=0;i<n;i++) sum += mat[i][i];
    printf("Sum of main diagonal = %ld\n", sum);

    return 0;
}
