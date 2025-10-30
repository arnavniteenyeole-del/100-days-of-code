// Day 40

#include <stdio.h>
#include <math.h>

int main() {
    // Q79: Diagonal traversal of matrix (print main and anti-diagonals)
    printf("\n-- Q79 --\n");
    int r,c; printf("Enter rows and cols: "); scanf("%d %d", &r, &c);
    int mat[50][50];
    for (int i=0;i<r;i++) for (int j=0;j<c;j++) scanf("%d", &mat[i][j]);
    printf("Main diagonal: "); for (int i=0;i<r && i<c;i++) printf("%d ", mat[i][i]); printf("\n");
    printf("Anti diagonal: "); for (int i=0;i<r && i<c;i++) printf("%d ", mat[i][c-1-i]); printf("\n");

    // Q80: Multiply two matrices.
    printf("\n-- Q80 --\n");
    int r1,c1,r2,c2; printf("Enter r1 c1 r2 c2: "); scanf("%d %d %d %d", &r1,&c1,&r2,&c2);
    if (c1!=r2){ printf("Cannot multiply: incompatible dims\n"); }
    else {
        int a[50][50], b[50][50], c[50][50];
        for (int i=0;i<r1;i++) for (int j=0;j<c1;j++) scanf("%d", &a[i][j]);
        for (int i=0;i<r2;i++) for (int j=0;j<c2;j++) scanf("%d", &b[i][j]);
        for (int i=0;i<r1;i++) for (int j=0;j<c2;j++){ c[i][j]=0; for (int k=0;k<c1;k++) c[i][j]+=a[i][k]*b[k][j]; }
        printf("Product matrix:\n"); for (int i=0;i<r1;i++){ for (int j=0;j<c2;j++) printf("%d ", c[i][j]); printf("\n"); }
    }

    return 0;
}
