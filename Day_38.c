// Day 38

#include <stdio.h>
#include <math.h>

int main() {
    // Q75: Add two matrices.
    printf("\n-- Q75 --\n");
    int r,c; printf("Enter rows and cols: "); scanf("%d %d", &r, &c);
    int a[50][50], b[50][50];
    printf("Enter first matrix:\n"); for (int i=0;i<r;i++) for (int j=0;j<c;j++) scanf("%d", &a[i][j]);
    printf("Enter second matrix:\n"); for (int i=0;i<r;i++) for (int j=0;j<c;j++) scanf("%d", &b[i][j]);
    printf("Sum matrix:\n"); for (int i=0;i<r;i++){ for (int j=0;j<c;j++) printf("%d ", a[i][j]+b[i][j]); printf("\n"); }

    // Q76: Check if matrix is symmetric (square)
    printf("\n-- Q76 --\n");
    int n; printf("Enter size of square matrix: "); scanf("%d", &n);
    int mat[50][50]; for (int i=0;i<n;i++) for (int j=0;j<n;j++) scanf("%d", &mat[i][j]);
    int sym=1;
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) if (mat[i][j] != mat[j][i]) sym=0;
    printf(sym?"Symmetric\n":"Not symmetric\n");

    return 0;
}
